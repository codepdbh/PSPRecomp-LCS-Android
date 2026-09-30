#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0212[4093] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82,
    0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 88, 89, 0, 0, 90, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0,
    0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 0,
    0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 127, 0, 0,
    0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0,
    141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0,
    0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0,
    172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 181, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188,
    0, 189, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200,
};
void recomp_unit_0212_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B54000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0212[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B54000;
    case 2u: goto L_08B559C0;
    case 3u: goto L_08B55A00;
    case 4u: goto L_08B55A64;
    case 5u: goto L_08B55AF8;
    case 6u: goto L_08B55B28;
    case 7u: goto L_08B55B30;
    case 8u: goto L_08B55B3C;
    case 9u: goto L_08B55B4C;
    case 10u: goto L_08B55CC0;
    case 11u: goto L_08B55CC4;
    case 12u: goto L_08B55D14;
    case 13u: goto L_08B55D4C;
    case 14u: goto L_08B55F44;
    case 15u: goto L_08B55F9C;
    case 16u: goto L_08B55FD4;
    case 17u: goto L_08B564C4;
    case 18u: goto L_08B564DC;
    case 19u: goto L_08B56554;
    case 20u: goto L_08B56594;
    case 21u: goto L_08B5659C;
    case 22u: goto L_08B565A4;
    case 23u: goto L_08B565DC;
    case 24u: goto L_08B56670;
    case 25u: goto L_08B566D8;
    case 26u: goto L_08B566FC;
    case 27u: goto L_08B56784;
    case 28u: goto L_08B56790;
    case 29u: goto L_08B5679C;
    case 30u: goto L_08B567D0;
    case 31u: goto L_08B567E8;
    case 32u: goto L_08B56800;
    case 33u: goto L_08B56818;
    case 34u: goto L_08B56830;
    case 35u: goto L_08B56874;
    case 36u: goto L_08B568E0;
    case 37u: goto L_08B568E8;
    case 38u: goto L_08B56960;
    case 39u: goto L_08B56A44;
    case 40u: goto L_08B56A54;
    case 41u: goto L_08B56A6C;
    case 42u: goto L_08B56A98;
    case 43u: goto L_08B56AA0;
    case 44u: goto L_08B56AEC;
    case 45u: goto L_08B56AF4;
    case 46u: goto L_08B56B2C;
    case 47u: goto L_08B56BC0;
    case 48u: goto L_08B56BD0;
    case 49u: goto L_08B56C88;
    case 50u: goto L_08B56CB4;
    case 51u: goto L_08B56D14;
    case 52u: goto L_08B56D64;
    case 53u: goto L_08B56D70;
    case 54u: goto L_08B56D78;
    case 55u: goto L_08B56D80;
    case 56u: goto L_08B56DEC;
    case 57u: goto L_08B56E00;
    case 58u: goto L_08B56E70;
    case 59u: goto L_08B57294;
    case 60u: goto L_08B57340;
    case 61u: goto L_08B57348;
    case 62u: goto L_08B5734C;
    case 63u: goto L_08B57480;
    case 64u: goto L_08B57488;
    case 65u: goto L_08B574A4;
    case 66u: goto L_08B574C8;
    case 67u: goto L_08B574D8;
    case 68u: goto L_08B5752C;
    case 69u: goto L_08B5753C;
    case 70u: goto L_08B57548;
    case 71u: goto L_08B57564;
    case 72u: goto L_08B5756C;
    case 73u: goto L_08B57578;
    case 74u: goto L_08B575CC;
    case 75u: goto L_08B575D4;
    case 76u: goto L_08B575DC;
    case 77u: goto L_08B575F8;
    case 78u: goto L_08B57618;
    case 79u: goto L_08B57628;
    case 80u: goto L_08B57638;
    case 81u: goto L_08B57674;
    case 82u: goto L_08B5767C;
    case 83u: goto L_08B57694;
    case 84u: goto L_08B576AC;
    case 85u: goto L_08B576B4;
    case 86u: goto L_08B576C0;
    case 87u: goto L_08B576D0;
    case 88u: goto L_08B576D8;
    case 89u: goto L_08B576DC;
    case 90u: goto L_08B576E8;
    case 91u: goto L_08B576FC;
    case 92u: goto L_08B5771C;
    case 93u: goto L_08B57730;
    case 94u: goto L_08B57740;
    case 95u: goto L_08B57750;
    case 96u: goto L_08B57760;
    case 97u: goto L_08B5776C;
    case 98u: goto L_08B57784;
    case 99u: goto L_08B57790;
    case 100u: goto L_08B577A4;
    case 101u: goto L_08B577D0;
    case 102u: goto L_08B577E0;
    case 103u: goto L_08B577E8;
    case 104u: goto L_08B577F4;
    case 105u: goto L_08B5780C;
    case 106u: goto L_08B57814;
    case 107u: goto L_08B5781C;
    case 108u: goto L_08B57828;
    case 109u: goto L_08B57838;
    case 110u: goto L_08B57848;
    case 111u: goto L_08B57864;
    case 112u: goto L_08B57874;
    case 113u: goto L_08B57890;
    case 114u: goto L_08B57898;
    case 115u: goto L_08B578B4;
    case 116u: goto L_08B578DC;
    case 117u: goto L_08B578E4;
    case 118u: goto L_08B578EC;
    case 119u: goto L_08B57920;
    case 120u: goto L_08B57938;
    case 121u: goto L_08B57944;
    case 122u: goto L_08B57970;
    case 123u: goto L_08B5797C;
    case 124u: goto L_08B579B4;
    case 125u: goto L_08B579D8;
    case 126u: goto L_08B579E0;
    case 127u: goto L_08B579F4;
    case 128u: goto L_08B57A04;
    case 129u: goto L_08B57A14;
    case 130u: goto L_08B57A34;
    case 131u: goto L_08B57A44;
    case 132u: goto L_08B57A54;
    case 133u: goto L_08B57A60;
    case 134u: goto L_08B57A8C;
    case 135u: goto L_08B57A9C;
    case 136u: goto L_08B57AA4;
    case 137u: goto L_08B57AB8;
    case 138u: goto L_08B57AD4;
    case 139u: goto L_08B57AE8;
    case 140u: goto L_08B57AF4;
    case 141u: goto L_08B57B00;
    case 142u: goto L_08B57B18;
    case 143u: goto L_08B57B2C;
    case 144u: goto L_08B57B48;
    case 145u: goto L_08B57B58;
    case 146u: goto L_08B57B60;
    case 147u: goto L_08B57B68;
    case 148u: goto L_08B57B88;
    case 149u: goto L_08B57B94;
    case 150u: goto L_08B57BA0;
    case 151u: goto L_08B57BB0;
    case 152u: goto L_08B57BD4;
    case 153u: goto L_08B57BE0;
    case 154u: goto L_08B57BF4;
    case 155u: goto L_08B57C08;
    case 156u: goto L_08B57C10;
    case 157u: goto L_08B57C1C;
    case 158u: goto L_08B57C2C;
    case 159u: goto L_08B57C34;
    case 160u: goto L_08B57C44;
    case 161u: goto L_08B57C54;
    case 162u: goto L_08B57C74;
    case 163u: goto L_08B57C7C;
    case 164u: goto L_08B57C88;
    case 165u: goto L_08B57CC0;
    case 166u: goto L_08B57CE8;
    case 167u: goto L_08B57CF0;
    case 168u: goto L_08B57D2C;
    case 169u: goto L_08B57D48;
    case 170u: goto L_08B57D60;
    case 171u: goto L_08B57D6C;
    case 172u: goto L_08B57D80;
    case 173u: goto L_08B57D88;
    case 174u: goto L_08B57DC8;
    case 175u: goto L_08B57DD8;
    case 176u: goto L_08B57DF0;
    case 177u: goto L_08B57E14;
    case 178u: goto L_08B57E38;
    case 179u: goto L_08B57E58;
    case 180u: goto L_08B57E64;
    case 181u: goto L_08B57E6C;
    case 182u: goto L_08B57E88;
    case 183u: goto L_08B57E98;
    case 184u: goto L_08B57EAC;
    case 185u: goto L_08B57EC4;
    case 186u: goto L_08B57ED0;
    case 187u: goto L_08B57EF0;
    case 188u: goto L_08B57EFC;
    case 189u: goto L_08B57F04;
    case 190u: goto L_08B57F1C;
    case 191u: goto L_08B57F24;
    case 192u: goto L_08B57F34;
    case 193u: goto L_08B57F3C;
    case 194u: goto L_08B57F5C;
    case 195u: goto L_08B57F9C;
    case 196u: goto L_08B57FAC;
    case 197u: goto L_08B57FBC;
    case 198u: goto L_08B57FC8;
    case 199u: goto L_08B57FD0;
    case 200u: goto L_08B57FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B54000:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D4B640u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B559C0:
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    rt.unsupported(0x08B559CCu, 0x00000001u, "special? not lowered yet"); return;
L_08B55A00:
    (void)(0u << 16u);
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    rt.unsupported(0x08B55A40u, 0x40666666u, "unknown not lowered yet"); return;
L_08B55A64:
    (void)(ctx.gpr[1] << 0u);
    rt.unsupported(0x08B55A68u, 0x00010001u, "special? not lowered yet"); return;
L_08B55AF8:
    (void)(ctx.gpr[10] << 0u);
    if (ctx.gpr[10] == 0u) (void)(0u);
    if (ctx.gpr[10] == 0u) (void)(0u);
    if (ctx.gpr[10] == 0u) (void)(0u);
    if (ctx.gpr[10] == 0u) (void)(0u);
    if (ctx.gpr[10] == 0u) (void)(0u);
    rt.unsupported(0x08B55B10u, 0x03E80168u, "special? not lowered yet"); return;
L_08B55B28:
    rt.unsupported(0x08B55B2Cu, 0x10681518u, "control flow in delay slot"); return;
L_08B55B30:
    ctx.gpr[16] = (ctx.gpr[24] + static_cast<std::uint32_t>(6000));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[28];
    ctx.gpr[16] = (ctx.gpr[24] + static_cast<std::uint32_t>(8000));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0214, 214u>(ctx, &aot_mem); return;
      }
      goto L_08B55B3C;
    }
