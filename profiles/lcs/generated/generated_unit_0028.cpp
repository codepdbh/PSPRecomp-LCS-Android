#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0028[4083] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 13, 0, 14, 0, 15, 0, 16,
    0, 0, 17, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39,
    0, 40, 41, 0, 0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 50, 0, 0, 51, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0,
    58, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 65, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0,
    0, 0, 73, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 77, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    80, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 85, 0, 86, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0,
    0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105,
    106, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 113, 0, 0, 114, 115, 0, 0, 116, 0, 117,
    0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 121, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0,
    0, 0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140,
    0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    0, 0, 148, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 156, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162,
    0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 168, 0,
    0, 0, 169, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0,
    177, 178, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0,
    184, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0,
    0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0,
    0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0,
    0, 0, 215, 0, 216, 0, 217, 0, 0, 218, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 228, 0, 0,
    0, 0, 229, 0, 230, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 236,
    0, 237, 0, 238, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 247, 0, 248, 0, 249, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 252, 0, 253,
    0, 254, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 260, 0, 0, 0, 0, 261,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 263, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 266, 0, 0, 0, 0, 267, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0,
    0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 284, 0, 0,
    285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0,
    296, 0, 0, 0, 297, 0, 0, 298, 0, 299, 0, 300, 0, 0, 301, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0,
    310, 0, 0, 311, 0, 312, 0, 313, 0, 0, 314, 0, 315, 0, 0, 316, 0, 317, 0, 0, 318, 0, 0, 0, 0, 319, 0, 320, 0, 321, 0, 0,
    322, 0, 323, 0, 324, 0, 325, 0, 0, 326, 0, 327, 328, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 336, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343,
    0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 347, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0,
    0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 354, 0, 0, 355, 0, 0, 0, 0, 356, 0, 357, 0, 0, 358, 0, 0,
    0, 0, 359, 0, 360, 0, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0, 0, 364, 0, 0, 0, 365, 0, 366, 0, 0, 0, 0, 367, 0, 368, 0,
    0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 374,
    0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 379, 0, 0, 380, 0, 0, 0,
    381, 0, 382, 0, 383, 0, 384, 0, 0, 0, 385, 386, 0, 387, 0, 0, 388, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 391, 0, 392, 0, 0,
    0, 393, 0, 394, 0, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0, 398, 0, 0, 399, 0, 400, 0, 401, 0, 0, 0, 402, 0, 403, 0, 0, 0,
    404, 0, 405, 0, 0, 406, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0,
    0, 411, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 418, 0, 419, 0, 0, 0, 420,
    0, 421, 0, 0, 422, 0, 0, 0, 423, 0, 424, 0, 425, 0, 426, 0, 0, 0, 427, 428, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0, 432, 0,
    0, 0, 0, 433, 0, 434, 0, 0, 0, 435, 0, 436, 0, 0, 0, 437, 0, 438, 0, 0, 0, 439, 0, 440, 0, 0, 441, 0, 442, 0, 443, 0,
    0, 0, 444, 0, 445, 0, 0, 0, 446, 0, 447, 0, 0, 448, 0, 449, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452,
    0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 456, 0, 0, 457, 0, 0, 0, 458, 0, 459, 0, 460,
    0, 461, 0, 0, 0, 462, 463, 0, 464, 0, 0, 0, 465, 0, 466, 0, 0, 0, 467, 0, 468, 0, 0, 0, 469, 0, 470, 0, 0, 0, 471, 0,
    472, 0, 0, 473, 0, 474, 0, 475, 0, 0, 0, 476, 0, 477, 0, 0, 0, 478, 0, 479, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0,
    482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 485, 0, 0, 486, 0, 0, 0, 487, 0, 488, 0, 489, 0, 490, 0, 0,
    0, 491, 492, 0, 493, 0, 0, 0, 494, 0, 495, 0, 0, 0, 496, 0, 497, 0, 0, 0, 498, 0, 499, 0, 0, 0, 500, 0, 501, 0, 0, 502,
    0, 503, 0, 504, 0, 0, 0, 505, 0, 506, 0, 0, 0, 507, 0, 508, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0,
    0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 515, 0, 0, 516, 0, 0, 0, 517, 0, 518, 0, 0, 0, 519, 0, 520,
    0, 0, 0, 521, 0, 522, 0, 0, 0, 523, 0, 524, 0, 0, 525, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0,
    0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 531, 0, 0, 532, 0, 0, 0, 533, 0, 534, 0, 0, 0, 535, 0, 536, 0, 0, 0, 537, 0,
    538, 0, 0, 539, 0, 0, 0, 540, 0, 541, 0, 0, 0, 542, 0, 543, 0, 0, 0, 544, 0, 545, 0, 0, 0, 546, 0, 547, 0, 0, 548, 0,
    0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 554, 0, 0, 555, 0,
    0, 0, 556, 0, 557, 0, 558, 0, 559, 0, 0, 0, 560, 561, 0, 562, 0, 0, 563, 0, 0, 0, 564, 0, 565, 0, 0, 0, 566, 0, 567, 0,
    0, 0, 568, 0, 569, 0, 0, 570, 0, 0, 0, 571, 0, 572, 0, 0, 0, 573, 0, 574, 0, 0, 0, 575, 0, 576, 0, 0, 0, 577, 0, 578,
    0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 583, 0, 584, 0, 0, 0, 585, 0, 586,
    0, 587, 0, 0, 0, 588, 0, 589, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 594,
    595, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 598, 0,
    0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0,
    0, 606, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 612, 0,
    0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 617, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 618, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0,
    0, 625, 0, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 632, 0,
    0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 642, 0, 643, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 645, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 0, 0, 0, 649,
    0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651,
};
void recomp_unit_0028_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08874000u;
        entry_id = (entry_delta < 16332u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0028[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08874000;
    case 2u: goto L_088740C4;
    case 3u: goto L_088740E4;
    case 4u: goto L_08874328;
    case 5u: goto L_08874458;
    case 6u: goto L_088749FC;
    case 7u: goto L_08874A1C;
    case 8u: goto L_08874BA0;
    case 9u: goto L_08874BCC;
    case 10u: goto L_08874CA4;
    case 11u: goto L_088750E0;
    case 12u: goto L_08875160;
    case 13u: goto L_08875164;
    case 14u: goto L_0887516C;
    case 15u: goto L_08875174;
    case 16u: goto L_0887517C;
    case 17u: goto L_08875188;
    case 18u: goto L_08875194;
    case 19u: goto L_0887519C;
    case 20u: goto L_088751AC;
    case 21u: goto L_088751B4;
    case 22u: goto L_088751B8;
    case 23u: goto L_088751DC;
    case 24u: goto L_0887521C;
    case 25u: goto L_0887522C;
    case 26u: goto L_08875260;
    case 27u: goto L_08875290;
    case 28u: goto L_08875318;
    case 29u: goto L_08875390;
    case 30u: goto L_08875398;
    case 31u: goto L_08875448;
    case 32u: goto L_0887552C;
    case 33u: goto L_088755FC;
    case 34u: goto L_08875644;
    case 35u: goto L_088756B0;
    case 36u: goto L_088757D4;
    case 37u: goto L_088757E0;
    case 38u: goto L_088757F0;
    case 39u: goto L_088757FC;
    case 40u: goto L_08875804;
    case 41u: goto L_08875808;
    case 42u: goto L_08875814;
    case 43u: goto L_08875820;
    case 44u: goto L_08875828;
    case 45u: goto L_08875864;
    case 46u: goto L_08875924;
    case 47u: goto L_0887593C;
    case 48u: goto L_08875954;
    case 49u: goto L_08875960;
    case 50u: goto L_08875984;
    case 51u: goto L_08875990;
    case 52u: goto L_0887599C;
    case 53u: goto L_088759A4;
    case 54u: goto L_088759C4;
    case 55u: goto L_088759D4;
    case 56u: goto L_088759EC;
    case 57u: goto L_088759F4;
    case 58u: goto L_08875A00;
    case 59u: goto L_08875A08;
    case 60u: goto L_08875A20;
    case 61u: goto L_08875A2C;
    case 62u: goto L_08875A3C;
    case 63u: goto L_08875A54;
    case 64u: goto L_08875A80;
    case 65u: goto L_08875A84;
    case 66u: goto L_08875A90;
    case 67u: goto L_08875A98;
    case 68u: goto L_08875AA0;
    case 69u: goto L_08875ABC;
    case 70u: goto L_08875AC4;
    case 71u: goto L_08875AD4;
    case 72u: goto L_08875AE4;
    case 73u: goto L_08875B08;
    case 74u: goto L_08875B0C;
    case 75u: goto L_08875B2C;
    case 76u: goto L_08875B44;
    case 77u: goto L_08875B50;
    case 78u: goto L_08875B54;
    case 79u: goto L_08875B70;
    case 80u: goto L_08875B80;
    case 81u: goto L_08875B8C;
    case 82u: goto L_08875B9C;
    case 83u: goto L_08875BAC;
    case 84u: goto L_08875BB8;
    case 85u: goto L_08875BC0;
    case 86u: goto L_08875BC8;
    case 87u: goto L_08875BCC;
    case 88u: goto L_08875BD4;
    case 89u: goto L_08875C34;
    case 90u: goto L_08875C3C;
    case 91u: goto L_08875C44;
    case 92u: goto L_08875C50;
    case 93u: goto L_08875C60;
    case 94u: goto L_08875C68;
    case 95u: goto L_08875C78;
    case 96u: goto L_08875C84;
    case 97u: goto L_08875C94;
    case 98u: goto L_08875CA4;
    case 99u: goto L_08875CAC;
    case 100u: goto L_08875CB4;
    case 101u: goto L_08875CC0;
    case 102u: goto L_08875CD0;
    case 103u: goto L_08875CDC;
    case 104u: goto L_08875CEC;
    case 105u: goto L_08875CFC;
    case 106u: goto L_08875D00;
    case 107u: goto L_08875D0C;
    case 108u: goto L_08875D18;
    case 109u: goto L_08875D28;
    case 110u: goto L_08875D2C;
    case 111u: goto L_08875D4C;
    case 112u: goto L_08875D54;
    case 113u: goto L_08875D58;
    case 114u: goto L_08875D64;
    case 115u: goto L_08875D68;
    case 116u: goto L_08875D74;
    case 117u: goto L_08875D7C;
    case 118u: goto L_08875D9C;
    case 119u: goto L_08875DA4;
    case 120u: goto L_08875DAC;
    case 121u: goto L_08875DBC;
    case 122u: goto L_08875DC4;
    case 123u: goto L_08875DCC;
    case 124u: goto L_08875DD4;
    case 125u: goto L_08875DE8;
    case 126u: goto L_08875E0C;
    case 127u: goto L_08875E18;
    case 128u: goto L_08875E20;
    case 129u: goto L_08875E30;
    case 130u: goto L_08875E38;
    case 131u: goto L_08875E40;
    case 132u: goto L_08875E48;
    case 133u: goto L_08875E50;
    case 134u: goto L_08875E64;
    case 135u: goto L_08875E88;
    case 136u: goto L_08875E90;
    case 137u: goto L_08875EA4;
    case 138u: goto L_08875EAC;
    case 139u: goto L_08875EC0;
    case 140u: goto L_08875EFC;
    case 141u: goto L_08875F04;
    case 142u: goto L_08875F0C;
    case 143u: goto L_08875F1C;
    case 144u: goto L_08875F24;
    case 145u: goto L_08875F3C;
    case 146u: goto L_08875F50;
    case 147u: goto L_08875F68;
    case 148u: goto L_08875F88;
    case 149u: goto L_08875F90;
    case 150u: goto L_08875F9C;
    case 151u: goto L_08875FA8;
    case 152u: goto L_08875FB4;
    case 153u: goto L_08875FC0;
    case 154u: goto L_08875FCC;
    case 155u: goto L_08875FD8;
    case 156u: goto L_08875FE0;
    case 157u: goto L_08875FF4;
    case 158u: goto L_08876018;
    case 159u: goto L_08876044;
    case 160u: goto L_0887605C;
    case 161u: goto L_08876068;
    case 162u: goto L_0887607C;
    case 163u: goto L_08876084;
    case 164u: goto L_08876098;
    case 165u: goto L_088760C4;
    case 166u: goto L_088760E4;
    case 167u: goto L_088760EC;
    case 168u: goto L_088760F8;
    case 169u: goto L_08876108;
    case 170u: goto L_08876110;
    case 171u: goto L_0887611C;
    case 172u: goto L_0887612C;
    case 173u: goto L_08876138;
    case 174u: goto L_08876144;
    case 175u: goto L_08876158;
    case 176u: goto L_0887616C;
    case 177u: goto L_08876180;
    case 178u: goto L_08876184;
    case 179u: goto L_0887618C;
    case 180u: goto L_088761A4;
    case 181u: goto L_088761D8;
    case 182u: goto L_088761E8;
    case 183u: goto L_088761F4;
    case 184u: goto L_08876200;
    case 185u: goto L_08876208;
    case 186u: goto L_08876214;
    case 187u: goto L_08876220;
    case 188u: goto L_08876238;
    case 189u: goto L_08876240;
    case 190u: goto L_08876248;
    case 191u: goto L_0887626C;
    case 192u: goto L_08876278;
    case 193u: goto L_08876284;
    case 194u: goto L_08876290;
    case 195u: goto L_088762A0;
    case 196u: goto L_088762AC;
    case 197u: goto L_088762C4;
    case 198u: goto L_088762CC;
    case 199u: goto L_088762D4;
    case 200u: goto L_088762F8;
    case 201u: goto L_08876304;
    case 202u: goto L_08876310;
    case 203u: goto L_0887631C;
    case 204u: goto L_08876328;
    case 205u: goto L_08876338;
    case 206u: goto L_08876340;
    case 207u: goto L_08876374;
    case 208u: goto L_0887639C;
    case 209u: goto L_088763A4;
    case 210u: goto L_088763B0;
    case 211u: goto L_088763B8;
    case 212u: goto L_088763C0;
    case 213u: goto L_088763D0;
    case 214u: goto L_088763E4;
    case 215u: goto L_08876408;
    case 216u: goto L_08876410;
    case 217u: goto L_08876418;
    case 218u: goto L_08876424;
    case 219u: goto L_08876428;
    case 220u: goto L_0887643C;
    case 221u: goto L_08876468;
    case 222u: goto L_08876494;
    case 223u: goto L_088764C0;
    case 224u: goto L_088764D0;
    case 225u: goto L_088764D8;
    case 226u: goto L_088764E4;
    case 227u: goto L_088764EC;
    case 228u: goto L_088764F4;
    case 229u: goto L_08876508;
    case 230u: goto L_08876510;
    case 231u: goto L_08876518;
    case 232u: goto L_08876530;
    case 233u: goto L_08876550;
    case 234u: goto L_08876560;
    case 235u: goto L_08876570;
    case 236u: goto L_0887657C;
    case 237u: goto L_08876584;
    case 238u: goto L_0887658C;
    case 239u: goto L_08876594;
    case 240u: goto L_088765A8;
    case 241u: goto L_088765C8;
    case 242u: goto L_088765CC;
    case 243u: goto L_088765E0;
    case 244u: goto L_08876610;
    case 245u: goto L_08876624;
    case 246u: goto L_0887662C;
    case 247u: goto L_08876638;
    case 248u: goto L_08876640;
    case 249u: goto L_08876648;
    case 250u: goto L_08876660;
    case 251u: goto L_08876668;
    case 252u: goto L_08876674;
    case 253u: goto L_0887667C;
    case 254u: goto L_08876684;
    case 255u: goto L_0887668C;
    case 256u: goto L_088766A4;
    case 257u: goto L_088766C4;
    case 258u: goto L_088766D4;
    case 259u: goto L_088766E0;
    case 260u: goto L_088766E8;
    case 261u: goto L_088766FC;
    case 262u: goto L_0887672C;
    case 263u: goto L_08876730;
    case 264u: goto L_08876734;
    case 265u: goto L_0887674C;
    case 266u: goto L_08876784;
    case 267u: goto L_08876798;
    case 268u: goto L_0887679C;
    case 269u: goto L_088767C8;
    case 270u: goto L_088767CC;
    case 271u: goto L_088767D8;
    case 272u: goto L_08876800;
    case 273u: goto L_08876804;
    case 274u: goto L_08876830;
    case 275u: goto L_08876834;
    case 276u: goto L_0887683C;
    case 277u: goto L_08876864;
    case 278u: goto L_08876874;
    case 279u: goto L_08876884;
    case 280u: goto L_088768C8;
    case 281u: goto L_088768D0;
    case 282u: goto L_088768E0;
    case 283u: goto L_088768EC;
    case 284u: goto L_088768F4;
    case 285u: goto L_08876900;
    case 286u: goto L_08876918;
    case 287u: goto L_0887692C;
    case 288u: goto L_08876934;
    case 289u: goto L_08876944;
    case 290u: goto L_08876954;
    case 291u: goto L_0887698C;
    case 292u: goto L_088769A4;
    case 293u: goto L_088769D8;
    case 294u: goto L_088769E8;
    case 295u: goto L_088769F8;
    case 296u: goto L_08876A00;
    case 297u: goto L_08876A10;
    case 298u: goto L_08876A1C;
    case 299u: goto L_08876A24;
    case 300u: goto L_08876A2C;
    case 301u: goto L_08876A38;
    case 302u: goto L_08876A48;
    case 303u: goto L_08876A50;
    case 304u: goto L_08876A64;
    case 305u: goto L_08876A9C;
    case 306u: goto L_08876AA8;
    case 307u: goto L_08876AC8;
    case 308u: goto L_08876AE0;
    case 309u: goto L_08876AF4;
    case 310u: goto L_08876B00;
    case 311u: goto L_08876B0C;
    case 312u: goto L_08876B14;
    case 313u: goto L_08876B1C;
    case 314u: goto L_08876B28;
    case 315u: goto L_08876B30;
    case 316u: goto L_08876B3C;
    case 317u: goto L_08876B44;
    case 318u: goto L_08876B50;
    case 319u: goto L_08876B64;
    case 320u: goto L_08876B6C;
    case 321u: goto L_08876B74;
    case 322u: goto L_08876B80;
    case 323u: goto L_08876B88;
    case 324u: goto L_08876B90;
    case 325u: goto L_08876B98;
    case 326u: goto L_08876BA4;
    case 327u: goto L_08876BAC;
    case 328u: goto L_08876BB0;
    case 329u: goto L_08876BB8;
    case 330u: goto L_08876BCC;
    case 331u: goto L_08876BE0;
    case 332u: goto L_08876BF4;
    case 333u: goto L_08876C08;
    case 334u: goto L_08876C24;
    case 335u: goto L_08876C30;
    case 336u: goto L_08876C38;
    case 337u: goto L_08876C40;
    case 338u: goto L_08876C58;
    case 339u: goto L_08876CA8;
    case 340u: goto L_08876CC0;
    case 341u: goto L_08876CD0;
    case 342u: goto L_08876CD8;
    case 343u: goto L_08876CFC;
    case 344u: goto L_08876D08;
    case 345u: goto L_08876D1C;
    case 346u: goto L_08876D28;
    case 347u: goto L_08876D38;
    case 348u: goto L_08876D3C;
    case 349u: goto L_08876D50;
    case 350u: goto L_08876D78;
    case 351u: goto L_08876D84;
    case 352u: goto L_08876DA4;
    case 353u: goto L_08876DB8;
    case 354u: goto L_08876DC0;
    case 355u: goto L_08876DCC;
    case 356u: goto L_08876DE0;
    case 357u: goto L_08876DE8;
    case 358u: goto L_08876DF4;
    case 359u: goto L_08876E08;
    case 360u: goto L_08876E10;
    case 361u: goto L_08876E1C;
    case 362u: goto L_08876E30;
    case 363u: goto L_08876E38;
    case 364u: goto L_08876E44;
    case 365u: goto L_08876E54;
    case 366u: goto L_08876E5C;
    case 367u: goto L_08876E70;
    case 368u: goto L_08876E78;
    case 369u: goto L_08876E8C;
    case 370u: goto L_08876E94;
    case 371u: goto L_08876ECC;
    case 372u: goto L_08876EE0;
    case 373u: goto L_08876EE8;
    case 374u: goto L_08876EFC;
    case 375u: goto L_08876F0C;
    case 376u: goto L_08876F30;
    case 377u: goto L_08876F4C;
    case 378u: goto L_08876F5C;
    case 379u: goto L_08876F64;
    case 380u: goto L_08876F70;
    case 381u: goto L_08876F80;
    case 382u: goto L_08876F88;
    case 383u: goto L_08876F90;
    case 384u: goto L_08876F98;
    case 385u: goto L_08876FA8;
    case 386u: goto L_08876FAC;
    case 387u: goto L_08876FB4;
    case 388u: goto L_08876FC0;
    case 389u: goto L_08876FD0;
    case 390u: goto L_08876FD8;
    case 391u: goto L_08876FEC;
    case 392u: goto L_08876FF4;
    case 393u: goto L_08877004;
    case 394u: goto L_0887700C;
    case 395u: goto L_0887701C;
    case 396u: goto L_08877024;
    case 397u: goto L_08877034;
    case 398u: goto L_0887703C;
    case 399u: goto L_08877048;
    case 400u: goto L_08877050;
    case 401u: goto L_08877058;
    case 402u: goto L_08877068;
    case 403u: goto L_08877070;
    case 404u: goto L_08877080;
    case 405u: goto L_08877088;
    case 406u: goto L_08877094;
    case 407u: goto L_0887709C;
    case 408u: goto L_088770A8;
    case 409u: goto L_088770C4;
    case 410u: goto L_088770E8;
    case 411u: goto L_08877104;
    case 412u: goto L_08877118;
    case 413u: goto L_08877120;
    case 414u: goto L_08877130;
    case 415u: goto L_08877138;
    case 416u: goto L_0887714C;
    case 417u: goto L_08877154;
    case 418u: goto L_08877164;
    case 419u: goto L_0887716C;
    case 420u: goto L_0887717C;
    case 421u: goto L_08877184;
    case 422u: goto L_08877190;
    case 423u: goto L_088771A0;
    case 424u: goto L_088771A8;
    case 425u: goto L_088771B0;
    case 426u: goto L_088771B8;
    case 427u: goto L_088771C8;
    case 428u: goto L_088771CC;
    case 429u: goto L_088771D4;
    case 430u: goto L_088771E0;
    case 431u: goto L_088771F0;
    case 432u: goto L_088771F8;
    case 433u: goto L_0887720C;
    case 434u: goto L_08877214;
    case 435u: goto L_08877224;
    case 436u: goto L_0887722C;
    case 437u: goto L_0887723C;
    case 438u: goto L_08877244;
    case 439u: goto L_08877254;
    case 440u: goto L_0887725C;
    case 441u: goto L_08877268;
    case 442u: goto L_08877270;
    case 443u: goto L_08877278;
    case 444u: goto L_08877288;
    case 445u: goto L_08877290;
    case 446u: goto L_088772A0;
    case 447u: goto L_088772A8;
    case 448u: goto L_088772B4;
    case 449u: goto L_088772BC;
    case 450u: goto L_088772C8;
    case 451u: goto L_088772E4;
    case 452u: goto L_088772FC;
    case 453u: goto L_08877310;
    case 454u: goto L_08877334;
    case 455u: goto L_08877348;
    case 456u: goto L_08877350;
    case 457u: goto L_0887735C;
    case 458u: goto L_0887736C;
    case 459u: goto L_08877374;
    case 460u: goto L_0887737C;
    case 461u: goto L_08877384;
    case 462u: goto L_08877394;
    case 463u: goto L_08877398;
    case 464u: goto L_088773A0;
    case 465u: goto L_088773B0;
    case 466u: goto L_088773B8;
    case 467u: goto L_088773C8;
    case 468u: goto L_088773D0;
    case 469u: goto L_088773E0;
    case 470u: goto L_088773E8;
    case 471u: goto L_088773F8;
    case 472u: goto L_08877400;
    case 473u: goto L_0887740C;
    case 474u: goto L_08877414;
    case 475u: goto L_0887741C;
    case 476u: goto L_0887742C;
    case 477u: goto L_08877434;
    case 478u: goto L_08877444;
    case 479u: goto L_0887744C;
    case 480u: goto L_08877458;
    case 481u: goto L_08877464;
    case 482u: goto L_08877480;
    case 483u: goto L_088774A4;
    case 484u: goto L_088774B8;
    case 485u: goto L_088774C0;
    case 486u: goto L_088774CC;
    case 487u: goto L_088774DC;
    case 488u: goto L_088774E4;
    case 489u: goto L_088774EC;
    case 490u: goto L_088774F4;
    case 491u: goto L_08877504;
    case 492u: goto L_08877508;
    case 493u: goto L_08877510;
    case 494u: goto L_08877520;
    case 495u: goto L_08877528;
    case 496u: goto L_08877538;
    case 497u: goto L_08877540;
    case 498u: goto L_08877550;
    case 499u: goto L_08877558;
    case 500u: goto L_08877568;
    case 501u: goto L_08877570;
    case 502u: goto L_0887757C;
    case 503u: goto L_08877584;
    case 504u: goto L_0887758C;
    case 505u: goto L_0887759C;
    case 506u: goto L_088775A4;
    case 507u: goto L_088775B4;
    case 508u: goto L_088775BC;
    case 509u: goto L_088775C8;
    case 510u: goto L_088775D4;
    case 511u: goto L_088775F0;
    case 512u: goto L_0887760C;
    case 513u: goto L_08877628;
    case 514u: goto L_08877638;
    case 515u: goto L_08877640;
    case 516u: goto L_0887764C;
    case 517u: goto L_0887765C;
    case 518u: goto L_08877664;
    case 519u: goto L_08877674;
    case 520u: goto L_0887767C;
    case 521u: goto L_0887768C;
    case 522u: goto L_08877694;
    case 523u: goto L_088776A4;
    case 524u: goto L_088776AC;
    case 525u: goto L_088776B8;
    case 526u: goto L_088776C4;
    case 527u: goto L_088776DC;
    case 528u: goto L_088776F8;
    case 529u: goto L_08877714;
    case 530u: goto L_08877724;
    case 531u: goto L_0887772C;
    case 532u: goto L_08877738;
    case 533u: goto L_08877748;
    case 534u: goto L_08877750;
    case 535u: goto L_08877760;
    case 536u: goto L_08877768;
    case 537u: goto L_08877778;
    case 538u: goto L_08877780;
    case 539u: goto L_0887778C;
    case 540u: goto L_0887779C;
    case 541u: goto L_088777A4;
    case 542u: goto L_088777B4;
    case 543u: goto L_088777BC;
    case 544u: goto L_088777CC;
    case 545u: goto L_088777D4;
    case 546u: goto L_088777E4;
    case 547u: goto L_088777EC;
    case 548u: goto L_088777F8;
    case 549u: goto L_08877804;
    case 550u: goto L_0887781C;
    case 551u: goto L_08877838;
    case 552u: goto L_08877854;
    case 553u: goto L_08877864;
    case 554u: goto L_0887786C;
    case 555u: goto L_08877878;
    case 556u: goto L_08877888;
    case 557u: goto L_08877890;
    case 558u: goto L_08877898;
    case 559u: goto L_088778A0;
    case 560u: goto L_088778B0;
    case 561u: goto L_088778B4;
    case 562u: goto L_088778BC;
    case 563u: goto L_088778C8;
    case 564u: goto L_088778D8;
    case 565u: goto L_088778E0;
    case 566u: goto L_088778F0;
    case 567u: goto L_088778F8;
    case 568u: goto L_08877908;
    case 569u: goto L_08877910;
    case 570u: goto L_0887791C;
    case 571u: goto L_0887792C;
    case 572u: goto L_08877934;
    case 573u: goto L_08877944;
    case 574u: goto L_0887794C;
    case 575u: goto L_0887795C;
    case 576u: goto L_08877964;
    case 577u: goto L_08877974;
    case 578u: goto L_0887797C;
    case 579u: goto L_08877988;
    case 580u: goto L_08877994;
    case 581u: goto L_088779AC;
    case 582u: goto L_088779CC;
    case 583u: goto L_088779DC;
    case 584u: goto L_088779E4;
    case 585u: goto L_088779F4;
    case 586u: goto L_088779FC;
    case 587u: goto L_08877A04;
    case 588u: goto L_08877A14;
    case 589u: goto L_08877A1C;
    case 590u: goto L_08877A28;
    case 591u: goto L_08877A40;
    case 592u: goto L_08877A5C;
    case 593u: goto L_08877A6C;
    case 594u: goto L_08877A7C;
    case 595u: goto L_08877A80;
    case 596u: goto L_08877A94;
    case 597u: goto L_08877AE8;
    case 598u: goto L_08877AF8;
    case 599u: goto L_08877B04;
    case 600u: goto L_08877B14;
    case 601u: goto L_08877B2C;
    case 602u: goto L_08877B3C;
    case 603u: goto L_08877B48;
    case 604u: goto L_08877B58;
    case 605u: goto L_08877B70;
    case 606u: goto L_08877B84;
    case 607u: goto L_08877B9C;
    case 608u: goto L_08877BB0;
    case 609u: goto L_08877BC0;
    case 610u: goto L_08877BD4;
    case 611u: goto L_08877BE8;
    case 612u: goto L_08877BF8;
    case 613u: goto L_08877C08;
    case 614u: goto L_08877C28;
    case 615u: goto L_08877C50;
    case 616u: goto L_08877C60;
    case 617u: goto L_08877C68;
    case 618u: goto L_08877C90;
    case 619u: goto L_08877C9C;
    case 620u: goto L_08877CB0;
    case 621u: goto L_08877CBC;
    case 622u: goto L_08877CCC;
    case 623u: goto L_08877CDC;
    case 624u: goto L_08877CF8;
    case 625u: goto L_08877D04;
    case 626u: goto L_08877D10;
    case 627u: goto L_08877D1C;
    case 628u: goto L_08877D28;
    case 629u: goto L_08877D48;
    case 630u: goto L_08877D58;
    case 631u: goto L_08877D68;
    case 632u: goto L_08877D78;
    case 633u: goto L_08877D88;
    case 634u: goto L_08877D98;
    case 635u: goto L_08877DA8;
    case 636u: goto L_08877DB0;
    case 637u: goto L_08877DC4;
    case 638u: goto L_08877DF4;
    case 639u: goto L_08877EA0;
    case 640u: goto L_08877EAC;
    case 641u: goto L_08877EC8;
    case 642u: goto L_08877ED8;
    case 643u: goto L_08877EE0;
    case 644u: goto L_08877F1C;
    case 645u: goto L_08877F28;
    case 646u: goto L_08877F2C;
    case 647u: goto L_08877F54;
    case 648u: goto L_08877F60;
    case 649u: goto L_08877F7C;
    case 650u: goto L_08877F84;
    case 651u: goto L_08877FC8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08874000:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[19];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[2];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088740C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x088740E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x088740E4u) goto L_088740E4;
    return;
L_088740E4:
    ctx.gpr[9] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = ctx.fpr[19] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(40)));
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[0];
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    ctx.gpr[6] = (16384u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(296));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = ctx.fpr[17] - ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(152));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    goto L_08874328;
L_08874328:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[18] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[18] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08874328;
      }
      goto L_08874458;
    }
