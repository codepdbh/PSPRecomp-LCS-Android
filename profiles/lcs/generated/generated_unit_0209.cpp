#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0209[4043] = {
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
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 29,
    0, 0, 0, 0, 0, 0, 0, 30, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 36, 37, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 41, 42, 0, 0, 0, 0, 0, 0, 0, 43, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 59, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105,
    0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 0, 114, 115, 0, 0,
    116, 117, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 124, 125, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 130,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134,
};
void recomp_unit_0209_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B48000u;
        entry_id = (entry_delta < 16172u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0209[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B48000;
    case 2u: goto L_08B48580;
    case 3u: goto L_08B485A8;
    case 4u: goto L_08B486C8;
    case 5u: goto L_08B48794;
    case 6u: goto L_08B487AC;
    case 7u: goto L_08B487D0;
    case 8u: goto L_08B4880C;
    case 9u: goto L_08B4881C;
    case 10u: goto L_08B48864;
    case 11u: goto L_08B48884;
    case 12u: goto L_08B488AC;
    case 13u: goto L_08B488C8;
    case 14u: goto L_08B488D4;
    case 15u: goto L_08B488FC;
    case 16u: goto L_08B48924;
    case 17u: goto L_08B4894C;
    case 18u: goto L_08B48974;
    case 19u: goto L_08B48AEC;
    case 20u: goto L_08B48B90;
    case 21u: goto L_08B48D54;
    case 22u: goto L_08B48D8C;
    case 23u: goto L_08B48D90;
    case 24u: goto L_08B48DB4;
    case 25u: goto L_08B48DC4;
    case 26u: goto L_08B48DC8;
    case 27u: goto L_08B48DD8;
    case 28u: goto L_08B48DE4;
    case 29u: goto L_08B48DFC;
    case 30u: goto L_08B48E1C;
    case 31u: goto L_08B48E20;
    case 32u: goto L_08B48E40;
    case 33u: goto L_08B48E64;
    case 34u: goto L_08B48E88;
    case 35u: goto L_08B48EA8;
    case 36u: goto L_08B48EAC;
    case 37u: goto L_08B48EB0;
    case 38u: goto L_08B48ECC;
    case 39u: goto L_08B48ED4;
    case 40u: goto L_08B48EF0;
    case 41u: goto L_08B48F10;
    case 42u: goto L_08B48F14;
    case 43u: goto L_08B48F34;
    case 44u: goto L_08B48F38;
    case 45u: goto L_08B48F58;
    case 46u: goto L_08B48F60;
    case 47u: goto L_08B48F7C;
    case 48u: goto L_08B48FA0;
    case 49u: goto L_08B48FC0;
    case 50u: goto L_08B48FC4;
    case 51u: goto L_08B48FE4;
    case 52u: goto L_08B49008;
    case 53u: goto L_08B4902C;
    case 54u: goto L_08B4904C;
    case 55u: goto L_08B49050;
    case 56u: goto L_08B49070;
    case 57u: goto L_08B49094;
    case 58u: goto L_08B490BC;
    case 59u: goto L_08B490C0;
    case 60u: goto L_08B490C4;
    case 61u: goto L_08B490E8;
    case 62u: goto L_08B49110;
    case 63u: goto L_08B49134;
    case 64u: goto L_08B49148;
    case 65u: goto L_08B49158;
    case 66u: goto L_08B49198;
    case 67u: goto L_08B491EC;
    case 68u: goto L_08B491F4;
    case 69u: goto L_08B49238;
    case 70u: goto L_08B49280;
    case 71u: goto L_08B49298;
    case 72u: goto L_08B492C0;
    case 73u: goto L_08B492C8;
    case 74u: goto L_08B492D8;
    case 75u: goto L_08B49328;
    case 76u: goto L_08B49350;
    case 77u: goto L_08B493E0;
    case 78u: goto L_08B49400;
    case 79u: goto L_08B49438;
    case 80u: goto L_08B49748;
    case 81u: goto L_08B497F4;
    case 82u: goto L_08B49800;
    case 83u: goto L_08B49820;
    case 84u: goto L_08B49844;
    case 85u: goto L_08B49954;
    case 86u: goto L_08B49978;
    case 87u: goto L_08B499A4;
    case 88u: goto L_08B499BC;
    case 89u: goto L_08B499CC;
    case 90u: goto L_08B49AC0;
    case 91u: goto L_08B49C08;
    case 92u: goto L_08B49E58;
    case 93u: goto L_08B4A078;
    case 94u: goto L_08B4A0C4;
    case 95u: goto L_08B4A190;
    case 96u: goto L_08B4A1A0;
    case 97u: goto L_08B4A424;
    case 98u: goto L_08B4A524;
    case 99u: goto L_08B4A550;
    case 100u: goto L_08B4A650;
    case 101u: goto L_08B4A87C;
    case 102u: goto L_08B4AAA8;
    case 103u: goto L_08B4ACD4;
    case 104u: goto L_08B4AE6C;
    case 105u: goto L_08B4AE7C;
    case 106u: goto L_08B4AE8C;
    case 107u: goto L_08B4AE9C;
    case 108u: goto L_08B4AEAC;
    case 109u: goto L_08B4AEB8;
    case 110u: goto L_08B4AEC8;
    case 111u: goto L_08B4AED4;
    case 112u: goto L_08B4AEDC;
    case 113u: goto L_08B4AEE4;
    case 114u: goto L_08B4AEF0;
    case 115u: goto L_08B4AEF4;
    case 116u: goto L_08B4AF00;
    case 117u: goto L_08B4AF04;
    case 118u: goto L_08B4AF14;
    case 119u: goto L_08B4AF28;
    case 120u: goto L_08B4B12C;
    case 121u: goto L_08B4B2F8;
    case 122u: goto L_08B4BAB0;
    case 123u: goto L_08B4BAF0;
    case 124u: goto L_08B4BAF4;
    case 125u: goto L_08B4BAF8;
    case 126u: goto L_08B4BB10;
    case 127u: goto L_08B4BB20;
    case 128u: goto L_08B4BBFC;
    case 129u: goto L_08B4BC78;
    case 130u: goto L_08B4BC7C;
    case 131u: goto L_08B4BDA4;
    case 132u: goto L_08B4BE64;
    case 133u: goto L_08B4BF04;
    case 134u: goto L_08B4BF28;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B48000:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B48580;
L_08B48580:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B485A8;
L_08B485A8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B486C8;
L_08B486C8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B48794;
L_08B48794:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B487AC;
L_08B487AC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B487D0;
L_08B487D0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4880C;
L_08B4880C:
    // nop
    // nop
    // nop
    // nop
    goto L_08B4881C;
L_08B4881C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B48864;
L_08B48864:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B48884;
L_08B48884:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B488AC;
L_08B488AC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B488C8;
L_08B488C8:
    // nop
    // nop
    // nop
    goto L_08B488D4;
L_08B488D4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B488FC;
L_08B488FC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B48924;
L_08B48924:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4894C;
L_08B4894C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B48974;
L_08B48974:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B48AEC;
L_08B48AEC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B48B90;
L_08B48B90:
    rt.unsupported(0x08B48B90u, 0x6B6F6D73u, "unknown not lowered yet"); return;
L_08B48D54:
    rt.unsupported(0x08B48D54u, 0x0033305Fu, "special? not lowered yet"); return;
L_08B48D8C:
    rt.unsupported(0x08B48D8Cu, 0x0033305Fu, "special? not lowered yet"); return;
L_08B48D90:
    rt.unsupported(0x08B48D90u, 0x72616300u, "unknown not lowered yet"); return;
L_08B48DB4:
    // nop
    ctx.gpr[25] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(-26214), ctx.gpr[25]));
    ctx.gpr[9] = (39321u << 16u);
    ctx.gpr[25] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(-26214), ctx.gpr[25]));
    goto L_08B48DC4;