L_08B55B3C:
    ctx.gpr[24] = (static_cast<std::int32_t>(ctx.gpr[23]) < 1000 ? 1u : 0u);
    rt.unsupported(0x08B55B40u, 0x001401F4u, "special? not lowered yet"); return;
L_08B55B4C:
    ctx.gpr[16] = (0u << 2u);
    (void)(0u << 16u);
    ctx.gpr[16] = (0u << 2u);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    (void)(0u << 16u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    (void)(0u << 16u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    (void)(0u << 16u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    (void)(0u << 16u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    (void)(0u << 16u);
    rt.unsupported(0x08B55BD4u, 0x0018C295u, "special? not lowered yet"); return;
L_08B55CC0:
    rt.unsupported(0x08B55CC0u, 0x00000068u, "special? not lowered yet"); return;
L_08B55CC4:
    rt.unsupported(0x08B55CC8u, 0x08A87B8Cu, "control flow in delay slot"); return;
L_08B55D14:
    rt.unsupported(0x08B55D18u, 0x08B2A930u, "control flow in delay slot"); return;
L_08B55D4C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    (void)(0u << 16u);
    ctx.gpr[23] = (2621u << 16u);
    ctx.gpr[17] = (60293u << 16u);
    ctx.gpr[14] = (5243u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[28] = (10486u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[14] = (5243u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    ctx.gpr[24] = (20972u << 16u);
    ctx.gpr[26] = (57672u << 16u);
    ctx.gpr[29] = (28836u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    (void)(0u << 16u);
    ctx.gpr[23] = (2621u << 16u);
    ctx.gpr[17] = (60293u << 16u);
    ctx.gpr[14] = (5243u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[23] = (2621u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // nop
    // nop
    rt.unsupported(0x08B55EE8u, 0x40666666u, "unknown not lowered yet"); return;
L_08B55F44:
    // nop
    rt.unsupported(0x08B55F4Cu, 0x08B00C6Cu, "control flow in delay slot"); return;
L_08B55F9C:
    rt.unsupported(0x08B55F9Cu, 0x00726C70u, "special? not lowered yet"); return;
L_08B55FD4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B56300u, 0x00FFFFFFu, "special? not lowered yet"); return;
L_08B564C4:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 12u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 12u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 12u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 20u));
    if (static_cast<std::int32_t>(ctx.gpr[8]) >= 0) {
    (void)(ctx.gpr[1] >> 8u);
        goto L_08B578EC;
    }
    goto L_08B564DC;
L_08B564DC:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 4u));
    rt.unsupported(0x08B564E0u, 0x00010101u, "special? not lowered yet"); return;
L_08B56554:
    (void)(ctx.gpr[2] >> 8u);
    rt.unsupported(0x08B56558u, 0x03010201u, "special? not lowered yet"); return;
L_08B56594:
    rt.unsupported(0x08B56598u, 0x18161310u, "control flow in delay slot"); return;
L_08B5659C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[24]) > 0;
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(8737));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0214, 214u>(ctx, &aot_mem); return;
      }
      goto L_08B565A4;
    }
L_08B565A4:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10279 ? 1u : 0u);
    ctx.gpr[14] = (ctx.gpr[25] < static_cast<std::uint32_t>(11564) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] & 12592u);
    ctx.gpr[21] = (ctx.gpr[9] | 13363u);
    ctx.gpr[23] = (ctx.gpr[1] ^ 14134u);
    ctx.gpr[25] = (ctx.gpr[17] ^ 14648u);
    ctx.gpr[27] = (ctx.gpr[25] ^ 14906u);
    ctx.gpr[28] = (15419u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[30] = (15934u << 16u);
    ctx.gpr[31] = (16191u << 16u);
    ctx.gpr[31] = (16191u << 16u);
    rt.unsupported(0x08B565D4u, 0x00000001u, "special? not lowered yet"); return;
L_08B565DC:
    // nop
    rt.unsupported(0x08B565E4u, 0x08A9A428u, "control flow in delay slot"); return;
L_08B56670:
    (void)(ctx.hi);
    (void)(ctx.hi);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B56688u, 0x40666666u, "unknown not lowered yet"); return;
