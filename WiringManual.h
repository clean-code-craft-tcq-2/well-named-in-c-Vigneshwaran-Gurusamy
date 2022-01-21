#ifndef WIRINGMANUAL_H
#define WIRINGMANUAL_H

#include <stdio.h>
#include <assert.h>

#define MAXPOSSIBLECOLORS (5u)

/*Declaration of Variables and Functions*/
const int ColorName_Chars;

/*Declarationof colors*/
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const char* MajorColorNames[5];
const char* MinorColorNames[5];

int numberOfMajorColors;
int numberOfMinorColors;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

/*Declaration of functions*/
void testNumberToPair( int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber( enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
ColorPair GetColorFromPairNumber(int pairNumber);
void GetStringFromColorPair(const ColorPair* colorPair, char* buffer);

#endif
