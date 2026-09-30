#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0210[4040] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 60,
};
void recomp_unit_0210_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B4C000u;
        entry_id = (entry_delta < 16160u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0210[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B4C000;
    case 2u: goto L_08B4C048;
    case 3u: goto L_08B4C0C0;
    case 4u: goto L_08B4C0CC;
    case 5u: goto L_08B4C0D4;
    case 6u: goto L_08B4C0E8;
    case 7u: goto L_08B4C234;
    case 8u: goto L_08B4C33C;
    case 9u: goto L_08B4C580;
    case 10u: goto L_08B4C588;
    case 11u: goto L_08B4C590;
    case 12u: goto L_08B4C598;
    case 13u: goto L_08B4C5A0;
    case 14u: goto L_08B4C5A8;
    case 15u: goto L_08B4C5B0;
    case 16u: goto L_08B4C5B8;
    case 17u: goto L_08B4C5C0;
    case 18u: goto L_08B4C5C8;
    case 19u: goto L_08B4C5D0;
    case 20u: goto L_08B4C5E8;
    case 21u: goto L_08B4C644;
    case 22u: goto L_08B4C670;
    case 23u: goto L_08B4C6FC;
    case 24u: goto L_08B4CC98;
    case 25u: goto L_08B4D080;
    case 26u: goto L_08B4D140;
    case 27u: goto L_08B4D3C8;
    case 28u: goto L_08B4D4F8;
    case 29u: goto L_08B4D508;
    case 30u: goto L_08B4D528;
    case 31u: goto L_08B4D554;
    case 32u: goto L_08B4D5E4;
    case 33u: goto L_08B4D7A8;
    case 34u: goto L_08B4D7C4;
    case 35u: goto L_08B4D7E0;
    case 36u: goto L_08B4D7FC;
    case 37u: goto L_08B4D814;
    case 38u: goto L_08B4D82C;
    case 39u: goto L_08B4D844;
    case 40u: goto L_08B4D854;
    case 41u: goto L_08B4D864;
    case 42u: goto L_08B4D874;
    case 43u: goto L_08B4D890;
    case 44u: goto L_08B4D8AC;
    case 45u: goto L_08B4D96C;
    case 46u: goto L_08B4D9A4;
    case 47u: goto L_08B4DA58;
    case 48u: goto L_08B4DA64;
    case 49u: goto L_08B4E450;
    case 50u: goto L_08B4E470;
    case 51u: goto L_08B4E478;
    case 52u: goto L_08B4E48C;
    case 53u: goto L_08B4E5B0;
    case 54u: goto L_08B4E60C;
    case 55u: goto L_08B4EED4;
    case 56u: goto L_08B4F094;
    case 57u: goto L_08B4F9C8;
    case 58u: goto L_08B4FD2C;
    case 59u: goto L_08B4FE8C;
    case 60u: goto L_08B4FF1C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B4C000:
    // nop
    // nop
    ctx.execute_vfpu_compare3(99u, 111u, 114u, 1u, 6u);
    rt.unsupported(0x08B4C00Cu, 0x6972616Eu, "unknown not lowered yet"); return;
L_08B4C048:
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08B4C04Cu, 0x41700000u, "unknown not lowered yet"); return;
L_08B4C0C0:
    ctx.gpr[6] = (26214u << 16u);
    rt.unsupported(0x08B4C0C4u, 0x40F00000u, "unknown not lowered yet"); return;
L_08B4C0CC:
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B4C0D4u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B4C0D4u) goto L_08B4C0D4;
    return;
L_08B4C0D4:
    // nop
    // nop
    rt.unsupported(0x08B4C0DCu, 0x00FF00FFu, "special? not lowered yet"); return;
L_08B4C0E8:
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08B4C0ECu, 0x41780000u, "unknown not lowered yet"); return;
L_08B4C234:
    rt.unsupported(0x08B4C238u, 0x08A020D4u, "control flow in delay slot"); return;
L_08B4C33C:
    rt.unsupported(0x08B4C340u, 0x08A02FA8u, "control flow in delay slot"); return;
L_08B4C580:
    // nop
    // nop
    ctx.pc = 0x02826020u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C588:
    // nop
    // nop
    ctx.pc = 0x02826000u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C590:
    // nop
    // nop
    ctx.pc = 0x0282B540u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C598:
    // nop
    // nop
    ctx.pc = 0x02828450u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C5A0:
    // nop
    // nop
    ctx.pc = 0x028274B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C5A8:
    // nop
    // nop
    ctx.pc = 0x02827230u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C5B0:
    // nop
    // nop
    ctx.pc = 0x02826A40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C5B8:
    // nop
    // nop
    ctx.pc = 0x02827610u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C5C0:
    // nop
    // nop
    ctx.pc = 0x02827900u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C5C8:
    // nop
    // nop
    ctx.pc = 0x02828430u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C5D0:
    // nop
    // nop
    ctx.pc = 0x028274D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C5E8:
    // nop
    { const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.pc = 0x02826000u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C644:
    // nop
    rt.unsupported(0x08B4C64Cu, 0x08B05900u, "control flow in delay slot"); return;
L_08B4C670:
    rt.unsupported(0x08B4C674u, 0x08B4C670u, "control flow in delay slot"); return;
L_08B4C6FC:
    (void)(static_cast<std::uint32_t>(std::countl_zero(0u)));
    rt.unsupported(0x08B4C700u, 0x00000005u, "special? not lowered yet"); return;
L_08B4CC98:
    (void)(0u < 0u ? 1u : 0u);
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B4CCA0u, 0x0000002Fu, "special? not lowered yet"); return;
L_08B4D080:
    rt.unsupported(0x08B4D080u, 0x0000003Bu, "special? not lowered yet"); return;
