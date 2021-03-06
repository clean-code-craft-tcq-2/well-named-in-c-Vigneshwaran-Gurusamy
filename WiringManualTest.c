#include "WiringManual.h"
    
/*Check the Major and Minor color matches the PairNumber*/
void testNumberToPair(int PairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor)
{
    char colorNames[ColorName_Chars];
    ColorPair color = GetColorFromPairNumber(PairNumber);
    GetStringFromColorPair(&color, colorNames);
    printf("Colors are -> %s for the PairNumber %d\n", colorNames, PairNumber);
    assert(color.majorColor == expectedMajor);
    assert(color.minorColor == expectedMinor);
}

/*Check the PairNumber matches the Major and Minor color*/
void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber)
{
    char colorNames[ColorName_Chars];
    ColorPair color;
    color.majorColor = major;
    color.minorColor = minor;
    GetStringFromColorPair(&color, colorNames);
    int PairNumber = GetPairNumberFromColor(&color);
    printf("PairNumber is %d for the Colors -> %s\n", PairNumber,colorNames);
    assert(PairNumber == expectedPairNumber);
}