L_08874458:
    ctx.gpr[6] = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 31u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 31u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[19];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[15] = ctx.fpr[13] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[18];
    ctx.fpr[16] = std::sqrt(ctx.fpr[16]);
    ctx.fpr[16] = ctx.fpr[12] / ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 31u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = ctx.fpr[18] - ctx.fpr[15];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[18];
    ctx.fpr[16] = std::sqrt(ctx.fpr[16]);
    ctx.fpr[16] = ctx.fpr[12] / ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 31u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[19];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[15] = ctx.fpr[13] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[17] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[18];
    ctx.fpr[16] = std::sqrt(ctx.fpr[16]);
    ctx.fpr[16] = ctx.fpr[12] / ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 31u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.fpr[15] = ctx.fpr[18] - ctx.fpr[15];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[18];
    ctx.fpr[16] = std::sqrt(ctx.fpr[16]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 31u));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(118), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088749FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08874A1Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08874A1Cu) goto L_08874A1C;
    return;
L_08874A1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[18];
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[19];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[19];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[0];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874BA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(296));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08874BCCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08874BCCu) goto L_08874BCC;
    return;
L_08874BCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[18] = ctx.fpr[20] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[19] = ctx.fpr[20] - ctx.fpr[13];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[2] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[0] = ctx.fpr[16] + ctx.fpr[13];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(152));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08874CA4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 637u, 0x088B7E18u>(ctx, &aot_mem) && ctx.pc == 0x08874CA4u) goto L_08874CA4;
    return;