L_08B566D8:
    rt.unsupported(0x08B566DCu, 0x08B2B6E4u, "control flow in delay slot"); return;
L_08B566FC:
    rt.unsupported(0x08B56700u, 0x08B2B72Cu, "control flow in delay slot"); return;
L_08B56784:
    (void)(0u << 16u);
    // nop
    // nop
    goto L_08B56790;
L_08B56790:
    // nop
    (void)(0u << 16u);
    // nop
    goto L_08B5679C;
L_08B5679C:
    // nop
    // nop
    (void)(0u << 16u);
    rt.unsupported(0x08B567A8u, 0x42340000u, "unknown not lowered yet"); return;
L_08B567D0:
    ctx.gpr[9] = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[6] = (2706u << 16u);
    ctx.gpr[9] = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[14] = (64053u << 16u);
    goto L_08B567E8;
L_08B567E8:
    ctx.gpr[9] = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[18] = (47299u << 16u);
    ctx.gpr[9] = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[18] = (47299u << 16u);
    goto L_08B56800;
L_08B56800:
    ctx.gpr[31] = (26355u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[14] = (64053u << 16u);
    ctx.gpr[9] = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[18] = (47299u << 16u);
    goto L_08B56818;
L_08B56818:
    ctx.gpr[18] = (47299u << 16u);
    rt.unsupported(0x08B5681Cu, 0xC0060A92u, "unknown not lowered yet"); return;
L_08B56830:
    ctx.gpr[6] = (2706u << 16u);
    // nop
    ctx.gpr[6] = (2706u << 16u);
    ctx.gpr[9] = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[18] = (47299u << 16u);
    ctx.gpr[14] = (5243u << 16u);
    // nop
    rt.unsupported(0x08B56850u, 0x40666666u, "unknown not lowered yet"); return;
L_08B56874:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[12] = (52430u << 16u);
    // nop
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    // nop
    if (ctx.gpr[2] != ctx.gpr[4]) {
    rt.unsupported(0x08B568DCu, 0x401921FBu, "unknown not lowered yet"); return;
        (void)(ctx.pc = 0x08B61D3Cu, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B568E0;
L_08B568E0:
    // nop
    (void)(0u << 16u);
    goto L_08B568E8;
L_08B568E8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B5695Cu, 0x40500000u, "unknown not lowered yet"); return;
L_08B56960:
    rt.unsupported(0x08B56964u, 0x08B2B7ECu, "control flow in delay slot"); return;
L_08B56A44:
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    goto L_08B56A54;
L_08B56A54:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    goto L_08B56A6C;
L_08B56A6C:
    (void)(ctx.hi);
    // nop
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B56A98;
L_08B56A98:
    // nop
    // nop
    goto L_08B56AA0;
L_08B56AA0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    // nop
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B56AEC;
L_08B56AEC:
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    goto L_08B56AF4;
L_08B56AF4:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    (void)(0u >> 0u);
    // nop
    // nop
    // nop
    rt.unsupported(0x08B56B10u, 0x40666666u, "unknown not lowered yet"); return;
L_08B56B2C:
    rt.unsupported(0x08B56B2Cu, 0x00000085u, "special? not lowered yet"); return;
L_08B56BC0:
    // nop
    // nop
    // nop
    // nop
    goto L_08B56BD0;
L_08B56BD0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    // nop
    // nop
    // nop
    rt.unsupported(0x08B56C20u, 0x40666666u, "unknown not lowered yet"); return;
L_08B56C88:
    // nop
    rt.unsupported(0x08B56C90u, 0x088A72D8u, "control flow in delay slot"); return;
L_08B56CB4:
    rt.unsupported(0x08B56CB8u, 0x08AB83ECu, "control flow in delay slot"); return;
L_08B56D14:
    rt.unsupported(0x08B56D18u, 0x08AB79B4u, "control flow in delay slot"); return;
L_08B56D64:
    // nop
    rt.unsupported(0x08B56D6Cu, 0x08AB8774u, "control flow in delay slot"); return;
L_08B56D70:
    // nop
    // nop
    ctx.pc = 0x02AE4850u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B56D78:
    // nop
    // nop
    ctx.pc = 0x02AE5280u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B56D80:
    // nop
    rt.unsupported(0x08B56D88u, 0x40666666u, "unknown not lowered yet"); return;
    ctx.pc = 0x02AE5340u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B56DEC:
    rt.unsupported(0x08B56DECu, 0x42C80000u, "unknown not lowered yet"); return;
L_08B56E00:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B56E70;
L_08B56E70:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B57294;
L_08B57294:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B57340;
L_08B57340:
    // nop
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    // nop
      if (branch_taken) {
          goto L_08B57348;
      }
      goto L_08B5734C;
    }
L_08B57348:
    // nop
    goto L_08B5734C;
L_08B5734C:
    rt.unsupported(0x08B57350u, 0x0A1F0A1Fu, "control flow in delay slot"); return;
L_08B57480:
    if (ctx.gpr[18] == ctx.gpr[1]) {
    rt.unsupported(0x08B57484u, 0x44205345u, "cop1? not lowered yet"); return;
        (void)(ctx.pc = 0x08B695D0u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B57488;
L_08B57488:
    ctx.gpr[28] = (ctx.gpr[9] & 22081u);
    rt.unsupported(0x08B5748Cu, 0x4A202535u, "cop2/vfpu not lowered yet"); return;
L_08B574A4:
    rt.unsupported(0x08B574A4u, 0x202E2530u, "unknown not lowered yet"); return;
L_08B574C8:
    rt.unsupported(0x08B574C8u, 0x20595449u, "unknown not lowered yet"); return;
L_08B574D8:
    rt.unsupported(0x08B574D8u, 0x4A4D2053u, "cop2/vfpu not lowered yet"); return;
L_08B5752C:
    rt.unsupported(0x08B5752Cu, 0x20595449u, "unknown not lowered yet"); return;
L_08B5753C:
    rt.unsupported(0x08B5753Cu, 0x45505845u, "cop1? not lowered yet"); return;
L_08B57548:
    rt.unsupported(0x08B57548u, 0x44414F52u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B5754Cu, 0x41454420u, "unknown not lowered yet"); return;
L_08B57564:
    if (ctx.gpr[18] == ctx.gpr[4]) {
    rt.unsupported(0x08B57568u, 0x20455649u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0214, 214u>(ctx, &aot_mem); return;
    }
    goto L_08B5756C;
L_08B5756C:
    rt.unsupported(0x08B5756Cu, 0x4543494Eu, "cop1? not lowered yet"); return;
L_08B57578:
    rt.unsupported(0x08B57578u, 0x45455053u, "cop1? not lowered yet"); return;
L_08B575CC:
    if (ctx.gpr[2] != ctx.gpr[21]) {
    ctx.gpr[14] = (ctx.gpr[18] ^ 20297u);
        (void)(ctx.pc = 0x08B67ADCu, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B575D4;
L_08B575D4:
    if (ctx.gpr[18] == ctx.gpr[1]) {
    rt.unsupported(0x08B575D8u, 0x4B43414Au, "cop2/vfpu not lowered yet"); return;
        (void)(ctx.pc = 0x08B68258u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B575DC;
L_08B575DC:
    rt.unsupported(0x08B575DCu, 0x20474E49u, "unknown not lowered yet"); return;
L_08B575F8:
    rt.unsupported(0x08B575F8u, 0x48202E20u, "cop2/vfpu not lowered yet"); return;
L_08B57618:
    rt.unsupported(0x08B57618u, 0x4E484345u, "unknown not lowered yet"); return;
L_08B57628:
    rt.unsupported(0x08B57628u, 0x4C554341u, "unknown not lowered yet"); return;
L_08B57638:
    rt.unsupported(0x08B57638u, 0x20595241u, "unknown not lowered yet"); return;
L_08B57674:
    if (ctx.gpr[1] != 0u) {
    rt.unsupported(0x08B57678u, 0x4D204548u, "unknown not lowered yet"); return;
        (void)(ctx.pc = 0x08B62784u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B5767C;
L_08B5767C:
    rt.unsupported(0x08B5767Cu, 0x43495355u, "unknown not lowered yet"); return;
L_08B57694:
    rt.unsupported(0x08B57694u, 0x46204F54u, "cop1? not lowered yet"); return;
L_08B576AC:
    rt.unsupported(0x08B576B0u, 0x52412045u, "control flow in delay slot"); return;
L_08B576B4:
    rt.unsupported(0x08B576B4u, 0x4F532045u, "unknown not lowered yet"); return;
L_08B576C0:
    rt.unsupported(0x08B576C0u, 0x41542D4Cu, "unknown not lowered yet"); return;
L_08B576D0:
    if (ctx.gpr[1] != 0u) {
    rt.unsupported(0x08B576D4u, 0x45524548u, "cop1? not lowered yet"); return;
        (void)(ctx.pc = 0x08B6AFF8u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B576D8;
L_08B576D8:
    { const bool signed_ok = ctx.execute_signed_add(4u, 1u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B576D8u, 0x00202120u); return; } }
    goto L_08B576DC;
L_08B576DC:
    rt.unsupported(0x08B576DCu, 0x45485420u, "cop1? not lowered yet"); return;
L_08B576E8:
    rt.unsupported(0x08B576E8u, 0x49572920u, "cop2/vfpu not lowered yet"); return;
L_08B576FC:
    rt.unsupported(0x08B576FCu, 0x49422041u, "cop2/vfpu not lowered yet"); return;
L_08B5771C:
    rt.unsupported(0x08B5771Cu, 0x4D454854u, "unknown not lowered yet"); return;
L_08B57730:
    rt.unsupported(0x08B57730u, 0x2053534Fu, "unknown not lowered yet"); return;
L_08B57740:
    rt.unsupported(0x08B57740u, 0x41482053u, "unknown not lowered yet"); return;
L_08B57750:
    rt.unsupported(0x08B57750u, 0x20544920u, "unknown not lowered yet"); return;
L_08B57760:
    rt.unsupported(0x08B57760u, 0x20454854u, "unknown not lowered yet"); return;
L_08B5776C:
    rt.unsupported(0x08B5776Cu, 0x2046464Fu, "unknown not lowered yet"); return;
L_08B57784:
    rt.unsupported(0x08B57784u, 0x4120454Bu, "unknown not lowered yet"); return;
L_08B57790:
    rt.unsupported(0x08B57790u, 0x444E4957u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B57794u, 0x202E2029u, "unknown not lowered yet"); return;
L_08B577A4:
    rt.unsupported(0x08B577A4u, 0x4E455645u, "unknown not lowered yet"); return;
L_08B577D0:
    rt.unsupported(0x08B577D0u, 0x20214E4Fu, "unknown not lowered yet"); return;
L_08B577E0:
    if (ctx.gpr[2] != ctx.gpr[9]) {
    rt.unsupported(0x08B577E4u, 0x4E4F5320u, "unknown not lowered yet"); return;
        (void)(ctx.pc = 0x08B69864u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B577E8;
L_08B577E8:
    rt.unsupported(0x08B577E8u, 0x41292047u, "unknown not lowered yet"); return;
L_08B577F4:
    rt.unsupported(0x08B577F4u, 0x45534142u, "cop1? not lowered yet"); return;
L_08B5780C:
    if (ctx.gpr[10] != ctx.gpr[15]) {
    rt.unsupported(0x08B57810u, 0x45524120u, "cop1? not lowered yet"); return;
        (void)(ctx.pc = 0x08B6DC90u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B57814;
L_08B57814:
    if (ctx.gpr[18] == ctx.gpr[21]) {
    rt.unsupported(0x08B57818u, 0x4F542045u, "unknown not lowered yet"); return;
        (void)(ctx.pc = 0x08B6C498u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B5781C;
L_08B5781C:
    rt.unsupported(0x08B5781Cu, 0x41454C20u, "unknown not lowered yet"); return;
L_08B57828:
    rt.unsupported(0x08B57828u, 0x4D532041u, "unknown not lowered yet"); return;
L_08B57838:
    rt.unsupported(0x08B57838u, 0x20544146u, "unknown not lowered yet"); return;
L_08B57848:
    rt.unsupported(0x08B57848u, 0x45485420u, "cop1? not lowered yet"); return;
L_08B57864:
    rt.unsupported(0x08B57864u, 0x43495355u, "unknown not lowered yet"); return;
L_08B57874:
    rt.unsupported(0x08B57874u, 0x4E555220u, "unknown not lowered yet"); return;
L_08B57890:
    if (ctx.gpr[18] == ctx.gpr[5]) {
    rt.unsupported(0x08B57894u, 0x46412053u, "cop1? not lowered yet"); return;
        (void)(ctx.pc = 0x08B6C998u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B57898;
L_08B57898:
    rt.unsupported(0x08B57898u, 0x20524554u, "unknown not lowered yet"); return;
L_08B578B4:
    rt.unsupported(0x08B578B4u, 0x20595352u, "unknown not lowered yet"); return;
L_08B578DC:
    rt.unsupported(0x08B578E0u, 0x52472045u, "control flow in delay slot"); return;
L_08B578E4:
    if (ctx.gpr[26] == ctx.gpr[16]) {
    rt.unsupported(0x08B578E8u, 0x47525520u, "cop1? not lowered yet"); return;
        (void)(ctx.pc = 0x08B6CE24u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B578EC;
L_08B578EC:
    rt.unsupported(0x08B578ECu, 0x43204445u, "unknown not lowered yet"); return;
L_08B57920:
    rt.unsupported(0x08B57920u, 0x2059414Cu, "unknown not lowered yet"); return;
L_08B57938:
    rt.unsupported(0x08B57938u, 0x444C524Fu, "unsupported CFC1 control register"); return;
    (void)(ctx.gpr[17] < static_cast<std::uint32_t>(11808) ? 1u : 0u);
    { const bool signed_ok = ctx.execute_signed_add(5u, 1u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B57940u, 0x00202E20u); return; } }
    goto L_08B57944;
L_08B57944:
    rt.unsupported(0x08B57944u, 0x45485420u, "cop1? not lowered yet"); return;
L_08B57970:
    rt.unsupported(0x08B57970u, 0x20595449u, "unknown not lowered yet"); return;
L_08B5797C:
    rt.unsupported(0x08B5797Cu, 0x45524120u, "cop1? not lowered yet"); return;
L_08B579B4:
    rt.unsupported(0x08B579B4u, 0x4C4B4345u, "unknown not lowered yet"); return;
L_08B579D8:
    if (ctx.gpr[26] == ctx.gpr[9]) {
    rt.unsupported(0x08B579DCu, 0x41455220u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0214, 214u>(ctx, &aot_mem); return;
    }
    goto L_08B579E0;
L_08B579E0:
    rt.unsupported(0x08B579E0u, 0x20594C4Cu, "unknown not lowered yet"); return;
L_08B579F4:
    rt.unsupported(0x08B579F4u, 0x20534543u, "unknown not lowered yet"); return;
L_08B57A04:
    rt.unsupported(0x08B57A04u, 0x20464F20u, "unknown not lowered yet"); return;
L_08B57A14:
    rt.unsupported(0x08B57A14u, 0x20544148u, "unknown not lowered yet"); return;
L_08B57A34:
    rt.unsupported(0x08B57A34u, 0x202E5345u, "unknown not lowered yet"); return;
L_08B57A44:
    rt.unsupported(0x08B57A44u, 0x4147524Fu, "unknown not lowered yet"); return;
L_08B57A54:
    rt.unsupported(0x08B57A54u, 0x44205245u, "cop1? not lowered yet"); return;
L_08B57A60:
    rt.unsupported(0x08B57A60u, 0x20544920u, "unknown not lowered yet"); return;
L_08B57A8C:
    rt.unsupported(0x08B57A8Cu, 0x49534120u, "cop2/vfpu not lowered yet"); return;
L_08B57A9C:
    if (ctx.gpr[10] != ctx.gpr[4]) {
    rt.unsupported(0x08B57AA0u, 0x4E45474Cu, "unknown not lowered yet"); return;
        (void)(ctx.pc = 0x08B6B3C4u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B57AA4;
L_08B57AA4:
    rt.unsupported(0x08B57AA4u, 0x4F204543u, "unknown not lowered yet"); return;
L_08B57AB8:
    rt.unsupported(0x08B57AB8u, 0x4E454D52u, "unknown not lowered yet"); return;
L_08B57AD4:
    (void)(static_cast<std::int32_t>(ctx.gpr[9]) < 11347 ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[10]) < 18515 ? 1u : 0u);
    rt.unsupported(0x08B57ADCu, 0x20412053u, "unknown not lowered yet"); return;
L_08B57AE8:
    rt.unsupported(0x08B57AE8u, 0x4E200020u, "unknown not lowered yet"); return;
L_08B57AF4:
    (void)(static_cast<std::int32_t>(ctx.gpr[9]) < 18254 ? 1u : 0u);
    if (ctx.gpr[18] != ctx.gpr[1]) {
    rt.unsupported(0x08B57AFCu, 0x45572059u, "cop1? not lowered yet"); return;
        (void)(ctx.pc = 0x08B6901Cu, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B57B00;
L_08B57B00:
    rt.unsupported(0x08B57B00u, 0x4E4F5041u, "unknown not lowered yet"); return;
L_08B57B18:
    rt.unsupported(0x08B57B18u, 0x20444C49u, "unknown not lowered yet"); return;
L_08B57B2C:
    rt.unsupported(0x08B57B2Cu, 0x45555145u, "cop1? not lowered yet"); return;
L_08B57B48:
    rt.unsupported(0x08B57B48u, 0x43415254u, "unknown not lowered yet"); return;
L_08B57B58:
    if (ctx.gpr[26] == ctx.gpr[16]) {
    rt.unsupported(0x08B57B5Cu, 0x45524120u, "cop1? not lowered yet"); return;
        (void)(ctx.pc = 0x08B6A07Cu, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B57B60;
L_08B57B60:
    if (ctx.gpr[26] != ctx.gpr[15]) {
    rt.unsupported(0x08B57B64u, 0x4E41204Eu, "unknown not lowered yet"); return;
        (void)(ctx.pc = 0x08B68BE4u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B57B68;
L_08B57B68:
    rt.unsupported(0x08B57B68u, 0x4F532044u, "unknown not lowered yet"); return;
L_08B57B88:
    rt.unsupported(0x08B57B88u, 0x4D205329u, "unknown not lowered yet"); return;
L_08B57B94:
    rt.unsupported(0x08B57B94u, 0x4B434F4Cu, "cop2/vfpu not lowered yet"); return;
L_08B57BA0:
    rt.unsupported(0x08B57BA0u, 0x202E202Eu, "unknown not lowered yet"); return;
L_08B57BB0:
    rt.unsupported(0x08B57BB0u, 0x20532954u, "unknown not lowered yet"); return;
L_08B57BD4:
    rt.unsupported(0x08B57BD4u, 0x204E414Cu, "unknown not lowered yet"); return;
L_08B57BE0:
    rt.unsupported(0x08B57BE0u, 0x45455246u, "cop1? not lowered yet"); return;
L_08B57BF4:
    rt.unsupported(0x08B57BF4u, 0x20594220u, "unknown not lowered yet"); return;
L_08B57C08:
    rt.unsupported(0x08B57C0Cu, 0x55422050u, "control flow in delay slot"); return;
L_08B57C10:
    rt.unsupported(0x08B57C10u, 0x41204646u, "unknown not lowered yet"); return;
L_08B57C1C:
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[10]) < 18720 ? 1u : 0u);
    rt.unsupported(0x08B57C20u, 0x49542053u, "cop2/vfpu not lowered yet"); return;
L_08B57C2C:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B57C30u, 0x48542048u, "cop2/vfpu not lowered yet"); return;
        (void)(ctx.pc = 0x08B69160u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B57C34;
L_08B57C34:
    rt.unsupported(0x08B57C34u, 0x45482045u, "cop1? not lowered yet"); return;
L_08B57C44:
    rt.unsupported(0x08B57C44u, 0x20444E41u, "unknown not lowered yet"); return;
L_08B57C54:
    rt.unsupported(0x08B57C54u, 0x214D4529u, "unknown not lowered yet"); return;
L_08B57C74:
    if (ctx.gpr[1] == 0u) {
    rt.unsupported(0x08B57C78u, 0x49564552u, "cop2/vfpu not lowered yet"); return;
        (void)(ctx.pc = 0x08B6AD7Cu, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B57C7C;
L_08B57C7C:
    rt.unsupported(0x08B57C7Cu, 0x4E205745u, "unknown not lowered yet"); return;
L_08B57C88:
    rt.unsupported(0x08B57C88u, 0x42554629u, "unknown not lowered yet"); return;
L_08B57CC0:
    rt.unsupported(0x08B57CC0u, 0x204E4548u, "unknown not lowered yet"); return;
L_08B57CE8:
    rt.unsupported(0x08B57CECu, 0x59525420u, "control flow in delay slot"); return;
L_08B57CF0:
    rt.unsupported(0x08B57CF0u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B57D2C:
    rt.unsupported(0x08B57D2Cu, 0x4C422044u, "unknown not lowered yet"); return;
L_08B57D48:
    rt.unsupported(0x08B57D48u, 0x49545320u, "cop2/vfpu not lowered yet"); return;
L_08B57D60:
    rt.unsupported(0x08B57D60u, 0x49545320u, "cop2/vfpu not lowered yet"); return;
L_08B57D6C:
    rt.unsupported(0x08B57D6Cu, 0x203A474Eu, "unknown not lowered yet"); return;
L_08B57D80:
    if (ctx.gpr[1] != 0u) {
    rt.unsupported(0x08B57D84u, 0x20534948u, "unknown not lowered yet"); return;
        (void)(ctx.pc = 0x08B63204u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B57D88;
L_08B57D88:
    rt.unsupported(0x08B57D88u, 0x454D4954u, "cop1? not lowered yet"); return;
L_08B57DC8:
    rt.unsupported(0x08B57DC8u, 0x41525420u, "unknown not lowered yet"); return;
L_08B57DD8:
    rt.unsupported(0x08B57DD8u, 0x4C494D20u, "unknown not lowered yet"); return;
L_08B57DF0:
    rt.unsupported(0x08B57DF0u, 0x4C204554u, "unknown not lowered yet"); return;
L_08B57E14:
    rt.unsupported(0x08B57E14u, 0x45444153u, "cop1? not lowered yet"); return;
L_08B57E38:
    rt.unsupported(0x08B57E38u, 0x4F442053u, "unknown not lowered yet"); return;
L_08B57E58:
    rt.unsupported(0x08B57E58u, 0x202E202Eu, "unknown not lowered yet"); return;
L_08B57E64:
    rt.unsupported(0x08B57E68u, 0x554C4620u, "control flow in delay slot"); return;
L_08B57E6C:
    rt.unsupported(0x08B57E6Cu, 0x202C4853u, "unknown not lowered yet"); return;
L_08B57E88:
    rt.unsupported(0x08B57E88u, 0x4B454557u, "cop2/vfpu not lowered yet"); return;
L_08B57E98:
    rt.unsupported(0x08B57E98u, 0x4D204545u, "unknown not lowered yet"); return;
L_08B57EAC:
    rt.unsupported(0x08B57EACu, 0x20454B41u, "unknown not lowered yet"); return;
L_08B57EC4:
    rt.unsupported(0x08B57EC4u, 0x43555320u, "unknown not lowered yet"); return;
L_08B57ED0:
    rt.unsupported(0x08B57ED0u, 0x454D4F43u, "cop1? not lowered yet"); return;
L_08B57EF0:
    rt.unsupported(0x08B57EF0u, 0x4E4F4954u, "unknown not lowered yet"); return;
L_08B57EFC:
    rt.unsupported(0x08B57EFCu, 0x45495245u, "cop1? not lowered yet"); return;
L_08B57F04:
    rt.unsupported(0x08B57F04u, 0x4E49544Eu, "unknown not lowered yet"); return;
L_08B57F1C:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B57F20u, 0x4D4C4C41u, "unknown not lowered yet"); return;
        (void)(ctx.pc = 0x08B6B844u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B57F24;
L_08B57F24:
    rt.unsupported(0x08B57F24u, 0x20544E45u, "unknown not lowered yet"); return;
L_08B57F34:
    if (ctx.gpr[10] != ctx.gpr[18]) {
    rt.unsupported(0x08B57F38u, 0x4D204B4Eu, "unknown not lowered yet"); return;
        (void)(ctx.pc = 0x08B6A084u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B57F3C;
L_08B57F3C:
    rt.unsupported(0x08B57F3Cu, 0x4B532059u, "cop2/vfpu not lowered yet"); return;
L_08B57F5C:
    rt.unsupported(0x08B57F5Cu, 0x20464920u, "unknown not lowered yet"); return;
L_08B57F9C:
    rt.unsupported(0x08B57F9Cu, 0x46202E20u, "cop1? not lowered yet"); return;
L_08B57FAC:
    rt.unsupported(0x08B57FACu, 0x20454C44u, "unknown not lowered yet"); return;
L_08B57FBC:
    rt.unsupported(0x08B57FBCu, 0x45534145u, "cop1? not lowered yet"); return;
L_08B57FC8:
    rt.unsupported(0x08B57FCCu, 0x50535341u, "control flow in delay slot"); return;
L_08B57FD0:
    rt.unsupported(0x08B57FD0u, 0x2054524Fu, "unknown not lowered yet"); return;
L_08B57FF0:
    rt.unsupported(0x08B57FF0u, 0x454C4B43u, "cop1? not lowered yet"); return;
}

void recomp_unit_0212(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0212_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_212(Runtime &runtime) {
    runtime.register_generated_unit(212u, 0x08B54000u, 16384u, &recomp_unit_0212, &recomp_unit_0212_entry);
    runtime.register_function(0x08B54000u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B559C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55A00u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55A64u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55AF8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55B28u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55B30u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55B3Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55B4Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55CC0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55CC4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55D14u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55D4Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55F44u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55F9Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55FD4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B564C4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B564DCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56554u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56594u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5659Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B565A4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B565DCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56670u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B566D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B566FCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56784u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56790u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5679Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B567D0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B567E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56800u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56818u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56830u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56874u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B568E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B568E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56960u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56A44u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56A54u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56A6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56A98u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56AA0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56AECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56AF4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56B2Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56BC0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56BD0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56C88u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56CB4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56D14u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56D64u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56D70u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56D78u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56D80u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56DECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56E00u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56E70u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57294u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57340u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57348u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5734Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57480u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57488u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B574A4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B574C8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B574D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5752Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5753Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57548u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57564u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5756Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57578u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B575CCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B575D4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B575DCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B575F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57618u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57628u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57638u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57674u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5767Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57694u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576ACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576D0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576DCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576FCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5771Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57730u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57740u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57750u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57760u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5776Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57784u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57790u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B577A4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B577D0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B577E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B577E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B577F4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5780Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57814u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5781Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57828u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57838u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57848u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57864u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57874u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57890u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57898u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B578B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B578DCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B578E4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B578ECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57920u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57938u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57944u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57970u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5797Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B579B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B579D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B579E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B579F4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A04u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A14u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A34u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A44u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A54u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A60u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A8Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A9Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57AA4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57AB8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57AD4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57AE8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57AF4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B00u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B18u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B2Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B48u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B58u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B60u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B68u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B88u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B94u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57BA0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57BB0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57BD4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57BE0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57BF4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C08u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C10u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C1Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C2Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C34u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C44u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C54u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C74u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C7Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C88u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57CC0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57CE8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57CF0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57D2Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57D48u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57D60u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57D6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57D80u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57D88u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57DC8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57DD8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57DF0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57E14u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57E38u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57E58u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57E64u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57E6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57E88u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57E98u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57EACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57EC4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57ED0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57EF0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57EFCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F04u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F1Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F24u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F34u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F3Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F5Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F9Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57FACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57FBCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57FC8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57FD0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57FF0u, &recomp_unit_0212, "recomp_unit_0212");
}
} // namespace psprecomp
