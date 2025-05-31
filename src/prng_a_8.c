#include "prng_a_8.h"

uint8_t prng_a_8(struct prng_a_8_s *s) {
  s->a += 11;
  s->b += (s->a << 1) | (s->a >> 7);
  return s->b;
}
