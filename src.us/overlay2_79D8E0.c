#include <ultra64.h>
#include "common.h"


#ifdef NON_MATCHING // JUSTREG
void func_8038C230_79D8E0(s16 arg0, s16 arg1, s16 arg2, s16 arg3, f32 arg4) {
    s16 phi_v1;

    if (D_803D5530->unk162 == 5) {
        if (D_803F2D10.unk0 == 0) {
            if (D_803D5538 != 0) {
                phi_v1 = (D_801E9EB2 + (D_803D554B >> 2)) << (arg2 + 2);
            } else {
                phi_v1 = (D_803D552C->unk368 >> 2) << (arg2 + 2);
            }
            D_803D552C->unk35C = D_803D552C->unk35C + (phi_v1 + (((D_80152C78[(u8)(D_803D5540 << arg3)] >> 7) * (4 - D_801E9EB2)) >> (8 - arg1)));
            D_803D552C->unk35C = D_803D552C->unk35C - (D_803D552C->unk35A >> 4);
            D_803D552C->unk35C = ((D_803D552C->unk35C * 0xF) >> 4);
            if (phi_v1) {}; // regalloc help
            D_803D552C->unk35A = D_803D552C->unk35A + D_803D552C->unk35C;
        }

        func_80128078(&D_80204278->modelViewMtx[D_80204278->usedModelViewMtxs], arg0, (D_803D552C->unk35A * arg4) / 24.0);
        gSPMatrix(D_801D9E88++, OS_K0_TO_PHYSICAL(&D_80204278->modelViewMtx[D_80204278->usedModelViewMtxs]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
        D_80204278->usedModelViewMtxs += 1;
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_79D8E0/func_8038C230_79D8E0.s")
#endif

// same issue as above really..
#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_79D8E0/func_8038C484_79DB34.s")
// void func_8038C484_79DB34(s16 arg0, s16 arg1, s16 arg2, f32 arg3, s16 arg4) {
//
//     if ((D_803D5530->unk162 == 1) || (D_803D5530->unk162 == 6)) {
//         if ((D_803D552C->unk366 == 1) || (D_803D552C->unk366 == 3) || (D_803D552C->unk366 == 4)) {
//             if (D_803F2D10.unk0 == 0) {
//                 s16 phi_v1;
//                 s16 idx;
//                 if (D_803D552C->unk35A < -2500) {
//                     D_803D552C->unk35A = ((D_803D552C->unk35A + 2500) >> 2) - 2500;
//                 }
//                 if (D_803D552C->unk35A > 2500) {
//                     D_803D552C->unk35A = ((D_803D552C->unk35A - 2500) >> 2) + 2500;
//                 }
//                 if (D_803D5538 != 0) {
//                     phi_v1 = (D_801E9EB2 + (D_803D554B >> 2)) << (arg1 + 2);
//                 } else {
//                     phi_v1 = (D_803D552C->unk368 >> 2) << (arg1 + 2);
//                 }
//                 if (phi_v1) {}; // regalloc help
//                 D_803D552C->unk35C = (D_803D552C->unk35C + (phi_v1 + (((D_80152C78[(D_803D5540 << arg2) & 0xFF] >> 7) * (4 - D_801E9EB2)) >> (8 - arg0))));
//                 D_803D552C->unk35C = (D_803D552C->unk35C - (D_803D552C->unk35A >> 4));
//                 D_803D552C->unk35C = (D_803D552C->unk35C * 0xF) >> 4;
//                 D_803D552C->unk35A += D_803D552C->unk35C;
//             }
//             func_80128078(&D_80204278->modelViewMtx[D_80204278->usedModelViewMtxs], 0, (D_803D552C->unk35A * arg3) / 24.0);
//             gSPMatrix(D_801D9E88++, OS_K0_TO_PHYSICAL(&D_80204278->modelViewMtx[D_80204278->usedModelViewMtxs]), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
//             D_80204278->usedModelViewMtxs += 1;
//         }
//     } else if ((D_803D5530->unk162 != 4) && (D_803D5530->unk162 != 5) && (D_803D5530->unk162 != 7)) {
//         D_803D552C->unk35A = arg4;
//     }
// }
