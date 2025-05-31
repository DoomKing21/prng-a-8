#ifndef PRNG_A_8_H
#define PRNG_A_8_H

#include <stdint.h>

struct prng_a_8_s {
  uint8_t a;
  uint8_t b;
};

uint8_t prng_a_8(struct prng_a_8_s *s);

#endif