L_08B48DC4:
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B48DC8;
L_08B48DC8:
    // nop
    // nop
    // nop
    ctx.pc = 0x02662D30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B48DD8:
    // nop
    // nop
    // nop
    goto L_08B48DE4;
L_08B48DE4:
    // nop
    (void)(0u >> 0u);
    (void)(0u >> (0u & 31u));
    // nop
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    goto L_08B48DFC;
L_08B48DFC:
    // nop
    rt.unsupported(0x08B48E00u, 0x00000001u, "special? not lowered yet"); return;
L_08B48E1C:
    // nop
    goto L_08B48E20;
L_08B48E20:
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    (void)(0u << 16u);
    // nop
    rt.unsupported(0x08B48E30u, 0x00000001u, "special? not lowered yet"); return;
L_08B48E40:
    (void)(0u << 16u);
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(0u >> 0u);
    ctx.gpr[21] = (49807u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // nop
    (void)(0u << (0u & 31u));
    goto L_08B48E64;
L_08B48E64:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // nop
    rt.unsupported(0x08B48E78u, 0x0000000Cu, "syscall not lowered yet"); return;
L_08B48E88:
    ctx.gpr[12] = (52429u << 16u);
    // nop
    if (0u != 0u) (void)(0u);
    rt.unsupported(0x08B48E94u, 0x00000005u, "special? not lowered yet"); return;
L_08B48EA8:
    jump_target = 0u;
    ctx.gpr[31] = (0x08B48EB0u);
    (void)(0u << (0u & 31u));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B48EB0u) goto L_08B48EB0;
    return;
