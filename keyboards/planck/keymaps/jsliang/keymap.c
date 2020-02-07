#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_planck_mit(KC_Q, KC_W, KC_F, KC_P, KC_B, MO(1), MO(2), KC_J, KC_L, KC_U, KC_Y, KC_SCLN, LCTL_T(KC_A), LALT_T(KC_R), LGUI_T(KC_S), LSFT_T(KC_T), KC_G, KC_NO, KC_NO, KC_M, RSFT_T(KC_N), RGUI_T(KC_E), RALT_T(KC_I), RCTL_T(KC_O), KC_Z, KC_X, KC_C, KC_D, KC_V, KC_NO, KC_NO, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_ESC, KC_LEFT, KC_DOWN, KC_UP, LT(1,KC_RGHT), KC_SPC, LT(2,KC_ENT), LT(3,KC_TAB), KC_MINS, KC_QUOT, KC_BSPC),
	[1] = LAYOUT_planck_mit(KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS, KC_NO, KC_EQL, KC_7, KC_8, KC_9, KC_EQL, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_GRV, KC_NO, KC_NO, KC_GT, KC_4, KC_5, KC_6, KC_MINS, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_NO, KC_NO, KC_AMPR, KC_1, KC_2, KC_3, KC_ASTR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSLS, KC_COMM, KC_DOT, KC_0, KC_SLSH),
	[2] = LAYOUT_planck_mit(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F4, KC_F5, KC_F6, KC_F11, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F12, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[3] = LAYOUT_planck_mit(RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LCA(KC_UP), KC_NO, KC_NO, KC_NO, KC_NO, KC_BRID, KC_BRIU, KC_NO, KC_NO, KC_NO, KC_NO, LCA(KC_LEFT), LCA(KC_C), LCA(KC_RGHT), KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, LCA(KC_D), LCA(KC_E), LCA(KC_DOWN), LCA(KC_T), LCA(KC_G), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
