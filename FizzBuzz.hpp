#ifndef CPL_FIZZBUZZ_HPP
#define CPL_FIZZBUZZ_HPP

static_assert(equal(FizzBuzz< 1>::value, 1u));
static_assert(equal(FizzBuzz< 2>::value, 2u));
static_assert(equal(FizzBuzz< 3>::value, "Fizz"));
static_assert(equal(FizzBuzz< 4>::value, 4u));
static_assert(equal(FizzBuzz< 5>::value, "Buzz"));
static_assert(equal(FizzBuzz< 6>::value, "Fizz"));
static_assert(equal(FizzBuzz< 7>::value, 7u));
static_assert(equal(FizzBuzz< 8>::value, 8u));
static_assert(equal(FizzBuzz< 9>::value, "Fizz"));
static_assert(equal(FizzBuzz<10>::value, "Buzz"));
static_assert(equal(FizzBuzz<11>::value, 11u));
static_assert(equal(FizzBuzz<12>::value, "Fizz"));
static_assert(equal(FizzBuzz<13>::value, 13u));
static_assert(equal(FizzBuzz<14>::value, 14u));
static_assert(equal(FizzBuzz<15>::value, "FizzBuzz"));
static_assert(equal(FizzBuzz<16>::value, 16u));
static_assert(equal(FizzBuzz<17>::value, 17u));
static_assert(equal(FizzBuzz<18>::value, "Fizz"));
static_assert(equal(FizzBuzz<19>::value, 19u));
static_assert(equal(FizzBuzz<20>::value, "Buzz"));

#endif