L_08B48EAC:
    (void)(0u << (0u & 31u));
    goto L_08B48EB0;
L_08B48EB0:
    // nop
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    // nop
    if (0u == 0u) (void)(0u);
    rt.unsupported(0x08B48EC4u, 0x00000005u, "special? not lowered yet"); return;
L_08B48ECC:
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    goto L_08B48ED4;
L_08B48ED4:
    // nop
    rt.unsupported(0x08B48EDCu, 0x08B03418u, "control flow in delay slot"); return;
L_08B48EF0:
    // nop
    // nop
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    // nop
    // nop
    // nop
    goto L_08B48F10;
L_08B48F10:
    // nop
    goto L_08B48F14;
L_08B48F14:
    // nop
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    rt.unsupported(0x08B48F2Cu, 0x41200000u, "unknown not lowered yet"); return;
L_08B48F34:
    ctx.gpr[6] = (26214u << 16u);
    goto L_08B48F38;
L_08B48F38:
    // nop
    rt.unsupported(0x08B48F3Cu, 0x000005DCu, "special? not lowered yet"); return;
L_08B48F58:
    (void)(0u >> 0u);
    // nop
    goto L_08B48F60;
L_08B48F60:
    rt.unsupported(0x08B48F60u, 0x000000CDu, "special? not lowered yet"); return;
L_08B48F7C:
    ctx.gpr[1] = (18350u << 16u);
    ctx.gpr[10] = (49283u << 16u);
    rt.unsupported(0x08B48F84u, 0x000000CEu, "special? not lowered yet"); return;
L_08B48FA0:
    ctx.gpr[1] = (18350u << 16u);
    ctx.gpr[2] = (36700u << 16u);
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    // nop
    rt.unsupported(0x08B48FB0u, 0x000001F4u, "special? not lowered yet"); return;
L_08B48FC0:
    (void)(0u >> (0u & 31u));
    goto L_08B48FC4;
L_08B48FC4:
    // nop
    rt.unsupported(0x08B48FC8u, 0x00000001u, "special? not lowered yet"); return;
L_08B48FE4:
    // nop
    (void)(0u << 16u);
    rt.unsupported(0x08B48FECu, 0x41700000u, "unknown not lowered yet"); return;
L_08B49008:
    // nop
    (void)(0u << 16u);
    // nop
    // nop
    rt.unsupported(0x08B49018u, 0x00000030u, "special? not lowered yet"); return;
L_08B4902C:
    ctx.gpr[25] = (39321u << 16u);
    rt.unsupported(0x08B49030u, 0xD2F1A9FCu, "vfpu4 not lowered yet"); return;
L_08B4904C:
    // nop
    goto L_08B49050;
L_08B49050:
    rt.unsupported(0x08B49050u, 0x000005DCu, "special? not lowered yet"); return;
