//---------------------------------------------------------------------------


#pragma hdrstop

#include "SlotForm.h"

using namespace Slots;

//---------------------------------------------------------------------------

#pragma package(smart_init)
#pragma resource "SlotForm.dfm"

__fastcall SlotForm::SlotForm(TComponent* Owner,int s, std::vector<Slot*> *slots) : TForm(Owner){
        Parent = (TWinControl*)Owner;
}

__fastcall Slot::Slot(PICK pick, int durleft){
        this->pefx[0]=0;this->pefx[1]=0;
        this->pefx[2]=0;this->pefx[3]=0;
}

