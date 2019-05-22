//---------------------------------------------------------------------------

#ifndef SlotFormH
#define SlotFormH

#include <vcl.h>
#include "Rectangle.h"
#include <stdio.h>
#include <vector>

namespace Slots{
        enum PICK{
                WOOD,
                STONE,
                IRON,
                GOLD,
                DIAMOND
        };
        class Slot{
                private:
                        PICK pick;
                        int durleft;
                        unsigned char effects;
                        int pefx[4];
                public:
                        __fastcall Slot(PICK pick, int durleft);
        };
        class SlotForm : public TForm{
                public:
                        __fastcall SlotForm(TComponent* Owner,int s, std::vector<Slot*> *slots);
        };
}

//---------------------------------------------------------------------------
#endif         
