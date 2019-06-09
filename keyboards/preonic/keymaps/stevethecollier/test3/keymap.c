#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_preonic_grid(
                              KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL,
                              KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
                              LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
                              KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                              KC_LCTL, KC_LALT, KC_LALT, KC_LGUI, MO(1), KC_BSPC, KC_SPC, MO(2), KC_ENT, KC_RALT, KC_LCTL, KC_EQL
                              ),
	[1] = LAYOUT_preonic_grid(
                              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                              KC_NO, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_EQL, KC_PLUS, KC_NO,
                              KC_NO, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_DQUO,
                              KC_NO, KC_ASTR, KC_COLN, KC_PIPE, KC_QUES, KC_NO, KC_UNDS, KC_MINS, KC_LT, KC_GT, KC_QUES, KC_NO,
                              KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
                              ),
	[2] = LAYOUT_preonic_grid(
                              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                              KC_NO, KC_NO, KC_P7, KC_P8, KC_P9, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO,
                              KC_NO, KC_NO, KC_NO, KC_P4, KC_P5, KC_P6, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO,
                              KC_NO, KC_P0, KC_P1, KC_P2, KC_P3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO
                              )
};
