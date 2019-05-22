//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
#include "WindowCalls.h"

using std::vector;
using Slots::Slot;
using Slots::SlotForm;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "Main.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        ChangeVersion("1.7.10");
        for(int i = 0; i < 3; i++){
            AddNewButton("Slot " + IntToString(i+1), setBtns, this, new Rectx::Rectangle(0+70*i,30,70,25), i+1);
        }
        for(int i = 0; i < 3; i++){
            AddNewButton("Slot " + IntToString(i+4), setBtns, this, new Rectx::Rectangle(0+70*i,60,70,25), i+4);
        }
        for(int i = 0; i < 3; i++){
            AddNewButton("Slot " + IntToString(i+7), setBtns, this, new Rectx::Rectangle(0+70*i,90,70,25), i+7);
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ShowSlotMenu(TObject* Sender){
    if(TButton* s = dynamic_cast<TButton*>(Sender)){
        SlotForm *nsf = new Slots::SlotForm(this,s->Tag, this->slots);
        nsf->ShowModal();
    }
}
void __fastcall TForm1::AddNewButton(AnsiString s, vector<TButton*> &list, TWinControl* owner, Rectx::Rectangle* r, int Tag){
    list.push_back(new TButton(owner));
    int last = list.size()-1;
    list[last]->Parent = owner;
    list[last]->Visible = true;
    list[last]->Caption = s;
    list[last]->Left = r->X();
    list[last]->Top = r->Y();
    list[last]->Width = r->Width();
    list[last]->Height = r->Height();
    list[last]->Tag = Tag;
    list[last]->OnClick = ShowSlotMenu;
}
AnsiString TForm1::IntToString(int i){
        char ch[20];
        std::sprintf(ch, "%d", i);
        AnsiString s(ch);
        return s;
}
void __fastcall TForm1::PublicClick(TObject *Sender)
{
    if(Sender == Other1){
        ChangeVersion(
            Prompt("Version", "Type your minecraft version.\nIt should not have \"Minecraft\" in it. Just version", version)
        );
    }
    else if(Sender == N181){ ChangeVersion("1.8"); N181->Checked = true; N17101->Checked = false; }
    else if(Sender == N17101){ ChangeVersion("1.7.10"); N17101->Checked = true; N181->Checked = false; }
}
//---------------------------------------------------------------------------
AnsiString __fastcall TForm1::Prompt(AnsiString wincap, AnsiString text, AnsiString pholder){
    AnsiString answ = pholder;
    if(InputQuery(wincap, text, answ) == True) return answ;
    return pholder;
}
void __fastcall TForm1::ChangeVersion(AnsiString ver){
    version = ver;
    Caption = "Minecraft " + version + " cobble digger";
}
