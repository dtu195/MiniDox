// #define EE_HANDS
#define MASTER_RIGHT
// #define MASTER_LEFT

#pragma once

#define LAYOUT_miryoku(\
  k01, k02, k03, k04, k05,    k45, k44, k43, k42, k41, \
  k11, k12, k13, k14, k15,    k55, k54, k53, k52, k51, \
  k21, k22, k23, k24, k25,    k65, k64, k63, k62, k61, \
  n31, n32, k33, k34, k35,    k75, k74, k73, n72, n71  \
)\
LAYOUT(\
  k01, k02, k03, k04, k05,    k45, k44, k43, k42, k41, \
  k11, k12, k13, k14, k15,    k55, k54, k53, k52, k51, \
  k21, k22, k23, k24, k25,    k65, k64, k63, k62, k61, \
            k33, k34, k35,    k75, k74, k73            \
)
