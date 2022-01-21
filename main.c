#include "WiringManual.h"

/*Test the Wiring PairNumber and Wiring colors*/
int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    PrintWiringManual(); /*Print Wiring Manual*/
   
    return 0;
}

/*Print WiringManual*/
void PrintWiringManual(void){
    int PairNumber = 1;
    ColorPair color;
    
    for(PairNumber = 1; PairNumber <= MAXPAIR; PairNumber++)
    {
        color = GetColorFromPairNumber(PairNumber);
         printf("\n*********************");
         printf("\n Major Color : %s  ", MajorColorNames[color.majorColor]);
         printf("\n Minor Color : %s  ", MinorColorNames[color.minorColor]);
         printf("\n Color Code  : %d  ", PairNumber);
         printf("\n*********************");
    }
}