L_08874CA4:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[18];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = ctx.fpr[17] - ctx.fpr[14];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = ctx.fpr[12] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.fpr[18] = ctx.fpr[15] - ctx.fpr[18];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]) ^ 0x80000000u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(118), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088750E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-480));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(13924), ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19100)));
    ctx.gpr[6] = (15820u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[6] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[30]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[20] = (2229u << 16u);
      if (branch_taken) {
          goto L_08875164;
      }
      goto L_08875160;
    }
L_08875160:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08875164;
L_08875164:
    ctx.gpr[31] = (0x0887516Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 166u, 0x08A5D330u>(ctx, &aot_mem) && ctx.pc == 0x0887516Cu) goto L_0887516C;
    return;
L_0887516C:
    ctx.gpr[31] = (0x08875174u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 645u, 0x08873B74u>(ctx, &aot_mem) && ctx.pc == 0x08875174u) goto L_08875174;
    return;
L_08875174:
    ctx.gpr[31] = (0x0887517Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 640u, 0x08873930u>(ctx, &aot_mem) && ctx.pc == 0x0887517Cu) goto L_0887517C;
    return;
L_0887517C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08875188u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 606u, 0x088735BCu>(ctx, &aot_mem) && ctx.pc == 0x08875188u) goto L_08875188;
    return;
L_08875188:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08875194u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08875194u) goto L_08875194;
    return;
L_08875194:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
      if (branch_taken) {
          goto L_088751B4;
      }
      goto L_0887519C;
    }
L_0887519C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[20]);
        goto L_088751B8;
    }
    goto L_088751AC;
L_088751AC:
    ctx.gpr[31] = (0x088751B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x088751B4u) goto L_088751B4;
    return;
L_088751B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[20]);
    goto L_088751B8;
L_088751B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088751DCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x088751DCu) goto L_088751DC;
    return;
L_088751DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0887521Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A06460u>(ctx, &aot_mem) && ctx.pc == 0x0887521Cu) goto L_0887521C;
    return;
L_0887521C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13952)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
      if (branch_taken) {
          goto L_08875260;
      }
      goto L_0887522C;
    }
L_0887522C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08875290;
      }
      goto L_08875260;
    }
L_08875260:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08875290;
L_08875290:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13956)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.vfpu_ctrl[1u] = 0x000010E5u;
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vocp(32u, 0u, 1u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 2u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<1u>());
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<33u>());
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13956)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.vfpu_ctrl[1u] = 0x000010E5u;
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vocp(32u, 0u, 1u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 2u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<1u>());
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<33u>());
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14040));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08875318u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08875318u) goto L_08875318;
    return;
L_08875318:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (17786u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (2229u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23736), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[18]);
        goto L_08875398;
    }
    goto L_08875390;
L_08875390:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23736), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[18]);
    goto L_08875398;
L_08875398:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13960)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(408));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.vfpu_ctrl[1u] = 0x000010E5u;
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vocp(32u, 0u, 1u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 2u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<1u>());
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<33u>());
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13960)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(412));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.vfpu_ctrl[1u] = 0x000010E5u;
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vocp(32u, 0u, 1u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 2u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<1u>());
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<33u>());
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14104));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08875448u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08875448u) goto L_08875448;
    return;
L_08875448:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13964)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.vfpu_ctrl[1u] = 0x000010E5u;
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vocp(32u, 0u, 1u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 2u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<1u>());
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<33u>());
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13964)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(420));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.vfpu_ctrl[1u] = 0x000010E5u;
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vocp(32u, 0u, 1u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 2u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<1u>());
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<33u>());
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14168));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887552Cu);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x0887552Cu) goto L_0887552C;
    return;
L_0887552C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<9u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<10u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<11u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<24u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<25u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<26u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<27u, 4u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 32u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 4u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 12u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 40u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 4u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 16u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 56u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 4u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 20u, 4u);
      ctx.eat_vfpu_prefixes(); }
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<44u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<45u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<46u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<47u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<48u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(64);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<49u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(80);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<50u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(96);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<51u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(112);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<52u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(128);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<53u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(144);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<54u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(160);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<55u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(176);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-880));
    ctx.gpr[31] = (0x088755FCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x088755FCu) goto L_088755FC;
    return;
L_088755FC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7048), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08875644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 542u, 0x08AB2F78u>(ctx, &aot_mem) && ctx.pc == 0x08875644u) goto L_08875644;
    return;
L_08875644:
    ctx.gpr[4] = (50688u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(263));
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (56319u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2054));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (8704u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7044), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088756B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 648u, 0x08873D90u>(ctx, &aot_mem) && ctx.pc == 0x088756B0u) goto L_088756B0;
    return;
