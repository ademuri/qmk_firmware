#pragma once

#include "quantum.h"
#include "action_layer.h"
#include <stdint.h>
#include <stdbool.h>
#include <hal.h>

// TODO: tune these
// #define I2C_ADDR 0b01000000
#define I2C_ADDR 0b01000000
#define I2C_IODIRA 0x0
#define I2C_IODIRB 0x1
#define I2C_GPIOA 0x12
#define I2C_GPIOB 0x13
#define I2C_OLATA 0x14
#define I2C_OLATB 0x15
#define I2C_GPPUA 0x0C
#define I2C_GPPUB 0x0D


#define LAYOUT_5x7_left(\
  L00, L01, L02, L03, L04, L05, L06, \
  L10, L11, L12, L13, L14, L15, L16, \
  L20, L21, L22, L23, L24, L25, L26, \
  L30, L31, L32, L33, L34, L35, \
  L40, L41, L42, L43, \
                      L50, L51, L52, \
                           L60, L61 \
  ) \
  { \
    { L06, L05, L04, L03, L02, L01 }, \
    { L16, L15, L14, L13, L12, L00 }, \
    { L26, L25, L24, L23, L11, L10 }, \
    { L51, L35, L34, L22, L21, L20 }, \
    { L52, L50, L33, L32, L31, L30 }, \
    { L61, L60, L43, L42, L41, L40 }  \
}

#define LAYOUT_5x7(\
  L00, L01, L02, L03, L04, L05, L06,                R06, R05, R04, R03, R02, R01, R00, \
  L10, L11, L12, L13, L14, L15, L16,                R16, R15, R14, R13, R12, R11, R10, \
  L20, L21, L22, L23, L24, L25, L26,                R26, R25, R24, R23, R22, R21, R20, \
  L30, L31, L32, L33, L34, L35,                          R35, R34, R33, R32, R31, R30, \
  L40, L41, L42, L43,                                              R43, R42, R41, R40, \
                      L50, L51, L52,                     R52, R51, R50,                \
                           L60, L61,                     R61, R60                      \
  ) \
  { \
    { L06, L05, L04, L03, L02, L01 }, \
    { L16, L15, L14, L13, L12, L00 }, \
    { L26, L25, L24, L23, L11, L10 }, \
    { L51, L35, L34, L22, L21, L20 }, \
    { L52, L50, L33, L32, L31, L30 }, \
    { L61, L60, L43, L42, L41, L40 }, \
                                          \
    { R06, R05, R04, R03, R02, R01 }, \
    { R16, R15, R14, R13, R12, R00 }, \
    { R26, R25, R24, R23, R11, R10 }, \
    { R51, R35, R34, R22, R21, R20 }, \
    { R52, R50, R33, R32, R31, R30 }, \
    { R61, R60, R43, R42, R41, R40 }, \
}

#define LAYOUT_ergodox(                     \
                                            \
    k00, k01, k02, k03, k04, k05, k06,      \
    k10, k11, k12, k13, k14, k15, k16,      \
    k20, k21, k22, k23, k24, k25,           \
    k30, k31, k32, k33, k34, k35, k36,      \
    k40, k41, k42, k43, k44,                \
    k55, k56,                               \
    k54,                                    \
    k53, k52, k51,                          \
                                            \
    k07, k08, k09, k0A, k0B, k0C, k0D,      \
    k17, k18, k19, k1A, k1B, k1C, k1D,      \
    k28, k29, k2A, k2B, k2C, k2D,           \
    k37, k38, k39, k3A, k3B, k3C, k3D,      \
    k49, k4A, k4B, k4C, k4D,                \
    k57, k58,                               \
    k59,                                    \
    k5C, k5B, k5A)                          \
                                            \
  /* matrix positions */                    \
  {                                         \
    {k00, k10, k20, k30, k40, KC_NO},       \
        {k01, k11, k21, k31, k41, k51},     \
        {k02, k12, k22, k32, k42, k52},     \
        {k03, k13, k23, k33, k43, k53},     \
        {k04, k14, k24, k34, k44, k54},     \
        {k05, k15, k25, k35, KC_NO, k55},   \
        {k06, k16, KC_NO, k36, KC_NO, k56}, \
                                            \
        {k07, k17, KC_NO, k37, KC_NO, k57}, \
        {k08, k18, k28, k38, KC_NO, k58},   \
        {k09, k19, k29, k39, k49, k59},     \
        {k0A, k1A, k2A, k3A, k4A, k5A},     \
        {k0B, k1B, k2B, k3B, k4B, k5B},     \
        {k0C, k1C, k2C, k3C, k4C, k5C},     \
    {                                       \
      k0D, k1D, k2D, k3D, k4D, KC_NO        \
    }                                       \
  }