L_08B49070:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B49080u, 0x40666666u, "unknown not lowered yet"); return;
L_08B49094:
    // nop
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    (void)(0u << 16u);
    ctx.gpr[18] = (18725u << 16u);
    // nop
    // nop
    // nop
    // nop
    goto L_08B490BC;
L_08B490BC:
    // nop
    goto L_08B490C0;
L_08B490C0:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B490C0u, 0x00000020u); return; } }
    goto L_08B490C4;
L_08B490C4:
    rt.unsupported(0x08B490C4u, 0x00000030u, "special? not lowered yet"); return;
L_08B490E8:
    // nop
    // nop
    // nop
    (void)(ctx.gpr[1] << 0u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[1]) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[1]) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // nop
    (void)(0u >> 0u);
    // nop
    goto L_08B49110;
L_08B49110:
    // nop
    rt.unsupported(0x08B49118u, 0x08B1C4D0u, "control flow in delay slot"); return;
L_08B49134:
    rt.unsupported(0x08B49134u, 0x47656854u, "cop1? not lowered yet"); return;
L_08B49148:
    // nop
    rt.unsupported(0x08B49150u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B49158:
    rt.unsupported(0x08B4915Cu, 0x089C4FE8u, "control flow in delay slot"); return;
L_08B49198:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B491B0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B491EC:
    ctx.hi = 0u;
    ctx.hi = 0u;
    goto L_08B491F4;
L_08B491F4:
    rt.unsupported(0x08B491F8u, 0x08B1D6FCu, "control flow in delay slot"); return;
L_08B49238:
    rt.unsupported(0x08B4923Cu, 0x08B1D780u, "control flow in delay slot"); return;
L_08B49280:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49298;
L_08B49298:
    rt.unsupported(0x08B4929Cu, 0x08B1D804u, "control flow in delay slot"); return;
L_08B492C0:
    (void)(ctx.hi);
    // nop
    goto L_08B492C8;
L_08B492C8:
    // nop
    rt.unsupported(0x08B492D0u, 0x08B043B4u, "control flow in delay slot"); return;
L_08B492D8:
    rt.unsupported(0x08B492D8u, 0x06060606u, "regimm? not lowered yet"); return;
L_08B49328:
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    // nop
    // nop
    // nop
    goto L_08B49350;
L_08B49350:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B493E0;
L_08B493E0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49400;
L_08B49400:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49438;
L_08B49438:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49748;
L_08B49748:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B497F4;
L_08B497F4:
    // nop
    // nop
    // nop
    goto L_08B49800;
L_08B49800:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49820;
L_08B49820:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49844;
L_08B49844:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49954;
L_08B49954:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49978;
L_08B49978:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B499A4;
L_08B499A4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B499BC;
L_08B499BC:
    // nop
    // nop
    // nop
    // nop
    goto L_08B499CC;
L_08B499CC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49AC0;
L_08B49AC0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49C08;
L_08B49C08:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49E58;
L_08B49E58:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4A078;
L_08B4A078:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4A0C4;
L_08B4A0C4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4A190;
L_08B4A190:
    // nop
    // nop
    // nop
    // nop
    goto L_08B4A1A0;
L_08B4A1A0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4A424;
L_08B4A424:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4A524;
L_08B4A524:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4A550;
L_08B4A550:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4A650;
L_08B4A650:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4A87C;
L_08B4A87C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4AAA8;
L_08B4AAA8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4ACD4;
L_08B4ACD4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4AE6C;
L_08B4AE6C:
    // nop
    // nop
    // nop
    // nop
    goto L_08B4AE7C;
L_08B4AE7C:
    // nop
    // nop
    // nop
    // nop
    goto L_08B4AE8C;
L_08B4AE8C:
    // nop
    // nop
    // nop
    // nop
    goto L_08B4AE9C;
L_08B4AE9C:
    // nop
    // nop
    // nop
    // nop
    goto L_08B4AEAC;
L_08B4AEAC:
    // nop
    // nop
    // nop
    goto L_08B4AEB8;
L_08B4AEB8:
    // nop
    // nop
    // nop
    // nop
    goto L_08B4AEC8;
L_08B4AEC8:
    // nop
    // nop
    // nop
    goto L_08B4AED4;
L_08B4AED4:
    // nop
    // nop
    goto L_08B4AEDC;
L_08B4AEDC:
    // nop
    // nop
    goto L_08B4AEE4;
L_08B4AEE4:
    // nop
    // nop
    // nop
    goto L_08B4AEF0;
L_08B4AEF0:
    // nop
    goto L_08B4AEF4;
L_08B4AEF4:
    // nop
    // nop
    // nop
    goto L_08B4AF00;
L_08B4AF00:
    // nop
    goto L_08B4AF04;
L_08B4AF04:
    // nop
    // nop
    // nop
    // nop
    goto L_08B4AF14;
L_08B4AF14:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4AF28;
L_08B4AF28:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4B12C;
L_08B4B12C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4B2F8;
L_08B4B2F8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4BAB0;
L_08B4BAB0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4BAF0;
L_08B4BAF0:
    // nop
    goto L_08B4BAF4;
L_08B4BAF4:
    // nop
    goto L_08B4BAF8;
L_08B4BAF8:
    // nop
    // nop
    rt.unsupported(0x08B4BB00u, 0x0000000Cu, "syscall not lowered yet"); return;
L_08B4BB10:
    // nop
    // nop
    // nop
    ctx.pc = 0x02749D30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4BB20:
    // nop
    rt.unsupported(0x08B4BB28u, 0x08B04AB0u, "control flow in delay slot"); return;
L_08B4BBFC:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    (void)(0u << 16u);
    ctx.gpr[18] = (18725u << 16u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B4BC18u, 0x00000014u, "special? not lowered yet"); return;
L_08B4BC78:
    (void)(ctx.lo);
    goto L_08B4BC7C;
L_08B4BC7C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.unsupported(0x08B4BC80u, 0x000000BBu, "special? not lowered yet"); return;
L_08B4BDA4:
    (void)(ctx.gpr[1] << 0u);
    rt.unsupported(0x08B4BDA8u, 0x00020001u, "special? not lowered yet"); return;
L_08B4BE64:
    rt.unsupported(0x08B4BE64u, 0x63696376u, "vfpu0 not lowered yet"); return;
L_08B4BF04:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4BF28;
L_08B4BF28:
    ctx.execute_vfpu_compare3(99u, 111u, 114u, 1u, 6u);
    rt.unsupported(0x08B4BF2Cu, 0x7473616Eu, "unknown not lowered yet"); return;
}