L_088756B0:
    ctx.gpr[4] = (22016u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (22528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(255));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (22272u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (22528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[22];
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7040)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (52480u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (52736u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (52992u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[5] = (0u | 61u);
    ctx.gpr[31] = (0x088757D4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 659u, 0x08873E78u>(ctx, &aot_mem) && ctx.pc == 0x088757D4u) goto L_088757D4;
    return;
L_088757D4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088757E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19092)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 647u, 0x08867E08u>(ctx, &aot_mem) && ctx.pc == 0x088757E0u) goto L_088757E0;
    return;
L_088757E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_08875808;
    }
    goto L_088757F0;
L_088757F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_08875808;
    }
    goto L_088757FC;
L_088757FC:
    ctx.gpr[31] = (0x08875804u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08875804u) goto L_08875804;
    return;
L_08875804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_08875808;
L_08875808:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875828;
      }
      goto L_08875814;
    }
L_08875814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875828;
      }
      goto L_08875820;
    }
L_08875820:
    ctx.gpr[31] = (0x08875828u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08875828u) goto L_08875828;
    return;
L_08875828:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875864:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13892)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[6] = (17096u << 16u);
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(13888)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 14571u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-880));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(13896), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13916)));
    ctx.gpr[9] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(68), ctx.gpr[8]);
    ctx.gpr[7] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(13904), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(13900), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[10] = (15744u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(13908), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14232));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(13912), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08875924u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13920), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x08875924u) goto L_08875924;
    return;
L_08875924:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-512));
    ctx.gpr[31] = (0x0887593Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-768));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 380u, 0x08A7EDC8u>(ctx, &aot_mem) && ctx.pc == 0x0887593Cu) goto L_0887593C;
    return;
L_0887593C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-488));
    ctx.gpr[31] = (0x08875954u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-640));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 380u, 0x08A7EDC8u>(ctx, &aot_mem) && ctx.pc == 0x08875954u) goto L_08875954;
    return;
L_08875954:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875960:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08875984u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08875984u) goto L_08875984;
    return;
L_08875984:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887599C;
      }
      goto L_08875990;
    }
L_08875990:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088759A4;
      }
      goto L_0887599C;
    }
L_0887599C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088759C4;
      }
      goto L_088759A4;
    }
L_088759A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    goto L_088759C4;
L_088759C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088759D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08875A20;
      }
      goto L_088759EC;
    }
L_088759EC:
    ctx.gpr[31] = (0x088759F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08875960;
L_088759F4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08875A08;
      }
      goto L_08875A00;
    }
L_08875A00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08875A2C;
      }
      goto L_08875A08;
    }
L_08875A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08875A20;
L_08875A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    goto L_08875A2C;
L_08875A2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875A3C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875A54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08875B08;
      }
      goto L_08875A80;
    }
L_08875A80:
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08875A84;
L_08875A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875AC4;
      }
      goto L_08875A90;
    }
L_08875A90:
    ctx.gpr[31] = (0x08875A98u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08875960;
L_08875A98:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08875ABC;
      }
      goto L_08875AA0;
    }
L_08875AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08875AC4;
      }
      goto L_08875ABC;
    }
L_08875ABC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08875B0C;
      }
      goto L_08875AC4;
    }
L_08875AC4:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_08875AD4;
    }
    goto L_08875AD4;
L_08875AD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08875AE4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08875AE4u) goto L_08875AE4;
    return;
L_08875AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08875A84;
      }
      goto L_08875B08;
    }
L_08875B08:
    ctx.gpr[2] = (0u | 0u);
    goto L_08875B0C;
L_08875B0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875B2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08875B80;
      }
      goto L_08875B44;
    }
L_08875B44:
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875B54;
      }
      goto L_08875B50;
    }
L_08875B50:
    ctx.gpr[6] = (0u | 32u);
    goto L_08875B54;
L_08875B54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08875B70u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08875B70u) goto L_08875B70;
    return;
L_08875B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08875B80;
L_08875B80:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875B8C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08875BC8;
      }
      goto L_08875B9C;
    }
L_08875B9C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7036))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08875BB8;
      }
      goto L_08875BAC;
    }
L_08875BAC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7034))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08875BC0;
      }
      goto L_08875BB8;
    }
L_08875BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08875BCC;
      }
      goto L_08875BC0;
    }
L_08875BC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08875BCC;
      }
      goto L_08875BC8;
    }
L_08875BC8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08875BCC;
L_08875BCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875BD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[8] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    ctx.gpr[8] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[4] & 61440u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08875C94;
      }
      goto L_08875C34;
    }
L_08875C34:
    ctx.gpr[31] = (0x08875C3Cu);
    ctx.gpr[4] = (ctx.gpr[20] >> 12u);
    goto L_08875B8C;
L_08875C3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875C94;
      }
      goto L_08875C44;
    }
L_08875C44:
    ctx.gpr[4] = (0u | 16384u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08875C60;
      }
      goto L_08875C50;
    }
L_08875C50:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08875C68;
      }
      goto L_08875C60;
    }
L_08875C60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08875D2C;
      }
      goto L_08875C68;
    }
L_08875C68:
    ctx.gpr[5] = (ctx.gpr[16] >> (ctx.gpr[4] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08875C84;
      }
      goto L_08875C78;
    }
L_08875C78:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    goto L_08875C84;
L_08875C84:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08875C68;
      }
      goto L_08875C94;
    }
L_08875C94:
    ctx.gpr[4] = (61440u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875CEC;
      }
      goto L_08875CA4;
    }
L_08875CA4:
    ctx.gpr[31] = (0x08875CACu);
    ctx.gpr[4] = (ctx.gpr[4] >> 28u);
    goto L_08875B8C;
L_08875CAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875CEC;
      }
      goto L_08875CB4;
    }
L_08875CB4:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[4] = (0u | 16u);
    goto L_08875CC0;
L_08875CC0:
    ctx.gpr[5] = (ctx.gpr[16] >> (ctx.gpr[4] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08875CDC;
      }
      goto L_08875CD0;
    }
L_08875CD0:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    goto L_08875CDC;
L_08875CDC:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08875CC0;
      }
      goto L_08875CEC;
    }
L_08875CEC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_08875D28;
      }
      goto L_08875CFC;
    }
L_08875CFC:
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08875D00;
L_08875D00:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08875D18;
      }
      goto L_08875D0C;
    }
L_08875D0C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08875D18;
L_08875D18:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08875D00;
      }
      goto L_08875D28;
    }
L_08875D28:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08875D2C;
L_08875D2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875D4C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08875D74;
      }
      goto L_08875D54;
    }
L_08875D54:
    ctx.gpr[5] = (0u | 15u);
    goto L_08875D58;
L_08875D58:
    ctx.gpr[6] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08875D68;
      }
      goto L_08875D64;
    }
L_08875D64:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08875D68;
L_08875D68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08875D58;
      }
      goto L_08875D74;
    }
L_08875D74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875D7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08875E0C;
      }
      goto L_08875D9C;
    }
L_08875D9C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08875E38;
      }
      goto L_08875DA4;
    }
L_08875DA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875DC4;
      }
      goto L_08875DAC;
    }
L_08875DAC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875E40;
      }
      goto L_08875DBC;
    }
L_08875DBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08875F50;
      }
      goto L_08875DC4;
    }
L_08875DC4:
    ctx.gpr[31] = (0x08875DCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08875D4C;
L_08875DCC:
    ctx.gpr[31] = (0x08875DD4u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08875DD4u) goto L_08875DD4;
    return;
L_08875DD4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08875DE8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08875DE8u) goto L_08875DE8;
    return;
L_08875DE8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> (ctx.gpr[4] & 31u)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 15u);
      if (branch_taken) {
          goto L_08875F50;
      }
      goto L_08875E0C;
    }
L_08875E0C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08875E88;
      }
      goto L_08875E18;
    }
L_08875E18:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875E38;
      }
      goto L_08875E20;
    }
L_08875E20:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08875F1C;
      }
      goto L_08875E30;
    }
L_08875E30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08875F50;
      }
      goto L_08875E38;
    }
L_08875E38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08875F50;
      }
      goto L_08875E40;
    }
L_08875E40:
    ctx.gpr[31] = (0x08875E48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08875D4C;
L_08875E48:
    ctx.gpr[31] = (0x08875E50u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08875E50u) goto L_08875E50;
    return;
L_08875E50:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08875E64u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08875E64u) goto L_08875E64;
    return;
L_08875E64:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> (ctx.gpr[4] & 31u)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 15u);
      if (branch_taken) {
          goto L_08875F50;
      }
      goto L_08875E88;
    }
L_08875E88:
    ctx.gpr[31] = (0x08875E90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08875D4C;
L_08875E90:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08875F04;
      }
      goto L_08875EA4;
    }
L_08875EA4:
    ctx.gpr[31] = (0x08875EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08875EACu) goto L_08875EAC;
    return;
L_08875EAC:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08875EC0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08875EC0u) goto L_08875EC0;
    return;
L_08875EC0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15476)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15472)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08875F0C;
      }
      goto L_08875EFC;
    }
L_08875EFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08875F50;
      }
      goto L_08875F04;
    }
L_08875F04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08875F50;
      }
      goto L_08875F0C;
    }
L_08875F0C:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> (ctx.gpr[4] & 31u)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 15u);
      if (branch_taken) {
          goto L_08875F50;
      }
      goto L_08875F1C;
    }
L_08875F1C:
    ctx.gpr[31] = (0x08875F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08875F24u) goto L_08875F24;
    return;
L_08875F24:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15484)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15480)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08875F3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08875F3Cu) goto L_08875F3C;
    return;
L_08875F3C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_08875F50;
L_08875F50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875F68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08875FE0;
      }
      goto L_08875F88;
    }
L_08875F88:
    ctx.gpr[31] = (0x08875F90u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 225u, 0x08AA5170u>(ctx, &aot_mem) && ctx.pc == 0x08875F90u) goto L_08875F90;
    return;
L_08875F90:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08875F9Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x08875F9Cu) goto L_08875F9C;
    return;
L_08875F9C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08875FA8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x08875FA8u) goto L_08875FA8;
    return;
L_08875FA8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08875FB4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x08875FB4u) goto L_08875FB4;
    return;
L_08875FB4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08875FC0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x08875FC0u) goto L_08875FC0;
    return;
L_08875FC0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08875FCCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x08875FCCu) goto L_08875FCC;
    return;
L_08875FCC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08875FD8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x08875FD8u) goto L_08875FD8;
    return;
L_08875FD8:
    ctx.gpr[31] = (0x08875FE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 178u, 0x08AC8E78u>(ctx, &aot_mem) && ctx.pc == 0x08875FE0u) goto L_08875FE0;
    return;
L_08875FE0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875FF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08876018u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 232u, 0x08A7D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08876018u) goto L_08876018;
    return;
L_08876018:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20152));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    goto L_08876044;
L_08876044:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08876044;
      }
      goto L_0887605C;
    }
L_0887605C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(384), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08876068;
L_08876068:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08876068;
      }
      goto L_0887607C;
    }
L_0887607C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08876084;
L_08876084:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(268), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08876084;
      }
      goto L_08876098;
    }
L_08876098:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(396), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088760C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088760E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08876C58;
L_088760E4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(168));
    goto L_088760EC;
L_088760EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088760F8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x088760F8u) goto L_088760F8;
    return;
L_088760F8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088760EC;
      }
      goto L_08876108;
    }
L_08876108:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(268));
    goto L_08876110;
L_08876110:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887611Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x0887611Cu) goto L_0887611C;
    return;
L_0887611C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08876110;
      }
      goto L_0887612C;
    }
L_0887612C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08876184;
      }
      goto L_08876138;
    }
L_08876138:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(392));
    ctx.gpr[31] = (0x08876144u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x08876144u) goto L_08876144;
    return;
L_08876144:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08876180;
      }
      goto L_08876158;
    }
L_08876158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(392)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0887616Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 109u, 0x089C890Cu>(ctx, &aot_mem) && ctx.pc == 0x0887616Cu) goto L_0887616C;
    return;
L_0887616C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08876158;
      }
      goto L_08876180;
    }
L_08876180:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(392), 0u);
    goto L_08876184;
L_08876184:
    ctx.gpr[31] = (0x0887618Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 576u, 0x08973B64u>(ctx, &aot_mem) && ctx.pc == 0x0887618Cu) goto L_0887618C;
    return;
L_0887618C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088761A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x088761D8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 556u, 0x089739D4u>(ctx, &aot_mem) && ctx.pc == 0x088761D8u) goto L_088761D8;
    return;
