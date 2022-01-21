#include "WiringManual.h"

/*Check the Wiring PairNumber and Wiring colors*/
void main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    PrintWiringManual();
}

/*PrintWiringManual*/
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
