#pragma once
#include <types.h>
#include <vector.h>
#include <memory.h>
#include <GX/GX.h>

//each of these colors a portion of the text, not sure which yet
//not sure if the fifth is nescassary
struct CharWriterTextColor {
    GXColor color1;
    GXColor color2;
    GXColor color3;
    GXColor color4;
    GXColor color5;
}__attribute__((packed, aligned(4)));

//FontData may not be the real name, and may not be used completly correctly
struct FontData {

};


typedef u16 UTF16;

typedef f32	Mtx[3][4];

struct Message {
    //run each frame before printing
    void setup();
    Message() {
        _colorMap = 0;
        _mightAlsoBeColor = 0xFFFFFFFF;
        _mightAlsoBeColor2 = 0xFFFFFFFF;
        fontScaleX = 1;
        fontScaleY = 1;
        int _thingEqualToOne1 = 1;
        int _thingEqualToOne2 = 1;
        enableFixedWidth = 0;
        fixedWidth = -1;
        _flagThing = true;
        scale = 1;
        _fontWidthThing = 1;
        _edge = 0;
        _fontThing = 1;
        screenStartX = 0;
        screenStartY = 0;
        screenEndX = 640;
        screenEndY = 480;
        _lineSpace = 0;
        _drawFlag = 0;
    }
    static void std2DView();

    //null terminated
    void printString(const char* characters);
    //null terminated
    void printStringUTF(const UTF16* characters);
    float printChar(const UTF16 character);
    void printGlyph(double xpos, double ypos, double zpos, FontData * TextureIndex);
    void setObjZCompare(int unk1, bool active);
    void allocMsgBuffer(int bufferSize, int unk1, HeapType heaptype);




    //0
    //seems to be a boolean flag for GX color mapping
    //takes up 4 bytes, should be set to 0 unless we find out what it means
    int _colorMap;


    //0x4
    //seems to always be 0xFFFFFFFF
    //possibly used with GX color mapping
    u32 _mightAlsoBeColor;

    //0x8
    CharWriterTextColor textColor;

    //0x1C
    //seems to always be 0xFFFFFFFF
    u32 _mightAlsoBeColor2;

    char _spacer[0x24 - 0x1C - 4];

    //use these to change font size
    //0x24
    float fontScaleX;

    //0x28
    float fontScaleY;

    //0x2c
    float xPos;

    //0x30
    float yPos;

    //0x34
    float zPos;

    //0x38
    //don't know what this is, but notes say to set it to 1 and leave it
    int _thingEqualToOne1;

    //0x3C
    //don't know what this is, but notes say to set it to 1 and leave it
    int _thingEqualToOne2;

//    // 0x40
//    u16 unknown_a = 0xCCCC;
//
//    // 0x42
//    u8 unknown_b = 0xFF;

    char _spacer2[0x43 - 0x3C - 4];

    // 0x43
    // appears to be a flag that tells if the message has fixed width
    // or not, and if so, uses the fixedWidth defined at 0x44
    char enableFixedWidth;

    //0x44
    f32 fixedWidth;

    //0x48
    FontData* font;

    //0x4C
    //might be to get it to actually print or something
    //always seems to be 1, and notes have it set to 1
    bool _flagThing;

    char _spacer3[0x50 - 0x4C - 1];

    //0x50
    //also changes scale of positions
    float scale;

    char _spacer4[0x58 - 0x50 - 4];

    //0x58
    //always seems to be some value close or equal to 1
    //seems to affect text width
    float _fontWidthThing;

    //0x5C
    //Set by SetEdge[ms10Char]
    float _edge;

    //0x60
    //Set by SetEdge, each byte set individually
    char _edgeBytes[4];
//    unsigned char _edgeBytes[4] = {0, 0, 0, 0xFF};


    char _spacer5[0x68 - 0x60 - 4];


    //0x68
    //something to do with font
    //set to 1 in SetFont, but could be set to other values based on rtoc stuff
    float _fontThing;

    char _spacer6[0x74 - 0x68 - 4];


    //0x74
    //values are in pixels
    //default is 0, 0, 640, 480
    //not sure if used to position message on screen or to clip message or what
    //seems to be relative to parent or something
    float screenStartX;
    float screenStartY;
    float screenEndX;
    float screenEndY;


    char _spacer7[0x8C - 0x74 - 4 * 4];


    //0x8C
    //not sure if this is the space between lines for newline or something else
    float _lineSpace;

    char _spacer8[0x94 - 0x8C - 4];


    //0x94
    //might be a bool, but is 4 bytes
    //Seems to affect GX color mapping
    //Set to 0 by default using setDrawFlag[Message]
    int _drawFlag;

    char _spacer9[0x1B8 - 0x94 - 4];


    //0x1B8
    //set to 0.5 in setDefaultEnv
    float _unknown1;

    //0x1BC
    //set to 0.95 in setDefaultEnv
    float _unknown2;

    char _spacer11[0x1C4 - 0x1BC - 4];

    //0x1C4
    //seems to be something set from a value from the messageBuffer
    bool _messageByte;

    char _spacer12[0x1D0 - 0x1C4 - 1];

    //0x1D0
    //seems to point to message buffer object
    //Has more stuff in it than just message, but not needed if manually printing characters, so leaving it void*
    void* _messageBuffer;

    char _spacer10[0x200 - 0x1D0 - 4];

}__attribute__((packed, aligned(4)));

//not 100% sure what the flags do, but color flag should be 0, and font flag should be 9

void setDefaultEnv(Message* message, int _textColorFlagThing, int _fontFlagThing);
float Print(Message* message, const UTF16 character);
void setObjZcompare(Message* message, int comparetype, bool active);
void setMessageLocation(Message msg, double x1, double x2, double y1, double y2);
void setFace(Message msg, int face);
void setFixedWidth(Message msg, double width);
void setColor(Message msg, int color);
void setCursorX(Message msg, double cursorX);
void setCursorY(Message msg, double cursorY);
void setCursorZ(Message msg, double cursorZ);
void setScale(Message msg, double xScale, double yScale);
void printf(Message msg, char* text, ...);
void static_std2DView();
void printMsgBuf(Message msg, int unknown);
void clearMsgBuff(Message msg);

void std2DView();
void PrintGlyph(double xpos, double ypos, double zpos, Message* self, FontData * TextureIndex);

//These seem to be pointers to some currently loaded fonts
//These must be cleared and restored durign setup, or can crash
//crashes occur in between certain loads, like when a game ends
extern void* _FONT_THING1;
extern void* _FONT_THING2;

extern double _FONT_SCALE_THING;
extern double _FONT_SCALE_THING2;

//pretty sure this is melee font, which is always loaded
extern FontData MELEE_FONT;

// not sure what these fonts are but they were defined
// and used in the same area as MELEE_FONT in ghidra
extern FontData UNK_FONT;
extern FontData UNK_FONT2;
extern FontData UNK_FONT3;

void GXLoadPosMtxImm(const Mtx* matrix, u32 id);