L_088761D8:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[17] = (2227u << 16u);
      if (branch_taken) {
          goto L_08876328;
      }
      goto L_088761E8;
    }
L_088761E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_08876328;
      }
      goto L_088761F4;
    }
L_088761F4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(46));
    ctx.gpr[31] = (0x08876200u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2408));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 404u, 0x08AED66Cu>(ctx, &aot_mem) && ctx.pc == 0x08876200u) goto L_08876200;
    return;
L_08876200:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876328;
      }
      goto L_08876208;
    }
L_08876208:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08876214u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08876494;
L_08876214:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08876290;
      }
      goto L_08876220;
    }
L_08876220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(392)));
    ctx.gpr[18] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876290;
      }
      goto L_08876238;
    }
L_08876238:
    ctx.gpr[31] = (0x08876240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 169u, 0x08AC8DC8u>(ctx, &aot_mem) && ctx.pc == 0x08876240u) goto L_08876240;
    return;
L_08876240:
    ctx.gpr[31] = (0x08876248u);
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 224u, 0x08A5D7E4u>(ctx, &aot_mem) && ctx.pc == 0x08876248u) goto L_08876248;
    return;
L_08876248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(392)));
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0887626Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 135u, 0x08A5D14Cu>(ctx, &aot_mem) && ctx.pc == 0x0887626Cu) goto L_0887626C;
    return;
L_0887626C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08876278u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 184u, 0x08AC8ED4u>(ctx, &aot_mem) && ctx.pc == 0x08876278u) goto L_08876278;
    return;
L_08876278:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08876284u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 224u, 0x08AA5144u>(ctx, &aot_mem) && ctx.pc == 0x08876284u) goto L_08876284;
    return;
L_08876284:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08876290u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x08A5D0CCu>(ctx, &aot_mem) && ctx.pc == 0x08876290u) goto L_08876290;
    return;
L_08876290:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15440)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088762A0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1028), static_cast<std::uint8_t>(ctx.gpr[20]));
    goto L_088765E0;
L_088762A0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0887631C;
      }
      goto L_088762AC;
    }
L_088762AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(392)));
    ctx.gpr[18] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887631C;
      }
      goto L_088762C4;
    }
L_088762C4:
    ctx.gpr[31] = (0x088762CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 169u, 0x08AC8DC8u>(ctx, &aot_mem) && ctx.pc == 0x088762CCu) goto L_088762CC;
    return;
L_088762CC:
    ctx.gpr[31] = (0x088762D4u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 224u, 0x08A5D7E4u>(ctx, &aot_mem) && ctx.pc == 0x088762D4u) goto L_088762D4;
    return;
L_088762D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(392)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088762F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 135u, 0x08A5D14Cu>(ctx, &aot_mem) && ctx.pc == 0x088762F8u) goto L_088762F8;
    return;
L_088762F8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08876304u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 184u, 0x08AC8ED4u>(ctx, &aot_mem) && ctx.pc == 0x08876304u) goto L_08876304;
    return;
L_08876304:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08876310u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 224u, 0x08AA5144u>(ctx, &aot_mem) && ctx.pc == 0x08876310u) goto L_08876310;
    return;
L_08876310:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0887631Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x08A5D0CCu>(ctx, &aot_mem) && ctx.pc == 0x0887631Cu) goto L_0887631C;
    return;
L_0887631C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15440)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1029), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08876338;
      }
      goto L_08876328;
    }
L_08876328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15440)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1028), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15440)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1029), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_08876338;
L_08876338:
    ctx.gpr[31] = (0x08876340u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 93u, 0x089C87BCu>(ctx, &aot_mem) && ctx.pc == 0x08876340u) goto L_08876340;
    return;
L_08876340:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876374:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887639Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2400));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 379u, 0x08AED520u>(ctx, &aot_mem) && ctx.pc == 0x0887639Cu) goto L_0887639C;
    return;
L_0887639C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088763B0;
      }
      goto L_088763A4;
    }
L_088763A4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(396), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088763D0;
      }
      goto L_088763B0;
    }
L_088763B0:
    ctx.gpr[31] = (0x088763B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088763B8u) goto L_088763B8;
    return;
L_088763B8:
    ctx.gpr[31] = (0x088763C0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x088763C0u) goto L_088763C0;
    return;
L_088763C0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(396), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088763D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088763D0u) goto L_088763D0;
    return;
L_088763D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088763E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(396)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08876410;
      }
      goto L_08876408;
    }
L_08876408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08876428;
      }
      goto L_08876410;
    }
L_08876410:
    ctx.gpr[31] = (0x08876418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x08876418u) goto L_08876418;
    return;
L_08876418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(396)));
    ctx.gpr[31] = (0x08876424u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x08876424u) goto L_08876424;
    return;
L_08876424:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(396), ctx.gpr[17]);
    goto L_08876428;
L_08876428:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887643C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(15412));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08876468u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 599u, 0x08973CD0u>(ctx, &aot_mem) && ctx.pc == 0x08876468u) goto L_08876468;
    return;
L_08876468:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876494:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15440)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1030))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088764D8;
      }
      goto L_088764C0;
    }
L_088764C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] & 61440u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088764E4;
      }
      goto L_088764D0;
    }
L_088764D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08876510;
      }
      goto L_088764D8;
    }
L_088764D8:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1030), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088765CC;
      }
      goto L_088764E4;
    }
L_088764E4:
    ctx.gpr[31] = (0x088764ECu);
    ctx.gpr[4] = (ctx.gpr[4] >> 12u);
    goto L_08875B8C;
L_088764EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876510;
      }
      goto L_088764F4;
    }
L_088764F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[5] & 61440u);
    ctx.gpr[4] = (ctx.gpr[4] >> 12u);
    ctx.gpr[31] = (0x08876508u);
    ctx.gpr[5] = (ctx.gpr[5] & 4095u);
    goto L_08875D7C;
L_08876508:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088765C8;
      }
      goto L_08876510;
    }
L_08876510:
    ctx.gpr[31] = (0x08876518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08876518u) goto L_08876518;
    return;
L_08876518:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15492)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15488)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08876530u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08876530u) goto L_08876530;
    return;
L_08876530:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088765C8;
      }
      goto L_08876550;
    }
L_08876550:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08876584;
      }
      goto L_08876560;
    }
L_08876560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71))))));
    ctx.gpr[31] = (0x08876570u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08875BD4;
L_08876570:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887658C;
      }
      goto L_0887657C;
    }
L_0887657C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088765C8;
      }
      goto L_08876584;
    }
L_08876584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088765CC;
      }
      goto L_0887658C;
    }
L_0887658C:
    ctx.gpr[31] = (0x08876594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08876594u) goto L_08876594;
    return;
L_08876594:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088765A8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088765A8u) goto L_088765A8;
    return;
L_088765A8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_088765C8;
L_088765C8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_088765CC;
L_088765CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088765E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15440)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1031))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887662C;
      }
      goto L_08876610;
    }
L_08876610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08876638;
      }
      goto L_08876624;
    }
L_08876624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08876668;
      }
      goto L_0887662C;
    }
L_0887662C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1031), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08876734;
      }
      goto L_08876638;
    }
L_08876638:
    ctx.gpr[31] = (0x08876640u);
    ctx.gpr[4] = (ctx.gpr[5] >> 28u);
    goto L_08875B8C;
L_08876640:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_08876668;
      }
      goto L_08876648;
    }
L_08876648:
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[5] >> 28u);
    ctx.gpr[5] = (ctx.gpr[4] >> 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 4095u);
    ctx.gpr[31] = (0x08876660u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08875D7C;
L_08876660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08876730;
      }
      goto L_08876668;
    }
L_08876668:
    ctx.gpr[4] = (ctx.gpr[4] & 61440u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876730;
      }
      goto L_08876674;
    }
L_08876674:
    ctx.gpr[31] = (0x0887667Cu);
    ctx.gpr[4] = (ctx.gpr[4] >> 12u);
    goto L_08875B8C;
L_0887667C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876730;
      }
      goto L_08876684;
    }
L_08876684:
    ctx.gpr[31] = (0x0887668Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0887668Cu) goto L_0887668C;
    return;
L_0887668C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15492)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15488)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088766A4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088766A4u) goto L_088766A4;
    return;
L_088766A4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876730;
      }
      goto L_088766C4;
    }
L_088766C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(71))))));
    ctx.gpr[31] = (0x088766D4u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08875BD4;
L_088766D4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876730;
      }
      goto L_088766E0;
    }
L_088766E0:
    ctx.gpr[31] = (0x088766E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088766E8u) goto L_088766E8;
    return;
L_088766E8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088766FCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088766FCu) goto L_088766FC;
    return;
L_088766FC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876730;
      }
      goto L_0887672C;
    }
L_0887672C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_08876730;
L_08876730:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08876734;
L_08876734:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887674C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[9] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15440)));
    ctx.gpr[5] = (ctx.gpr[9] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(386)));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[11];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088767CC;
      }
      goto L_08876784;
    }
L_08876784:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088767C8;
      }
      goto L_08876798;
    }
L_08876798:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0887679C;
L_0887679C:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_0887679C;
    }
    goto L_088767C8;
L_088767C8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(386), static_cast<std::uint8_t>(ctx.gpr[9]));
    goto L_088767CC;
L_088767CC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(387)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08876834;
      }
      goto L_088767D8;
    }
L_088767D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15440)));
    ctx.gpr[6] = (ctx.gpr[8] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(268));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876830;
      }
      goto L_08876800;
    }
L_08876800:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08876804;
L_08876804:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_08876804;
    }
    goto L_08876830;
L_08876830:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(387), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_08876834;
L_08876834:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887683C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088768E0;
      }
      goto L_08876864;
    }
L_08876864:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(15436)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088768E0;
      }
      goto L_08876874;
    }
L_08876874:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(15437)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088768D0;
      }
      goto L_08876884;
    }
L_08876884:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(385)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(385), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(385)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(368)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(385)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(376)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(384)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088768EC;
      }
      goto L_088768C8;
    }
L_088768C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887698C;
      }
      goto L_088768D0;
    }
L_088768D0:
    ctx.gpr[4] = (0u | 68u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887698C;
      }
      goto L_088768E0;
    }
L_088768E0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0887698C;
      }
      goto L_088768EC;
    }
L_088768EC:
    ctx.gpr[31] = (0x088768F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x088768F4u) goto L_088768F4;
    return;
L_088768F4:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887698C;
      }
      goto L_08876900;
    }
L_08876900:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0887692C;
      }
      goto L_08876918;
    }
L_08876918:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0887692C;
L_0887692C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0887698C;
      }
      goto L_08876934;
    }
L_08876934:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(496)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887698C;
      }
      goto L_08876944;
    }
L_08876944:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(497)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887698C;
      }
      goto L_08876954;
    }
L_08876954:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(385)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(384)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(385), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(385)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(368)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(385)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(376)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0887698C;
L_0887698C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088769A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(15436)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08876A10;
      }
      goto L_088769D8;
    }
L_088769D8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(15437)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08876A00;
      }
      goto L_088769E8;
    }
L_088769E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(384)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08876A1C;
      }
      goto L_088769F8;
    }
L_088769F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08876A9C;
      }
      goto L_08876A00;
    }
L_08876A00:
    ctx.gpr[4] = (0u | 68u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08876AA8;
      }
      goto L_08876A10;
    }
L_08876A10:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08876AA8;
      }
      goto L_08876A1C;
    }
L_08876A1C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08876A24;
L_08876A24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876A9C;
      }
      goto L_08876A2C;
    }
L_08876A2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08876A9C;
      }
      goto L_08876A38;
    }
L_08876A38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08876A9C;
      }
      goto L_08876A48;
    }
L_08876A48:
    ctx.gpr[31] = (0x08876A50u);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(384)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08876A50u) goto L_08876A50;
    return;
L_08876A50:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08876A64u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08876A64u) goto L_08876A64;
    return;
L_08876A64:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(368)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(376)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08876A24;
      }
      goto L_08876A9C;
    }
L_08876A9C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08876AA8;
L_08876AA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876AC8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08876AF4;
      }
      goto L_08876AE0;
    }
L_08876AE0:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08876AF4;
L_08876AF4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08876B14;
      }
      goto L_08876B00;
    }
L_08876B00:
    ctx.gpr[6] = (0u | 197u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08876B1C;
      }
      goto L_08876B0C;
    }
L_08876B0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08876B6C;
      }
      goto L_08876B14;
    }
L_08876B14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08876BB0;
      }
      goto L_08876B1C;
    }
