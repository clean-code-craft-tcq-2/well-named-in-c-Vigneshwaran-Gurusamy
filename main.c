#include "WiringManual.h"

void PrintWiringManual(void){
    unsigned int MajorColor_index = 0, MinorColor_index = 0;
    unsigned int colorCode = 1;
    
    for(MajorColor_index = 0; MajorColor_index < MAXPOSSIBLECOLORS; MajorColor_index++)
    {
        for(MinorColor_index = 0; MinorColor_index < MAXPOSSIBLECOLORS; MinorColor_index++)
        {
             printf("\n*********************");
             printf("\n Major Color : %s  ", MajorColorNames[MajorColor_index]);
             printf("\n Minor Color : %s  ", MinorColorNames[MinorColor_index]);
             printf("\n Color Code  : %d  ", colorCode);
             printf("\n*********************");
             colorCode++;
        }
    }
}
