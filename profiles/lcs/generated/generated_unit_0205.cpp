#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0205[4043] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 19, 0, 0, 0, 20,
    0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 27, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35,
    0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    0, 50, 0, 0, 0, 0, 0, 51, 52, 0, 53, 0, 54, 55, 56, 0, 57, 0, 58, 59, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0,
    66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0,
    0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95,
    0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0,
    106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0,
    0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 127,
    0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0,
    138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 142, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 155, 156, 0, 0, 0, 157, 0, 158, 0,
    159, 160, 0, 0, 0, 0, 0, 161, 0, 0, 162, 163, 164, 0, 165, 0, 166, 0, 167, 168, 0, 169, 0, 0, 170, 0, 0, 171, 172, 0, 0, 173,
    0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0,
    0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223,
};
void recomp_unit_0205_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B38068u;
        entry_id = (entry_delta < 16172u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0205[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B38068;
    case 2u: goto L_08B3809C;
    case 3u: goto L_08B380E0;
    case 4u: goto L_08B38198;
    case 5u: goto L_08B3820C;
    case 6u: goto L_08B38244;
    case 7u: goto L_08B38258;
    case 8u: goto L_08B3825C;
    case 9u: goto L_08B382A0;
    case 10u: goto L_08B382CC;
    case 11u: goto L_08B382E4;
    case 12u: goto L_08B38560;
    case 13u: goto L_08B385E0;
    case 14u: goto L_08B387C8;
    case 15u: goto L_08B387E4;
    case 16u: goto L_08B38838;
    case 17u: goto L_08B38870;
    case 18u: goto L_08B38950;
    case 19u: goto L_08B38954;
    case 20u: goto L_08B38964;
    case 21u: goto L_08B3896C;
    case 22u: goto L_08B38978;
    case 23u: goto L_08B38998;
    case 24u: goto L_08B389A0;
    case 25u: goto L_08B389D4;
    case 26u: goto L_08B38BA4;
    case 27u: goto L_08B38BA8;
    case 28u: goto L_08B38BAC;
    case 29u: goto L_08B38BB4;
    case 30u: goto L_08B38BBC;
    case 31u: goto L_08B38BC4;
    case 32u: goto L_08B38BCC;
    case 33u: goto L_08B38BD4;
    case 34u: goto L_08B38BDC;
    case 35u: goto L_08B38BE4;
    case 36u: goto L_08B38BEC;
    case 37u: goto L_08B38BF4;
    case 38u: goto L_08B38C3C;
    case 39u: goto L_08B38C90;
    case 40u: goto L_08B38C9C;
    case 41u: goto L_08B38CE0;
    case 42u: goto L_08B38D1C;
    case 43u: goto L_08B38D54;
    case 44u: goto L_08B38D98;
    case 45u: goto L_08B38DA4;
    case 46u: goto L_08B38DCC;
    case 47u: goto L_08B38DE4;
    case 48u: goto L_08B38E3C;
    case 49u: goto L_08B38E4C;
    case 50u: goto L_08B38E6C;
    case 51u: goto L_08B38E84;
    case 52u: goto L_08B38E88;
    case 53u: goto L_08B38E90;
    case 54u: goto L_08B38E98;
    case 55u: goto L_08B38E9C;
    case 56u: goto L_08B38EA0;
    case 57u: goto L_08B38EA8;
    case 58u: goto L_08B38EB0;
    case 59u: goto L_08B38EB4;
    case 60u: goto L_08B38EB8;
    case 61u: goto L_08B38EC0;
    case 62u: goto L_08B38EC8;
    case 63u: goto L_08B38ED0;
    case 64u: goto L_08B38ED8;
    case 65u: goto L_08B38EE0;
    case 66u: goto L_08B38EE8;
    case 67u: goto L_08B38EF0;
    case 68u: goto L_08B38F9C;
    case 69u: goto L_08B38FCC;
    case 70u: goto L_08B39004;
    case 71u: goto L_08B3900C;
    case 72u: goto L_08B39014;
    case 73u: goto L_08B3901C;
    case 74u: goto L_08B39024;
    case 75u: goto L_08B39094;
    case 76u: goto L_08B3909C;
    case 77u: goto L_08B390BC;
    case 78u: goto L_08B390C4;
    case 79u: goto L_08B390D0;
    case 80u: goto L_08B390E8;
    case 81u: goto L_08B39120;
    case 82u: goto L_08B391B4;
    case 83u: goto L_08B39234;
    case 84u: goto L_08B392E0;
    case 85u: goto L_08B392EC;
    case 86u: goto L_08B392F8;
    case 87u: goto L_08B39304;
    case 88u: goto L_08B39310;
    case 89u: goto L_08B3931C;
    case 90u: goto L_08B39328;
    case 91u: goto L_08B39334;
    case 92u: goto L_08B39340;
    case 93u: goto L_08B3934C;
    case 94u: goto L_08B39358;
    case 95u: goto L_08B39364;
    case 96u: goto L_08B39370;
    case 97u: goto L_08B3937C;
    case 98u: goto L_08B39388;
    case 99u: goto L_08B39394;
    case 100u: goto L_08B393A0;
    case 101u: goto L_08B393AC;
    case 102u: goto L_08B393B8;
    case 103u: goto L_08B393C4;
    case 104u: goto L_08B393D0;
    case 105u: goto L_08B393DC;
    case 106u: goto L_08B393E8;
    case 107u: goto L_08B393F4;
    case 108u: goto L_08B39400;
    case 109u: goto L_08B3940C;
    case 110u: goto L_08B39418;
    case 111u: goto L_08B39424;
    case 112u: goto L_08B39430;
    case 113u: goto L_08B3943C;
    case 114u: goto L_08B39448;
    case 115u: goto L_08B39454;
    case 116u: goto L_08B39460;
    case 117u: goto L_08B3946C;
    case 118u: goto L_08B39478;
    case 119u: goto L_08B39484;
    case 120u: goto L_08B39490;
    case 121u: goto L_08B3949C;
    case 122u: goto L_08B394A8;
    case 123u: goto L_08B394B4;
    case 124u: goto L_08B394C0;
    case 125u: goto L_08B394CC;
    case 126u: goto L_08B394D8;
    case 127u: goto L_08B394E4;
    case 128u: goto L_08B394F0;
    case 129u: goto L_08B394FC;
    case 130u: goto L_08B39508;
    case 131u: goto L_08B39514;
    case 132u: goto L_08B39520;
    case 133u: goto L_08B3952C;
    case 134u: goto L_08B39538;
    case 135u: goto L_08B39544;
    case 136u: goto L_08B39550;
    case 137u: goto L_08B3955C;
    case 138u: goto L_08B39568;
    case 139u: goto L_08B39574;
    case 140u: goto L_08B39580;
    case 141u: goto L_08B3958C;
    case 142u: goto L_08B39594;
    case 143u: goto L_08B39598;
    case 144u: goto L_08B395A4;
    case 145u: goto L_08B395B0;
    case 146u: goto L_08B395BC;
    case 147u: goto L_08B395C4;
    case 148u: goto L_08B39630;
    case 149u: goto L_08B3965C;
    case 150u: goto L_08B39678;
    case 151u: goto L_08B39680;
    case 152u: goto L_08B39690;
    case 153u: goto L_08B396A4;
    case 154u: goto L_08B396BC;
    case 155u: goto L_08B396C4;
    case 156u: goto L_08B396C8;
    case 157u: goto L_08B396D8;
    case 158u: goto L_08B396E0;
    case 159u: goto L_08B396E8;
    case 160u: goto L_08B396EC;
    case 161u: goto L_08B39704;
    case 162u: goto L_08B39710;
    case 163u: goto L_08B39714;
    case 164u: goto L_08B39718;
    case 165u: goto L_08B39720;
    case 166u: goto L_08B39728;
    case 167u: goto L_08B39730;
    case 168u: goto L_08B39734;
    case 169u: goto L_08B3973C;
    case 170u: goto L_08B39748;
    case 171u: goto L_08B39754;
    case 172u: goto L_08B39758;
    case 173u: goto L_08B39764;
    case 174u: goto L_08B3977C;
    case 175u: goto L_08B39784;
    case 176u: goto L_08B397A0;
    case 177u: goto L_08B397A8;
    case 178u: goto L_08B397B4;
    case 179u: goto L_08B397BC;
    case 180u: goto L_08B397C4;
    case 181u: goto L_08B397CC;
    case 182u: goto L_08B397DC;
    case 183u: goto L_08B397F4;
    case 184u: goto L_08B39814;
    case 185u: goto L_08B39838;
    case 186u: goto L_08B398E0;
    case 187u: goto L_08B3993C;
    case 188u: goto L_08B39948;
    case 189u: goto L_08B39970;
    case 190u: goto L_08B39CB8;
    case 191u: goto L_08B39CCC;
    case 192u: goto L_08B39D18;
    case 193u: goto L_08B39D28;
    case 194u: goto L_08B39D38;
    case 195u: goto L_08B39D48;
    case 196u: goto L_08B39D88;
    case 197u: goto L_08B39E7C;
    case 198u: goto L_08B3A004;
    case 199u: goto L_08B3A030;
    case 200u: goto L_08B3A084;
    case 201u: goto L_08B3A08C;
    case 202u: goto L_08B3A0C8;
    case 203u: goto L_08B3A130;
    case 204u: goto L_08B3A61C;
    case 205u: goto L_08B3A650;
    case 206u: goto L_08B3A674;
    case 207u: goto L_08B3AAB8;
    case 208u: goto L_08B3AAC4;
    case 209u: goto L_08B3AB14;
    case 210u: goto L_08B3AC6C;
    case 211u: goto L_08B3ACB0;
    case 212u: goto L_08B3B1D0;
    case 213u: goto L_08B3B1D8;
    case 214u: goto L_08B3B238;
    case 215u: goto L_08B3B2BC;
    case 216u: goto L_08B3B730;
    case 217u: goto L_08B3BAB4;
    case 218u: goto L_08B3BD28;
    case 219u: goto L_08B3BDD8;
    case 220u: goto L_08B3BDE0;
    case 221u: goto L_08B3BEF0;
    case 222u: goto L_08B3BF64;
    case 223u: goto L_08B3BF90;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B38068:
    rt.unsupported(0x08B3806Cu, 0x08B16D78u, "control flow in delay slot"); return;
L_08B3809C:
    rt.unsupported(0x08B380A0u, 0x08B16D88u, "control flow in delay slot"); return;
L_08B380E0:
    rt.unsupported(0x08B380E4u, 0x08B16D9Cu, "control flow in delay slot"); return;
L_08B38198:
    rt.unsupported(0x08B38198u, 0x00000001u, "special? not lowered yet"); return;
L_08B3820C:
    rt.unsupported(0x08B3820Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B38244:
    rt.unsupported(0x08B38248u, 0x08B3709Cu, "control flow in delay slot"); return;
L_08B38258:
    rt.unsupported(0x08B38258u, 0x00000005u, "special? not lowered yet"); return;
L_08B3825C:
    rt.unsupported(0x08B38260u, 0x08B3709Cu, "control flow in delay slot"); return;
L_08B382A0:
    rt.unsupported(0x08B382A0u, 0x00000005u, "special? not lowered yet"); return;
L_08B382CC:
    rt.unsupported(0x08B382CCu, 0x00000001u, "special? not lowered yet"); return;
L_08B382E4:
    rt.unsupported(0x08B382E4u, 0x00000001u, "special? not lowered yet"); return;
L_08B38560:
    rt.unsupported(0x08B38564u, 0x08B16F68u, "control flow in delay slot"); return;
L_08B385E0:
    rt.unsupported(0x08B385E4u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02C5BE40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B387C8:
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    (void)(0u << 16u);
    // nop
    // nop
    rt.unsupported(0x08B387DCu, 0x40000000u, "unknown not lowered yet"); return;
L_08B387E4:
    // nop
    rt.unsupported(0x08B387E8u, 0x00020001u, "special? not lowered yet"); return;
L_08B38838:
    (void)(0u << (0u & 31u));
    // nop
    (void)(ctx.gpr[4] << 0u);
    // nop
    rt.unsupported(0x08B38848u, 0x00030001u, "special? not lowered yet"); return;
L_08B38870:
    (void)(0u << 16u);
    (void)(0u << 16u);
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    // nop
    ctx.gpr[12] = (52429u << 16u);
    // nop
    (void)(0u << 16u);
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    ctx.gpr[12] = (52429u << 16u);
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    (void)(0u << 16u);
    (void)(0u << 16u);
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    // nop
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.execute_vfpu_vminmax(0u, 1u, 85u, 1u, false);
    if (ctx.gpr[27] == ctx.gpr[15]) {
    rt.unsupported(0x08B3894Cu, 0x49616D65u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 112u, 0x08B4AEDCu>(ctx, &aot_mem); return;
    }
    goto L_08B38950;
L_08B38950:
    rt.unsupported(0x08B38950u, 0x0074696Eu, "special? not lowered yet"); return;
L_08B38954:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<95u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<99u, 97u, 1u, 15u>();
    rt.unsupported(0x08B3895Cu, 0x6361626Cu, "vfpu0 not lowered yet"); return;
L_08B38964:
    if (ctx.gpr[19] == ctx.gpr[4]) {
    rt.unsupported(0x08B38968u, 0x79727465u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 20u, 0x08B53EBCu>(ctx, &aot_mem); return;
    }
    goto L_08B3896C;
L_08B3896C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<82u, 1u>(vfpu_d); }
    rt.unsupported(0x08B38970u, 0x6E797341u, "vfpu3 not lowered yet"); return;
L_08B38978:
    // nop
    // nop
    (void)(ctx.gpr[3] - ctx.gpr[3]);
    rt.unsupported(0x08B38984u, 0x6E65704Fu, "vfpu3 not lowered yet"); return;
L_08B38998:
    // nop
    // nop
    ctx.pc = 0x024DE470u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B389A0:
    // nop
    rt.unsupported(0x08B389A8u, 0x08B01750u, "control flow in delay slot"); return;
L_08B389D4:
    rt.unsupported(0x08B389D4u, 0x0000009Cu, "special? not lowered yet"); return;
L_08B38BA4:
    // nop
    goto L_08B38BA8;
L_08B38BA8:
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B38BAC;
L_08B38BAC:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B38BB4;
L_08B38BB4:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B38BBC;
L_08B38BBC:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B38BC4;
L_08B38BC4:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B38BCC;
L_08B38BCC:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B38BD4;
L_08B38BD4:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B38BDC;
L_08B38BDC:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B38BE4;
L_08B38BE4:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B38BEC;
L_08B38BEC:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B38BF4;
L_08B38BF4:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B38C3C;
L_08B38C3C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(ctx.gpr[26] << 0u);
    rt.unsupported(0x08B38C60u, 0x009600FAu, "special? not lowered yet"); return;
L_08B38C90:
    // nop
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[8] + static_cast<std::uint32_t>(-20257), ctx.gpr[8]));
    // nop
    goto L_08B38C9C;
L_08B38C9C:
    (void)(ctx.hi);
    (void)(ctx.hi);
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B38CB8u, 0x40666666u, "unknown not lowered yet"); return;
L_08B38CE0:
    // nop
    rt.unsupported(0x08B38CE8u, 0x40666666u, "unknown not lowered yet"); return;
    ctx.pc = 0x025401D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B38D1C:
    ctx.gpr[1] = (18350u << 16u);
    // nop
    // nop
    rt.unsupported(0x08B38D28u, 0x40666666u, "unknown not lowered yet"); return;
L_08B38D54:
    rt.unsupported(0x08B38D58u, 0x08961C94u, "control flow in delay slot"); return;
L_08B38D98:
    // nop
    // nop
    // nop
    ctx.pc = 0x025608B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B38DA4:
    // nop
    rt.unsupported(0x08B38DACu, 0x08B02B4Cu, "control flow in delay slot"); return;
L_08B38DCC:
    rt.unsupported(0x08B38DD0u, 0x089631F0u, "control flow in delay slot"); return;
L_08B38DE4:
    rt.unsupported(0x08B38DE8u, 0x08962A60u, "control flow in delay slot"); return;
L_08B38E3C:
    // nop
    // nop
    // nop
    rt.unsupported(0x08B38E48u, 0x40666666u, "unknown not lowered yet"); return;
L_08B38E4C:
    rt.unsupported(0x08B38E4Cu, 0x42480000u, "unknown not lowered yet"); return;
L_08B38E6C:
    rt.unsupported(0x08B38E70u, 0x08963908u, "control flow in delay slot"); return;
L_08B38E84:
    rt.unsupported(0x08B38E88u, 0x08963E90u, "control flow in delay slot"); return;
L_08B38E88:
    rt.unsupported(0x08B38E8Cu, 0x08B18A3Cu, "control flow in delay slot"); return;
L_08B38E90:
    rt.unsupported(0x08B38E94u, 0x08B18A4Cu, "control flow in delay slot"); return;
L_08B38E98:
    rt.unsupported(0x08B38E9Cu, 0x08B18A60u, "control flow in delay slot"); return;
L_08B38E9C:
    rt.unsupported(0x08B38EA0u, 0x089640FCu, "control flow in delay slot"); return;
L_08B38EA0:
    rt.unsupported(0x08B38EA4u, 0x08B18A74u, "control flow in delay slot"); return;
L_08B38EA8:
    rt.unsupported(0x08B38EACu, 0x08B18A8Cu, "control flow in delay slot"); return;
L_08B38EB0:
    rt.unsupported(0x08B38EB4u, 0x08B18AA4u, "control flow in delay slot"); return;
L_08B38EB4:
    rt.unsupported(0x08B38EB8u, 0x08963D54u, "control flow in delay slot"); return;
L_08B38EB8:
    rt.unsupported(0x08B38EBCu, 0x08B18ABCu, "control flow in delay slot"); return;
L_08B38EC0:
    rt.unsupported(0x08B38EC4u, 0x08B18AE0u, "control flow in delay slot"); return;
L_08B38EC8:
    rt.unsupported(0x08B38ECCu, 0x08B18AF4u, "control flow in delay slot"); return;
L_08B38ED0:
    rt.unsupported(0x08B38ED4u, 0x08B18B0Cu, "control flow in delay slot"); return;
L_08B38ED8:
    rt.unsupported(0x08B38EDCu, 0x08B18B24u, "control flow in delay slot"); return;
L_08B38EE0:
    rt.unsupported(0x08B38EE4u, 0x08B18B3Cu, "control flow in delay slot"); return;
L_08B38EE8:
    rt.unsupported(0x08B38EECu, 0x08B18B50u, "control flow in delay slot"); return;
L_08B38EF0:
    rt.unsupported(0x08B38EF4u, 0x08B18B60u, "control flow in delay slot"); return;
L_08B38F9C:
    // nop
    rt.unsupported(0x08B38FA4u, 0x08965F80u, "control flow in delay slot"); return;
L_08B38FCC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B39004;
L_08B39004:
    // nop
    // nop
    goto L_08B3900C;
L_08B3900C:
    // nop
    // nop
    goto L_08B39014;
L_08B39014:
    // nop
    // nop
    goto L_08B3901C;
L_08B3901C:
    // nop
    // nop
    goto L_08B39024;
L_08B39024:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    // nop
    (void)(ctx.hi);
    { const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    (void)(0u << 1u);
    (void)(0u << 1u);
    // nop
    // nop
    rt.unsupported(0x08B39070u, 0x40666666u, "unknown not lowered yet"); return;
L_08B39094:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    goto L_08B3909C;
L_08B3909C:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    (void)(0u << 16u);
    ctx.gpr[18] = (18725u << 16u);
    // nop
    // nop
    // nop
    // nop
    goto L_08B390BC;
L_08B390BC:
    // nop
    rt.unsupported(0x08B390C4u, 0x08B5E6C4u, "control flow in delay slot"); return;
L_08B390C4:
    rt.unsupported(0x08B390C8u, 0x08B5E6C8u, "control flow in delay slot"); return;
L_08B390D0:
    rt.unsupported(0x08B390D4u, 0x08B5E6D4u, "control flow in delay slot"); return;
L_08B390E8:
    rt.unsupported(0x08B390ECu, 0x08B5E6ECu, "control flow in delay slot"); return;
L_08B39120:
    rt.unsupported(0x08B39124u, 0x08B5E724u, "control flow in delay slot"); return;
L_08B391B4:
    rt.unsupported(0x08B391B8u, 0x08B18D58u, "control flow in delay slot"); return;
L_08B39234:
    rt.unsupported(0x08B39238u, 0x08B18E58u, "control flow in delay slot"); return;
L_08B392E0:
    // nop
    rt.unsupported(0x08B392E8u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B392EC:
    // nop
    rt.unsupported(0x08B392F4u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B392F8:
    // nop
    rt.unsupported(0x08B39300u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39304:
    // nop
    rt.unsupported(0x08B3930Cu, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39310:
    // nop
    rt.unsupported(0x08B39318u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B3931C:
    // nop
    rt.unsupported(0x08B39324u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39328:
    // nop
    rt.unsupported(0x08B39330u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39334:
    // nop
    rt.unsupported(0x08B3933Cu, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39340:
    // nop
    rt.unsupported(0x08B39348u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B3934C:
    // nop
    rt.unsupported(0x08B39354u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39358:
    // nop
    rt.unsupported(0x08B39360u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39364:
    // nop
    rt.unsupported(0x08B3936Cu, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39370:
    // nop
    rt.unsupported(0x08B39378u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B3937C:
    // nop
    rt.unsupported(0x08B39384u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39388:
    // nop
    rt.unsupported(0x08B39390u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39394:
    // nop
    rt.unsupported(0x08B3939Cu, 0x08AD3674u, "control flow in delay slot"); return;
L_08B393A0:
    // nop
    rt.unsupported(0x08B393A8u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B393AC:
    // nop
    rt.unsupported(0x08B393B4u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B393B8:
    // nop
    rt.unsupported(0x08B393C0u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B393C4:
    // nop
    rt.unsupported(0x08B393CCu, 0x08AD3674u, "control flow in delay slot"); return;
L_08B393D0:
    // nop
    rt.unsupported(0x08B393D8u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B393DC:
    // nop
    rt.unsupported(0x08B393E4u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B393E8:
    // nop
    rt.unsupported(0x08B393F0u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B393F4:
    // nop
    rt.unsupported(0x08B393FCu, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39400:
    // nop
    rt.unsupported(0x08B39408u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B3940C:
    // nop
    rt.unsupported(0x08B39414u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39418:
    // nop
    rt.unsupported(0x08B39420u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39424:
    // nop
    rt.unsupported(0x08B3942Cu, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39430:
    // nop
    rt.unsupported(0x08B39438u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B3943C:
    // nop
    rt.unsupported(0x08B39444u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39448:
    // nop
    rt.unsupported(0x08B39450u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39454:
    // nop
    rt.unsupported(0x08B3945Cu, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39460:
    // nop
    rt.unsupported(0x08B39468u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B3946C:
    // nop
    rt.unsupported(0x08B39474u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39478:
    // nop
    rt.unsupported(0x08B39480u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39484:
    // nop
    rt.unsupported(0x08B3948Cu, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39490:
    // nop
    rt.unsupported(0x08B39498u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B3949C:
    // nop
    rt.unsupported(0x08B394A4u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B394A8:
    // nop
    rt.unsupported(0x08B394B0u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B394B4:
    // nop
    rt.unsupported(0x08B394BCu, 0x08AD3674u, "control flow in delay slot"); return;
L_08B394C0:
    // nop
    rt.unsupported(0x08B394C8u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B394CC:
    // nop
    rt.unsupported(0x08B394D4u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B394D8:
    // nop
    rt.unsupported(0x08B394E0u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B394E4:
    // nop
    rt.unsupported(0x08B394ECu, 0x08AD3674u, "control flow in delay slot"); return;
L_08B394F0:
    // nop
    rt.unsupported(0x08B394F8u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B394FC:
    // nop
    rt.unsupported(0x08B39504u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39508:
    // nop
    rt.unsupported(0x08B39510u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39514:
    // nop
    rt.unsupported(0x08B3951Cu, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39520:
    // nop
    rt.unsupported(0x08B39528u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B3952C:
    // nop
    rt.unsupported(0x08B39534u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39538:
    // nop
    rt.unsupported(0x08B39540u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39544:
    // nop
    rt.unsupported(0x08B3954Cu, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39550:
    // nop
    rt.unsupported(0x08B39558u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B3955C:
    // nop
    rt.unsupported(0x08B39564u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39568:
    // nop
    rt.unsupported(0x08B39570u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39574:
    // nop
    rt.unsupported(0x08B3957Cu, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39580:
    // nop
    rt.unsupported(0x08B39588u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B3958C:
    // nop
    rt.unsupported(0x08B39594u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B39594:
    // nop
    ctx.pc = 0x02B4D9D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B39598:
    // nop
    rt.unsupported(0x08B395A0u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B395A4:
    // nop
    rt.unsupported(0x08B395ACu, 0x08AD3674u, "control flow in delay slot"); return;
L_08B395B0:
    // nop
    rt.unsupported(0x08B395B8u, 0x08AD3674u, "control flow in delay slot"); return;
L_08B395BC:
    // nop
    rt.unsupported(0x08B395C4u, 0x08B02BF8u, "control flow in delay slot"); return;
L_08B395C4:
    rt.unsupported(0x08B395C8u, 0x40666666u, "unknown not lowered yet"); return;
    ctx.pc = 0x02C0AFE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B39630:
    // nop
    rt.unsupported(0x08B39638u, 0x08AFB09Cu, "control flow in delay slot"); return;
L_08B3965C:
    ctx.gpr[13] = (ctx.gpr[26] & 13876u);
    ctx.gpr[28] = (23096u << 16u);
    rt.unsupported(0x08B39664u, 0x62363400u, "vfpu0 not lowered yet"); return;
L_08B39678:
    ctx.gpr[19] = (ctx.gpr[1] ^ 24118u);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[1]) * static_cast<std::uint64_t>(ctx.gpr[28]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    goto L_08B39680;
L_08B39680:
    ctx.gpr[2] = (ctx.gpr[27] & 22597u);
    ctx.gpr[27] = (23097u << 16u);
    if (static_cast<std::int32_t>(ctx.gpr[10]) > 0) {
    ctx.gpr[9] = (ctx.gpr[26] ^ 14643u);
        (void)rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 59u, 0x08B4FE8Cu>(ctx, &aot_mem); return;
    }
    goto L_08B39690;
L_08B39690:
    ctx.gpr[20] = (ctx.gpr[17] | 60u);
    rt.unsupported(0x08B39694u, 0x495C455Du, "cop2/vfpu not lowered yet"); return;
L_08B396A4:
    rt.unsupported(0x08B396A4u, 0x454D3634u, "cop1? not lowered yet"); return;
L_08B396BC:
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[18] = (ctx.gpr[1] ^ 23624u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 6u, 0x08B487ACu>(ctx, &aot_mem); return;
    }
    goto L_08B396C4;
L_08B396C4:
    ctx.gpr[7] = (ctx.lo);
    goto L_08B396C8;
L_08B396C8:
    ctx.gpr[28] = (ctx.gpr[18] & 23893u);
    ctx.gpr[27] = (21048u << 16u);
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.gpr[18] = (ctx.gpr[26] ^ 14386u);
        (void)rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 55u, 0x08B4EED4u>(ctx, &aot_mem); return;
    }
    goto L_08B396D8;
L_08B396D8:
    if (ctx.gpr[10] == ctx.gpr[21]) {
    ctx.gpr[24] = (ctx.gpr[1] ^ 12860u);
        goto L_08B397CC;
    }
    goto L_08B396E0;
L_08B396E0:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[18] = (ctx.gpr[1] ^ 15450u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 7u, 0x08B487D0u>(ctx, &aot_mem); return;
    }
    goto L_08B396E8;
L_08B396E8:
    rt.unsupported(0x08B396E8u, 0x003C3B38u, "special? not lowered yet"); return;
L_08B396EC:
    ctx.gpr[27] = (ctx.gpr[25] & 22341u);
    ctx.gpr[28] = (14137u << 16u);
    ctx.gpr[9] = (ctx.gpr[26] ^ 23040u);
    ctx.gpr[23] = (14643u << 16u);
    rt.unsupported(0x08B39700u, 0x5E39544Du, "control flow in delay slot"); return;
L_08B39704:
    rt.unsupported(0x08B39704u, 0x46003D5Eu, "cop1.s? not lowered yet"); return;
L_08B39710:
    if (ctx.gpr[10] != ctx.gpr[13]) {
    ctx.gpr[31] = (21049u << 16u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 130u, 0x08B4BC7Cu>(ctx, &aot_mem); return;
    }
    goto L_08B39718;
L_08B39714:
    ctx.gpr[31] = (21049u << 16u);
    goto L_08B39718;
L_08B39718:
    rt.unsupported(0x08B3971Cu, 0x5F583955u, "control flow in delay slot"); return;
L_08B39720:
    rt.unsupported(0x08B39724u, 0x5839595Du, "control flow in delay slot"); return;
L_08B39728:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[25] = (ctx.gpr[10] ^ 19802u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 10u, 0x08B48864u>(ctx, &aot_mem); return;
    }
    goto L_08B39730;
L_08B39730:
    ctx.gpr[9] = (ctx.lo);
    goto L_08B39734;
L_08B39734:
    rt.unsupported(0x08B39738u, 0x5F5E385Au, "control flow in delay slot"); return;
L_08B3973C:
    ctx.gpr[8] = (ctx.gpr[26] ^ 17664u);
    rt.unsupported(0x08B39744u, 0x5956005Eu, "control flow in delay slot"); return;
L_08B39748:
    ctx.gpr[10] = (ctx.gpr[2] ^ 17467u);
    rt.unsupported(0x08B39750u, 0x5B553B58u, "control flow in delay slot"); return;
L_08B39754:
    rt.unsupported(0x08B39754u, 0x004E4D38u, "special? not lowered yet"); return;
L_08B39758:
    rt.unsupported(0x08B39758u, 0x445F3633u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B39760u, 0x5F363300u, "control flow in delay slot"); return;
L_08B39764:
    rt.unsupported(0x08B39764u, 0x624A4A59u, "vfpu0 not lowered yet"); return;
L_08B3977C:
    if (ctx.gpr[10] != ctx.gpr[13]) {
    rt.unsupported(0x08B39780u, 0x4F4E4A5Bu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 31u, 0x08B47050u>(ctx, &aot_mem); return;
    }
    goto L_08B39784;
L_08B39784:
    rt.unsupported(0x08B39784u, 0x62363400u, "vfpu0 not lowered yet"); return;
L_08B397A0:
    if (ctx.gpr[2] != ctx.gpr[30]) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<91u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<95u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<90u, 1u>(vfpu_d); }
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 36u, 0x08B47470u>(ctx, &aot_mem); return;
    }
    goto L_08B397A8;
L_08B397A8:
    rt.unsupported(0x08B397A8u, 0x62363400u, "vfpu0 not lowered yet"); return;
L_08B397B4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) <= 0) {
    (void)(0u | 24671u);
        (void)rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 58u, 0x08B4FD2Cu>(ctx, &aot_mem); return;
    }
    goto L_08B397BC;
L_08B397BC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) <= 0) {
    { const std::uint32_t dividend = ctx.gpr[3]; ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; }
        (void)rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 24u, 0x08B4CC98u>(ctx, &aot_mem); return;
    }
    goto L_08B397C4;
L_08B397C4:
    if (ctx.gpr[27] == ctx.gpr[2]) {
    rt.unsupported(0x08B397C8u, 0x4E5C5E5Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 32u, 0x08B4711Cu>(ctx, &aot_mem); return;
    }
    goto L_08B397CC;
L_08B397CC:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[25] = (ctx.gpr[25] | 22094u);
    if (ctx.gpr[16] != 0u) {
    rt.unsupported(0x08B397D8u, 0x4B453C37u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 13u, 0x08B488C8u>(ctx, &aot_mem); return;
    }
    goto L_08B397DC;
L_08B397DC:
    rt.unsupported(0x08B397DCu, 0x005F3C37u, "special? not lowered yet"); return;
L_08B397F4:
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    // nop
    // nop
    goto L_08B39814;
L_08B39814:
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[22] = (ctx.gpr[27] & 20545u);
    // nop
    rt.unsupported(0x08B39830u, 0x40666666u, "unknown not lowered yet"); return;
L_08B39838:
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
    rt.unsupported(0x08B39860u, 0x40666666u, "unknown not lowered yet"); return;
L_08B398E0:
    // nop
    rt.unsupported(0x08B398E8u, 0x08B02E44u, "control flow in delay slot"); return;
L_08B3993C:
    // nop
    rt.unsupported(0x08B39944u, 0x08806498u, "control flow in delay slot"); return;
L_08B39948:
    // nop
    rt.unsupported(0x08B3994Cu, 0x77073096u, "unknown not lowered yet"); return;
L_08B39970:
    rt.unsupported(0x08B39970u, 0xE0D5E91Eu, "unknown not lowered yet"); return;
L_08B39CB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[27] + static_cast<std::uint32_t>(-24833)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<34u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(-20888);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    rt.unsupported(0x08B39CC0u, 0x616BFFD3u, "vfpu0 not lowered yet"); return;
L_08B39CCC:
    rt.unsupported(0x08B39CCCu, 0xD70DD2EEu, "vfpu not lowered yet"); return;
L_08B39D18:
    rt.memory().aot_store_word_right(ctx.gpr[22] + static_cast<std::uint32_t>(13829), ctx.gpr[16]);
    rt.unsupported(0x08B39D1Cu, 0xCDD70693u, "unknown not lowered yet"); return;
L_08B39D28:
    rt.unsupported(0x08B39D28u, 0xB3667A2Eu, "unknown not lowered yet"); return;
L_08B39D38:
    rt.unsupported(0x08B39D38u, 0xB40BBE37u, "unknown not lowered yet"); return;
L_08B39D48:
    rt.unsupported(0x08B39D48u, 0x40666666u, "unknown not lowered yet"); return;
L_08B39D88:
    rt.unsupported(0x08B39D8Cu, 0x08B1A6F8u, "control flow in delay slot"); return;
L_08B39E7C:
    rt.unsupported(0x08B39E80u, 0x08B1A8F8u, "control flow in delay slot"); return;
L_08B3A004:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08B3A00Cu, 0xCFCFFFFFu, "unknown not lowered yet"); return;
L_08B3A030:
    // nop
    // nop
    // nop
    ctx.pc = 0x02621280u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B3A084:
    // nop
    // nop
    goto L_08B3A08C;
L_08B3A08C:
    rt.unsupported(0x08B3A090u, 0x08997168u, "control flow in delay slot"); return;
L_08B3A0C8:
    rt.unsupported(0x08B3A0CCu, 0x08B1B0CCu, "control flow in delay slot"); return;
L_08B3A130:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3A61C;
L_08B3A61C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3A650;
L_08B3A650:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3A674;
L_08B3A674:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3AAB8;
L_08B3AAB8:
    // nop
    // nop
    // nop
    goto L_08B3AAC4;
L_08B3AAC4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3AB14;
L_08B3AB14:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3AC6C;
L_08B3AC6C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3ACB0;
L_08B3ACB0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3B1D0;
L_08B3B1D0:
    // nop
    // nop
    goto L_08B3B1D8;
L_08B3B1D8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3B238;
L_08B3B238:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3B2BC;
L_08B3B2BC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3B730;
L_08B3B730:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3BAB4;
L_08B3BAB4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3BD28;
L_08B3BD28:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3BDD8;
L_08B3BDD8:
    // nop
    // nop
    goto L_08B3BDE0;
L_08B3BDE0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3BEF0;
L_08B3BEF0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3BF64;
L_08B3BF64:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3BF90;
L_08B3BF90:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x08B3C000u; return;
}

void recomp_unit_0205(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0205_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_205(Runtime &runtime) {
    runtime.register_generated_unit(205u, 0x08B38000u, 16384u, &recomp_unit_0205, &recomp_unit_0205_entry);
    runtime.register_function(0x08B38068u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3809Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B380E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38198u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3820Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38244u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38258u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3825Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B382A0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B382CCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B382E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38560u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B385E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B387C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B387E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38838u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38870u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38950u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38954u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38964u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3896Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38978u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38998u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B389A0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B389D4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BA4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BA8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BACu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BB4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BBCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BC4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BCCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BD4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BDCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BE4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BF4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C3Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C90u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C9Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38CE0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38D1Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38D54u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38D98u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38DA4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38DCCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38DE4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38E3Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38E4Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38E6Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38E84u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38E88u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38E90u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38E98u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38E9Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EA0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EA8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EB0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EB4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EB8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EC0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EC8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38ED0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38ED8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EE0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EE8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EF0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38F9Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38FCCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39004u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3900Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39014u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3901Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39024u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39094u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3909Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B390BCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B390C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B390D0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B390E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39120u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B391B4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39234u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392ECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392F8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39304u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39310u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3931Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39328u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39334u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39340u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3934Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39358u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39364u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39370u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3937Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39388u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39394u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393A0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393ACu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393B8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393D0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393DCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393F4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39400u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3940Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39418u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39424u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39430u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3943Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39448u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39454u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39460u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3946Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39478u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39484u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39490u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3949Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394A8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394B4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394C0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394CCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394D8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394F0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394FCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39508u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39514u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39520u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3952Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39538u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39544u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39550u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3955Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39568u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39574u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39580u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3958Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39594u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39598u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B395A4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B395B0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B395BCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B395C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39630u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3965Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39678u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39680u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39690u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396A4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396BCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396D8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396ECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39704u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39710u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39714u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39718u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39720u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39728u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39730u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39734u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3973Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39748u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39754u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39758u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39764u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3977Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39784u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B397A0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B397A8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B397B4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B397BCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B397C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B397CCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B397DCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B397F4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39814u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39838u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B398E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3993Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39948u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39970u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39CB8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39CCCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39D18u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39D28u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39D38u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39D48u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39D88u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39E7Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A004u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A030u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A084u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A08Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A0C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A130u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A61Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A650u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A674u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AAB8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AAC4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AB14u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AC6Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ACB0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B1D0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B1D8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B238u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B2BCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B730u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BAB4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BD28u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BDD8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BDE0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BEF0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BF64u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BF90u, &recomp_unit_0205, "recomp_unit_0205");
}
} // namespace psprecomp
