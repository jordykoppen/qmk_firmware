#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap (Base Layer) Default Layer
   * ,----------------------------------------------------------------.
   * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0| -_| +=| Backsp| `~ |
   * |----------------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |PgUp|
   * |----------------------------------------------------------------|
   * |Caps   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |PgDn|
   * |----------------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift|Ctrl| End|
   * |----------------------------------------------------------------|
   * |Ctrl|Alt |Gui |         Space           | FN|Alt|Lef|Dow| Up|Rig|
   * `----------------------------------------------------------------'
   */
[0] = LAYOUT_65_ansi(
  KC_ESC,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_HOME,
  KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,
  LCTL_T(KC_ESC),   KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGDN,
  KC_LSFT,          KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_GRV,  KC_END,
  KC_LCTL, KC_LALT, KC_LGUI,                KC_SPC,                          OSL(1), KC_RALT,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

  /* Keymap Fn Layer
   * ,----------------------------------------------------------------.
   * |~ `|F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|Del    |Ins |
   * |----------------------------------------------------------------|
   * |GLYR |   |Up |   |RST|   |   |   |PSc|SLk|Pau|Up |   |     |    |
   * |----------------------------------------------------------------|
   * | Caps |Lef|Dow|Rig|   |   |   |   |Hom|PUp|Lef|Rig|        |    |
   * |----------------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |End|PDn|Dow|      |PUp|    |
   * |----------------------------------------------------------------|
   * |    |    |    |                       |   |   |    |Hom|PDn|End |
   * `----------------------------------------------------------------'
   */
[1] = LAYOUT_65_ansi(
  KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_INS,
  TO(2), _______, KC_UP,   _______, RESET, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,   _______, _______, _______,
  KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT,          _______, _______,
  _______,          _______, _______, _______, _______, _______, _______, _______, KC_END,  KC_PGDN, KC_DOWN, _______, KC_PGUP, _______,
  _______, _______, _______,                            _______,                   _______, _______, _______, KC_HOME, KC_PGDN, KC_END
),

/* Keymap (Game Layer) Layer
   * ,----------------------------------------------------------------.
   * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0| -_| +=| Backsp| `~ |
   * |----------------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |PgUp|
   * |----------------------------------------------------------------|
   * |Ctrl   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |PgDn|
   * |----------------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift|Ctrl| End|
   * |----------------------------------------------------------------|
   * |Ctrl|Alt |Gui |         Space           | FN|Alt|Lef|Dow| Up|Rig|
   * `----------------------------------------------------------------'
   */
[2] = LAYOUT_65_ansi(
  KC_ESC,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_HOME,
  KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,
  KC_LCTL, KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGDN,
  KC_LSFT,          KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_GRV,  KC_END,
  KC_LCTL, KC_LALT, KC_LGUI,                KC_SPC,                          OSL(1), KC_RALT,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
)
};