L_08876B1C:
    ctx.gpr[6] = (0u | 138u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08876B30;
      }
      goto L_08876B28;
    }
L_08876B28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08876B6C;
      }
      goto L_08876B30;
    }
L_08876B30:
    ctx.gpr[6] = (0u | 213u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08876B44;
      }
      goto L_08876B3C;
    }
L_08876B3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08876B6C;
      }
      goto L_08876B44;
    }
L_08876B44:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08876B64;
      }
      goto L_08876B50;
    }
L_08876B50:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08876B64;
L_08876B64:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(68))))));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08876B6C;
L_08876B6C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08876B98;
      }
      goto L_08876B74;
    }
L_08876B74:
    ctx.gpr[5] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-963));
      if (branch_taken) {
          goto L_08876B88;
      }
      goto L_08876B80;
    }
L_08876B80:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08876B90;
      }
      goto L_08876B88;
    }
L_08876B88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08876BB0;
      }
      goto L_08876B90;
    }
L_08876B90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08876BB0;
      }
      goto L_08876B98;
    }
L_08876B98:
    ctx.gpr[6] = (0u | 165u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08876BAC;
      }
      goto L_08876BA4;
    }
L_08876BA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_08876BB0;
      }
      goto L_08876BAC;
    }
L_08876BAC:
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08876BB0;
L_08876BB0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876BB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08876BCCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 309u, 0x08925EE4u>(ctx, &aot_mem) && ctx.pc == 0x08876BCCu) goto L_08876BCC;
    return;
L_08876BCC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876BE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08876BF4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 310u, 0x08925EF4u>(ctx, &aot_mem) && ctx.pc == 0x08876BF4u) goto L_08876BF4;
    return;
L_08876BF4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876C08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08876C24u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 311u, 0x08925F08u>(ctx, &aot_mem) && ctx.pc == 0x08876C24u) goto L_08876C24;
    return;
L_08876C24:
    ctx.gpr[4] = (ctx.gpr[2] & ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876C38;
      }
      goto L_08876C30;
    }
L_08876C30:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08876C40;
      }
      goto L_08876C38;
    }
L_08876C38:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08876C40;
L_08876C40:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876C58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(15444));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08876D50;
      }
      goto L_08876CA8;
    }
L_08876CA8:
    ctx.gpr[19] = (2199u << 16u);
    ctx.gpr[22] = (2183u << 16u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(15748));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(24424));
    goto L_08876CC0;
L_08876CC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 520u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
        goto L_08876CD8;
    }
    goto L_08876CD0;
L_08876CD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08876D3C;
      }
      goto L_08876CD8;
    }
L_08876CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08876CFCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 108u, 0x08A5CF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08876CFCu) goto L_08876CFC;
    return;
L_08876CFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08876D3C;
      }
      goto L_08876D08;
    }
L_08876D08:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876D3C;
      }
      goto L_08876D1C;
    }
L_08876D1C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08876D3C;
      }
      goto L_08876D28;
    }
L_08876D28:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08876D38u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 116u, 0x08A5CFF4u>(ctx, &aot_mem) && ctx.pc == 0x08876D38u) goto L_08876D38;
    return;
L_08876D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08876D3C;
L_08876D3C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08876CC0;
      }
      goto L_08876D50;
    }
L_08876D50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876D78:
    ctx.gpr[5] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(15440), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876D84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08876DC0;
      }
      goto L_08876DA4;
    }
L_08876DA4:
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08876DB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30192));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x08876DB8u) goto L_08876DB8;
    return;
L_08876DB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08876EFC;
      }
      goto L_08876DC0;
    }
L_08876DC0:
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08876DE8;
      }
      goto L_08876DCC;
    }
L_08876DCC:
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08876DE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30428));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x08876DE0u) goto L_08876DE0;
    return;
L_08876DE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08876EFC;
      }
      goto L_08876DE8;
    }
L_08876DE8:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08876E10;
      }
      goto L_08876DF4;
    }
L_08876DF4:
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08876E08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29412));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x08876E08u) goto L_08876E08;
    return;
L_08876E08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08876EFC;
      }
      goto L_08876E10;
    }
L_08876E10:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08876E38;
      }
      goto L_08876E1C;
    }
L_08876E1C:
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08876E30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30748));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x08876E30u) goto L_08876E30;
    return;
L_08876E30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08876EFC;
      }
      goto L_08876E38;
    }
L_08876E38:
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(66))))));
        goto L_08876E94;
    }
    goto L_08876E44;
L_08876E44:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(46));
    ctx.gpr[31] = (0x08876E54u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2340));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 404u, 0x08AED66Cu>(ctx, &aot_mem) && ctx.pc == 0x08876E54u) goto L_08876E54;
    return;
L_08876E54:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08876E78;
      }
      goto L_08876E5C;
    }
L_08876E5C:
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08876E70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29824));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x08876E70u) goto L_08876E70;
    return;
L_08876E70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08876EFC;
      }
      goto L_08876E78;
    }
L_08876E78:
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08876E8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29456));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x08876E8Cu) goto L_08876E8C;
    return;
L_08876E8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08876EFC;
      }
      goto L_08876E94;
    }
L_08876E94:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08876EE8;
      }
      goto L_08876ECC;
    }
L_08876ECC:
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08876EE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28868));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x08876EE0u) goto L_08876EE0;
    return;
L_08876EE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08876EFC;
      }
      goto L_08876EE8;
    }
L_08876EE8:
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08876EFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28428));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x08876EFCu) goto L_08876EFC;
    return;
L_08876EFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876F0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08876F30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 246u, 0x08A25688u>(ctx, &aot_mem) && ctx.pc == 0x08876F30u) goto L_08876F30;
    return;
L_08876F30:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08876F4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31296));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 322u, 0x089C54F0u>(ctx, &aot_mem) && ctx.pc == 0x08876F4Cu) goto L_08876F4C;
    return;
L_08876F4C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08876F5Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2332));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x08876F5Cu) goto L_08876F5C;
    return;
L_08876F5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (2225u << 16u);
      if (branch_taken) {
          goto L_08876FB4;
      }
      goto L_08876F64;
    }
L_08876F64:
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2328));
    goto L_08876F70;
L_08876F70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08876F88;
      }
      goto L_08876F80;
    }
L_08876F80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08876FAC;
      }
      goto L_08876F88;
    }
L_08876F88:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08876F98;
      }
      goto L_08876F90;
    }
L_08876F90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08876FAC;
      }
      goto L_08876F98;
    }
L_08876F98:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08876F70;
      }
      goto L_08876FA8;
    }
L_08876FA8:
    ctx.gpr[4] = (0u | 0u);
    goto L_08876FAC;
L_08876FAC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08877024;
      }
      goto L_08876FB4;
    }
L_08876FB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876FD8;
      }
      goto L_08876FC0;
    }
L_08876FC0:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08876FD0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25004));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08876FD0u) goto L_08876FD0;
    return;
L_08876FD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08877094;
      }
      goto L_08876FD8;
    }
L_08876FD8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08876FECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2900));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 538u, 0x08AEDEDCu>(ctx, &aot_mem) && ctx.pc == 0x08876FECu) goto L_08876FEC;
    return;
L_08876FEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887700C;
      }
      goto L_08876FF4;
    }
L_08876FF4:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08877004u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25004));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08877004u) goto L_08877004;
    return;
L_08877004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08877094;
      }
      goto L_0887700C;
    }
L_0887700C:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887701Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24696));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x0887701Cu) goto L_0887701C;
    return;
L_0887701C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08877094;
      }
      goto L_08877024;
    }
L_08877024:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08877034u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2320));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x08877034u) goto L_08877034;
    return;
L_08877034:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877058;
      }
      goto L_0887703C;
    }
L_0887703C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08877048u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 225u, 0x08AA5170u>(ctx, &aot_mem) && ctx.pc == 0x08877048u) goto L_08877048;
    return;
L_08877048:
    ctx.gpr[31] = (0x08877050u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 178u, 0x08AC8E78u>(ctx, &aot_mem) && ctx.pc == 0x08877050u) goto L_08877050;
    return;
L_08877050:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08877094;
      }
      goto L_08877058;
    }
L_08877058:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08877068u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2316));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x08877068u) goto L_08877068;
    return;
L_08877068:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877088;
      }
      goto L_08877070;
    }
L_08877070:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08877080u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24608));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08877080u) goto L_08877080;
    return;
L_08877080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08877094;
      }
      goto L_08877088;
    }
L_08877088:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08877094u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08877094u) goto L_08877094;
    return;
L_08877094:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088770A8;
      }
      goto L_0887709C;
    }
L_0887709C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088770A8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088779AC;
L_088770A8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088770C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088770E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 246u, 0x08A25688u>(ctx, &aot_mem) && ctx.pc == 0x088770E8u) goto L_088770E8;
    return;
L_088770E8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08877104u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31296));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 322u, 0x089C54F0u>(ctx, &aot_mem) && ctx.pc == 0x08877104u) goto L_08877104;
    return;
L_08877104:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08877118u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2624));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 538u, 0x08AEDEDCu>(ctx, &aot_mem) && ctx.pc == 0x08877118u) goto L_08877118;
    return;
L_08877118:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08877138;
      }
      goto L_08877120;
    }
L_08877120:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08877130u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26204));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08877130u) goto L_08877130;
    return;
L_08877130:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088772B4;
      }
      goto L_08877138;
    }
L_08877138:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x0887714Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2308));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 538u, 0x08AEDEDCu>(ctx, &aot_mem) && ctx.pc == 0x0887714Cu) goto L_0887714C;
    return;
L_0887714C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887716C;
      }
      goto L_08877154;
    }
L_08877154:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08877164u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26448));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08877164u) goto L_08877164;
    return;
L_08877164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088772B4;
      }
      goto L_0887716C;
    }
L_0887716C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887717Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2332));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x0887717Cu) goto L_0887717C;
    return;
L_0887717C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (2225u << 16u);
      if (branch_taken) {
          goto L_088771D4;
      }
      goto L_08877184;
    }
L_08877184:
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2328));
    goto L_08877190;
L_08877190:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088771A8;
      }
      goto L_088771A0;
    }
L_088771A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088771CC;
      }
      goto L_088771A8;
    }
L_088771A8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088771B8;
      }
      goto L_088771B0;
    }
L_088771B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088771CC;
      }
      goto L_088771B8;
    }
L_088771B8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08877190;
      }
      goto L_088771C8;
    }
L_088771C8:
    ctx.gpr[4] = (0u | 0u);
    goto L_088771CC;
L_088771CC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08877244;
      }
      goto L_088771D4;
    }
L_088771D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088771F8;
      }
      goto L_088771E0;
    }
L_088771E0:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088771F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25004));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x088771F0u) goto L_088771F0;
    return;
L_088771F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088772B4;
      }
      goto L_088771F8;
    }
L_088771F8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x0887720Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2900));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 538u, 0x08AEDEDCu>(ctx, &aot_mem) && ctx.pc == 0x0887720Cu) goto L_0887720C;
    return;
L_0887720C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887722C;
      }
      goto L_08877214;
    }
L_08877214:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08877224u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25004));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08877224u) goto L_08877224;
    return;
L_08877224:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088772B4;
      }
      goto L_0887722C;
    }
L_0887722C:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887723Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24696));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x0887723Cu) goto L_0887723C;
    return;
L_0887723C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088772B4;
      }
      goto L_08877244;
    }
L_08877244:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08877254u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2320));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x08877254u) goto L_08877254;
    return;
L_08877254:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877278;
      }
      goto L_0887725C;
    }
L_0887725C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08877268u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 225u, 0x08AA5170u>(ctx, &aot_mem) && ctx.pc == 0x08877268u) goto L_08877268;
    return;
L_08877268:
    ctx.gpr[31] = (0x08877270u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 178u, 0x08AC8E78u>(ctx, &aot_mem) && ctx.pc == 0x08877270u) goto L_08877270;
    return;
L_08877270:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088772B4;
      }
      goto L_08877278;
    }
L_08877278:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08877288u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2316));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x08877288u) goto L_08877288;
    return;
L_08877288:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088772A8;
      }
      goto L_08877290;
    }
L_08877290:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088772A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24608));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x088772A0u) goto L_088772A0;
    return;
L_088772A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088772B4;
      }
      goto L_088772A8;
    }
L_088772A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088772B4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x088772B4u) goto L_088772B4;
    return;
L_088772B4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088772C8;
      }
      goto L_088772BC;
    }
L_088772BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088772C8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088779AC;
L_088772C8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088772E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088772FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x088772FCu) goto L_088772FC;
    return;
