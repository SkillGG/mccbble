//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <stdio.h>
#include "Rectangle.h"
#include "SlotForm.h"
#include <vector>

using Slots::Slot;
using Slots::SlotForm;

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
private:
        std::vector<TButton*> setBtns;
        std::vector<Slot*> *slots;
__published: 	// IDE-managed Components
        TButton *Button1;
        TButton *Button2;
        TMainMenu *MainMenu1;
        TMenuItem *Options1;
        TMenuItem *Version1;
        TMenuItem *N17101;
        TMenuItem *N181;
        TMenuItem *Other1;
        void __fastcall PublicClick(TObject *Sender);
private:	// User declarations
void __fastcall ShowSlotMenu(TObject* Sender);
AnsiString IntToString(int i);
void __fastcall AddNewButton(AnsiString s, std::vector<TButton*> &list, TWinControl* owner, Rectx::Rectangle* r, int Tag);
void __fastcall ChangeVersion(AnsiString ver);
AnsiString version; // Game version. Game window will be search by such if other options will be unsuccessful

public:		// User declarations
        AnsiString __fastcall Prompt(AnsiString wincap, AnsiString text, AnsiString pholder);
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
