#include QMK_KEYBOARD_H

enum layer_names {
    L_INSERT = 0,
    L_NORMAL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [L_INSERT] = LAYOUT_60_ansi(
        QK_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        KC_BSPC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_LCTL, MO(L_NORMAL), KC_LGUI, KC_SPC, KC_LALT, KC_RALT, KC_RCTL, TG(L_NORMAL)
    ),
    [L_NORMAL] = LAYOUT_60_ansi(
        _______, QK_BOOT, RM_TOGG, RM_NEXT, RM_HUEU, RM_HUED, RM_SATU, RM_SATD, RM_VALU, RM_VALD, KC_MPLY, KC_VOLD, KC_VOLU, KC_DEL,
        _______, _______, _______, _______, _______, _______, _______, KC_HOME, _______, _______, _______, KC_PGUP, KC_PGDN, _______,
        _______, KC_END, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, _______, _______,
        _______, _______, KC_DEL, _______, _______, _______, NK_TOGG, _______, MS_WHLU, MS_WHLD, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______
    ),
};