L_088772FC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877310:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08877334u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 246u, 0x08A25688u>(ctx, &aot_mem) && ctx.pc == 0x08877334u) goto L_08877334;
    return;
L_08877334:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08877348u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2296));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 404u, 0x08AED66Cu>(ctx, &aot_mem) && ctx.pc == 0x08877348u) goto L_08877348;
    return;
L_08877348:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (2225u << 16u);
      if (branch_taken) {
          goto L_088773A0;
      }
      goto L_08877350;
    }
L_08877350:
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2328));
    goto L_0887735C;
L_0887735C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08877374;
      }
      goto L_0887736C;
    }
L_0887736C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08877398;
      }
      goto L_08877374;
    }
L_08877374:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08877384;
      }
      goto L_0887737C;
    }
L_0887737C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08877398;
      }
      goto L_08877384;
    }
L_08877384:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887735C;
      }
      goto L_08877394;
    }
L_08877394:
    ctx.gpr[4] = (0u | 0u);
    goto L_08877398;
L_08877398:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088773B8;
      }
      goto L_088773A0;
    }
L_088773A0:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088773B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27936));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x088773B0u) goto L_088773B0;
    return;
L_088773B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08877458;
      }
      goto L_088773B8;
    }
L_088773B8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088773C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2332));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x088773C8u) goto L_088773C8;
    return;
L_088773C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088773E8;
      }
      goto L_088773D0;
    }
L_088773D0:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088773E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24696));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x088773E0u) goto L_088773E0;
    return;
L_088773E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08877458;
      }
      goto L_088773E8;
    }
L_088773E8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088773F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2320));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x088773F8u) goto L_088773F8;
    return;
L_088773F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887741C;
      }
      goto L_08877400;
    }
L_08877400:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887740Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 225u, 0x08AA5170u>(ctx, &aot_mem) && ctx.pc == 0x0887740Cu) goto L_0887740C;
    return;
L_0887740C:
    ctx.gpr[31] = (0x08877414u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 178u, 0x08AC8E78u>(ctx, &aot_mem) && ctx.pc == 0x08877414u) goto L_08877414;
    return;
L_08877414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08877458;
      }
      goto L_0887741C;
    }
L_0887741C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887742Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2316));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x0887742Cu) goto L_0887742C;
    return;
L_0887742C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887744C;
      }
      goto L_08877434;
    }
L_08877434:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08877444u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28012));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08877444u) goto L_08877444;
    return;
L_08877444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08877458;
      }
      goto L_0887744C;
    }
L_0887744C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08877458u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08877458u) goto L_08877458;
    return;
L_08877458:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08877464u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088779AC;
L_08877464:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877480:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088774A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 246u, 0x08A25688u>(ctx, &aot_mem) && ctx.pc == 0x088774A4u) goto L_088774A4;
    return;
L_088774A4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088774B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2296));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 404u, 0x08AED66Cu>(ctx, &aot_mem) && ctx.pc == 0x088774B8u) goto L_088774B8;
    return;
L_088774B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (2225u << 16u);
      if (branch_taken) {
          goto L_08877510;
      }
      goto L_088774C0;
    }
L_088774C0:
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2328));
    goto L_088774CC;
L_088774CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088774E4;
      }
      goto L_088774DC;
    }
L_088774DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08877508;
      }
      goto L_088774E4;
    }
L_088774E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088774F4;
      }
      goto L_088774EC;
    }
L_088774EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08877508;
      }
      goto L_088774F4;
    }
L_088774F4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088774CC;
      }
      goto L_08877504;
    }
L_08877504:
    ctx.gpr[4] = (0u | 0u);
    goto L_08877508;
L_08877508:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08877528;
      }
      goto L_08877510;
    }
L_08877510:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08877520u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28100));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08877520u) goto L_08877520;
    return;
L_08877520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088775C8;
      }
      goto L_08877528;
    }
L_08877528:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08877538u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2332));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x08877538u) goto L_08877538;
    return;
L_08877538:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877558;
      }
      goto L_08877540;
    }
L_08877540:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08877550u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24696));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08877550u) goto L_08877550;
    return;
L_08877550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088775C8;
      }
      goto L_08877558;
    }
L_08877558:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08877568u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2320));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x08877568u) goto L_08877568;
    return;
L_08877568:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887758C;
      }
      goto L_08877570;
    }
L_08877570:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887757Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 225u, 0x08AA5170u>(ctx, &aot_mem) && ctx.pc == 0x0887757Cu) goto L_0887757C;
    return;
L_0887757C:
    ctx.gpr[31] = (0x08877584u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 178u, 0x08AC8E78u>(ctx, &aot_mem) && ctx.pc == 0x08877584u) goto L_08877584;
    return;
L_08877584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088775C8;
      }
      goto L_0887758C;
    }
L_0887758C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887759Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2316));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x0887759Cu) goto L_0887759C;
    return;
L_0887759C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088775BC;
      }
      goto L_088775A4;
    }
L_088775A4:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088775B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28176));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x088775B4u) goto L_088775B4;
    return;
L_088775B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088775C8;
      }
      goto L_088775BC;
    }
L_088775BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088775C8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x088775C8u) goto L_088775C8;
    return;
L_088775C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088775D4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088779AC;
L_088775D4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088775F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887760Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 246u, 0x08A25688u>(ctx, &aot_mem) && ctx.pc == 0x0887760Cu) goto L_0887760C;
    return;
L_0887760C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08877628u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31296));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 322u, 0x089C54F0u>(ctx, &aot_mem) && ctx.pc == 0x08877628u) goto L_08877628;
    return;
L_08877628:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08877638u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2332));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x08877638u) goto L_08877638;
    return;
L_08877638:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887767C;
      }
      goto L_08877640;
    }
L_08877640:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877664;
      }
      goto L_0887764C;
    }
L_0887764C:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887765Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25708));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x0887765Cu) goto L_0887765C;
    return;
L_0887765C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088776B8;
      }
      goto L_08877664;
    }
L_08877664:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08877674u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25400));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08877674u) goto L_08877674;
    return;
L_08877674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088776B8;
      }
      goto L_0887767C;
    }
L_0887767C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887768Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2316));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x0887768Cu) goto L_0887768C;
    return;
L_0887768C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088776AC;
      }
      goto L_08877694;
    }
L_08877694:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088776A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26696));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x088776A4u) goto L_088776A4;
    return;
L_088776A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088776B8;
      }
      goto L_088776AC;
    }
L_088776AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088776B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x088776B8u) goto L_088776B8;
    return;
L_088776B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088776C4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088779AC;
L_088776C4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088776DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088776F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 246u, 0x08A25688u>(ctx, &aot_mem) && ctx.pc == 0x088776F8u) goto L_088776F8;
    return;
L_088776F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08877714u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31296));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 322u, 0x089C54F0u>(ctx, &aot_mem) && ctx.pc == 0x08877714u) goto L_08877714;
    return;
L_08877714:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08877724u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2332));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x08877724u) goto L_08877724;
    return;
L_08877724:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877768;
      }
      goto L_0887772C;
    }
L_0887772C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877750;
      }
      goto L_08877738;
    }
L_08877738:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08877748u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25708));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08877748u) goto L_08877748;
    return;
L_08877748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088777F8;
      }
      goto L_08877750;
    }
L_08877750:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08877760u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25400));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08877760u) goto L_08877760;
    return;
L_08877760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088777F8;
      }
      goto L_08877768;
    }
L_08877768:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08877778u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2320));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x08877778u) goto L_08877778;
    return;
L_08877778:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088777BC;
      }
      goto L_08877780;
    }
L_08877780:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088777A4;
      }
      goto L_0887778C;
    }
L_0887778C:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887779Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27288));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x0887779Cu) goto L_0887779C;
    return;
L_0887779C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088777F8;
      }
      goto L_088777A4;
    }
L_088777A4:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088777B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26772));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x088777B4u) goto L_088777B4;
    return;
L_088777B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088777F8;
      }
      goto L_088777BC;
    }
L_088777BC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088777CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2316));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x088777CCu) goto L_088777CC;
    return;
L_088777CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088777EC;
      }
      goto L_088777D4;
    }
L_088777D4:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088777E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26696));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x088777E4u) goto L_088777E4;
    return;
L_088777E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088777F8;
      }
      goto L_088777EC;
    }
L_088777EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088777F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x088777F8u) goto L_088777F8;
    return;
L_088777F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08877804u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088779AC;
L_08877804:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887781C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08877838u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 246u, 0x08A25688u>(ctx, &aot_mem) && ctx.pc == 0x08877838u) goto L_08877838;
    return;
L_08877838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08877854u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31296));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 322u, 0x089C54F0u>(ctx, &aot_mem) && ctx.pc == 0x08877854u) goto L_08877854;
    return;
L_08877854:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08877864u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2332));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x08877864u) goto L_08877864;
    return;
L_08877864:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (2225u << 16u);
      if (branch_taken) {
          goto L_088778BC;
      }
      goto L_0887786C;
    }
L_0887786C:
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2328));
    goto L_08877878;
L_08877878:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08877890;
      }
      goto L_08877888;
    }
L_08877888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088778B4;
      }
      goto L_08877890;
    }
L_08877890:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088778A0;
      }
      goto L_08877898;
    }
L_08877898:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088778B4;
      }
      goto L_088778A0;
    }
L_088778A0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08877878;
      }
      goto L_088778B0;
    }
L_088778B0:
    ctx.gpr[4] = (0u | 0u);
    goto L_088778B4;
L_088778B4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088778F8;
      }
      goto L_088778BC;
    }
L_088778BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088778E0;
      }
      goto L_088778C8;
    }
L_088778C8:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088778D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27600));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x088778D8u) goto L_088778D8;
    return;
L_088778D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08877988;
      }
      goto L_088778E0;
    }
L_088778E0:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088778F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x088778F0u) goto L_088778F0;
    return;
L_088778F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08877988;
      }
      goto L_088778F8;
    }
L_088778F8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08877908u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2320));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x08877908u) goto L_08877908;
    return;
L_08877908:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887794C;
      }
      goto L_08877910;
    }
L_08877910:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877934;
      }
      goto L_0887791C;
    }
L_0887791C:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887792Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27288));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x0887792Cu) goto L_0887792C;
    return;
L_0887792C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08877988;
      }
      goto L_08877934;
    }
L_08877934:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08877944u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26772));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08877944u) goto L_08877944;
    return;
L_08877944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08877988;
      }
      goto L_0887794C;
    }
L_0887794C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887795Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2316));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x0887795Cu) goto L_0887795C;
    return;
L_0887795C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887797C;
      }
      goto L_08877964;
    }
L_08877964:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08877974u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26696));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08877974u) goto L_08877974;
    return;
L_08877974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08877988;
      }
      goto L_0887797C;
    }
L_0887797C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08877988u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08877988u) goto L_08877988;
    return;
L_08877988:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08877994u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088779AC;
L_08877994:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088779AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088779CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 246u, 0x08A25688u>(ctx, &aot_mem) && ctx.pc == 0x088779CCu) goto L_088779CC;
    return;
L_088779CC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088779DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2288));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x088779DCu) goto L_088779DC;
    return;
L_088779DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088779FC;
      }
      goto L_088779E4;
    }
L_088779E4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088779F4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 309u, 0x08925EE4u>(ctx, &aot_mem) && ctx.pc == 0x088779F4u) goto L_088779F4;
    return;
L_088779F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08877A28;
      }
      goto L_088779FC;
    }
L_088779FC:
    ctx.gpr[31] = (0x08877A04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 246u, 0x08A25688u>(ctx, &aot_mem) && ctx.pc == 0x08877A04u) goto L_08877A04;
    return;
L_08877A04:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08877A14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2280));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 566u, 0x08AEDFFCu>(ctx, &aot_mem) && ctx.pc == 0x08877A14u) goto L_08877A14;
    return;
L_08877A14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877A28;
      }
      goto L_08877A1C;
    }
L_08877A1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08877A28u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 309u, 0x08925EE4u>(ctx, &aot_mem) && ctx.pc == 0x08877A28u) goto L_08877A28;
    return;
L_08877A28:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877A40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08877A5Cu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 510u, 0x08AD665Cu>(ctx, &aot_mem) && ctx.pc == 0x08877A5Cu) goto L_08877A5C;
    return;
L_08877A5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08877A7C;
      }
      goto L_08877A6C;
    }
L_08877A6C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08877A80;
      }
      goto L_08877A7C;
    }
L_08877A7C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08877A80;
L_08877A80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877A94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    ctx.gpr[22] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(15444));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08877AE8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 603u, 0x08973D2Cu>(ctx, &aot_mem) && ctx.pc == 0x08877AE8u) goto L_08877AE8;
    return;
