#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _FUNCTION 1

#define FN_TAB LT(_FUNCTION, KC_TAB)
#define FN_ENT LT(_FUNCTION, KC_ENTER)
#define ESC_CTL MT(MOD_LCTL, KC_ESC)
#define COPY LCTL(KC_C)
#define PASTE LCTL(KC_V)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x7(
     KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  , KC_6  ,         KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,KC_EQL ,  KC_HOME,
      COPY  , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,KC_ESC ,        KC_QUOT, KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLASH,
      PASTE , KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,KC_LBRC,        KC_RBRC, KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,  KC_PGUP,
     KC_DEL , KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,  KC_PGDN,
     KC_TAB ,KC_GRV ,KC_PGDN,KC_PGUP,                                                         KC_TAB,_______,_______,  KC_END ,
                                     KC_LGUI,ESC_CTL,KC_LALT,        KC_BSPC, KC_SPC,KC_RCTL,
                                             KC_LSFT, FN_TAB,         FN_ENT, KC_RSFT
  ),

  [_FUNCTION] = LAYOUT_5x7(
     RESET  , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 , KC_F6 ,         KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,KC_F12 ,  RESET  ,
     _______, KC_1  , KC_2  , KC_3  , KC_4  , KC_5  , KC_6  ,         KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,KC_EQL ,  _______,
     _______,_______,_______,_______,_______, KC_Y  ,_______,        _______,KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,_______,  KC_VOLU,
     _______,_______,_______,_______, KC_M  ,_______,                        _______,_______,KC_WBAK,KC_WFWD,_______,  KC_VOLD,
     _______,_______,KC_END ,KC_HOME,                                                        _______,_______,_______,  _______,
                                     _______,_______,_______,        KC_DEL ,_______,_______,
                                             _______,_______,        _______,_______
  ),

/*
  [_LOWER] = LAYOUT_6x6(

     KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 , KC_F6  ,                         KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,KC_F12 ,
     KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
     _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,_______,KC_PLUS,
     _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                        KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_MINS,KC_PIPE,
     _______,_______,_______,_______,_______,_______,                        _______, KC_P1 , KC_P2 , KC_P3 ,KC_EQL ,KC_UNDS,
                                             _______,KC_PSCR,            _______, KC_P0,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______
  ),

  [_RAISE] = LAYOUT_6x6(

       KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
       _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC,_______,KC_NLCK,KC_INS ,KC_SLCK,KC_MUTE,
       _______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                        KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLU,
       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,KC_VOLD,
       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,

                                               _______,_______,            KC_EQL ,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______
  ),
*/
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  //debug_enable=true;
  //debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
