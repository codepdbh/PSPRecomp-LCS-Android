#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0201[4068] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0,
    0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0,
    0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0,
    0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 86, 87, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 94, 95, 0, 0, 96, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 101, 0, 102, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 107, 108, 0, 109, 0,
    110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124,
    0, 125, 0, 126, 127, 128, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 133, 134, 135, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0,
    138, 0, 139, 0, 140, 0, 0, 141, 0, 142, 0, 0, 143, 0, 0, 144, 0, 145, 0, 0, 146, 0, 147, 148, 0, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 153, 0, 0, 154, 0, 155, 0, 156, 0, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 160,
    0, 161, 0, 162, 163, 164, 0, 0, 165, 0, 0, 0, 166, 0, 167, 168, 0, 169, 170, 171, 0, 0, 0, 0, 172, 0, 173, 174, 175, 176, 177, 0,
    0, 0, 0, 178, 0, 0, 0, 179, 180, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 187, 0, 0, 188, 0, 0, 0,
    189, 0, 0, 190, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 198, 199, 0, 0, 200, 0, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0,
    204, 0, 0, 205, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0,
    211, 212, 0, 0, 0, 213, 214, 0, 0, 215, 0, 0, 0, 216, 217, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 222, 0,
    0, 0, 0, 0, 0, 0, 223, 0, 224, 225, 0, 0, 0, 226, 0, 227, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231,
    232, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0, 246, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 250,
    0, 0, 251, 0, 252, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 257, 0, 0, 258, 259, 0, 0, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 268,
    269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 0,
    0, 0, 0, 283, 0, 0, 284, 0, 285, 286, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 294, 0, 295, 0, 0, 296, 297, 0, 298,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 309, 0,
    0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 0, 0, 0, 316, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 321, 322, 0, 0, 0,
    0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 325, 0, 326, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0,
    0, 0, 0, 330, 0, 0, 0, 331, 0, 332, 333, 0, 0, 0, 0, 334, 335, 0, 0, 0, 336, 0, 0, 0, 0, 337, 338, 0, 0, 339, 340, 0,
    0, 0, 0, 0, 0, 0, 0, 341, 342, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 350, 0, 351, 0, 0, 352, 0, 353, 0, 354, 0, 355, 0, 0, 356, 0, 357, 0, 358, 359,
    0, 360, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 0, 373, 0, 0,
    0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 377, 0, 378, 379, 0, 380, 0, 381, 382, 0, 383, 384, 0, 0, 385, 386, 387, 0,
    388, 389, 390, 391, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 398, 399, 400, 401, 402, 403, 404, 405, 0, 406, 0, 407, 0, 408, 0,
    0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0,
    0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0,
    419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0,
    0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0,
    0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441,
    0, 442, 0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 0, 448, 0, 449, 450, 0, 451, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0,
    455, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 460, 461, 462, 0, 463, 464, 0, 465, 466, 467, 468, 0, 0, 0, 0, 0, 469, 0, 470, 0, 0,
    0, 0, 471, 472,
};
void recomp_unit_0201_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B28034u;
        entry_id = (entry_delta < 16272u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0201[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B28034;
    case 2u: goto L_08B280B4;
    case 3u: goto L_08B281D8;
    case 4u: goto L_08B28234;
    case 5u: goto L_08B28284;
    case 6u: goto L_08B282AC;
    case 7u: goto L_08B2834C;
    case 8u: goto L_08B283D8;
    case 9u: goto L_08B2845C;
    case 10u: goto L_08B28570;
    case 11u: goto L_08B285A4;
    case 12u: goto L_08B285D8;
    case 13u: goto L_08B285DC;
    case 14u: goto L_08B285FC;
    case 15u: goto L_08B28610;
    case 16u: goto L_08B28648;
    case 17u: goto L_08B28660;
    case 18u: goto L_08B28678;
    case 19u: goto L_08B286AC;
    case 20u: goto L_08B287CC;
    case 21u: goto L_08B288DC;
    case 22u: goto L_08B28998;
    case 23u: goto L_08B289A8;
    case 24u: goto L_08B289F0;
    case 25u: goto L_08B28A64;
    case 26u: goto L_08B28A9C;
    case 27u: goto L_08B28AB4;
    case 28u: goto L_08B28AC4;
    case 29u: goto L_08B28AD4;
    case 30u: goto L_08B28B38;
    case 31u: goto L_08B28C08;
    case 32u: goto L_08B28C1C;
    case 33u: goto L_08B28C40;
    case 34u: goto L_08B28CFC;
    case 35u: goto L_08B28D04;
    case 36u: goto L_08B28D8C;
    case 37u: goto L_08B28DA4;
    case 38u: goto L_08B28DBC;
    case 39u: goto L_08B28DD4;
    case 40u: goto L_08B28F00;
    case 41u: goto L_08B28F34;
    case 42u: goto L_08B29130;
    case 43u: goto L_08B29200;
    case 44u: goto L_08B2922C;
    case 45u: goto L_08B2923C;
    case 46u: goto L_08B29248;
    case 47u: goto L_08B29274;
    case 48u: goto L_08B29298;
    case 49u: goto L_08B292C4;
    case 50u: goto L_08B292E4;
    case 51u: goto L_08B29310;
    case 52u: goto L_08B29328;
    case 53u: goto L_08B29348;
    case 54u: goto L_08B29384;
    case 55u: goto L_08B29420;
    case 56u: goto L_08B29440;
    case 57u: goto L_08B29454;
    case 58u: goto L_08B2945C;
    case 59u: goto L_08B29750;
    case 60u: goto L_08B297F8;
    case 61u: goto L_08B2990C;
    case 62u: goto L_08B29914;
    case 63u: goto L_08B2991C;
    case 64u: goto L_08B29924;
    case 65u: goto L_08B29A04;
    case 66u: goto L_08B29A18;
    case 67u: goto L_08B29A28;
    case 68u: goto L_08B29A40;
    case 69u: goto L_08B29B84;
    case 70u: goto L_08B29BF8;
    case 71u: goto L_08B29D0C;
    case 72u: goto L_08B29F8C;
    case 73u: goto L_08B29FE8;
    case 74u: goto L_08B2A050;
    case 75u: goto L_08B2A08C;
    case 76u: goto L_08B2A1FC;
    case 77u: goto L_08B2A374;
    case 78u: goto L_08B2A3AC;
    case 79u: goto L_08B2A3C4;
    case 80u: goto L_08B2A3E0;
    case 81u: goto L_08B2A418;
    case 82u: goto L_08B2A420;
    case 83u: goto L_08B2A438;
    case 84u: goto L_08B2A440;
    case 85u: goto L_08B2A44C;
    case 86u: goto L_08B2A45C;
    case 87u: goto L_08B2A460;
    case 88u: goto L_08B2A46C;
    case 89u: goto L_08B2A478;
    case 90u: goto L_08B2A49C;
    case 91u: goto L_08B2A4B0;
    case 92u: goto L_08B2A4C4;
    case 93u: goto L_08B2A4CC;
    case 94u: goto L_08B2A4E8;
    case 95u: goto L_08B2A4EC;
    case 96u: goto L_08B2A4F8;
    case 97u: goto L_08B2A508;
    case 98u: goto L_08B2A510;
    case 99u: goto L_08B2A518;
    case 100u: goto L_08B2A544;
    case 101u: goto L_08B2A54C;
    case 102u: goto L_08B2A554;
    case 103u: goto L_08B2A55C;
    case 104u: goto L_08B2A568;
    case 105u: goto L_08B2A590;
    case 106u: goto L_08B2A598;
    case 107u: goto L_08B2A5A0;
    case 108u: goto L_08B2A5A4;
    case 109u: goto L_08B2A5AC;
    case 110u: goto L_08B2A5B4;
    case 111u: goto L_08B2A5BC;
    case 112u: goto L_08B2A5C4;
    case 113u: goto L_08B2A5CC;
    case 114u: goto L_08B2A5D4;
    case 115u: goto L_08B2A5E8;
    case 116u: goto L_08B2A5F0;
    case 117u: goto L_08B2A5F8;
    case 118u: goto L_08B2A600;
    case 119u: goto L_08B2A608;
    case 120u: goto L_08B2A610;
    case 121u: goto L_08B2A618;
    case 122u: goto L_08B2A620;
    case 123u: goto L_08B2A628;
    case 124u: goto L_08B2A630;
    case 125u: goto L_08B2A638;
    case 126u: goto L_08B2A640;
    case 127u: goto L_08B2A644;
    case 128u: goto L_08B2A648;
    case 129u: goto L_08B2A650;
    case 130u: goto L_08B2A658;
    case 131u: goto L_08B2A66C;
    case 132u: goto L_08B2A674;
    case 133u: goto L_08B2A688;
    case 134u: goto L_08B2A68C;
    case 135u: goto L_08B2A690;
    case 136u: goto L_08B2A788;
    case 137u: goto L_08B2A828;
    case 138u: goto L_08B2A834;
    case 139u: goto L_08B2A83C;
    case 140u: goto L_08B2A844;
    case 141u: goto L_08B2A850;
    case 142u: goto L_08B2A858;
    case 143u: goto L_08B2A864;
    case 144u: goto L_08B2A870;
    case 145u: goto L_08B2A878;
    case 146u: goto L_08B2A884;
    case 147u: goto L_08B2A88C;
    case 148u: goto L_08B2A890;
    case 149u: goto L_08B2A8AC;
    case 150u: goto L_08B2A8C4;
    case 151u: goto L_08B2A8D0;
    case 152u: goto L_08B2A8DC;
    case 153u: goto L_08B2A8E4;
    case 154u: goto L_08B2A8F0;
    case 155u: goto L_08B2A8F8;
    case 156u: goto L_08B2A900;
    case 157u: goto L_08B2A90C;
    case 158u: goto L_08B2A914;
    case 159u: goto L_08B2A928;
    case 160u: goto L_08B2A930;
    case 161u: goto L_08B2A938;
    case 162u: goto L_08B2A940;
    case 163u: goto L_08B2A944;
    case 164u: goto L_08B2A948;
    case 165u: goto L_08B2A954;
    case 166u: goto L_08B2A964;
    case 167u: goto L_08B2A96C;
    case 168u: goto L_08B2A970;
    case 169u: goto L_08B2A978;
    case 170u: goto L_08B2A97C;
    case 171u: goto L_08B2A980;
    case 172u: goto L_08B2A994;
    case 173u: goto L_08B2A99C;
    case 174u: goto L_08B2A9A0;
    case 175u: goto L_08B2A9A4;
    case 176u: goto L_08B2A9A8;
    case 177u: goto L_08B2A9AC;
    case 178u: goto L_08B2A9C0;
    case 179u: goto L_08B2A9D0;
    case 180u: goto L_08B2A9D4;
    case 181u: goto L_08B2A9DC;
    case 182u: goto L_08B2A9EC;
    case 183u: goto L_08B2A9FC;
    case 184u: goto L_08B2AA50;
    case 185u: goto L_08B2AA88;
    case 186u: goto L_08B2AA94;
    case 187u: goto L_08B2AA98;
    case 188u: goto L_08B2AAA4;
    case 189u: goto L_08B2AAB4;
    case 190u: goto L_08B2AAC0;
    case 191u: goto L_08B2AAC4;
    case 192u: goto L_08B2AAD4;
    case 193u: goto L_08B2AAEC;
    case 194u: goto L_08B2AB1C;
    case 195u: goto L_08B2AB3C;
    case 196u: goto L_08B2AB5C;
    case 197u: goto L_08B2AB6C;
    case 198u: goto L_08B2AB70;
    case 199u: goto L_08B2AB74;
    case 200u: goto L_08B2AB80;
    case 201u: goto L_08B2AB90;
    case 202u: goto L_08B2AB9C;
    case 203u: goto L_08B2ABA8;
    case 204u: goto L_08B2ABB4;
    case 205u: goto L_08B2ABC0;
    case 206u: goto L_08B2ABC4;
    case 207u: goto L_08B2ABE8;
    case 208u: goto L_08B2ABFC;
    case 209u: goto L_08B2AC1C;
    case 210u: goto L_08B2AC24;
    case 211u: goto L_08B2AC34;
    case 212u: goto L_08B2AC38;
    case 213u: goto L_08B2AC48;
    case 214u: goto L_08B2AC4C;
    case 215u: goto L_08B2AC58;
    case 216u: goto L_08B2AC68;
    case 217u: goto L_08B2AC6C;
    case 218u: goto L_08B2AC74;
    case 219u: goto L_08B2AC80;
    case 220u: goto L_08B2AC9C;
    case 221u: goto L_08B2ACA4;
    case 222u: goto L_08B2ACAC;
    case 223u: goto L_08B2ACCC;
    case 224u: goto L_08B2ACD4;
    case 225u: goto L_08B2ACD8;
    case 226u: goto L_08B2ACE8;
    case 227u: goto L_08B2ACF0;
    case 228u: goto L_08B2AD00;
    case 229u: goto L_08B2AD08;
    case 230u: goto L_08B2AD1C;
    case 231u: goto L_08B2AD30;
    case 232u: goto L_08B2AD34;
    case 233u: goto L_08B2AD38;
    case 234u: goto L_08B2AD40;
    case 235u: goto L_08B2AD48;
    case 236u: goto L_08B2AD50;
    case 237u: goto L_08B2AD58;
    case 238u: goto L_08B2AD78;
    case 239u: goto L_08B2AD84;
    case 240u: goto L_08B2AD94;
    case 241u: goto L_08B2ADA8;
    case 242u: goto L_08B2ADC4;
    case 243u: goto L_08B2ADD0;
    case 244u: goto L_08B2ADE0;
    case 245u: goto L_08B2ADEC;
    case 246u: goto L_08B2ADF4;
    case 247u: goto L_08B2ADF8;
    case 248u: goto L_08B2AE0C;
    case 249u: goto L_08B2AE28;
    case 250u: goto L_08B2AE30;
    case 251u: goto L_08B2AE3C;
    case 252u: goto L_08B2AE44;
    case 253u: goto L_08B2AE48;
    case 254u: goto L_08B2AE64;
    case 255u: goto L_08B2AE70;
    case 256u: goto L_08B2AE7C;
    case 257u: goto L_08B2AE84;
    case 258u: goto L_08B2AE90;
    case 259u: goto L_08B2AE94;
    case 260u: goto L_08B2AEAC;
    case 261u: goto L_08B2AECC;
    case 262u: goto L_08B2AF00;
    case 263u: goto L_08B2AF2C;
    case 264u: goto L_08B2AF60;
    case 265u: goto L_08B2AF68;
    case 266u: goto L_08B2AF8C;
    case 267u: goto L_08B2AF94;
    case 268u: goto L_08B2AFB0;
    case 269u: goto L_08B2AFB4;
    case 270u: goto L_08B2AFC8;
    case 271u: goto L_08B2AFE0;
    case 272u: goto L_08B2AFFC;
    case 273u: goto L_08B2B014;
    case 274u: goto L_08B2B068;
    case 275u: goto L_08B2B070;
    case 276u: goto L_08B2B078;
    case 277u: goto L_08B2B080;
    case 278u: goto L_08B2B088;
    case 279u: goto L_08B2B090;
    case 280u: goto L_08B2B098;
    case 281u: goto L_08B2B0A0;
    case 282u: goto L_08B2B0A8;
    case 283u: goto L_08B2B0C0;
    case 284u: goto L_08B2B0CC;
    case 285u: goto L_08B2B0D4;
    case 286u: goto L_08B2B0D8;
    case 287u: goto L_08B2B0DC;
    case 288u: goto L_08B2B0FC;
    case 289u: goto L_08B2B110;
    case 290u: goto L_08B2B118;
    case 291u: goto L_08B2B150;
    case 292u: goto L_08B2B170;
    case 293u: goto L_08B2B184;
    case 294u: goto L_08B2B190;
    case 295u: goto L_08B2B198;
    case 296u: goto L_08B2B1A4;
    case 297u: goto L_08B2B1A8;
    case 298u: goto L_08B2B1B0;
    case 299u: goto L_08B2B1E8;
    case 300u: goto L_08B2B1F0;
    case 301u: goto L_08B2B208;
    case 302u: goto L_08B2B238;
    case 303u: goto L_08B2B260;
    case 304u: goto L_08B2B274;
    case 305u: goto L_08B2B290;
    case 306u: goto L_08B2B2DC;
    case 307u: goto L_08B2B418;
    case 308u: goto L_08B2B420;
    case 309u: goto L_08B2B42C;
    case 310u: goto L_08B2B438;
    case 311u: goto L_08B2B44C;
    case 312u: goto L_08B2B468;
    case 313u: goto L_08B2B484;
    case 314u: goto L_08B2B48C;
    case 315u: goto L_08B2B494;
    case 316u: goto L_08B2B4A8;
    case 317u: goto L_08B2B4D8;
    case 318u: goto L_08B2B4EC;
    case 319u: goto L_08B2B508;
    case 320u: goto L_08B2B514;
    case 321u: goto L_08B2B520;
    case 322u: goto L_08B2B524;
    case 323u: goto L_08B2B544;
    case 324u: goto L_08B2B554;
    case 325u: goto L_08B2B55C;
    case 326u: goto L_08B2B564;
    case 327u: goto L_08B2B568;
    case 328u: goto L_08B2B584;
    case 329u: goto L_08B2B5A0;
    case 330u: goto L_08B2B5C0;
    case 331u: goto L_08B2B5D0;
    case 332u: goto L_08B2B5D8;
    case 333u: goto L_08B2B5DC;
    case 334u: goto L_08B2B5F0;
    case 335u: goto L_08B2B5F4;
    case 336u: goto L_08B2B604;
    case 337u: goto L_08B2B618;
    case 338u: goto L_08B2B61C;
    case 339u: goto L_08B2B628;
    case 340u: goto L_08B2B62C;
    case 341u: goto L_08B2B650;
    case 342u: goto L_08B2B654;
    case 343u: goto L_08B2B660;
    case 344u: goto L_08B2B670;
    case 345u: goto L_08B2B684;
    case 346u: goto L_08B2B68C;
    case 347u: goto L_08B2B69C;
    case 348u: goto L_08B2B6AC;
    case 349u: goto L_08B2B6E0;
    case 350u: goto L_08B2B6E4;
    case 351u: goto L_08B2B6EC;
    case 352u: goto L_08B2B6F8;
    case 353u: goto L_08B2B700;
    case 354u: goto L_08B2B708;
    case 355u: goto L_08B2B710;
    case 356u: goto L_08B2B71C;
    case 357u: goto L_08B2B724;
    case 358u: goto L_08B2B72C;
    case 359u: goto L_08B2B730;
    case 360u: goto L_08B2B738;
    case 361u: goto L_08B2B744;
    case 362u: goto L_08B2B74C;
    case 363u: goto L_08B2B754;
    case 364u: goto L_08B2B75C;
    case 365u: goto L_08B2B764;
    case 366u: goto L_08B2B76C;
    case 367u: goto L_08B2B774;
    case 368u: goto L_08B2B77C;
    case 369u: goto L_08B2B784;
    case 370u: goto L_08B2B78C;
    case 371u: goto L_08B2B794;
    case 372u: goto L_08B2B79C;
    case 373u: goto L_08B2B7A8;
    case 374u: goto L_08B2B7B8;
    case 375u: goto L_08B2B7D4;
    case 376u: goto L_08B2B7E8;
    case 377u: goto L_08B2B7EC;
    case 378u: goto L_08B2B7F4;
    case 379u: goto L_08B2B7F8;
    case 380u: goto L_08B2B800;
    case 381u: goto L_08B2B808;
    case 382u: goto L_08B2B80C;
    case 383u: goto L_08B2B814;
    case 384u: goto L_08B2B818;
    case 385u: goto L_08B2B824;
    case 386u: goto L_08B2B828;
    case 387u: goto L_08B2B82C;
    case 388u: goto L_08B2B834;
    case 389u: goto L_08B2B838;
    case 390u: goto L_08B2B83C;
    case 391u: goto L_08B2B840;
    case 392u: goto L_08B2B848;
    case 393u: goto L_08B2B850;
    case 394u: goto L_08B2B858;
    case 395u: goto L_08B2B860;
    case 396u: goto L_08B2B868;
    case 397u: goto L_08B2B870;
    case 398u: goto L_08B2B878;
    case 399u: goto L_08B2B87C;
    case 400u: goto L_08B2B880;
    case 401u: goto L_08B2B884;
    case 402u: goto L_08B2B888;
    case 403u: goto L_08B2B88C;
    case 404u: goto L_08B2B890;
    case 405u: goto L_08B2B894;
    case 406u: goto L_08B2B89C;
    case 407u: goto L_08B2B8A4;
    case 408u: goto L_08B2B8AC;
    case 409u: goto L_08B2B8C4;
    case 410u: goto L_08B2B8D8;
    case 411u: goto L_08B2B8DC;
    case 412u: goto L_08B2B8F0;
    case 413u: goto L_08B2B928;
    case 414u: goto L_08B2B93C;
    case 415u: goto L_08B2B954;
    case 416u: goto L_08B2B96C;
    case 417u: goto L_08B2B980;
    case 418u: goto L_08B2B99C;
    case 419u: goto L_08B2B9B4;
    case 420u: goto L_08B2BA50;
    case 421u: goto L_08B2BA64;
    case 422u: goto L_08B2BA7C;
    case 423u: goto L_08B2BA8C;
    case 424u: goto L_08B2BA9C;
    case 425u: goto L_08B2BAAC;
    case 426u: goto L_08B2BABC;
    case 427u: goto L_08B2BACC;
    case 428u: goto L_08B2BADC;
    case 429u: goto L_08B2BAE8;
    case 430u: goto L_08B2BB08;
    case 431u: goto L_08B2BB14;
    case 432u: goto L_08B2BB30;
    case 433u: goto L_08B2BBF0;
    case 434u: goto L_08B2BCA8;
    case 435u: goto L_08B2BCB8;
    case 436u: goto L_08B2BCC8;
    case 437u: goto L_08B2BCD8;
    case 438u: goto L_08B2BCF0;
    case 439u: goto L_08B2BDF0;
    case 440u: goto L_08B2BE10;
    case 441u: goto L_08B2BE30;
    case 442u: goto L_08B2BE38;
    case 443u: goto L_08B2BE40;
    case 444u: goto L_08B2BE48;
    case 445u: goto L_08B2BE50;
    case 446u: goto L_08B2BE58;
    case 447u: goto L_08B2BE60;
    case 448u: goto L_08B2BE68;
    case 449u: goto L_08B2BE70;
    case 450u: goto L_08B2BE74;
    case 451u: goto L_08B2BE7C;
    case 452u: goto L_08B2BE84;
    case 453u: goto L_08B2BE90;
    case 454u: goto L_08B2BE9C;
    case 455u: goto L_08B2BEB4;
    case 456u: goto L_08B2BEC0;
    case 457u: goto L_08B2BECC;
    case 458u: goto L_08B2BF40;
    case 459u: goto L_08B2BF58;
    case 460u: goto L_08B2BF60;
    case 461u: goto L_08B2BF64;
    case 462u: goto L_08B2BF68;
    case 463u: goto L_08B2BF70;
    case 464u: goto L_08B2BF74;
    case 465u: goto L_08B2BF7C;
    case 466u: goto L_08B2BF80;
    case 467u: goto L_08B2BF84;
    case 468u: goto L_08B2BF88;
    case 469u: goto L_08B2BFA0;
    case 470u: goto L_08B2BFA8;
    case 471u: goto L_08B2BFBC;
    case 472u: goto L_08B2BFC0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B28034:
    rt.unsupported(0x08B28038u, 0x08A69130u, "control flow in delay slot"); return;
L_08B280B4:
    rt.unsupported(0x08B280B8u, 0x08A69130u, "control flow in delay slot"); return;
L_08B281D8:
    rt.unsupported(0x08B281DCu, 0x08A694D0u, "control flow in delay slot"); return;
L_08B28234:
    rt.unsupported(0x08B28238u, 0x08A69674u, "control flow in delay slot"); return;
L_08B28284:
    rt.unsupported(0x08B28288u, 0x08A69674u, "control flow in delay slot"); return;
L_08B282AC:
    rt.unsupported(0x08B282B0u, 0x08A6983Cu, "control flow in delay slot"); return;
L_08B2834C:
    rt.unsupported(0x08B28350u, 0x08A69A04u, "control flow in delay slot"); return;
L_08B283D8:
    rt.unsupported(0x08B283DCu, 0x08A69A04u, "control flow in delay slot"); return;
L_08B2845C:
    rt.unsupported(0x08B28460u, 0x08A69BCCu, "control flow in delay slot"); return;
L_08B28570:
    rt.unsupported(0x08B28574u, 0x08A69F5Cu, "control flow in delay slot"); return;
L_08B285A4:
    rt.unsupported(0x08B285A8u, 0x08A69F5Cu, "control flow in delay slot"); return;
L_08B285D8:
    rt.unsupported(0x08B285DCu, 0x08A6A100u, "control flow in delay slot"); return;
L_08B285DC:
    rt.unsupported(0x08B285E0u, 0x08A6A124u, "control flow in delay slot"); return;
L_08B285FC:
    rt.unsupported(0x08B28600u, 0x08A6A124u, "control flow in delay slot"); return;
L_08B28610:
    rt.unsupported(0x08B28614u, 0x08A6A124u, "control flow in delay slot"); return;
L_08B28648:
    rt.unsupported(0x08B2864Cu, 0x08A6A124u, "control flow in delay slot"); return;
L_08B28660:
    rt.unsupported(0x08B28664u, 0x08A69FE0u, "control flow in delay slot"); return;
L_08B28678:
    rt.unsupported(0x08B2867Cu, 0x08A6A2C8u, "control flow in delay slot"); return;
L_08B286AC:
    rt.unsupported(0x08B286B0u, 0x08A6A2ECu, "control flow in delay slot"); return;
L_08B287CC:
    rt.unsupported(0x08B287D0u, 0x08A6A67Cu, "control flow in delay slot"); return;
L_08B288DC:
    rt.unsupported(0x08B288E0u, 0x08A6A6D8u, "control flow in delay slot"); return;
L_08B28998:
    rt.unsupported(0x08B2899Cu, 0x08A6ABB0u, "control flow in delay slot"); return;
L_08B289A8:
    rt.unsupported(0x08B289ACu, 0x08A6ABD4u, "control flow in delay slot"); return;
L_08B289F0:
    rt.unsupported(0x08B289F4u, 0x08A6ABD4u, "control flow in delay slot"); return;
L_08B28A64:
    rt.unsupported(0x08B28A68u, 0x08A6AD9Cu, "control flow in delay slot"); return;
L_08B28A9C:
    rt.unsupported(0x08B28AA0u, 0x08A6AD9Cu, "control flow in delay slot"); return;
L_08B28AB4:
    rt.unsupported(0x08B28AB8u, 0x08A6AD9Cu, "control flow in delay slot"); return;
L_08B28AC4:
    rt.unsupported(0x08B28AC8u, 0x08A6AED4u, "control flow in delay slot"); return;
L_08B28AD4:
    rt.unsupported(0x08B28AD8u, 0x08A6AF64u, "control flow in delay slot"); return;
L_08B28B38:
    rt.unsupported(0x08B28B3Cu, 0x08A6AF64u, "control flow in delay slot"); return;
L_08B28C08:
    rt.unsupported(0x08B28C0Cu, 0x08A6B224u, "control flow in delay slot"); return;
L_08B28C1C:
    rt.unsupported(0x08B28C20u, 0x08A6B224u, "control flow in delay slot"); return;
L_08B28C40:
    rt.unsupported(0x08B28C44u, 0x08A6B224u, "control flow in delay slot"); return;
L_08B28CFC:
    rt.unsupported(0x08B28D00u, 0x08A6B318u, "control flow in delay slot"); return;
L_08B28D04:
    rt.unsupported(0x08B28D08u, 0x08A6B318u, "control flow in delay slot"); return;
L_08B28D8C:
    rt.unsupported(0x08B28D90u, 0x08A6B40Cu, "control flow in delay slot"); return;
L_08B28DA4:
    rt.unsupported(0x08B28DA8u, 0x08A6B500u, "control flow in delay slot"); return;
L_08B28DBC:
    rt.unsupported(0x08B28DC0u, 0x08A6B500u, "control flow in delay slot"); return;
L_08B28DD4:
    rt.unsupported(0x08B28DD8u, 0x08A6B500u, "control flow in delay slot"); return;
L_08B28F00:
    rt.unsupported(0x08B28F04u, 0x08A6B878u, "control flow in delay slot"); return;
L_08B28F34:
    rt.unsupported(0x08B28F38u, 0x08A6B878u, "control flow in delay slot"); return;
L_08B29130:
    rt.unsupported(0x08B29134u, 0x08A6BE9Cu, "control flow in delay slot"); return;
L_08B29200:
    rt.unsupported(0x08B29204u, 0x08A6C040u, "control flow in delay slot"); return;
L_08B2922C:
    rt.unsupported(0x08B29230u, 0x08A6C040u, "control flow in delay slot"); return;
L_08B2923C:
    rt.unsupported(0x08B29240u, 0x08A6C040u, "control flow in delay slot"); return;
L_08B29248:
    rt.unsupported(0x08B2924Cu, 0x08A6C040u, "control flow in delay slot"); return;
L_08B29274:
    rt.unsupported(0x08B29278u, 0x08A6C1E4u, "control flow in delay slot"); return;
L_08B29298:
    rt.unsupported(0x08B2929Cu, 0x08A6C1E4u, "control flow in delay slot"); return;
L_08B292C4:
    rt.unsupported(0x08B292C8u, 0x08A6C1E4u, "control flow in delay slot"); return;
L_08B292E4:
    rt.unsupported(0x08B292E8u, 0x08A6C1E4u, "control flow in delay slot"); return;
L_08B29310:
    rt.unsupported(0x08B29314u, 0x08A6C574u, "control flow in delay slot"); return;
L_08B29328:
    rt.unsupported(0x08B2932Cu, 0x08A6C4C4u, "control flow in delay slot"); return;
L_08B29348:
    rt.unsupported(0x08B2934Cu, 0x08A6C574u, "control flow in delay slot"); return;
L_08B29384:
    rt.unsupported(0x08B29388u, 0x08A6C574u, "control flow in delay slot"); return;
L_08B29420:
    rt.unsupported(0x08B29424u, 0x08A6C838u, "control flow in delay slot"); return;
L_08B29440:
    rt.unsupported(0x08B29444u, 0x08A6C664u, "control flow in delay slot"); return;
L_08B29454:
    rt.unsupported(0x08B29458u, 0x08A6CBC4u, "control flow in delay slot"); return;
L_08B2945C:
    rt.unsupported(0x08B29460u, 0x08A6CB30u, "control flow in delay slot"); return;
L_08B29750:
    rt.unsupported(0x08B29754u, 0x08A73930u, "control flow in delay slot"); return;
L_08B297F8:
    rt.unsupported(0x08B297FCu, 0x08A756DCu, "control flow in delay slot"); return;
L_08B2990C:
    rt.unsupported(0x08B29910u, 0x08A7557Cu, "control flow in delay slot"); return;
L_08B29914:
    rt.unsupported(0x08B29918u, 0x08A7557Cu, "control flow in delay slot"); return;
L_08B2991C:
    rt.unsupported(0x08B29920u, 0x08A754E8u, "control flow in delay slot"); return;
L_08B29924:
    rt.unsupported(0x08B29928u, 0x08A7557Cu, "control flow in delay slot"); return;
L_08B29A04:
    rt.unsupported(0x08B29A08u, 0x08A77654u, "control flow in delay slot"); return;
L_08B29A18:
    rt.unsupported(0x08B29A1Cu, 0x08A76AC8u, "control flow in delay slot"); return;
L_08B29A28:
    // nop
    ctx.pc = 0x029DD200u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B29A40:
    rt.unsupported(0x08B29A44u, 0x08A760F0u, "control flow in delay slot"); return;
L_08B29B84:
    rt.unsupported(0x08B29B88u, 0x08A77408u, "control flow in delay slot"); return;
L_08B29BF8:
    // nop
    ctx.pc = 0x029DE0E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B29D0C:
    rt.unsupported(0x08B29D10u, 0x08A78964u, "control flow in delay slot"); return;
L_08B29F8C:
    rt.unsupported(0x08B29F90u, 0x08A7A8FCu, "control flow in delay slot"); return;
L_08B29FE8:
    rt.unsupported(0x08B29FECu, 0x08A79CBCu, "control flow in delay slot"); return;
L_08B2A050:
    rt.unsupported(0x08B2A054u, 0x08A7A708u, "control flow in delay slot"); return;
L_08B2A08C:
    rt.unsupported(0x08B2A090u, 0x08A7A4CCu, "control flow in delay slot"); return;
L_08B2A1FC:
    rt.unsupported(0x08B2A200u, 0x08A7BAF8u, "control flow in delay slot"); return;
L_08B2A374:
    rt.unsupported(0x08B2A378u, 0x08A7BA6Cu, "control flow in delay slot"); return;
L_08B2A3AC:
    rt.unsupported(0x08B2A3B0u, 0x08A7BBB4u, "control flow in delay slot"); return;
L_08B2A3C4:
    rt.unsupported(0x08B2A3C8u, 0x08A7BBB4u, "control flow in delay slot"); return;
L_08B2A3E0:
    rt.unsupported(0x08B2A3E4u, 0x08A7B9C8u, "control flow in delay slot"); return;
L_08B2A418:
    ctx.gpr[1] = (0u ^ 0u);
    // nop
    goto L_08B2A420;
L_08B2A420:
    rt.unsupported(0x08B2A420u, 0x63695043u, "vfpu0 not lowered yet"); return;
L_08B2A438:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<73u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<112u, 1u>(vfpu_d); }
    (void)(ctx.gpr[9] < static_cast<std::uint32_t>(30821) ? 1u : 0u);
    goto L_08B2A440;
L_08B2A440:
    rt.unsupported(0x08B2A440u, 0x72724120u, "unknown not lowered yet"); return;
L_08B2A44C:
    rt.unsupported(0x08B2A44Cu, 0x20736920u, "unknown not lowered yet"); return;
L_08B2A45C:
    // nop
    goto L_08B2A460;
L_08B2A460:
    rt.unsupported(0x08B2A460u, 0x63695043u, "vfpu0 not lowered yet"); return;
L_08B2A46C:
    rt.unsupported(0x08B2A46Cu, 0x74634174u, "unknown not lowered yet"); return;
L_08B2A478:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<73u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<112u, 1u>(vfpu_d); }
    (void)(ctx.gpr[9] < static_cast<std::uint32_t>(30821) ? 1u : 0u);
    rt.unsupported(0x08B2A480u, 0x72724120u, "unknown not lowered yet"); return;
