#include "WiringManual.h"

/*Definition of Variables and Functions*/
const int ColorName_Chars = 10;
/*Major Colors*/
const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
/*Minor Colors*/
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};
/*Total MajorColors and MinorColors*/
int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

/*Get the ColorNames as string*/
void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s and %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

/*Get the Major, Minor Colors from pairnumber*/
ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

/*Get the pairnumber from Colors*/
int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}
