#include <ultra64.h>

#include "common.h"


#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_6A6500/func_80294E50_6A6500.s")
// void func_80294E50_6A6500(void) {
//     void *spAC;
//     s32 sp38;
//     s16 temp_a0;
//     s16 temp_a0_5;
//     s16 temp_a3;
//     s16 temp_ret;
//     s16 temp_ret_2;
//     s16 temp_t8_2;
//     s16 temp_t9;
//     s16 temp_v0_11;
//     s16 temp_v0_12;
//     s16 temp_v0_13;
//     s16 temp_v0_14;
//     s16 temp_v0_15;
//     s32 temp_a0_3;
//     s32 temp_v0_3;
//     s32 temp_v0_5;
//     u16 temp_v0_4;
//     u8 temp_t6;
//     u8 temp_t8;
//     u8 temp_v0;
//     u8 temp_v0_10;
//     u8 temp_v0_2;
//     u8 temp_v1;
//     void *temp_a0_2;
//     void *temp_a0_4;
//     void *temp_t1;
//     void *temp_v0_6;
//     void *temp_v0_7;
//     void *temp_v0_8;
//     void *temp_v0_9;
//     void *temp_v1_10;
//     void *temp_v1_11;
//     void *temp_v1_12;
//     void *temp_v1_13;
//     void *temp_v1_14;
//     void *temp_v1_15;
//     void *temp_v1_16;
//     void *temp_v1_17;
//     void *temp_v1_18;
//     void *temp_v1_19;
//     void *temp_v1_20;
//     void *temp_v1_21;
//     void *temp_v1_22;
//     void *temp_v1_23;
//     void *temp_v1_24;
//     void *temp_v1_25;
//     void *temp_v1_26;
//     void *temp_v1_27;
//     void *temp_v1_28;
//     void *temp_v1_29;
//     void *temp_v1_2;
//     void *temp_v1_30;
//     void *temp_v1_31;
//     void *temp_v1_32;
//     void *temp_v1_3;
//     void *temp_v1_4;
//     void *temp_v1_5;
//     void *temp_v1_6;
//     void *temp_v1_7;
//     void *temp_v1_8;
//     void *temp_v1_9;
//     u8 phi_v0;
//     s32 phi_v0_2;
//     s16 phi_t0;
//     s16 phi_a0;
//     void *phi_a1;
//     s16 phi_v0_3;
//     s16 phi_v0_4;
//     void *phi_a1_2;
//     void *phi_a1_3;
//     s16 phi_return;
//
//     D_80204278->unk38918 = 0;
//     D_80204278->unk39310 = (u16)0;
//     D_80204278->unk38914 = 0;
//     D_8028645A = (u16)0;
//     func_8029F3CC_6B0A7C();
//     temp_v1 = D_803C0422;
//     D_803C0648 = 0;
//     D_803C064C = 0x112038;
//     if (temp_v1 != 0) {
//         D_803C0422 = (s8) (temp_v1 + 1);
//         temp_v0 = D_803C0422;
//         phi_v0 = temp_v0;
//         if (temp_v0 == 2) {
//             func_8012AD30(&D_801D9E7C, 0, 0, 8, 0xF0, 0, 0, 0, 0xFF);
//             temp_a3 = gScreenWidth;
//             func_8012AD30(&D_801D9E7C, (s16) (temp_a3 - 8), 0, temp_a3, 0xF0, 0, 0, 0, 0xFF);
//             func_8012AD30(&D_801D9E7C, 0, 0, gScreenWidth, 8, 0, 0, 0, 0xFF);
//             func_8012AD30(&D_801D9E7C, 0, (s16) (gScreenHeight - 8), gScreenWidth, 0xF0, 0, 0, 0, 0xFF);
//             phi_v0 = D_803C0422;
//         }
//         if (phi_v0 == 3) {
//             func_80137840();
//             func_8012A400();
//             func_803925D0_7A3C80(D_8020428C->unk3BBE8, &D_800C5A40);
//             D_803F6680.unk0 = (u16)1;
//             D_803F6714 = (u16)0;
//             D_803C0422 = (u8)0;
//             D_803F6680.unk26 = (u8)0;
//             D_803F6680.unk2D = (u8)0;
//             D_803F6704 = (s16) D_8020540C;
//             func_8012AC40();
//         }
//     }
//     if (D_80152E98 == (u16)1) {
//         func_8038FD74_7A1424();
//         D_80152E98 = (u8)0;
//     }
//     temp_v0_2 = D_803F2AA2;
//     if (temp_v0_2 == 3) {
// block_9:
//         return func_8038E9F8_7A00A8();
//     }
//     if (temp_v0_2 == 4) {
//         goto block_9;
//     }
//     if (((*D_802910D0 & 0x1000) == 0) || ((u16)1 != D_802912DE) || (D_803F6680.unk0 != 0)) {
//         phi_t0 = (u16)1;
//         if (*(void *)0x803F66A6 == 3) {
// block_14:
//             phi_t0 = (u16)1;
//             if (D_803E1BC0 == 0) {
//                 phi_t0 = (u16)1;
//                 if (D_803C0426 == 0) {
//                     phi_t0 = (u16)1;
//                     if ((u16)1 != D_8020540C) {
//                         phi_t0 = (u16)1;
//                         if (D_803C0422 == 0) {
//                             phi_t0 = (u16)1;
//                             if (D_803F2D34 == 0) {
//                                 phi_t0 = (u16)1;
//                                 if (D_803F2E16 == 0) {
//                                     phi_t0 = (u16)1;
//                                     if (D_803F2D38 != 0x23) {
//                                         phi_t0 = (u16)1;
//                                         if ((D_803E4D28 & 0x10) == 0) {
//                                             temp_a0 = D_803C0420;
//                                             if ((temp_a0 == 0) || (phi_t0 = (u16)1, (((s32) temp_a0 < 0xB) == 0))) {
//                                                 func_8013307C(0x7F, 0, 0x5000, 1.0f, 0x40);
//                                                 D_801D9ED4 = (u16)0xA;
//                                                 func_8038F794_7A0E44();
//                                                 phi_t0 = (u16)1;
//                                             }
//                                         }
//                                     }
//                                 }
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     } else {
//         goto block_14;
//     }
//     temp_v0_3 = D_803E4D28;
//     phi_v0_2 = temp_v0_3;
//     if ((temp_v0_3 & 0x40) != 0) {
//         func_80137840();
//         func_8012A400();
//         temp_v0_4 = D_80152EB8;
//         strncpy((&D_80162658 + (temp_v0_4 * 0x3BBF0))->unk3BBE8, (&D_80162658 + ((temp_v0_4 ^ 1) * 0x3BBF0))->unk3BBE8, 0x25800, 0x38000);
//         func_8038F8C8_7A0F78();
//         temp_v0_5 = D_803E4D28 & ~0x40;
//         D_803E4D28 = temp_v0_5;
//         phi_v0_2 = temp_v0_5;
//         phi_t0 = (u16)1;
//     }
//     temp_a0_2 = D_802910D0;
//     if (((phi_v0_2 & 0x80) != 0) && (D_803C0426 == 0) && (D_80204288 == 0xA)) {
//         D_803C0426 = phi_t0;
//         D_803C042A = (u16)0;
//     }
//     if (((*temp_a0_2 & 0x1000) != 0) && (phi_t0 == D_802912DE) && (D_803C0426 == 0) && (D_80204288 == 0xA) && ((D_8023F2A8 & 1) == 0)) {
//         D_803C0426 = phi_t0;
//         D_803C042A = phi_t0;
//     }
//     if (D_803F6680.unk0 != 0) {
//         if (D_803F66AD == 0) {
//             func_80398630_7A9CE0(temp_a0_2);
//             D_803F66AD = (u8)1;
//         }
//         func_8038FF68_7A1618();
//     } else {
//         func_8038F414_7A0AC4(temp_a0_2);
//         D_80204290 = (u16)2;
//         if (D_803F642C == 0) {
//             D_803F2E2A = (s16) D_802053EA;
//         } else {
//             D_803F2E2A = (u16)0x140;
//         }
//         gScreenWidth = (s16) D_803F2E2A;
//         gScreenHeight = (u16)0xF0;
//         func_802F59F0_7070A0();
//         temp_a0_3 = D_802910D0;
//         if (temp_a0_3 != 0) {
//             func_802C8FC0_6DA670(temp_a0_3);
//         }
//         func_802FDA44_70F0F4();
//         func_802FE5E8_70FC98();
//         func_802F30A4_704754();
//         // temp_v1_2 = D_801D9E88;
//         // D_801D9E88 = (void *) (temp_v1_2 + 8);
//         // temp_v1_2->unk0 = 0x6000000;
//         // temp_v1_2->unk4 = 0x1003498;
//         gSPDisplayList(D_801D9E88++, 0x01003498);
//         gSPDisplayList(D_801D9E88++, 0x01004360);
//         gSPDisplayList(D_801D9E88++, 0x01003B70);
//         gSPDisplayList(D_801D9E88++, 0x01003998);
//
//         gSPDisplayList(D_801D9E90++, 0x1003998)
//         gDPSetColorDither(D_801D9E90++, G_CD_NOISE);
//         gDPSetAlphaDither(D_801D9E90++, G_AD_DISABLE);
//
//         func_803041FC_7158AC(&D_801D9E90);
//         func_80129300(&D_801D9E7C, D_80204278);
//         func_80380490_791B40(&D_801D9E7C, D_80204278);
//
//         gSPViewport(D_801D9E7C++, &D_80152EA8);
//
//         func_80129430(&D_801D9E7C);
//
//         gDPSetColorImage(D_801D9E7C++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 320, osVirtualToPhysical(D_80204274->unk3BBE8));
//         gSPDisplayList(D_801D9E7C++, 0x01004270);
//
//         gMoveWd(D_801D9E7C++, G_MW_CLIP, G_MWO_CLIP_RNX, 0x00000003);
//         gMoveWd(D_801D9E7C++, G_MW_CLIP, G_MWO_CLIP_RNY, 0x00000003);
//         gMoveWd(D_801D9E7C++, G_MW_CLIP, G_MWO_CLIP_RPX, 0x0000FFFD);
//         gMoveWd(D_801D9E7C++, G_MW_CLIP, G_MWO_CLIP_RPY, 0x0000FFFD);
//
//         func_8032F950_741000();
//         func_802999E0_6AB090(D_80204278);
//         func_80299AA8_6AB158(D_80204278, &D_801D9E7C);
//         func_8029A624_6ABCD4(&D_801D9E7C);
//         func_802C87E0_6D9E90();
//         if (func_8038CCC0_79E370() != 0) {
//             D_803E4D28 = (s32) (D_803E4D28 | 0x20);
//         } else {
//             D_803E4D28 = (s32) (D_803E4D28 & ~0x20);
//         }
//         if (D_803F671C != 0) {
//             func_8012AD30(&D_801D9E7C, 0, 0, 0x140, 0xF0, 0, 0, 0, 2);
//             func_8012AD30(&D_801D9E7C, 0, 0, 0x140, 0xF0, 0, 0, 0, 2);
//             func_8012AD30(&D_801D9E7C, 0, 0, 0x140, 0xF0, 0, 0, 0, 2);
//             D_803F671C = (s16) (D_803F671C + 1);
//             if ((s32) D_803F671C >= 3) {
//                 D_803F671C = (u16)0;
//             }
//         }
//         temp_v0_9 = ((D_803D5534 * 8) + 0x801E0000)->unk-2274;
//         func_802B3EC0_6C5570(&D_801D9E7C, (s16) ((s32) (D_803F28D0 & 0xC0) >> 6), *(void *)0x803F2C3C, D_803F2C40, (f32) temp_v0_9->unk4, (f32) temp_v0_9->unk8);
//         if ((D_803C0422 == 0) && (D_803E1BC0 == 0) && (D_803F2D38 != 0x24)) {
//             func_80349DCC_75B47C(1);
//         }
//         temp_v1_11 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_11 + 8);
//         temp_v1_11->unk0 = 0x6000000;
//         temp_v1_11->unk4 = (s32) (D_80204278 + 0x267A0);
//         func_8029877C_6A9E2C();
//         D_803F2D68 = (u16)1;
//         temp_t8 = D_803C0430.unk20F + 1;
//         temp_t6 = temp_t8 & 7;
//         D_803C0430.unk20F = temp_t8;
//         D_803C0430.unk20F = temp_t6;
//         if ((temp_t6 & 0xFF) == 0) {
//             func_8029726C_6A891C(&D_803C0740);
//             func_80296C8C_6A833C(&D_803C0740);
//         }
//         func_802B4D20_6C63D0();
//         func_802FA6D8_70BD88();
//         func_80397840_7A8EF0();
//         func_802DA7F0_6EBEA0();
//         func_802D6738_6E7DE8();
//         func_802CB394_6DCA44(D_80204278);
//         temp_t9 = gScreenWidth * 2;
//         D_80152EA8.unk0 = temp_t9;
//         D_80152EA8.unk8 = temp_t9;
//         temp_t8_2 = gScreenHeight * 2;
//         D_80152EA8.unk2 = temp_t8_2;
//         D_80152EA8.unkA = temp_t8_2;
//         func_802DE950_6F0000(&D_80152EA8);
//         func_802C8878_6D9F28();
//         func_802E072C_6F1DDC(0);
//         temp_v1_12 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_12 + 8);
//         temp_v1_12->unk0 = 0x6000000;
//         temp_v1_12->unk4 = (s32) (D_80204278 + 0x9600);
//         D_803C0648 = 0;
//         D_803C064C = 0x110038;
//         func_8029F7D4_6B0E84(D_80204278, &D_801E9EB8, &D_80204278);
//         func_8029A720_6ABDD0();
//         func_8029A624_6ABCD4(&D_801D9E7C);
//         temp_v1_13 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_13 + 8);
//         temp_v1_13->unk0 = 0x6000000;
//         temp_v1_13->unk4 = (s32) (D_80204278 + 0xBB80);
//         temp_a0_4 = D_802910D0;
//         if ((temp_a0_4 != 0) && (D_801D9ED4 == 0) && ((*temp_a0_4 & 0x20) != 0)) {
//             D_801D9ED4 = (u16)0xA;
//         }
//         func_8029A624_6ABCD4(&D_801D9E7C);
//         if ((D_803F2AA2 != 2) || ((s32) D_803F6468 >= 7)) {
//             func_80299B68_6AB218(D_80204278);
//         }
//         func_80297628_6A8CD8(&D_803C0740, D_80204278);
//         temp_v1_14 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_14 + 8);
//         temp_v1_14->unk0 = 0x6000000;
//         temp_v1_14->unk4 = 0x1003A58;
//         temp_v1_15 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_15 + 8);
//         temp_v1_15->unk4 = 0;
//         temp_v1_15->unk0 = 0xBA001001;
//         temp_v1_16 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_16 + 8);
//         temp_v1_16->unk4 = 0x80008000;
//         temp_v1_16->unk0 = 0xBB000001;
//         if ((s32) D_803F2D10 < 2) {
//             func_802D5AD8_6E7188(0, 1);
//         }
//         func_80299E84_6AB534(D_80204278);
//         temp_v1_17 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_17 + 8);
//         temp_v1_17->unk0 = 0x6000000;
//         temp_v1_17->unk4 = (s32) (D_80204278 + 0xDAC0);
//         temp_v1_18 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_18 + 8);
//         temp_v1_18->unk0 = 0x6000000;
//         temp_v1_18->unk4 = (s32) (D_80204278 + 0x7D00);
//         temp_v1_19 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_19 + 8);
//         temp_v1_19->unk0 = 0x6000000;
//         temp_v1_19->unk4 = sp38;
//         temp_v1_20 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_20 + 8);
//         temp_v1_20->unk4 = 0x80;
//         temp_v1_20->unk0 = 0xBA000602;
//         temp_v1_21 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_21 + 8);
//         temp_v1_21->unk4 = 0x30;
//         temp_v1_21->unk0 = 0xBA000402;
//         temp_v1_22 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_22 + 8);
//         temp_v1_22->unk4 = 0;
//         temp_v1_22->unk0 = 0xBA001001;
//         temp_v1_23 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_23 + 8);
//         temp_v1_23->unk4 = 0x80008000;
//         temp_v1_23->unk0 = 0xBB000001;
//         if ((s32) D_803F2D10 < 2) {
//             func_802D5AD8_6E7188(1, 8);
//         }
//         temp_v1_24 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_24 + 8);
//         temp_v1_24->unk4 = 0x40;
//         temp_v1_24->unk0 = 0xBA000602;
//         temp_v1_25 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_25 + 8);
//         temp_v1_25->unk4 = 0;
//         temp_v1_25->unk0 = 0xBA000402;
//         func_8029BB94_6AD244();
//         func_803572F0_7689A0();
//         func_80357480_768B30();
//         func_80357438_768AE8();
//         func_8039EBFC_7B02AC();
//         func_802FF25C_71090C();
//         temp_v0_10 = D_803F63C2;
//         if (temp_v0_10 != 0) {
//             func_8037D32C_78E9DC(&D_803B5764, (temp_v0_10 + 1) & 0xFF, 0x19, (gScreenWidth - 0x19) & 0xFFFF, gScreenHeight - 0x64);
//         }
//         if (D_803C0422 == 0) {
//             if (D_803E1BC0 == 0) {
//                 if (D_803F2D38 != 0x24) {
//                     func_80349DCC_75B47C(0);
//                 }
//             } else if (*(void *)0x802912D8 != 0) {
//                 func_8012C1F0(&D_801D9E7C);
//                 func_8012C214(0xFF, 0xFF, 0, 0xFF);
//                 func_8012C248(0, 2, 1, 0);
//                 func_8012EB4C(&D_801D9E7C, &D_80204368, ((s32) gScreenWidth / 2) & 0xFFFF, 0xC8, 16.0f, 16.0f, 0x10);
//             }
//         }
//         temp_v1_26 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_26 + 8);
//         temp_v1_26->unk4 = 0;
//         temp_v1_26->unk0 = 0xE7000000;
//         temp_v1_27 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_27 + 8);
//         temp_v1_27->unk4 = 0;
//         temp_v1_27->unk0 = 0xBA001402;
//         temp_v1_28 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_28 + 8);
//         temp_v1_28->unk4 = 0;
//         temp_v1_28->unk0 = 0xFA000000;
//         temp_v1_29 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_29 + 8);
//         temp_v1_29->unk4 = 0x504240;
//         temp_v1_29->unk0 = 0xB900031D;
//         temp_v1_30 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_30 + 8);
//         temp_v1_30->unk4 = 0xFFFDF6FB;
//         temp_v1_30->unk0 = 0xFCFFFFFF;
//         temp_v1_31 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_31 + 8);
//         temp_v1_31->unk4 = 0x5C2E8;
//         temp_v1_31->unk0 = 0xF61D4374;
//         func_80299140_6AA7F0();
//         temp_v1_32 = D_801D9E7C;
//         D_801D9E7C = (void *) (temp_v1_32 + 8);
//         temp_v1_32->unk4 = 0;
//         temp_v1_32->unk0 = 0xBB000000;
//         temp_a0_5 = D_803C0420;
//         phi_a1 = &D_803C0420;
//         if (temp_a0_5 != 0) {
//             phi_a0 = temp_a0_5;
//             if (temp_a0_5 == 1) {
//                 func_803497DC_75AE8C(temp_a0_5, &D_803C0420);
//                 func_80349720_75ADD0();
//                 phi_a0 = D_803C0420;
//             }
//             D_803C0420 = (s16) (phi_a0 + 1);
//             D_803C0420 = (s16) (D_803C0420 & 0x7F);
//             phi_a1 = &D_803C0420;
//         }
//         if (D_803F66A7 != 0) {
//             func_803800F0_7917A0(D_803F2D71, phi_a1);
//             func_8031B174_72C824(D_803F2D71, D_803F2DA3);
//             func_80352310_7639C0();
//             D_803F66A7 = (u8)0;
//             D_803F66AD = (u8)0;
//             if (D_803F6704 != 0) {
//                 func_8012ABF0();
//             }
//         }
//         if (D_8028645A == 0) {
//             D_8015517C = 0.0f;
//         }
//         temp_v0_11 = *(void *)0x8028645C;
//         if ((temp_v0_11 == 9) || (temp_v0_11 == 5) || (temp_v0_11 == 0x18)) {
//             D_8015517C = 1.0f;
//             D_801546D8 = (u16)0x800;
//         }
//         temp_v0_12 = D_803C0426;
//         phi_a1_3 = &D_803C0426;
//         if (temp_v0_12 != 0) {
//             phi_v0_3 = temp_v0_12;
//             if (temp_v0_12 == 2) {
//                 func_80133738();
//                 phi_v0_3 = D_803C0426;
//             }
//             if (phi_v0_3 == 1) {
//                 temp_v0_13 = D_803C042A;
//                 phi_v0_4 = temp_v0_13;
//                 phi_a1_2 = &D_803C0426;
//                 if (temp_v0_13 == 0) {
//                     func_802F07D0_701E80();
//                     func_802F07E8_701E98(3);
//                     phi_v0_4 = D_803C042A;
//                     phi_a1_2 = &D_803C0426;
//                 }
//                 if (phi_v0_4 == 1) {
//                     *phi_a1_2 = (u16)0xD;
//                 }
//                 D_8028645C = (u16)0;
//                 *phi_a1_2 = (s16) (*phi_a1_2 + 1);
//                 phi_a1_3 = phi_a1_2;
//             } else {
//                 D_803C0426 = (s16) (phi_v0_3 + 1);
//                 phi_a1_3 = &D_803C0426;
//                 if ((s32) D_803C0426 >= 0x11) {
//                     D_80204284 = (u16)3;
//                     D_80152E90 = (u8)1;
//                     phi_a1_3 = &D_803C0426;
//                 }
//             }
//         }
//         if (D_803E1BC0 == 2) {
//             temp_v0_14 = D_803C0424;
//             if (temp_v0_14 == 0) {
//                 func_8013385C(0x41000000, 0x41A00000, phi_a1_3, 0);
//                 func_801337DC(0, 0x41000000, 0x41A00000, 0);
//                 func_802F07E8_701E98(3);
//                 D_803C0424 = (u16)1;
//             } else {
//                 D_803C0424 = (s16) (temp_v0_14 + 1);
//                 if ((s32) D_803C0424 >= 0xE) {
//                     D_80204284 = (u16)3;
//                     D_80152E90 = (u8)1;
//                     D_8028645C = (u16)0;
//                 }
//             }
//         }
//         func_801375E8(0);
//     }
//     // check cheats
//     func_8038BAC0_79D170(D_802910D0);
//     temp_ret = func_802F0918_701FC8();
//     if (D_803C0426 != 0) {
//         if (D_803C042A == 1) {
//             func_8012AD30(&D_801D9E7C, 0, 0, 0x140, 0xF0, 0, 0, 0, 0xFF);
//         }
//     }
//     if ((D_803F2D38 == 0x23) && (D_803F6680.unk0 == 0)) {
//         temp_v0_15 = D_803C0428;
//         if (temp_v0_15 != 0) {
//             D_803C0428 = (s16) (temp_v0_15 + 1);
//             if ((s32) D_803C0428 >= 0x14) {
//                 D_8028645C = (u16)0;
//                 D_80204284 = (u16)3;
//                 D_80152E90 = (u8)1;
//             }
//         } else {
//             temp_ret_2 = func_8038B854_79CF04();
//             if (temp_ret_2 == 1) {
//                 D_803C0428 = (u16)1;
//                 func_8013385C(0x40C00000, 0x41A00000, 0);
//                 func_801337DC(0, 0x40C00000, 0x41A00000, 0);
//                 func_802F07E8_701E98(3);
//             }
//         }
//     }
//     D_801552B4 = (u8)0;
//     D_801552B0 = (u8)0;
// }

void func_8029614C_6A77FC(void) {
    D_803F2D30.unkA = 3;
    D_803F2D30.unk4 = 0;

    D_803F2D10.unk0 = 0;
    D_803F2D10.unk1 = 0;
    D_803F2D10.unk2 = 0;
    D_803F2D10.unk3 = 0;

    D_803F2D50.unkC6 = 0;
    D_803F2D50.unkC4 = 1;

    D_8020427C = 0;

    D_803F2D30.unkC = 0;
}

void func_8029619C_6A784C(void) {
    D_801DDD8C[D_803D5534].unk0->health = 0x7F;
    D_803F2CE8 = 0;
    D_8020427C = 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_6A6500/func_802961D4_6A7884.s")
// NON-MATCHING: JUSTREG
// void func_802961D4_6A7884(void) {
//     func_8012A400();
//     func_80352280_763930();
//     func_80352310_7639C0();
//     D_803C0422 = 0;
//     D_803F6684 = 0;
//     D_8028645A = 0;
//     D_8015517C = 0.0f;
//     D_8028645C = 0;
//     D_803F2D50.unkDA = 320;
//     D_803F2D50.unkDC = 0;
//     D_803C0640 = -1;
//     D_803C0644 = 0xC800000000000000;
//     D_803C064C = 0x0011203800000000;
//     D_803C0654 = 65536;
//     func_802C9340_6DA9F0();
//     func_802C9834_6DAEE4();
//     func_80296544_6A7BF4();
//     func_802CB360_6DCA10();
//     func_80304170_715820();
//     func_80304194_715844();
//     func_8031B390_72CA40(D_803F2D39);
//     D_80204280 = D_803F2D30.unk8;
//     D_803F2D30.unk4 = 0;
//     func_80296310_6A79C0();
//     func_802B3FAC_6C565C();
//     D_803F2D50.unkCE = func_80296320_6A79D0();
//     D_803F2D50.unkDC = 1;
//     func_8012AC40();
//     D_803E4D2C = 0;
// }

void func_80296310_6A79C0(void) {
    D_803C0420 = 1;
}

s32 func_80296320_6A79D0(void) {
    s16 ret;
    s16 i;
    s32 res;

    ret = 0;

    for (i = 1; i < 32; i++) {
        if ((i != 10) &&
            (i != 17) &&
            (i != 23) &&
            (i != 30) &&
            (i != 31)) {
                ret += (u32)((u8*)D_8023F260)[i + 3] >> 4;
            }
    }
    if (ret < 200) {
        res = 0;
    } else if (ret < 390) {
        res = 1;
    } else {
        res = 2;
    }

    return res;
}