L_08B2A49C:
    ctx.execute_vfpu_vscl_ct<73u, 110u, 100u, 1u>();
    rt.unsupported(0x08B2A4A0u, 0x73692078u, "unknown not lowered yet"); return;
L_08B2A4B0:
    rt.unsupported(0x08B2A4B0u, 0x42424242u, "unknown not lowered yet"); return;
L_08B2A4C4:
    rt.unsupported(0x08B2A4C4u, 0x435F5550u, "unknown not lowered yet"); return;
L_08B2A4CC:
    rt.unsupported(0x08B2A4CCu, 0x7473614Cu, "unknown not lowered yet"); return;
L_08B2A4E8:
    // nop
    goto L_08B2A4EC;
L_08B2A4EC:
    rt.unsupported(0x08B2A4ECu, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B2A4F8:
    rt.unsupported(0x08B2A4F8u, 0x20642520u, "unknown not lowered yet"); return;
L_08B2A508:
    rt.unsupported(0x08B2A508u, 0x7469206Eu, "unknown not lowered yet"); return;
L_08B2A510:
    ctx.execute_vfpu_vscl_ct<83u, 111u, 109u, 1u>();
    rt.unsupported(0x08B2A514u, 0x6E696874u, "vfpu3 not lowered yet"); return;
L_08B2A518:
    rt.unsupported(0x08B2A518u, 0x73202C67u, "unknown not lowered yet"); return;
L_08B2A544:
    rt.unsupported(0x08B2A544u, 0x4D5F5550u, "unknown not lowered yet"); return;
L_08B2A54C:
    rt.unsupported(0x08B2A54Cu, 0x4F4D4552u, "unknown not lowered yet"); return;
L_08B2A554:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B2A558u, 0x46204E4Fu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 217u, 0x08B3BAB4u>(ctx, &aot_mem); return;
    }
    goto L_08B2A55C;
