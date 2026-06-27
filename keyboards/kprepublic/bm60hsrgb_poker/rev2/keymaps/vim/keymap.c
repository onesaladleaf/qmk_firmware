#include QMK_KEYBOARD_H

#include "keymap_colemak.h"
#include "aliases.h"

enum layer_names {
    L_INSERT = 0,
    L_NORMAL,
    L_S_NORMAL,
    L_VISUAL,
    L_VIM_D,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    [L_TEMPLATE] = LAYOUT_60_ansi(
        ___GESC, ______1, ______2, ______3, ______4, ______5, ______6, ______7, ______8, ______9, ______0, ___MINS, ____EQL, ___BSPC,
        ____TAB, ______Q, ______W, ______F, ______P, ______G, ______J, ______L, ______U, ______Y, ___SCLN, ___LBRC, ___RBRC, ___BSLS,
        ___BSPC, ______A, ______R, ______S, ______T, ______D, ______H, ______N, ______E, ______I, ______O, ___QUOT, ____ENT,
        ___LSFT, ______Z, ______X, ______C, ______V, ______B, ______K, ______M, ___COMM, ____DOT, ___SLSH, ___RSFT,
        ___LCTL, _______, ___LGUI, ____SPC, ___LALT, ___RALT, ___RCTL, _______
    ),
    */
    [L_INSERT] = LAYOUT_60_ansi(
        QK_GESC, CM_1, CM_2, CM_3, CM_4, CM_5, CM_6, CM_7, CM_8, CM_9, CM_0, CM_MINS, CM_EQL, KC_BSPC,
        KC_TAB, CM_Q, CM_W, CM_F, CM_P, CM_G, CM_J, CM_L, CM_U, CM_Y, CM_SCLN, CM_LBRC, CM_RBRC, CM_BSLS,
        KC_BSPC, CM_A, CM_R, CM_S, CM_T, CM_D, CM_H, CM_N, CM_E, CM_I, CM_O, CM_QUOT, KC_ENT,
        KC_LSFT, CM_Z, CM_X, CM_C, CM_V, CM_B, CM_K, CM_M, CM_COMM, CM_DOT, CM_SLSH, KC_RSFT,
        KC_LCTL, TT(L_NORMAL), KC_LGUI, KC_SPC, KC_LALT, KC_RALT, KC_RCTL, TG(L_NORMAL)
    ),
    [L_NORMAL] = LAYOUT_60_ansi(
        ___GESC, QK_BOOT, RM_TOGG, RM_NEXT, RM_HUEU, RM_HUED, RM_SATU, RM_SATD, RM_VALU, RM_VALD, KC_MPLY, KC_VOLD, KC_VOLU, KC_DEL,
        ____TAB, ______Q, C(KC_RGHT), ______F, C(CM_V), ______G, ______J, ______L, C(CM_Z), C(CM_C), ___SCLN, KC_PGUP, KC_PGDN, ___BSLS,
        ___BSPC, ______A, ______R, ______S, ______T, OSL(L_VIM_D), KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, ______O, ___QUOT, ____ENT,
        MO(L_S_NORMAL), ______Z, KC_DEL, ______C, TG(L_VISUAL), C(KC_LEFT), NK_TOGG, ______M, MS_WHLU, MS_WHLD, C(CM_F), MO(L_S_NORMAL),
        ___LCTL, _______, ___LGUI, ____SPC, ___LALT, ___RALT, ___RCTL, _______
    ),
    [L_S_NORMAL] = LAYOUT_60_ansi(
        ___GESC, ______1, ______2, ______3, KC_END, ______5, ______6, ______7, ______8, ______9, ______0, ___MINS, ____EQL, ___BSPC,
        ____TAB, ______Q, C(KC_RGHT), ______F, C(CM_V), C(KC_END), ______J, KC_HOME, LCS(CM_Z), C(CM_C), ___SCLN, ___LBRC, ___RBRC, ___BSLS,
        ___BSPC, KC_END, ______R, ______S, ______T, ______D, ______H, ______N, C(KC_RGHT), KC_HOME, ______O, ___QUOT, ____ENT,
        ___LSFT, ______Z, KC_BSPC, ______C, TG(L_VISUAL), C(KC_LEFT), ______K, ______M, MS_WHLU, MS_WHLD, ___SLSH, ___RSFT,
        ___LCTL, _______, ___LGUI, ____SPC, ___LALT, ___RALT, ___RCTL, _______
    ),
    [L_VIM_D] = LAYOUT_60_ansi(
        xxxGESC, xxxxxx1, xxxxxx2, xxxxxx3, xxxxxx4, xxxxxx5, xxxxxx6, xxxxxx7, xxxxxx8, xxxxxx9, xxxxxx0, xxxMINS, xxxxEQL, xxxBSPC,
        xxxxTAB, xxxxxxQ, C(KC_DEL), xxxxxxF, xxxxxxP, xxxxxxG, xxxxxxJ, xxxxxxL, xxxxxxU, xxxxxxY, xxxSCLN, xxxLBRC, xxxRBRC, xxxBSLS,
        xxxBSPC, xxxxxxA, xxxxxxR, xxxxxxS, xxxxxxT, xxxxxxD, KC_BSPC, xxxxxxN, xxxxxxE, KC_DEL, xxxxxxO, xxxQUOT, xxxxENT,
        xxxLSFT, xxxxxxZ, xxxxxxX, xxxxxxC, xxxxxxV, C(KC_BSPC), xxxxxxK, xxxxxxM, xxxCOMM, xxxxDOT, xxxSLSH, xxxRSFT,
        xxxLCTL, xxxxxxx, xxxLGUI, xxxxSPC, xxxLALT, xxxRALT, xxxRCTL, xxxxxxx
    ),
    [L_VISUAL] = LAYOUT_60_ansi(
        TG(L_VISUAL), ______1, ______2, ______3, ______4, ______5, ______6, ______7, ______8, ______9, ______0, ___MINS, ____EQL, ___BSPC,
        ____TAB, ______Q, LCS(KC_RGHT), ______F, ______P, ______G, ______J, ______L, ______U, ______Y, ___SCLN, ___LBRC, ___RBRC, ___BSLS,
        ___BSPC, ______A, ______R, ______S, ______T, C(CM_X), S(KC_LEFT), S(KC_DOWN), S(KC_UP), S(KC_RGHT), ______O, ___QUOT, ____ENT,
        ___LSFT, ______Z, C(CM_X), ______C, TG(L_VISUAL), LCS(KC_LEFT), ______K, ______M, ___COMM, ____DOT, ___SLSH, ___RSFT,
        ___LCTL, _______, ___LGUI, ____SPC, ___LALT, ___RALT, ___RCTL, _______
    ),
};

bool rgb_matrix_indicators_user(void) {
    if (IS_LAYER_ON(L_NORMAL)) {
        rgb_matrix_set_color(54, 120, 120, 120);
        rgb_matrix_set_color(60, 120, 120, 120);
    } else {
        rgb_matrix_set_color(54, 0, 0, 0);
        rgb_matrix_set_color(60, 0, 0, 0);
    }

    return true;
}
