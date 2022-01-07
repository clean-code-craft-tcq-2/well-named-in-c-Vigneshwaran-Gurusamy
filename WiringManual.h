#include <stdio.h>
#include <assert.h>

/*Declaration of Variables and Functions*/
const int MAX_COLORPAIR_NAME_CHARS;

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

void testNumberToPair(
    int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor);
void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber);
    
int GetPairNumberFromColor(const ColorPair* colorPair);
ColorPair GetColorFromPairNumber(int pairNumber);
void ColorPairToString(const ColorPair* colorPair, char* buffer);
