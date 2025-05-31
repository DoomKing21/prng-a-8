# PRNG A 8

It's an extremely-fast, statistically-weak PRNG with 8-bit integers and a period of 2⁹.

`prng_a_8()` is the randomization function that generates an 8-bit, pseudorandom, unsigned integer.

It accepts the following argument.

1. `s` is the pointer that contains the state. Each state integer must be initialized with any combination of values.

It has a minimum period of 2⁹ without broken cycles.

Incrementing `a` outside of `prng_a_8()` behaves as an interdimensional jump function that starts a different cycle with a period of at least 2⁹.

Zeroland escapes immediately after generating 1 subsequent number.

It's the fastest 8-bit PRNG that generates numbers individually with 8-bit state integers and passes bare-minimum statistical tests in `stdin8` PractRand with 1KB of numbers.

I welcome submissions of algorithms in the same class that challenge the aforementioned claim.

As an obligatory disclaimer, it's not a CSPRNG for use in cryptography.