L_08B2A55C:
    rt.unsupported(0x08B2A55Cu, 0x204D4F52u, "unknown not lowered yet"); return;
L_08B2A568:
    rt.unsupported(0x08B2A568u, 0x206C6C41u, "unknown not lowered yet"); return;
L_08B2A590:
    rt.unsupported(0x08B2A590u, 0x415F4F43u, "unknown not lowered yet"); return;
L_08B2A598:
    rt.unsupported(0x08B2A598u, 0x4F5F4F43u, "unknown not lowered yet"); return;
L_08B2A5A0:
    ctx.gpr[4] = (ctx.gpr[3] & ctx.gpr[4]);
    goto L_08B2A5A4;
L_08B2A5A4:
    if (ctx.gpr[2] == ctx.gpr[15]) {
    rt.unsupported(0x08B2A5A8u, 0x0000325Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 68u, 0x08B3EEE8u>(ctx, &aot_mem); return;
    }
    goto L_08B2A5AC;
L_08B2A5AC:
    if (ctx.gpr[2] == ctx.gpr[15]) {
    rt.unsupported(0x08B2A5B0u, 0x0000315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 69u, 0x08B3EEF0u>(ctx, &aot_mem); return;
    }
    goto L_08B2A5B4;
L_08B2A5B4:
    rt.unsupported(0x08B2A5B8u, 0x58585858u, "control flow in delay slot"); return;
L_08B2A5BC:
    rt.unsupported(0x08B2A5C0u, 0x58585858u, "control flow in delay slot"); return;
L_08B2A5C4:
    rt.unsupported(0x08B2A5C8u, 0x58585858u, "control flow in delay slot"); return;
L_08B2A5CC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    rt.unsupported(0x08B2A5D0u, 0x6E615220u, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 9u, 0x08B40730u>(ctx, &aot_mem); return;
    }
    goto L_08B2A5D4;
L_08B2A5D4:
    rt.unsupported(0x08B2A5D4u, 0x74756F20u, "unknown not lowered yet"); return;
L_08B2A5E8:
    rt.unsupported(0x08B2A5E8u, 0x434F5453u, "unknown not lowered yet"); return;
L_08B2A5F0:
    rt.unsupported(0x08B2A5F0u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A5F8:
    rt.unsupported(0x08B2A5F8u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A600:
    rt.unsupported(0x08B2A600u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A608:
    rt.unsupported(0x08B2A608u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A610:
    rt.unsupported(0x08B2A610u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A618:
    rt.unsupported(0x08B2A618u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A620:
    rt.unsupported(0x08B2A620u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A628:
    rt.unsupported(0x08B2A628u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A630:
    rt.unsupported(0x08B2A630u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A638:
    rt.unsupported(0x08B2A638u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A640:
    rt.unsupported(0x08B2A640u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A644:
    rt.unsupported(0x08B2A644u, 0x00313154u, "special? not lowered yet"); return;
L_08B2A648:
    rt.unsupported(0x08B2A648u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A650:
    rt.unsupported(0x08B2A650u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A658:
    rt.unsupported(0x08B2A658u, 0x444F4F47u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B2A65Cu, 0x43415220u, "unknown not lowered yet"); return;
L_08B2A66C:
    if (ctx.gpr[2] == ctx.gpr[3]) {
    rt.unsupported(0x08B2A670u, 0x00313055u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 70u, 0x08B3EFA4u>(ctx, &aot_mem); return;
    }
    goto L_08B2A674;
L_08B2A674:
    rt.unsupported(0x08B2A674u, 0x20444142u, "unknown not lowered yet"); return;
L_08B2A688:
    if (ctx.gpr[2] == ctx.gpr[3]) {
    rt.unsupported(0x08B2A68Cu, 0x00363055u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 71u, 0x08B3EFC0u>(ctx, &aot_mem); return;
    }
    goto L_08B2A690;
L_08B2A68C:
    rt.unsupported(0x08B2A68Cu, 0x00363055u, "special? not lowered yet"); return;
L_08B2A690:
    rt.unsupported(0x08B2A694u, 0x08A84230u, "control flow in delay slot"); return;
L_08B2A788:
    rt.unsupported(0x08B2A78Cu, 0x08A87158u, "control flow in delay slot"); return;
L_08B2A828:
    ctx.execute_vfpu_vcmp_ct<101u, 116u, 1u, 7u>();
    ctx.execute_vfpu_vcmp_ct<99u, 97u, 1u, 15u>();
    // nop
    goto L_08B2A834;
L_08B2A834:
    rt.unsupported(0x08B2A834u, 0x69746567u, "unknown not lowered yet"); return;
L_08B2A83C:
    rt.unsupported(0x08B2A83Cu, 0x68746567u, "unknown not lowered yet"); return;
L_08B2A844:
    rt.unsupported(0x08B2A844u, 0x75746567u, "unknown not lowered yet"); return;
L_08B2A850:
    rt.unsupported(0x08B2A850u, 0x68746573u, "unknown not lowered yet"); return;
L_08B2A858:
    ctx.execute_vfpu_vcmp_ct<101u, 116u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<99u, 97u, 1u, 15u>();
    // nop
    goto L_08B2A864;
L_08B2A864:
    rt.unsupported(0x08B2A864u, 0x75746573u, "unknown not lowered yet"); return;
L_08B2A870:
    rt.unsupported(0x08B2A870u, 0x75626564u, "unknown not lowered yet"); return;
L_08B2A878:
    rt.unsupported(0x08B2A878u, 0x63617274u, "vfpu0 not lowered yet"); return;
L_08B2A884:
    if (ctx.gpr[27] == ctx.gpr[14]) {
    rt.unsupported(0x08B2A888u, 0x00000075u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 16u, 0x08B45A20u>(ctx, &aot_mem); return;
    }
    goto L_08B2A88C;
L_08B2A88C:
    rt.unsupported(0x08B2A88Cu, 0x0073253Eu, "special? not lowered yet"); return;
L_08B2A890:
    rt.unsupported(0x08B2A890u, 0x636E7566u, "vfpu0 not lowered yet"); return;
L_08B2A8AC:
    rt.unsupported(0x08B2A8ACu, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2A8C4:
    rt.unsupported(0x08B2A8C4u, 0x726F6873u, "unknown not lowered yet"); return;
L_08B2A8D0:
    ctx.execute_vfpu_vscl_ct<108u, 105u, 110u, 1u>();
    rt.unsupported(0x08B2A8D4u, 0x69666564u, "unknown not lowered yet"); return;
L_08B2A8DC:
    rt.unsupported(0x08B2A8DCu, 0x74616877u, "unknown not lowered yet"); return;
L_08B2A8E4:
    rt.unsupported(0x08B2A8E4u, 0x72727563u, "unknown not lowered yet"); return;
L_08B2A8F0:
    rt.unsupported(0x08B2A8F0u, 0x7370756Eu, "unknown not lowered yet"); return;
L_08B2A8F8:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    // nop
    goto L_08B2A900;
L_08B2A900:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    rt.unsupported(0x08B2A904u, 0x74616877u, "unknown not lowered yet"); return;
L_08B2A90C:
    rt.unsupported(0x08B2A90Cu, 0x636E7566u, "vfpu0 not lowered yet"); return;
L_08B2A914:
    ctx.execute_vfpu_vscl_ct<108u, 101u, 118u, 1u>();
    rt.unsupported(0x08B2A918u, 0x756F206Cu, "unknown not lowered yet"); return;
L_08B2A928:
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 3u>();
    // nop
    goto L_08B2A930;
L_08B2A930:
    rt.unsupported(0x08B2A930u, 0x75746572u, "unknown not lowered yet"); return;
L_08B2A938:
    ctx.execute_vfpu_vscl_ct<108u, 105u, 110u, 1u>();
    // nop
    goto L_08B2A940;
L_08B2A940:
    rt.unsupported(0x08B2A940u, 0x6E756F63u, "vfpu3 not lowered yet"); return;
L_08B2A944:
    rt.unsupported(0x08B2A944u, 0x00000074u, "special? not lowered yet"); return;
L_08B2A948:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 4u>();
    rt.unsupported(0x08B2A94Cu, 0x74657220u, "unknown not lowered yet"); return;
L_08B2A954:
    ctx.execute_vfpu_vscl_ct<101u, 120u, 116u, 1u>();
    ctx.execute_vfpu_vcmp_ct<110u, 97u, 1u, 2u>();
    ctx.execute_vfpu_compare3(32u, 104u, 111u, 1u, 6u);
    (void)(0u < 0u ? 1u : 0u);
    goto L_08B2A964;
L_08B2A964:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B2A968u, 0x75626564u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 57u, 0x08B47F18u>(ctx, &aot_mem); return;
    }
    goto L_08B2A96C;
L_08B2A96C:
    ctx.gpr[7] = (~(ctx.gpr[1] | 0u));
    goto L_08B2A970;
L_08B2A970:
    rt.unsupported(0x08B2A970u, 0x746E6F63u, "unknown not lowered yet"); return;
L_08B2A978:
    // nop
    goto L_08B2A97C;
L_08B2A97C:
    if (0u == 0u) (void)(0u);
    goto L_08B2A980;
L_08B2A980:
    rt.unsupported(0x08B2A980u, 0x63617473u, "vfpu0 not lowered yet"); return;
L_08B2A994:
    ctx.gpr[14] = (ctx.gpr[17] < static_cast<std::uint32_t>(2314) ? 1u : 0u);
    rt.unsupported(0x08B2A998u, 0x0000002Eu, "special? not lowered yet"); return;
L_08B2A99C:
    if (0u == 0u) ctx.gpr[1] = (0u);
    goto L_08B2A9A0;
L_08B2A9A0:
    ctx.lo = ctx.gpr[3];
    goto L_08B2A9A4;
L_08B2A9A4:
    ctx.gpr[14] = (ctx.gpr[1] | ctx.gpr[26]);
    goto L_08B2A9A8;
L_08B2A9A8:
    ctx.gpr[12] = (ctx.gpr[1] | ctx.gpr[26]);
    goto L_08B2A9AC;
L_08B2A9AC:
    rt.unsupported(0x08B2A9ACu, 0x206E6920u, "unknown not lowered yet"); return;
L_08B2A9C0:
    rt.unsupported(0x08B2A9C0u, 0x206E6920u, "unknown not lowered yet"); return;
L_08B2A9D0:
    { const bool signed_ok = ctx.execute_signed_add(7u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B2A9D0u, 0x00003F20u); return; } }
    goto L_08B2A9D4;
L_08B2A9D4:
    rt.unsupported(0x08B2A9D4u, 0x206E6920u, "unknown not lowered yet"); return;
L_08B2A9DC:
    rt.unsupported(0x08B2A9DCu, 0x6E6F6974u, "vfpu3 not lowered yet"); return;
L_08B2A9EC:
    rt.unsupported(0x08B2A9ECu, 0x4152545Fu, "unknown not lowered yet"); return;
L_08B2A9FC:
    rt.unsupported(0x08B2AA00u, 0x08A87B48u, "control flow in delay slot"); return;
L_08B2AA50:
    rt.unsupported(0x08B2AA54u, 0x08A87B48u, "control flow in delay slot"); return;
L_08B2AA88:
    rt.unsupported(0x08B2AA88u, 0x74726170u, "unknown not lowered yet"); return;
L_08B2AA94:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    goto L_08B2AA98;
L_08B2AA98:
    ctx.execute_vfpu_vhdp(108u, 101u, 97u, 1u);
    ctx.gpr[31] = (ctx.gpr[18] | 12592u);
    rt.unsupported(0x08B2AAA0u, 0x00000034u, "special? not lowered yet"); return;
L_08B2AAA4:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vhdp(108u, 101u, 97u, 1u);
    ctx.gpr[31] = (ctx.gpr[18] | 12848u);
    rt.unsupported(0x08B2AAB0u, 0x00000034u, "special? not lowered yet"); return;
L_08B2AAB4:
    rt.unsupported(0x08B2AAB4u, 0x7377656Eu, "unknown not lowered yet"); return;
L_08B2AAC0:
    rt.unsupported(0x08B2AAC0u, 0x00003436u, "special? not lowered yet"); return;
L_08B2AAC4:
    rt.unsupported(0x08B2AAC4u, 0x7377656Eu, "unknown not lowered yet"); return;
L_08B2AAD4:
    // nop
    rt.unsupported(0x08B2AAD8u, 0x4746432Eu, "cop1? not lowered yet"); return;
L_08B2AAEC:
    (void)(0u ^ 0u);
    rt.unsupported(0x08B2AAF0u, 0x0000004Eu, "special? not lowered yet"); return;
L_08B2AB1C:
    (void)(0u & 0u);
    rt.unsupported(0x08B2AB20u, 0x4B415242u, "cop2/vfpu not lowered yet"); return;
L_08B2AB3C:
    // nop
    ctx.gpr[19] = (ctx.gpr[17] < static_cast<std::uint32_t>(9504) ? 1u : 0u);
    rt.unsupported(0x08B2AB44u, 0x00006632u, "special? not lowered yet"); return;
L_08B2AB5C:
    // nop
    rt.unsupported(0x08B2AB60u, 0x0066312Eu, "special? not lowered yet"); return;
L_08B2AB6C:
    (void)(0u & 0u);
    goto L_08B2AB70;
L_08B2AB70:
    ctx.gpr[5] = (ctx.gpr[11] < static_cast<std::uint32_t>(28271) ? 1u : 0u);
    goto L_08B2AB74;
L_08B2AB74:
    ctx.execute_vfpu_vscl_ct<102u, 105u, 118u, 1u>();
    rt.unsupported(0x08B2AB78u, 0x7268742Du, "unknown not lowered yet"); return;
L_08B2AB80:
    rt.unsupported(0x08B2AB80u, 0x203A7325u, "unknown not lowered yet"); return;
L_08B2AB90:
    ctx.execute_vfpu_vscl_ct<101u, 97u, 116u, 1u>();
    rt.unsupported(0x08B2AB94u, 0x6E797320u, "vfpu3 not lowered yet"); return;
L_08B2AB9C:
    rt.unsupported(0x08B2AB9Cu, 0x6870616Du, "unknown not lowered yet"); return;
L_08B2ABA8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<118u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2ABACu, 0x7274735Fu, "unknown not lowered yet"); return;
L_08B2ABB4:
    ctx.execute_vfpu_vscl_ct<116u, 104u, 114u, 1u>();
    ctx.execute_vfpu_vscl_ct<97u, 100u, 115u, 1u>();
    ctx.gpr[12] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B2ABC0;
L_08B2ABC0:
    rt.unsupported(0x08B2ABC0u, 0x203A7325u, "unknown not lowered yet"); return;
L_08B2ABC4:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B2ABC8u, 0x74206465u, "unknown not lowered yet"); return;
L_08B2ABE8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<99u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<101u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<115u, 116u, 114u, 1u>();
    rt.unsupported(0x08B2ABF0u, 0x68546D61u, "unknown not lowered yet"); return;
L_08B2ABFC:
    rt.unsupported(0x08B2ABFCu, 0x203A7325u, "unknown not lowered yet"); return;
L_08B2AC1C:
    rt.unsupported(0x08B2AC1Cu, 0x61657268u, "vfpu0 not lowered yet"); return;
L_08B2AC24:
    rt.unsupported(0x08B2AC24u, 0x203A7325u, "unknown not lowered yet"); return;
L_08B2AC34:
    if (0u == 0u) (void)(0u);
    goto L_08B2AC38;
L_08B2AC38:
    rt.unsupported(0x08B2AC38u, 0x75657551u, "unknown not lowered yet"); return;
L_08B2AC48:
    rt.unsupported(0x08B2AC48u, 0x75657551u, "unknown not lowered yet"); return;
L_08B2AC4C:
    rt.unsupported(0x08B2AC4Cu, 0x73692065u, "unknown not lowered yet"); return;
L_08B2AC58:
    rt.unsupported(0x08B2AC58u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B2AC68:
    rt.unsupported(0x08B2AC68u, 0x72687420u, "unknown not lowered yet"); return;
L_08B2AC6C:
    // nop
    (void)(ctx.pc = 0x09918594u, rt.invoke_chained_call(ctx, &aot_mem)); return;
L_08B2AC74:
    rt.unsupported(0x08B2AC74u, 0x4F525245u, "unknown not lowered yet"); return;
L_08B2AC80:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B2AC84u, 0x77206465u, "unknown not lowered yet"); return;
L_08B2AC9C:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 32u, 114u, 1u>();
    goto L_08B2ACA4;
L_08B2ACA4:
    rt.unsupported(0x08B2ACA4u, 0x6E696461u, "vfpu3 not lowered yet"); return;
L_08B2ACAC:
    rt.unsupported(0x08B2ACACu, 0x2021656Cu, "unknown not lowered yet"); return;
L_08B2ACCC:
    rt.unsupported(0x08B2ACCCu, 0x43534944u, "unknown not lowered yet"); return;
L_08B2ACD4:
    rt.unsupported(0x08B2ACD4u, 0x475F5053u, "cop1? not lowered yet"); return;
L_08B2ACD8:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B2ACDCu, 0x44525355u, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[1];
    ctx.gpr[10] = (0x08B2ACE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B2ACE8u) goto L_08B2ACE8;
    return;
L_08B2ACE8:
    if (ctx.gpr[2] == ctx.gpr[6]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 13u, 0x08B3D1A4u>(ctx, &aot_mem); return;
    }
    goto L_08B2ACF0;
L_08B2ACF0:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B2ACF4u, 0x676E6976u, "vfpu1 not lowered yet"); return;
L_08B2AD00:
    rt.unsupported(0x08B2AD00u, 0x00000A73u, "special? not lowered yet"); return;
L_08B2AD08:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2AD0Cu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2AD1C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2AD20u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2AD30:
    // nop
    (void)(ctx.pc = 0x099195CCu, rt.invoke_chained_call(ctx, &aot_mem)); return;
L_08B2AD34:
    // nop
    goto L_08B2AD38;
L_08B2AD38:
    if (ctx.gpr[26] == ctx.gpr[20]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 125u, 0x08B3F668u>(ctx, &aot_mem); return;
    }
    goto L_08B2AD40;
L_08B2AD40:
    ctx.gpr[20] = (ctx.gpr[2] & 21067u);
    // nop
    goto L_08B2AD48;
L_08B2AD48:
    ctx.gpr[16] = (ctx.gpr[1] & 21067u);
    // nop
    goto L_08B2AD50;
L_08B2AD50:
    ctx.execute_vfpu_compare3(76u, 32u, 84u, 1u, 6u);
    (void)(0u | 0u);
    goto L_08B2AD58;
L_08B2AD58:
    ctx.execute_vfpu_vminmax(97u, 110u, 105u, 1u, false);
    rt.unsupported(0x08B2AD5Cu, 0x20732520u, "unknown not lowered yet"); return;
L_08B2AD78:
    rt.unsupported(0x08B2AD78u, 0x4F525245u, "unknown not lowered yet"); return;
L_08B2AD84:
    rt.unsupported(0x08B2AD84u, 0x4F542047u, "unknown not lowered yet"); return;
L_08B2AD94:
    rt.unsupported(0x08B2AD94u, 0x4843204Eu, "cop2/vfpu not lowered yet"); return;
L_08B2ADA8:
    ctx.execute_vfpu_vminmax(67u, 83u, 105u, 1u, false);
    rt.unsupported(0x08B2ADACu, 0x4D656C70u, "unknown not lowered yet"); return;
L_08B2ADC4:
    rt.unsupported(0x08B2ADC4u, 0x00006272u, "special? not lowered yet"); return;
L_08B2ADD0:
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[13] = (0u | 0u);
    rt.unsupported(0x08B2ADD8u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B2ADE0:
    rt.unsupported(0x08B2ADE0u, 0x74737562u, "unknown not lowered yet"); return;
L_08B2ADEC:
    rt.unsupported(0x08B2ADECu, 0x74737562u, "unknown not lowered yet"); return;
L_08B2ADF4:
    ctx.execute_vfpu_vminmax(67u, 71u, 97u, 1u, false);
    goto L_08B2ADF8;
L_08B2ADF8:
    rt.unsupported(0x08B2ADF8u, 0x676F4C65u, "vfpu1 not lowered yet"); return;
L_08B2AE0C:
    rt.unsupported(0x08B2AE0Cu, 0x75745372u, "unknown not lowered yet"); return;
L_08B2AE28:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B2AE2Cu, 0x4E49524Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 2u, 0x08B3C374u>(ctx, &aot_mem); return;
    }
    goto L_08B2AE30;
L_08B2AE30:
    rt.unsupported(0x08B2AE30u, 0x4C502047u, "unknown not lowered yet"); return;
L_08B2AE3C:
    if (ctx.gpr[2] != ctx.gpr[9]) {
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(14880));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 7u, 0x08B3C790u>(ctx, &aot_mem); return;
    }
    goto L_08B2AE44;
L_08B2AE44:
    rt.unsupported(0x08B2AE44u, 0x00000A73u, "special? not lowered yet"); return;
L_08B2AE48:
    rt.unsupported(0x08B2AE48u, 0x49584154u, "cop2/vfpu not lowered yet"); return;
L_08B2AE64:
    rt.unsupported(0x08B2AE68u, 0x08A8E068u, "control flow in delay slot"); return;
L_08B2AE70:
    ctx.gpr[5] = (ctx.gpr[1] & 21059u);
    ctx.gpr[31] = (ctx.gpr[10] + static_cast<std::uint32_t>(25650));
    rt.unsupported(0x08B2AE78u, 0x00643230u, "special? not lowered yet"); return;
L_08B2AE7C:
    if (ctx.gpr[2] == ctx.gpr[15]) {
    rt.unsupported(0x08B2AE80u, 0x474E4950u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 127u, 0x08B3FFCCu>(ctx, &aot_mem); return;
    }
    goto L_08B2AE84;
L_08B2AE84:
    rt.unsupported(0x08B2AE84u, 0x45524320u, "cop1? not lowered yet"); return;
L_08B2AE90:
    rt.unsupported(0x08B2AE90u, 0x72617453u, "unknown not lowered yet"); return;
L_08B2AE94:
    rt.unsupported(0x08B2AE94u, 0x676E6974u, "vfpu1 not lowered yet"); return;
L_08B2AEAC:
    rt.unsupported(0x08B2AEACu, 0x44455243u, "unsupported CFC1 control register"); return;
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<50u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    // nop
    rt.unsupported(0x08B2AEB8u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B2AECC:
    rt.unsupported(0x08B2AED0u, 0x08A8FA34u, "control flow in delay slot"); return;
L_08B2AF00:
    rt.unsupported(0x08B2AF04u, 0x08A905ECu, "control flow in delay slot"); return;
L_08B2AF2C:
    rt.unsupported(0x08B2AF30u, 0x08A905ECu, "control flow in delay slot"); return;
L_08B2AF60:
    rt.unsupported(0x08B2AF64u, 0x08A905ECu, "control flow in delay slot"); return;
L_08B2AF68:
    rt.unsupported(0x08B2AF6Cu, 0x08A905ECu, "control flow in delay slot"); return;
L_08B2AF8C:
    rt.unsupported(0x08B2AF90u, 0x08A905ECu, "control flow in delay slot"); return;
L_08B2AF94:
    rt.unsupported(0x08B2AF98u, 0x08A905ECu, "control flow in delay slot"); return;
L_08B2AFB0:
    rt.unsupported(0x08B2AFB0u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B2AFB4:
    rt.unsupported(0x08B2AFB4u, 0x696C6169u, "unknown not lowered yet"); return;
L_08B2AFC8:
    rt.unsupported(0x08B2AFC8u, 0x00002E2Eu, "special? not lowered yet"); return;
L_08B2AFE0:
    ctx.execute_vfpu_vscl_ct<85u, 110u, 100u, 1u>();
    ctx.execute_vfpu_vscl_ct<102u, 105u, 110u, 1u>();
    rt.unsupported(0x08B2AFE8u, 0x6E652064u, "vfpu3 not lowered yet"); return;
L_08B2AFFC:
    rt.unsupported(0x08B2AFFCu, 0x45726574u, "cop1? not lowered yet"); return;
L_08B2B014:
    rt.unsupported(0x08B2B014u, 0x444F4F47u, "unsupported CFC1 control register"); return;
    ctx.gpr[9] = (ctx.gpr[25] >> 29u);
    // nop
    rt.unsupported(0x08B2B024u, 0x08A929CCu, "control flow in delay slot"); return;
L_08B2B068:
    rt.unsupported(0x08B2B068u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2B070:
    rt.unsupported(0x08B2B070u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2B078:
    rt.unsupported(0x08B2B078u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2B080:
    rt.unsupported(0x08B2B080u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B2B088:
    rt.unsupported(0x08B2B088u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2B090:
    rt.unsupported(0x08B2B090u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2B098:
    rt.unsupported(0x08B2B098u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2B0A0:
    rt.unsupported(0x08B2B0A0u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2B0A8:
    rt.unsupported(0x08B2B0A8u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B2B0C0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<80u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<67u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2B0C4u, 0x61657220u, "vfpu0 not lowered yet"); return;
L_08B2B0CC:
    rt.unsupported(0x08B2B0CCu, 0x4F434F4Eu, "unknown not lowered yet"); return;
L_08B2B0D4:
    rt.unsupported(0x08B2B0D4u, 0x4F435257u, "unknown not lowered yet"); return;
L_08B2B0D8:
    rt.unsupported(0x08B2B0D8u, 0x0045544Eu, "special? not lowered yet"); return;
L_08B2B0DC:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<32u, 119u, 104u, 1u>();
    rt.unsupported(0x08B2B0E4u, 0x756A206Eu, "unknown not lowered yet"); return;
L_08B2B0FC:
    rt.unsupported(0x08B2B0FCu, 0x62756F44u, "vfpu0 not lowered yet"); return;
L_08B2B110:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(12902));
    ctx.gpr[1] = (0u & 0u);
    goto L_08B2B118;
L_08B2B118:
    ctx.execute_vfpu_vminmax(78u, 111u, 114u, 1u, false);
    rt.unsupported(0x08B2B11Cu, 0x203A6C61u, "unknown not lowered yet"); return;
L_08B2B150:
    rt.unsupported(0x08B2B154u, 0x08A961C8u, "control flow in delay slot"); return;
L_08B2B170:
    rt.unsupported(0x08B2B170u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B2B184:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 103u, 1u>();
    ctx.gpr[14] = (ctx.gpr[17] < static_cast<std::uint32_t>(11890) ? 1u : 0u);
    if (0u == 0u) (void)(0u);
    goto L_08B2B190;
L_08B2B190:
    rt.unsupported(0x08B2B190u, 0x454C4C49u, "cop1? not lowered yet"); return;
L_08B2B198:
    rt.unsupported(0x08B2B198u, 0x20584653u, "unknown not lowered yet"); return;
L_08B2B1A4:
    rt.unsupported(0x08B2B1A4u, 0x474E4944u, "cop1? not lowered yet"); return;
L_08B2B1A8:
    if (0u == 0u) (void)(0u);
    rt.unsupported(0x08B2B1ACu, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B2B1B0:
    rt.unsupported(0x08B2B1B0u, 0x00000A79u, "special? not lowered yet"); return;
L_08B2B1E8:
    rt.unsupported(0x08B2B1E8u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B2B1F0:
    rt.unsupported(0x08B2B1F0u, 0x676E6973u, "vfpu1 not lowered yet"); return;
L_08B2B208:
    rt.unsupported(0x08B2B208u, 0x706F5043u, "unknown not lowered yet"); return;
L_08B2B238:
    rt.unsupported(0x08B2B238u, 0x6E6B6E55u, "vfpu3 not lowered yet"); return;
L_08B2B260:
    rt.unsupported(0x08B2B260u, 0x6E6F6974u, "vfpu3 not lowered yet"); return;
L_08B2B274:
    rt.unsupported(0x08B2B274u, 0x20646570u, "unknown not lowered yet"); return;
L_08B2B290:
    rt.unsupported(0x08B2B290u, 0x6E6B6E55u, "vfpu3 not lowered yet"); return;
L_08B2B2DC:
    rt.unsupported(0x08B2B2E0u, 0x08A9ECA0u, "control flow in delay slot"); return;
L_08B2B418:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B2B41Cu, 0x46454420u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 8u, 0x08B3C93Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2B420;
L_08B2B420:
    ctx.gpr[7] = (ctx.gpr[18] ^ 16722u);
    if (ctx.gpr[18] != ctx.gpr[15]) {
    rt.unsupported(0x08B2B428u, 0x20474E49u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 59u, 0x08B3E8A8u>(ctx, &aot_mem); return;
    }
    goto L_08B2B42C;
L_08B2B42C:
    rt.unsupported(0x08B2B42Cu, 0x42206925u, "unknown not lowered yet"); return;
L_08B2B438:
    rt.unsupported(0x08B2B438u, 0x4F4C4C41u, "unknown not lowered yet"); return;
L_08B2B44C:
    rt.unsupported(0x08B2B44Cu, 0x4C494146u, "unknown not lowered yet"); return;
L_08B2B468:
    rt.unsupported(0x08B2B468u, 0x204F5420u, "unknown not lowered yet"); return;
L_08B2B484:
    if (ctx.gpr[26] == ctx.gpr[5]) {
    rt.unsupported(0x08B2B488u, 0x41572054u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 218u, 0x08B3BD28u>(ctx, &aot_mem); return;
    }
    goto L_08B2B48C;
L_08B2B48C:
    rt.unsupported(0x08B2B48Cu, 0x69252053u, "unknown not lowered yet"); return;
L_08B2B494:
    rt.unsupported(0x08B2B494u, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B2B4A8:
    ctx.execute_vfpu_vscl_ct<101u, 113u, 117u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<116u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    ctx.gpr[9] = (ctx.gpr[3] < static_cast<std::uint32_t>(9504) ? 1u : 0u);
    rt.unsupported(0x08B2B4B4u, 0x61766120u, "vfpu0 not lowered yet"); return;
L_08B2B4D8:
    rt.unsupported(0x08B2B4D8u, 0x62206925u, "vfpu0 not lowered yet"); return;
L_08B2B4EC:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 122u, 1u>();
    rt.unsupported(0x08B2B4F0u, 0x20692520u, "unknown not lowered yet"); return;
L_08B2B508:
    rt.unsupported(0x08B2B508u, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B2B514:
    rt.unsupported(0x08B2B514u, 0x70252052u, "unknown not lowered yet"); return;
L_08B2B520:
    if (0u == 0u) (void)(0u);
    goto L_08B2B524;
L_08B2B524:
    ctx.execute_vfpu_vscl_ct<77u, 97u, 107u, 1u>();
    rt.unsupported(0x08B2B528u, 0x70616548u, "unknown not lowered yet"); return;
L_08B2B544:
    rt.unsupported(0x08B2B544u, 0x4B656373u, "cop2/vfpu not lowered yet"); return;
L_08B2B554:
    if (ctx.gpr[27] == ctx.gpr[13]) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[3]) < 31337 ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 8u, 0x08B44A8Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2B55C;
L_08B2B55C:
    rt.unsupported(0x08B2B55Cu, 0x73692029u, "unknown not lowered yet"); return;
L_08B2B564:
    { const bool signed_ok = ctx.execute_signed_sub(1u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B2B564u, 0x00000A62u); return; } }
    goto L_08B2B568;
L_08B2B568:
    rt.unsupported(0x08B2B568u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08B2B584:
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    goto L_08B2B5A0;
L_08B2B5A0:
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    goto L_08B2B5C0;
L_08B2B5C0:
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    rt.unsupported(0x08B2B5CCu, 0x00002F2Fu, "special? not lowered yet"); return;
L_08B2B5D0:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B2B5D4u, 0x4D554420u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 10u, 0x08B3CAF4u>(ctx, &aot_mem); return;
    }
    goto L_08B2B5D8;
L_08B2B5D8:
    ctx.gpr[1] = (ctx.hi);
    goto L_08B2B5DC;
L_08B2B5DC:
    rt.unsupported(0x08B2B5DCu, 0x70616548u, "unknown not lowered yet"); return;
L_08B2B5F0:
    rt.unsupported(0x08B2B5F0u, 0x70616548u, "unknown not lowered yet"); return;
L_08B2B5F4:
    rt.unsupported(0x08B2B5F4u, 0x206E6920u, "unknown not lowered yet"); return;
L_08B2B604:
    rt.unsupported(0x08B2B604u, 0x70616548u, "unknown not lowered yet"); return;
L_08B2B618:
    rt.unsupported(0x08B2B618u, 0x74736157u, "unknown not lowered yet"); return;
L_08B2B61C:
    ctx.gpr[5] = (ctx.gpr[19] ^ 26465u);
    rt.unsupported(0x08B2B620u, 0x20202020u, "unknown not lowered yet"); return;
L_08B2B628:
    rt.unsupported(0x08B2B628u, 0x00000069u, "special? not lowered yet"); return;
L_08B2B62C:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 0u>();
    rt.unsupported(0x08B2B630u, 0x69382520u, "unknown not lowered yet"); return;
L_08B2B650:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 0u>();
    goto L_08B2B654;
L_08B2B654:
    rt.unsupported(0x08B2B654u, 0x7A697320u, "unknown not lowered yet"); return;
L_08B2B660:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 0u>();
    ctx.execute_vfpu_vscl_ct<32u, 102u, 114u, 1u>();
    rt.unsupported(0x08B2B668u, 0x20203A65u, "unknown not lowered yet"); return;
L_08B2B670:
    rt.unsupported(0x08B2B670u, 0x616C7063u, "vfpu0 not lowered yet"); return;
L_08B2B684:
    rt.unsupported(0x08B2B684u, 0x616C7063u, "vfpu0 not lowered yet"); return;
L_08B2B68C:
    ctx.execute_vfpu_vminmax(101u, 116u, 32u, 1u, false);
    ctx.execute_vfpu_vcmp_ct<100u, 101u, 1u, 15u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[15] = (0u | ctx.gpr[10]);
    goto L_08B2B69C;
L_08B2B69C:
    rt.unsupported(0x08B2B69Cu, 0x74696E69u, "unknown not lowered yet"); return;
L_08B2B6AC:
    rt.unsupported(0x08B2B6ACu, 0x74746573u, "unknown not lowered yet"); return;
L_08B2B6E0:
    rt.unsupported(0x08B2B6E0u, 0x006C696Eu, "special? not lowered yet"); return;
L_08B2B6E4:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 2u>();
    ctx.gpr[12] = (ctx.gpr[3] | ctx.gpr[14]);
    goto L_08B2B6EC;
L_08B2B6EC:
    rt.unsupported(0x08B2B6ECu, 0x72657375u, "unknown not lowered yet"); return;
L_08B2B6F8:
    rt.unsupported(0x08B2B6F8u, 0x626D756Eu, "vfpu0 not lowered yet"); return;
L_08B2B700:
    rt.unsupported(0x08B2B700u, 0x69727473u, "unknown not lowered yet"); return;
L_08B2B708:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    (void)(0u | 0u);
    goto L_08B2B710;
L_08B2B710:
    rt.unsupported(0x08B2B710u, 0x636E7566u, "vfpu0 not lowered yet"); return;
L_08B2B71C:
    ctx.execute_vfpu_vscl_ct<116u, 104u, 114u, 1u>();
    ctx.gpr[12] = (0u + 0u);
    goto L_08B2B724;
L_08B2B724:
    rt.unsupported(0x08B2B724u, 0x6E695F5Fu, "vfpu3 not lowered yet"); return;
L_08B2B72C:
    ctx.execute_vfpu_vscl_ct<95u, 95u, 110u, 1u>();
    goto L_08B2B730;
L_08B2B730:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<119u, 1u>(vfpu_d); }
    ctx.gpr[15] = (0u | 0u);
    goto L_08B2B738;
L_08B2B738:
    rt.unsupported(0x08B2B738u, 0x73755F5Fu, "unknown not lowered yet"); return;
L_08B2B744:
    rt.unsupported(0x08B2B744u, 0x63675F5Fu, "vfpu0 not lowered yet"); return;
L_08B2B74C:
    ctx.execute_vfpu_compare3(95u, 95u, 109u, 1u, 6u);
    ctx.gpr[12] = (0u & 0u);
    goto L_08B2B754;
L_08B2B754:
    rt.unsupported(0x08B2B754u, 0x71655F5Fu, "unknown not lowered yet"); return;
L_08B2B75C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<95u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<95u, 1u>(vfpu_d); }
    (void)(0u & 0u);
    goto L_08B2B764;
L_08B2B764:
    rt.unsupported(0x08B2B764u, 0x75735F5Fu, "unknown not lowered yet"); return;
L_08B2B76C:
    rt.unsupported(0x08B2B76Cu, 0x756D5F5Fu, "unknown not lowered yet"); return;
L_08B2B774:
    rt.unsupported(0x08B2B774u, 0x69645F5Fu, "unknown not lowered yet"); return;
L_08B2B77C:
    ctx.execute_vfpu_compare3(95u, 95u, 112u, 1u, 6u);
    rt.unsupported(0x08B2B780u, 0x00000077u, "special? not lowered yet"); return;
L_08B2B784:
    rt.unsupported(0x08B2B784u, 0x6E755F5Fu, "vfpu3 not lowered yet"); return;
L_08B2B78C:
    rt.unsupported(0x08B2B78Cu, 0x746C5F5Fu, "unknown not lowered yet"); return;
L_08B2B794:
    ctx.execute_vfpu_vscl_ct<95u, 95u, 108u, 1u>();
    // nop
    goto L_08B2B79C;
L_08B2B79C:
    ctx.execute_vfpu_compare3(95u, 95u, 99u, 1u, 6u);
    rt.unsupported(0x08B2B7A0u, 0x7461636Eu, "unknown not lowered yet"); return;
L_08B2B7A8:
    rt.unsupported(0x08B2B7A8u, 0x61635F5Fu, "vfpu0 not lowered yet"); return;
L_08B2B7B8:
    rt.unsupported(0x08B2B7B8u, 0x206E6152u, "unknown not lowered yet"); return;
L_08B2B7D4:
    rt.unsupported(0x08B2B7D4u, 0x79746974u, "unknown not lowered yet"); return;
L_08B2B7E8:
    ctx.gpr[13] = (ctx.gpr[3] + ctx.gpr[4]);
    goto L_08B2B7EC;
L_08B2B7EC:
    rt.unsupported(0x08B2B7ECu, 0x61657262u, "vfpu0 not lowered yet"); return;
L_08B2B7F4:
    ctx.gpr[13] = (0u & 0u);
    goto L_08B2B7F8;
L_08B2B7F8:
    ctx.execute_vfpu_vscl_ct<101u, 108u, 115u, 1u>();
    // nop
    goto L_08B2B800;
L_08B2B800:
    ctx.execute_vfpu_vscl_ct<101u, 108u, 115u, 1u>();
    rt.unsupported(0x08B2B804u, 0x00006669u, "special? not lowered yet"); return;
L_08B2B808:
    ctx.gpr[13] = (ctx.gpr[3] | ctx.gpr[4]);
    goto L_08B2B80C;
L_08B2B80C:
    rt.unsupported(0x08B2B80Cu, 0x736C6166u, "unknown not lowered yet"); return;
L_08B2B814:
    ctx.gpr[13] = (ctx.gpr[3] ^ ctx.gpr[18]);
    goto L_08B2B818;
L_08B2B818:
    rt.unsupported(0x08B2B818u, 0x636E7566u, "vfpu0 not lowered yet"); return;
L_08B2B824:
    rt.unsupported(0x08B2B824u, 0x00006669u, "special? not lowered yet"); return;
L_08B2B828:
    rt.unsupported(0x08B2B828u, 0x00006E69u, "special? not lowered yet"); return;
L_08B2B82C:
    rt.unsupported(0x08B2B82Cu, 0x61636F6Cu, "vfpu0 not lowered yet"); return;
L_08B2B834:
    rt.unsupported(0x08B2B834u, 0x006C696Eu, "special? not lowered yet"); return;
L_08B2B838:
    rt.unsupported(0x08B2B838u, 0x00746F6Eu, "special? not lowered yet"); return;
L_08B2B83C:
    rt.unsupported(0x08B2B83Cu, 0x0000726Fu, "special? not lowered yet"); return;
L_08B2B840:
    ctx.execute_vfpu_vscl_ct<114u, 101u, 112u, 1u>();
    ctx.gpr[14] = (0u + 0u);
    goto L_08B2B848;
L_08B2B848:
    rt.unsupported(0x08B2B848u, 0x75746572u, "unknown not lowered yet"); return;
L_08B2B850:
    rt.unsupported(0x08B2B850u, 0x6E656874u, "vfpu3 not lowered yet"); return;
L_08B2B858:
    ctx.execute_vfpu_vscl_ct<116u, 114u, 117u, 1u>();
    // nop
    goto L_08B2B860;
L_08B2B860:
    rt.unsupported(0x08B2B860u, 0x69746E75u, "unknown not lowered yet"); return;
L_08B2B868:
    ctx.execute_vfpu_vcmp_ct<104u, 105u, 1u, 7u>();
    (void)(0u | 0u);
    goto L_08B2B870;
L_08B2B870:
    ctx.execute_vfpu_vminmax(42u, 110u, 97u, 1u, false);
    (void)(0u | 0u);
    goto L_08B2B878;
L_08B2B878:
    rt.unsupported(0x08B2B878u, 0x00002E2Eu, "special? not lowered yet"); return;
L_08B2B87C:
    rt.unsupported(0x08B2B87Cu, 0x002E2E2Eu, "special? not lowered yet"); return;
L_08B2B880:
    rt.unsupported(0x08B2B880u, 0x00003D3Du, "special? not lowered yet"); return;
L_08B2B884:
    rt.unsupported(0x08B2B884u, 0x00003D3Eu, "special? not lowered yet"); return;
L_08B2B888:
    rt.unsupported(0x08B2B888u, 0x00003D3Cu, "special? not lowered yet"); return;
L_08B2B88C:
    rt.unsupported(0x08B2B88Cu, 0x00003D7Eu, "special? not lowered yet"); return;
L_08B2B890:
    ctx.gpr[7] = (0u + 0u);
    goto L_08B2B894;
L_08B2B894:
    ctx.execute_vfpu_vminmax(42u, 110u, 117u, 1u, false);
    { const bool signed_ok = ctx.execute_signed_sub(12u, 3u, 18u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B2B898u, 0x00726562u); return; } }
    goto L_08B2B89C;
L_08B2B89C:
    rt.unsupported(0x08B2B89Cu, 0x7274732Au, "unknown not lowered yet"); return;
L_08B2B8A4:
    ctx.execute_vfpu_vhdp(60u, 101u, 111u, 1u);
    rt.unsupported(0x08B2B8A8u, 0x0000003Eu, "special? not lowered yet"); return;
L_08B2B8AC:
    rt.unsupported(0x08B2B8ACu, 0x206F6F74u, "unknown not lowered yet"); return;
L_08B2B8C4:
    ctx.gpr[26] = (ctx.gpr[9] + static_cast<std::uint32_t>(29477));
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(14948));
    ctx.execute_vfpu_vscl_ct<115u, 32u, 110u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    ctx.gpr[14] = (ctx.gpr[1] | ctx.gpr[7]);
    goto L_08B2B8D8;
L_08B2B8D8:
    ctx.gpr[12] = (0u | 0u);
    goto L_08B2B8DC;
L_08B2B8DC:
    ctx.execute_vfpu_vscl_ct<108u, 105u, 110u, 1u>();
    rt.unsupported(0x08B2B8E0u, 0x6E692073u, "vfpu3 not lowered yet"); return;
L_08B2B8F0:
    rt.unsupported(0x08B2B8F0u, 0x69626D61u, "unknown not lowered yet"); return;
L_08B2B928:
    ctx.execute_vfpu_vhdp(109u, 97u, 108u, 1u);
    ctx.execute_vfpu_vscl_ct<111u, 114u, 109u, 1u>();
    rt.unsupported(0x08B2B930u, 0x756E2064u, "unknown not lowered yet"); return;
L_08B2B93C:
    rt.unsupported(0x08B2B93Cu, 0x69666E75u, "unknown not lowered yet"); return;
L_08B2B954:
    rt.unsupported(0x08B2B954u, 0x69666E75u, "unknown not lowered yet"); return;
L_08B2B96C:
    rt.unsupported(0x08B2B96Cu, 0x69666E75u, "unknown not lowered yet"); return;
L_08B2B980:
    rt.unsupported(0x08B2B980u, 0x61637365u, "vfpu0 not lowered yet"); return;
L_08B2B99C:
    rt.unsupported(0x08B2B99Cu, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2B9B4:
    rt.unsupported(0x08B2B9B4u, 0x72616863u, "unknown not lowered yet"); return;
L_08B2BA50:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B2BA54u, 0x74206465u, "unknown not lowered yet"); return;
L_08B2BA64:
    rt.unsupported(0x08B2BA64u, 0x20646165u, "unknown not lowered yet"); return;
L_08B2BA7C:
    rt.unsupported(0x08B2BA7Cu, 0x70737553u, "unknown not lowered yet"); return;
L_08B2BA8C:
    rt.unsupported(0x08B2BA8Cu, 0x70737553u, "unknown not lowered yet"); return;
L_08B2BA9C:
    rt.unsupported(0x08B2BA9Cu, 0x70737553u, "unknown not lowered yet"); return;
L_08B2BAAC:
    rt.unsupported(0x08B2BAACu, 0x70737553u, "unknown not lowered yet"); return;
L_08B2BABC:
    rt.unsupported(0x08B2BABCu, 0x70737553u, "unknown not lowered yet"); return;
L_08B2BACC:
    rt.unsupported(0x08B2BACCu, 0x70737553u, "unknown not lowered yet"); return;
L_08B2BADC:
    ctx.gpr[21] = (ctx.gpr[19] ^ 18275u);
    rt.unsupported(0x08B2BAE0u, 0x6E79533Au, "vfpu3 not lowered yet"); return;
L_08B2BAE8:
    ctx.gpr[21] = (ctx.gpr[19] ^ 18275u);
    rt.unsupported(0x08B2BAECu, 0x6E79533Au, "vfpu3 not lowered yet"); return;
L_08B2BB08:
    rt.unsupported(0x08B2BB08u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B2BB14:
    rt.unsupported(0x08B2BB14u, 0x62206925u, "vfpu0 not lowered yet"); return;
L_08B2BB30:
    rt.unsupported(0x08B2BB30u, 0x61754C1Bu, "vfpu0 not lowered yet"); return;
L_08B2BBF0:
    rt.unsupported(0x08B2BBF0u, 0x6974706Fu, "unknown not lowered yet"); return;
L_08B2BCA8:
    rt.unsupported(0x08B2BCACu, 0x08AB5BD8u, "control flow in delay slot"); return;
L_08B2BCB8:
    rt.unsupported(0x08B2BCBCu, 0x08AB5E34u, "control flow in delay slot"); return;
L_08B2BCC8:
    rt.unsupported(0x08B2BCCCu, 0x08AB5B60u, "control flow in delay slot"); return;
L_08B2BCD8:
    // nop
    ctx.pc = 0x02AD6D80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B2BCF0:
    rt.unsupported(0x08B2BCF4u, 0x08AB6740u, "control flow in delay slot"); return;
L_08B2BDF0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2BDF4u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2BE10:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B2BE18u, 0x432A2A2Au, "unknown not lowered yet"); return;
L_08B2BE30:
    rt.unsupported(0x08B2BE30u, 0x73616C46u, "unknown not lowered yet"); return;
L_08B2BE38:
    ctx.execute_vfpu_vscl_ct<79u, 114u, 100u, 1u>();
    rt.unsupported(0x08B2BE3Cu, 0x00000072u, "special? not lowered yet"); return;
L_08B2BE40:
    ctx.execute_vfpu_vcmp_ct<99u, 97u, 1u, 3u>();
    (void)(0u | 0u);
    goto L_08B2BE48;
L_08B2BE48:
    ctx.execute_vfpu_vcmp_ct<116u, 121u, 1u, 3u>();
    (void)(0u | 0u);
    goto L_08B2BE50;
L_08B2BE50:
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B2BE54u, 0x00007275u, "special? not lowered yet"); return;
L_08B2BE58:
    rt.unsupported(0x08B2BE58u, 0x70617257u, "unknown not lowered yet"); return;
L_08B2BE60:
    rt.unsupported(0x08B2BE60u, 0x67696C41u, "vfpu1 not lowered yet"); return;
L_08B2BE68:
    rt.unsupported(0x08B2BE68u, 0x74786554u, "unknown not lowered yet"); return;
L_08B2BE70:
    ctx.gpr[13] = (ctx.hi);
    goto L_08B2BE74;
L_08B2BE74:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B2BE78u, 0x00006576u, "special? not lowered yet"); return;
L_08B2BE7C:
    rt.unsupported(0x08B2BE7Cu, 0x63675F5Fu, "vfpu0 not lowered yet"); return;
L_08B2BE84:
    rt.unsupported(0x08B2BE84u, 0x6E697250u, "vfpu3 not lowered yet"); return;
L_08B2BE90:
    rt.unsupported(0x08B2BE90u, 0x74786554u, "unknown not lowered yet"); return;
L_08B2BE9C:
    rt.unsupported(0x08B2BE9Cu, 0x61656C43u, "vfpu0 not lowered yet"); return;
L_08B2BEB4:
    rt.unsupported(0x08B2BEB4u, 0x74786574u, "unknown not lowered yet"); return;
L_08B2BEC0:
    rt.unsupported(0x08B2BEC0u, 0x4E495250u, "unknown not lowered yet"); return;
L_08B2BECC:
    // nop
    ctx.gpr[18] = (ctx.gpr[17] < static_cast<std::uint32_t>(11825) ? 1u : 0u);
    rt.unsupported(0x08B2BED4u, 0x00000032u, "special? not lowered yet"); return;
L_08B2BF40:
    rt.unsupported(0x08B2BF40u, 0x69754243u, "unknown not lowered yet"); return;
L_08B2BF58:
    if (ctx.gpr[26] != ctx.gpr[20]) {
    rt.unsupported(0x08B2BF5Cu, 0x4F505941u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 18u, 0x08B3D4A8u>(ctx, &aot_mem); return;
    }
    goto L_08B2BF60;
L_08B2BF60:
    jump_target = ctx.gpr[2];
    ctx.gpr[9] = (0x08B2BF68u);
    rt.unsupported(0x08B2BF64u, 0x41454C43u, "unknown not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B2BF68u) goto L_08B2BF68;
    return;
L_08B2BF64:
    rt.unsupported(0x08B2BF64u, 0x41454C43u, "unknown not lowered yet"); return;
L_08B2BF68:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    rt.unsupported(0x08B2BF6Cu, 0x4E494F50u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 24u, 0x08B41CB4u>(ctx, &aot_mem); return;
    }
    goto L_08B2BF70;
L_08B2BF70:
    rt.unsupported(0x08B2BF70u, 0x00000054u, "special? not lowered yet"); return;
L_08B2BF74:
    if (ctx.gpr[26] != ctx.gpr[20]) {
    rt.unsupported(0x08B2BF78u, 0x4F505941u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 53u, 0x08B3E498u>(ctx, &aot_mem); return;
    }
    goto L_08B2BF7C;
L_08B2BF7C:
    jump_target = ctx.gpr[2];
    ctx.gpr[9] = (0x08B2BF84u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B2BF84u) goto L_08B2BF84;
    return;
L_08B2BF80:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    goto L_08B2BF84;
L_08B2BF84:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    goto L_08B2BF88;
L_08B2BF88:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B2BF90u, 0x45454E20u, "cop1? not lowered yet"); return;
L_08B2BFA0:
    rt.unsupported(0x08B2BFA4u, 0x564F4D20u, "control flow in delay slot"); return;
L_08B2BFA8:
    rt.unsupported(0x08B2BFA8u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B2BFBC:
    rt.unsupported(0x08B2BFBCu, 0x00000A29u, "special? not lowered yet"); return;
L_08B2BFC0:
    rt.unsupported(0x08B2BFC0u, 0x61746164u, "vfpu0 not lowered yet"); return;
}

void recomp_unit_0201(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0201_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_201(Runtime &runtime) {
    runtime.register_generated_unit(201u, 0x08B28000u, 16384u, &recomp_unit_0201, &recomp_unit_0201_entry);
    runtime.register_function(0x08B28034u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B280B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B281D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28234u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28284u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B282ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2834Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B283D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2845Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28570u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B285A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B285D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B285DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B285FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28610u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28648u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28660u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28678u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B286ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B287CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B288DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28998u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B289A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B289F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A64u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A9Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28AB4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28AC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28AD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B38u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28C08u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28C1Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28C40u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28CFCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28D04u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28D8Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28DA4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28DBCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28DD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F00u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29130u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29200u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2922Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2923Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29248u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29274u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29298u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B292C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B292E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29310u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29328u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29348u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29384u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29420u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29440u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29454u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2945Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29750u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B297F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2990Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29914u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2991Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29924u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A04u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A18u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A28u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A40u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29BF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29D0Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F8Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29FE8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A050u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A08Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A1FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A374u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A3ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A3C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A3E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A418u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A420u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A438u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A440u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A44Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A45Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A460u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A46Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A478u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A49Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A4B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A4C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A4CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A4E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A4ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A4F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A508u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A510u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A518u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A544u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A54Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A554u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A55Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A568u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A590u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A598u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A600u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A608u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A610u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A618u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A620u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A628u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A630u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A638u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A640u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A644u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A648u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A650u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A658u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A66Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A674u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A688u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A68Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A690u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A788u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A828u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A834u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A83Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A844u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A850u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A858u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A864u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A870u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A878u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A884u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A88Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A890u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A900u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A90Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A914u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A928u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A930u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A938u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A940u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A944u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A948u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A954u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A964u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A96Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A970u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A978u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A97Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A980u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A994u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A99Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA50u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA88u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA94u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA98u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AAA4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AAB4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AAC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AAC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AAD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AAECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB1Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB3Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB5Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB6Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB70u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB74u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB90u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB9Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABB4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABE8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABFCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC1Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC24u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC38u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC48u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC4Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC68u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC6Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC74u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC9Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACA4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACCCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACD8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACE8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACF0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD00u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD08u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD1Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD30u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD38u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD40u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD48u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD50u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD78u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD94u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADD0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADE0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADF4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE0Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE28u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE30u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE3Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE44u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE48u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE64u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE70u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE7Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE90u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE94u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AEACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AECCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF00u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF2Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF68u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF8Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF94u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFB0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFB4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFC8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFE0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFFCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B014u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B068u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B070u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B078u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B080u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B088u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B090u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B098u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B110u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B118u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B150u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B170u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B184u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B190u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B198u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B208u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B238u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B260u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B274u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B290u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B2DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B418u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B420u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B42Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B438u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B44Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B468u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B484u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B48Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B494u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B4A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B4D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B4ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B508u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B514u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B520u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B524u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B544u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B554u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B55Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B564u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B568u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B584u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B604u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B618u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B61Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B628u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B62Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B650u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B654u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B660u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B670u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B684u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B68Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B69Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B700u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B708u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B710u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B71Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B724u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B72Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B730u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B738u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B744u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B74Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B754u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B75Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B764u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B76Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B774u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B77Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B784u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B78Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B794u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B79Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B800u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B808u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B80Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B814u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B818u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B824u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B828u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B82Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B834u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B838u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B83Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B840u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B848u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B850u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B858u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B860u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B868u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B870u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B878u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B87Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B880u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B884u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B888u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B88Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B890u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B894u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B89Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B928u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B93Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B954u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B96Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B980u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B99Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B9B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA50u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA64u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA7Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA8Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA9Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BAACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BABCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BACCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BADCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BAE8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB08u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB14u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB30u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BBF0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BCA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BCB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BCC8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BCD8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BCF0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDF0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE10u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE30u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE38u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE40u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE48u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE50u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE68u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE70u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE74u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE7Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE90u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE9Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BEB4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BEC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BECCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF40u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF64u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF68u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF70u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF74u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF7Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF88u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFA0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFBCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFC0u, &recomp_unit_0201, "recomp_unit_0201");
}
} // namespace psprecomp
