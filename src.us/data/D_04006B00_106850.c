#include <ultra64.h>

Vtx D_04006AC0_106810[4] = {
#include "data/inc/D_04006AC0_106810.inc.c"
};

extern Gfx D_010037F0_3D0C0[];

Gfx D_04006B00_106850[] = {
    gsSPDisplayList(D_010037F0_3D0C0),
    gsSPVertex(D_04006AC0_106810, 4, 0),
    gsSP2Triangles(0, 2, 1, 0, 0, 3, 2, 0),
    gsSPEndDisplayList(),
};