void recomp_unit_0209(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0209_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_209(Runtime &runtime) {
    runtime.register_generated_unit(209u, 0x08B48000u, 16384u, &recomp_unit_0209, &recomp_unit_0209_entry);
    runtime.register_function(0x08B48000u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48580u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B485A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B486C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48794u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B487ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B487D0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4880Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4881Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48864u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48884u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B488ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B488C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B488D4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B488FCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48924u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4894Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48974u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48AECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48B90u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D54u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D8Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D90u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48DB4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48DC4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48DC8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48DD8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48DE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48DFCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E1Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E20u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E40u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E64u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E88u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EA8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EB0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48ECCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48ED4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EF0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F10u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F14u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F34u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F38u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F58u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F60u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F7Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48FA0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48FC0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48FC4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48FE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49008u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4902Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4904Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49050u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49070u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49094u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B490BCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B490C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B490C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B490E8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49110u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49134u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49148u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49158u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49198u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491ECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491F4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49238u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49280u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49298u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B492C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B492C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B492D8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49328u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49350u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493E0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49400u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49438u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49748u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B497F4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49800u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49820u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49844u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49954u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49978u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B499A4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B499BCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B499CCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49AC0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49C08u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E58u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A078u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A0C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A190u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A1A0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A424u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A524u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A550u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A650u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A87Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AAA8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ACD4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE6Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE7Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE8Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE9Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AEACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AEB8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AEC8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AED4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AEDCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AEE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AEF0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AEF4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF00u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF04u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF14u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF28u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B12Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B2F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BAB0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BAF0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BAF4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BAF8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BB10u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BB20u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BBFCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BC78u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BC7Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BDA4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BE64u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BF04u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BF28u, &recomp_unit_0209, "recomp_unit_0209");
}
} // namespace psprecomp