L_08B4D140:
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 0u);
    rt.unsupported(0x08B4D158u, 0x01010101u, "special? not lowered yet"); return;
L_08B4D3C8:
    rt.unsupported(0x08B4D3C8u, 0x40200000u, "unknown not lowered yet"); return;
L_08B4D4F8:
    // nop
    rt.unsupported(0x08B4D500u, 0x08B064ACu, "control flow in delay slot"); return;
L_08B4D508:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x02C83D00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4D528:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B4D52Cu, 0x75646F4Du, "unknown not lowered yet"); return;
L_08B4D554:
    rt.unsupported(0x08B4D558u, 0x08A2DEB4u, "control flow in delay slot"); return;
L_08B4D5E4:
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // nop
    rt.unsupported(0x08B4D628u, 0x40666666u, "unknown not lowered yet"); return;
L_08B4D7A8:
    rt.unsupported(0x08B4D7A8u, 0xC3EF0000u, "unknown not lowered yet"); return;
L_08B4D7C4:
    rt.unsupported(0x08B4D7C4u, 0x43630000u, "unknown not lowered yet"); return;
L_08B4D7E0:
    rt.unsupported(0x08B4D7E0u, 0x429A0000u, "unknown not lowered yet"); return;
L_08B4D7FC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8192)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[27] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16384)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16384)));
    goto L_08B4D814;
L_08B4D814:
    rt.unsupported(0x08B4D814u, 0x43AF0000u, "unknown not lowered yet"); return;
L_08B4D82C:
    rt.unsupported(0x08B4D82Cu, 0x42280000u, "unknown not lowered yet"); return;
L_08B4D844:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-32768)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32768)));
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24576)));
    goto L_08B4D854;
L_08B4D854:
    rt.unsupported(0x08B4D854u, 0x43AA0000u, "unknown not lowered yet"); return;
L_08B4D864:
    rt.unsupported(0x08B4D864u, 0x42240000u, "unknown not lowered yet"); return;
L_08B4D874:
    ctx.fpr[9] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-32768)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16384)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-32768)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8192)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32768)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8192)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8192)));
    goto L_08B4D890;
L_08B4D890:
    rt.unsupported(0x08B4D890u, 0x43B98000u, "unknown not lowered yet"); return;
L_08B4D8AC:
    rt.unsupported(0x08B4D8ACu, 0x42640000u, "unknown not lowered yet"); return;
L_08B4D96C:
    // nop
    rt.unsupported(0x08B4D974u, 0x08B02EACu, "control flow in delay slot"); return;
L_08B4D9A4:
    rt.unsupported(0x08B4D9A8u, 0x08A4C990u, "control flow in delay slot"); return;
L_08B4DA58:
    (void)(0u << (0u & 31u));
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u >> 0u);
    goto L_08B4DA64;
L_08B4DA64:
    rt.memory().memory_barrier();
    jump_target = 0u;
    (void)(static_cast<std::uint32_t>(std::countl_zero(0u)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B4E450:
    // nop
    // nop
    // nop
    ctx.pc = 0x029559A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4E470:
    // nop
    // nop
    goto L_08B4E478;
L_08B4E478:
    (void)(ctx.gpr[1] << 4u);
    (void)(ctx.gpr[2] >> 8u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 12u));
    if (static_cast<std::int32_t>(0u) >= 0) {
    rt.unsupported(0x08B4E488u, 0x04040404u, "regimm? not lowered yet"); return;
        goto L_08B4F094;
    }
    goto L_08B4E48C;
L_08B4E48C:
    rt.unsupported(0x08B4E48Cu, 0x04040404u, "regimm? not lowered yet"); return;
L_08B4E5B0:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B4E5B0u, 0x000000A0u); return; } }
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B4E5B4u, 0x000000A0u); return; } }
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B4E5D0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B4E60C:
    ctx.gpr[1] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    ctx.pc = 0x02C88920u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4EED4:
    rt.unsupported(0x08B4EED8u, 0x00000469u, "special? not lowered yet"); return;
    ctx.pc = 0x02C8AC40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4F094:
    (void)(0u | 0u);
    ctx.pc = 0x02C8B340u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4F9C8:
    rt.memory().memory_barrier();
    ctx.gpr[1] = (ctx.hi);
    ctx.pc = 0x02C8D680u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4FD2C:
    ctx.gpr[1] = (0u >> (0u & 31u));
    ctx.pc = 0x02C8E3E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4FE8C:
    ctx.gpr[1] = (0u >> 12u);
    ctx.pc = 0x02C8E8E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4FF1C:
    rt.unsupported(0x08B4FF20u, 0x00000B2Fu, "special? not lowered yet"); return;
    ctx.pc = 0x02C8EB20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
}

void recomp_unit_0210(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0210_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_210(Runtime &runtime) {
    runtime.register_generated_unit(210u, 0x08B4C000u, 16384u, &recomp_unit_0210, &recomp_unit_0210_entry);
    runtime.register_function(0x08B4C000u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C048u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C0C0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C0CCu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C0D4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C0E8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C234u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C33Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C580u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C588u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C590u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C598u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C5A0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C5A8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C5B0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C5B8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C5C0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C5C8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C5D0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C5E8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C644u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C670u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C6FCu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4CC98u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D080u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D140u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D3C8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D4F8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D508u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D528u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D554u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D5E4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D7A8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D7C4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D7E0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D7FCu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D814u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D82Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D844u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D854u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D864u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D874u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D890u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D8ACu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D96Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D9A4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4DA58u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4DA64u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4E450u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4E470u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4E478u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4E48Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4E5B0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4E60Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4EED4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4F094u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4F9C8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4FD2Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4FE8Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4FF1Cu, &recomp_unit_0210, "recomp_unit_0210");
}
} // namespace psprecomp