L_08877AE8:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(168));
    goto L_08877AF8;
L_08877AF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08877B14;
      }
      goto L_08877B04;
    }
L_08877B04:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08877B14u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x08877B14u) goto L_08877B14;
    return;
L_08877B14:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08877AF8;
      }
      goto L_08877B2C;
    }
L_08877B2C:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(268));
    goto L_08877B3C;
L_08877B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(268), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08877B58;
      }
      goto L_08877B48;
    }
L_08877B48:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08877B58u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x08877B58u) goto L_08877B58;
    return;
L_08877B58:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08877B3C;
      }
      goto L_08877B70;
    }
L_08877B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08877BF8;
      }
      goto L_08877B84;
    }
L_08877B84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(392));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(392), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08877B9Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x08877B9Cu) goto L_08877B9C;
    return;
L_08877B9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71))))));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08877BE8;
      }
      goto L_08877BB0;
    }
L_08877BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(392)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08877BC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 603u, 0x0886B354u>(ctx, &aot_mem) && ctx.pc == 0x08877BC0u) goto L_08877BC0;
    return;
L_08877BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(392)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08877BD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 99u, 0x089C8834u>(ctx, &aot_mem) && ctx.pc == 0x08877BD4u) goto L_08877BD4;
    return;
L_08877BD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71))))));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08877BB0;
      }
      goto L_08877BE8;
    }
L_08877BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (ctx.gpr[4] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08877C08;
      }
      goto L_08877BF8;
    }
L_08877BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(392), 0u);
    ctx.gpr[18] = (ctx.gpr[4] << 2u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[22]);
    goto L_08877C08;
L_08877C08:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(386), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(387), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08877DC4;
      }
      goto L_08877C28;
    }
L_08877C28:
    ctx.gpr[6] = (2199u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(15748));
    ctx.gpr[20] = (2194u << 16u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(26092));
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[21] = (2229u << 16u);
    goto L_08877C50;
L_08877C50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 520u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
        goto L_08877C68;
    }
    goto L_08877C60;
L_08877C60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08877DB0;
      }
      goto L_08877C68;
    }
L_08877C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08877C90u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 108u, 0x08A5CF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08877C90u) goto L_08877C90;
    return;
L_08877C90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08877DB0;
      }
      goto L_08877C9C;
    }
L_08877C9C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877DB0;
      }
      goto L_08877CB0;
    }
L_08877CB0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08877DB0;
      }
      goto L_08877CBC;
    }
L_08877CBC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08877CDC;
      }
      goto L_08877CCC;
    }
L_08877CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08877CDC;
L_08877CDC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08877CF8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08877CF8u) goto L_08877CF8;
    return;
L_08877CF8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08877D04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 155u, 0x08A5D294u>(ctx, &aot_mem) && ctx.pc == 0x08877D04u) goto L_08877D04;
    return;
L_08877D04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08877D10u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 184u, 0x08AC8ED4u>(ctx, &aot_mem) && ctx.pc == 0x08877D10u) goto L_08877D10;
    return;
L_08877D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08877D1Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 224u, 0x08AA5144u>(ctx, &aot_mem) && ctx.pc == 0x08877D1Cu) goto L_08877D1C;
    return;
L_08877D1C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08877D28u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08877D28u) goto L_08877D28;
    return;
L_08877D28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08877D48u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 144u, 0x08A5D1E8u>(ctx, &aot_mem) && ctx.pc == 0x08877D48u) goto L_08877D48;
    return;
L_08877D48:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08877D58u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x08877D58u) goto L_08877D58;
    return;
L_08877D58:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08877D68u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x08877D68u) goto L_08877D68;
    return;
L_08877D68:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08877D78u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x08877D78u) goto L_08877D78;
    return;
L_08877D78:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08877D88u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x08877D88u) goto L_08877D88;
    return;
L_08877D88:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08877D98u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x08877D98u) goto L_08877D98;
    return;
L_08877D98:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08877DA8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x08877DA8u) goto L_08877DA8;
    return;
L_08877DA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08877DB0;
L_08877DB0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08877C50;
      }
      goto L_08877DC4;
    }
L_08877DC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877DF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(14252)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 14571u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(14248)));
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (17096u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(14276)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(14256), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(14264), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(14260), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(14268), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(14272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08877EA0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(14280), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_08875FF4;
L_08877EA0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08877EACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15496));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x08877EACu) goto L_08877EAC;
    return;
L_08877EAC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 36u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08877EC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2276));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 553u, 0x0886AEF4u>(ctx, &aot_mem) && ctx.pc == 0x08877EC8u) goto L_08877EC8;
    return;
L_08877EC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877ED8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877EE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(15548), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08877F2C;
      }
      goto L_08877F1C;
    }
L_08877F1C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08877F28u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08877F28u) goto L_08877F28;
    return;
L_08877F28:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08877F2C;
L_08877F2C:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877F54:
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15548), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877F60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(15548)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 2u, 0x0887802Cu>(ctx, &aot_mem); return;
      }
      goto L_08877F7C;
    }
L_08877F7C:
    ctx.gpr[31] = (0x08877F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08877F84u) goto L_08877F84;
    return;
L_08877F84:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08877FC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08877FC8u) goto L_08877FC8;
    return;
L_08877FC8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[3] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = 0x08878000u; return;
}

void recomp_unit_0028(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0028_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_28(Runtime &runtime) {
    runtime.register_generated_unit(28u, 0x08874000u, 16384u, &recomp_unit_0028, &recomp_unit_0028_entry);
    runtime.register_function(0x08874000u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088740C4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088740E4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874328u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874458u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088749FCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874A1Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874BA0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874BCCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874CA4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088750E0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875160u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875164u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887516Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875174u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887517Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875188u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875194u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887519Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088751ACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088751B4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088751B8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088751DCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887521Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887522Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875260u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875290u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875318u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875390u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875398u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875448u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887552Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088755FCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875644u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088756B0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088757D4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088757E0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088757F0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088757FCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875804u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875808u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875814u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875820u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875828u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875864u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875924u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887593Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875954u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875960u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875984u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875990u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887599Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088759A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088759C4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088759D4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088759ECu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088759F4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A00u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A08u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A20u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A2Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A3Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A54u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A80u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A84u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A90u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A98u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875AA0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875ABCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875AC4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875AD4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875AE4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875B08u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875B0Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875B2Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875B44u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875B50u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875B54u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875B70u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875B80u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875B8Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875B9Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875BACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875BB8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875BC0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875BC8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875BCCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875BD4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C34u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C3Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C44u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C50u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C60u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C68u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C78u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C84u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C94u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875CA4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875CACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875CB4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875CC0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875CD0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875CDCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875CECu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875CFCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D00u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D0Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D18u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D28u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D2Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D4Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D54u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D58u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D64u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D68u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D74u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D7Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D9Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875DA4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875DACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875DBCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875DC4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875DCCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875DD4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875DE8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875E0Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875E18u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875E20u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875E30u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875E38u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875E40u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875E48u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875E50u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875E64u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875E88u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875E90u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875EA4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875EACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875EC0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875EFCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875F04u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875F0Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875F1Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875F24u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875F3Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875F50u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875F68u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875F88u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875F90u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875F9Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875FA8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875FB4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875FC0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875FCCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875FD8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875FE0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875FF4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876018u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876044u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887605Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876068u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887607Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876084u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876098u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088760C4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088760E4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088760ECu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088760F8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876108u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876110u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887611Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887612Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876138u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876144u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876158u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887616Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876180u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876184u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887618Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088761A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088761D8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088761E8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088761F4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876200u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876208u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876214u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876220u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876238u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876240u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876248u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887626Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876278u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876284u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876290u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088762A0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088762ACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088762C4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088762CCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088762D4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088762F8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876304u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876310u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887631Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876328u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876338u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876340u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876374u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887639Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088763A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088763B0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088763B8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088763C0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088763D0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088763E4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876408u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876410u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876418u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876424u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876428u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887643Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876468u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876494u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088764C0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088764D0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088764D8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088764E4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088764ECu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088764F4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876508u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876510u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876518u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876530u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876550u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876560u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876570u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887657Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876584u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887658Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876594u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088765A8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088765C8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088765CCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088765E0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876610u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876624u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887662Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876638u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876640u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876648u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876660u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876668u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876674u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887667Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876684u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887668Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088766A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088766C4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088766D4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088766E0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088766E8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088766FCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887672Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876730u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876734u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887674Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876784u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876798u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887679Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088767C8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088767CCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088767D8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876800u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876804u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876830u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876834u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887683Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876864u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876874u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876884u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088768C8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088768D0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088768E0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088768ECu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088768F4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876900u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876918u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887692Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876934u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876944u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876954u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887698Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088769A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088769D8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088769E8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088769F8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A00u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A10u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A1Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A24u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A2Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A38u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A48u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A50u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A64u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A9Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876AA8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876AC8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876AE0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876AF4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B00u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B0Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B14u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B1Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B28u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B30u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B3Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B44u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B50u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B64u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B6Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B74u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B80u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B88u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B90u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B98u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876BA4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876BACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876BB0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876BB8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876BCCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876BE0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876BF4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876C08u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876C24u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876C30u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876C38u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876C40u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876C58u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876CA8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876CC0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876CD0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876CD8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876CFCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D08u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D1Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D28u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D38u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D3Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D50u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D78u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D84u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876DA4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876DB8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876DC0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876DCCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876DE0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876DE8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876DF4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E08u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E10u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E1Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E30u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E38u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E44u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E54u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E5Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E70u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E78u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E8Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E94u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876ECCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876EE0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876EE8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876EFCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876F0Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876F30u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876F4Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876F5Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876F64u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876F70u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876F80u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876F88u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876F90u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876F98u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876FA8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876FACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876FB4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876FC0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876FD0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876FD8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876FECu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876FF4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877004u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887700Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887701Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877024u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877034u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887703Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877048u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877050u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877058u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877068u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877070u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877080u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877088u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877094u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887709Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088770A8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088770C4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088770E8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877104u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877118u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877120u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877130u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877138u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887714Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877154u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877164u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887716Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887717Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877184u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877190u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088771A0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088771A8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088771B0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088771B8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088771C8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088771CCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088771D4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088771E0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088771F0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088771F8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887720Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877214u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877224u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887722Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887723Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877244u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877254u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887725Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877268u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877270u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877278u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877288u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877290u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088772A0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088772A8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088772B4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088772BCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088772C8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088772E4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088772FCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877310u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877334u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877348u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877350u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887735Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887736Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877374u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887737Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877384u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877394u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877398u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088773A0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088773B0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088773B8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088773C8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088773D0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088773E0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088773E8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088773F8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877400u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887740Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877414u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887741Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887742Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877434u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877444u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887744Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877458u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877464u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877480u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088774A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088774B8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088774C0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088774CCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088774DCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088774E4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088774ECu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088774F4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877504u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877508u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877510u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877520u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877528u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877538u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877540u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877550u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877558u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877568u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877570u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887757Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877584u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887758Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887759Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088775A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088775B4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088775BCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088775C8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088775D4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088775F0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887760Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877628u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877638u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877640u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887764Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887765Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877664u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877674u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887767Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887768Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877694u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088776A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088776ACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088776B8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088776C4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088776DCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088776F8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877714u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877724u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887772Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877738u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877748u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877750u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877760u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877768u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877778u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877780u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887778Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887779Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088777A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088777B4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088777BCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088777CCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088777D4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088777E4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088777ECu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088777F8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877804u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887781Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877838u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877854u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877864u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887786Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877878u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877888u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877890u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877898u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088778A0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088778B0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088778B4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088778BCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088778C8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088778D8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088778E0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088778F0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088778F8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877908u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877910u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887791Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887792Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877934u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877944u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887794Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887795Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877964u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877974u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887797Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877988u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877994u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088779ACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088779CCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088779DCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088779E4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088779F4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088779FCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A04u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A14u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A1Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A28u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A40u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A5Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A6Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A7Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A80u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A94u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877AE8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877AF8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B04u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B14u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B2Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B3Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B48u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B58u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B70u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B84u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B9Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877BB0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877BC0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877BD4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877BE8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877BF8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877C08u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877C28u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877C50u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877C60u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877C68u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877C90u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877C9Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877CB0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877CBCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877CCCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877CDCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877CF8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877D04u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877D10u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877D1Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877D28u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877D48u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877D58u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877D68u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877D78u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877D88u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877D98u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877DA8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877DB0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877DC4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877DF4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877EA0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877EACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877EC8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877ED8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877EE0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877F1Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877F28u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877F2Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877F54u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877F60u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877F7Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877F84u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877FC8u, &recomp_unit_0028, "recomp_unit_0028");
}
} // namespace psprecomp
