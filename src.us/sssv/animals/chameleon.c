#include <ultra64.h>
#include "common.h"


extern u8 D_04009BF0[]; // palette?

#pragma GLOBAL_ASM("asm/nonmatchings/sssv/animals/chameleon/func_8035A5F0_76BCA0.s")

// huh?
#pragma GLOBAL_ASM("asm/nonmatchings/sssv/animals/chameleon/func_8035BDC0_76D470.s")

void func_8035C018_76D6C8(void) {
    D_803D552C->unk32A = D_803D5544;
    D_803D552C->unk365 = ATTACK_CHAMELEON_TONGUE;
    play_sound_effect_at_location(SFX_RAM_HEADBUTT, 0x5000, 0, D_803D5530->xPos, D_803D5530->zPos, D_803D5530->yPos, 1.0f);
}

void func_8035C08C_76D73C(void) {
    if ((D_803D552C->unk365 != ATTACK_CHAMELEON_1) &&
        (D_803D552C->unk365 != ATTACK_CHAMELEON_2)) {
        D_803D552C->unk32A = D_803D5544;
        D_803D552C->unk365 = ATTACK_CHAMELEON_1;
    }
}

void func_8035C0CC_76D77C(void) {
    if ((D_803D552C->unk365 != ATTACK_CHAMELEON_1) &&
        (D_803D552C->unk365 != ATTACK_CHAMELEON_2)) {
        D_803D552C->unk32A = D_803D5544;
        D_803D552C->unk365 = ATTACK_CHAMELEON_2;
    }
}

void func_8035C10C_76D7BC(void) {
    D_803D552C->unk32A = D_803D5544;
    D_803D552C->unk365 = ATTACK_CHAMELEON_TONGUE;
    play_sound_effect_at_location(SFX_RAM_HEADBUTT, 0x5000, 0, D_803D5530->xPos, D_803D5530->zPos, D_803D5530->yPos, 1.0f);
}

void func_8035C180_76D830(s16 arg0) {
    D_803D552C->unk2EC = arg0;
}
