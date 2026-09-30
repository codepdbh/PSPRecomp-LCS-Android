#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0213[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 12,
    0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    20, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 27,
    0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 35, 0, 0, 36, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 44, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 67, 0, 0,
    0, 0, 0, 68, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 75,
    0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 90,
    0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 105,
    0, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 114, 0, 115, 0,
    116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 120, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0,
    0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202,
    0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0,
    0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0,
    0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0,
    0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0,
    0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0,
    0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 276, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 279, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 282, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0,
    293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0,
    309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0,
    325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0,
    341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 349, 0, 350, 0, 351, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0,
    357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0,
    373, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0, 387, 0, 388, 0,
    389, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 0,
    405, 0, 406, 0, 407, 0, 408, 0, 409, 0, 410, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0,
    0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450,
};
void recomp_unit_0213_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B58000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0213[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B58000;
    case 2u: goto L_08B58028;
    case 3u: goto L_08B58050;
    case 4u: goto L_08B58080;
    case 5u: goto L_08B58098;
    case 6u: goto L_08B580A8;
    case 7u: goto L_08B580C0;
    case 8u: goto L_08B580D0;
    case 9u: goto L_08B580D8;
    case 10u: goto L_08B580E8;
    case 11u: goto L_08B580F4;
    case 12u: goto L_08B580FC;
    case 13u: goto L_08B58104;
    case 14u: goto L_08B58128;
    case 15u: goto L_08B5813C;
    case 16u: goto L_08B58174;
    case 17u: goto L_08B581A4;
    case 18u: goto L_08B581C0;
    case 19u: goto L_08B581F0;
    case 20u: goto L_08B58200;
    case 21u: goto L_08B5820C;
    case 22u: goto L_08B58220;
    case 23u: goto L_08B5822C;
    case 24u: goto L_08B58238;
    case 25u: goto L_08B58258;
    case 26u: goto L_08B5826C;
    case 27u: goto L_08B5827C;
    case 28u: goto L_08B58294;
    case 29u: goto L_08B5829C;
    case 30u: goto L_08B582A4;
    case 31u: goto L_08B582AC;
    case 32u: goto L_08B582B4;
    case 33u: goto L_08B582C8;
    case 34u: goto L_08B582E4;
    case 35u: goto L_08B582E8;
    case 36u: goto L_08B582F4;
    case 37u: goto L_08B58308;
    case 38u: goto L_08B5831C;
    case 39u: goto L_08B58330;
    case 40u: goto L_08B5833C;
    case 41u: goto L_08B58358;
    case 42u: goto L_08B58360;
    case 43u: goto L_08B58390;
    case 44u: goto L_08B5839C;
    case 45u: goto L_08B583A0;
    case 46u: goto L_08B583B4;
    case 47u: goto L_08B583D4;
    case 48u: goto L_08B583DC;
    case 49u: goto L_08B583F4;
    case 50u: goto L_08B58408;
    case 51u: goto L_08B58418;
    case 52u: goto L_08B58424;
    case 53u: goto L_08B58438;
    case 54u: goto L_08B58450;
    case 55u: goto L_08B5846C;
    case 56u: goto L_08B58484;
    case 57u: goto L_08B58498;
    case 58u: goto L_08B584A0;
    case 59u: goto L_08B584A8;
    case 60u: goto L_08B584D4;
    case 61u: goto L_08B584E4;
    case 62u: goto L_08B58514;
    case 63u: goto L_08B5853C;
    case 64u: goto L_08B58544;
    case 65u: goto L_08B58560;
    case 66u: goto L_08B58568;
    case 67u: goto L_08B58574;
    case 68u: goto L_08B5858C;
    case 69u: goto L_08B58590;
    case 70u: goto L_08B585B0;
    case 71u: goto L_08B585B8;
    case 72u: goto L_08B585DC;
    case 73u: goto L_08B585E8;
    case 74u: goto L_08B585F4;
    case 75u: goto L_08B585FC;
    case 76u: goto L_08B58604;
    case 77u: goto L_08B5861C;
    case 78u: goto L_08B58628;
    case 79u: goto L_08B58630;
    case 80u: goto L_08B5863C;
    case 81u: goto L_08B5864C;
    case 82u: goto L_08B58658;
    case 83u: goto L_08B58664;
    case 84u: goto L_08B58690;
    case 85u: goto L_08B58698;
    case 86u: goto L_08B586B0;
    case 87u: goto L_08B586D8;
    case 88u: goto L_08B586E4;
    case 89u: goto L_08B586F4;
    case 90u: goto L_08B586FC;
    case 91u: goto L_08B58718;
    case 92u: goto L_08B58724;
    case 93u: goto L_08B5872C;
    case 94u: goto L_08B58734;
    case 95u: goto L_08B5873C;
    case 96u: goto L_08B58754;
    case 97u: goto L_08B5875C;
    case 98u: goto L_08B58764;
    case 99u: goto L_08B58770;
    case 100u: goto L_08B5878C;
    case 101u: goto L_08B587A8;
    case 102u: goto L_08B587C4;
    case 103u: goto L_08B587E0;
    case 104u: goto L_08B587F4;
    case 105u: goto L_08B587FC;
    case 106u: goto L_08B58808;
    case 107u: goto L_08B5881C;
    case 108u: goto L_08B58824;
    case 109u: goto L_08B58834;
    case 110u: goto L_08B58844;
    case 111u: goto L_08B5884C;
    case 112u: goto L_08B58858;
    case 113u: goto L_08B58868;
    case 114u: goto L_08B58870;
    case 115u: goto L_08B58878;
    case 116u: goto L_08B58880;
    case 117u: goto L_08B5888C;
    case 118u: goto L_08B588C0;
    case 119u: goto L_08B588F4;
    case 120u: goto L_08B588F8;
    case 121u: goto L_08B58920;
    case 122u: goto L_08B58930;
    case 123u: goto L_08B58950;
    case 124u: goto L_08B58968;
    case 125u: goto L_08B589D0;
    case 126u: goto L_08B589D8;
    case 127u: goto L_08B58A64;
    case 128u: goto L_08B58A80;
    case 129u: goto L_08B58B00;
    case 130u: goto L_08B58C0C;
    case 131u: goto L_08B58EAC;
    case 132u: goto L_08B58EB8;
    case 133u: goto L_08B58ED8;
    case 134u: goto L_08B58F2C;
    case 135u: goto L_08B59054;
    case 136u: goto L_08B5906C;
    case 137u: goto L_08B5912C;
    case 138u: goto L_08B59144;
    case 139u: goto L_08B5921C;
    case 140u: goto L_08B5922C;
    case 141u: goto L_08B59244;
    case 142u: goto L_08B5925C;
    case 143u: goto L_08B59274;
    case 144u: goto L_08B5928C;
    case 145u: goto L_08B592A4;
    case 146u: goto L_08B592BC;
    case 147u: goto L_08B592D4;
    case 148u: goto L_08B592EC;
    case 149u: goto L_08B59304;
    case 150u: goto L_08B5931C;
    case 151u: goto L_08B59334;
    case 152u: goto L_08B59354;
    case 153u: goto L_08B59364;
    case 154u: goto L_08B5937C;
    case 155u: goto L_08B59394;
    case 156u: goto L_08B593AC;
    case 157u: goto L_08B593C4;
    case 158u: goto L_08B593DC;
    case 159u: goto L_08B593F4;
    case 160u: goto L_08B5940C;
    case 161u: goto L_08B59424;
    case 162u: goto L_08B5943C;
    case 163u: goto L_08B59454;
    case 164u: goto L_08B5946C;
    case 165u: goto L_08B59484;
    case 166u: goto L_08B594A4;
    case 167u: goto L_08B594B4;
    case 168u: goto L_08B594CC;
    case 169u: goto L_08B594E4;
    case 170u: goto L_08B594FC;
    case 171u: goto L_08B59514;
    case 172u: goto L_08B5952C;
    case 173u: goto L_08B59544;
    case 174u: goto L_08B5955C;
    case 175u: goto L_08B59574;
    case 176u: goto L_08B5958C;
    case 177u: goto L_08B595A4;
    case 178u: goto L_08B595BC;
    case 179u: goto L_08B595DC;
    case 180u: goto L_08B595EC;
    case 181u: goto L_08B59604;
    case 182u: goto L_08B5961C;
    case 183u: goto L_08B59634;
    case 184u: goto L_08B5964C;
    case 185u: goto L_08B59664;
    case 186u: goto L_08B5967C;
    case 187u: goto L_08B59694;
    case 188u: goto L_08B596AC;
    case 189u: goto L_08B596C4;
    case 190u: goto L_08B596DC;
    case 191u: goto L_08B596F4;
    case 192u: goto L_08B5970C;
    case 193u: goto L_08B5972C;
    case 194u: goto L_08B5973C;
    case 195u: goto L_08B59754;
    case 196u: goto L_08B5976C;
    case 197u: goto L_08B59784;
    case 198u: goto L_08B5979C;
    case 199u: goto L_08B597B4;
    case 200u: goto L_08B597CC;
    case 201u: goto L_08B597E4;
    case 202u: goto L_08B597FC;
    case 203u: goto L_08B59814;
    case 204u: goto L_08B5982C;
    case 205u: goto L_08B59844;
    case 206u: goto L_08B59864;
    case 207u: goto L_08B59874;
    case 208u: goto L_08B5988C;
    case 209u: goto L_08B598A4;
    case 210u: goto L_08B598BC;
    case 211u: goto L_08B598D4;
    case 212u: goto L_08B598EC;
    case 213u: goto L_08B59904;
    case 214u: goto L_08B5991C;
    case 215u: goto L_08B59934;
    case 216u: goto L_08B5994C;
    case 217u: goto L_08B59964;
    case 218u: goto L_08B5997C;
    case 219u: goto L_08B5999C;
    case 220u: goto L_08B599AC;
    case 221u: goto L_08B599C4;
    case 222u: goto L_08B599DC;
    case 223u: goto L_08B599F4;
    case 224u: goto L_08B59A0C;
    case 225u: goto L_08B59A24;
    case 226u: goto L_08B59A3C;
    case 227u: goto L_08B59A54;
    case 228u: goto L_08B59A6C;
    case 229u: goto L_08B59A84;
    case 230u: goto L_08B59A9C;
    case 231u: goto L_08B59AB4;
    case 232u: goto L_08B59AD4;
    case 233u: goto L_08B59AE4;
    case 234u: goto L_08B59AFC;
    case 235u: goto L_08B59B14;
    case 236u: goto L_08B59B2C;
    case 237u: goto L_08B59B44;
    case 238u: goto L_08B59B5C;
    case 239u: goto L_08B59B74;
    case 240u: goto L_08B59B8C;
    case 241u: goto L_08B59BA4;
    case 242u: goto L_08B59BBC;
    case 243u: goto L_08B59BD4;
    case 244u: goto L_08B59BEC;
    case 245u: goto L_08B59C0C;
    case 246u: goto L_08B59CB8;
    case 247u: goto L_08B59D2C;
    case 248u: goto L_08B59D58;
    case 249u: goto L_08B59D60;
    case 250u: goto L_08B59D88;
    case 251u: goto L_08B59E88;
    case 252u: goto L_08B59EC0;
    case 253u: goto L_08B59EE8;
    case 254u: goto L_08B59EF0;
    case 255u: goto L_08B59F00;
    case 256u: goto L_08B59F24;
    case 257u: goto L_08B59F44;
    case 258u: goto L_08B59FC8;
    case 259u: goto L_08B5A1AC;
    case 260u: goto L_08B5A204;
    case 261u: goto L_08B5A25C;
    case 262u: goto L_08B5A2B8;
    case 263u: goto L_08B5A2E0;
    case 264u: goto L_08B5A490;
    case 265u: goto L_08B5A680;
    case 266u: goto L_08B5A6D8;
    case 267u: goto L_08B5A6E8;
    case 268u: goto L_08B5A708;
    case 269u: goto L_08B5A718;
    case 270u: goto L_08B5A72C;
    case 271u: goto L_08B5A770;
    case 272u: goto L_08B5A7A0;
    case 273u: goto L_08B5A7B8;
    case 274u: goto L_08B5A7E0;
    case 275u: goto L_08B5A7E8;
    case 276u: goto L_08B5A7F0;
    case 277u: goto L_08B5A808;
    case 278u: goto L_08B5A818;
    case 279u: goto L_08B5A88C;
    case 280u: goto L_08B5A890;
    case 281u: goto L_08B5A8E0;
    case 282u: goto L_08B5A904;
    case 283u: goto L_08B5A908;
    case 284u: goto L_08B5A930;
    case 285u: goto L_08B5A940;
    case 286u: goto L_08B5A948;
    case 287u: goto L_08B5A950;
    case 288u: goto L_08B5A958;
    case 289u: goto L_08B5A960;
    case 290u: goto L_08B5A968;
    case 291u: goto L_08B5A970;
    case 292u: goto L_08B5A978;
    case 293u: goto L_08B5A980;
    case 294u: goto L_08B5A988;
    case 295u: goto L_08B5A990;
    case 296u: goto L_08B5A998;
    case 297u: goto L_08B5A9A0;
    case 298u: goto L_08B5A9A8;
    case 299u: goto L_08B5A9B0;
    case 300u: goto L_08B5A9B8;
    case 301u: goto L_08B5A9C0;
    case 302u: goto L_08B5A9C8;
    case 303u: goto L_08B5A9D0;
    case 304u: goto L_08B5A9D8;
    case 305u: goto L_08B5A9E0;
    case 306u: goto L_08B5A9E8;
    case 307u: goto L_08B5A9F0;
    case 308u: goto L_08B5A9F8;
    case 309u: goto L_08B5AA00;
    case 310u: goto L_08B5AA08;
    case 311u: goto L_08B5AA10;
    case 312u: goto L_08B5AA18;
    case 313u: goto L_08B5AA20;
    case 314u: goto L_08B5AA28;
    case 315u: goto L_08B5AA30;
    case 316u: goto L_08B5AA38;
    case 317u: goto L_08B5AA40;
    case 318u: goto L_08B5AA48;
    case 319u: goto L_08B5AA50;
    case 320u: goto L_08B5AA58;
    case 321u: goto L_08B5AA60;
    case 322u: goto L_08B5AA68;
    case 323u: goto L_08B5AA70;
    case 324u: goto L_08B5AA78;
    case 325u: goto L_08B5AA80;
    case 326u: goto L_08B5AA88;
    case 327u: goto L_08B5AA90;
    case 328u: goto L_08B5AA98;
    case 329u: goto L_08B5AAA0;
    case 330u: goto L_08B5AAA8;
    case 331u: goto L_08B5AAB0;
    case 332u: goto L_08B5AAB8;
    case 333u: goto L_08B5AAC0;
    case 334u: goto L_08B5AAC8;
    case 335u: goto L_08B5AAD0;
    case 336u: goto L_08B5AAD8;
    case 337u: goto L_08B5AAE0;
    case 338u: goto L_08B5AAE8;
    case 339u: goto L_08B5AAF0;
    case 340u: goto L_08B5AAF8;
    case 341u: goto L_08B5AB00;
    case 342u: goto L_08B5AB08;
    case 343u: goto L_08B5AB10;
    case 344u: goto L_08B5AB18;
    case 345u: goto L_08B5AB20;
    case 346u: goto L_08B5AB28;
    case 347u: goto L_08B5AB30;
    case 348u: goto L_08B5AB38;
    case 349u: goto L_08B5AB40;
    case 350u: goto L_08B5AB48;
    case 351u: goto L_08B5AB50;
    case 352u: goto L_08B5AB58;
    case 353u: goto L_08B5AB60;
    case 354u: goto L_08B5AB68;
    case 355u: goto L_08B5AB70;
    case 356u: goto L_08B5AB78;
    case 357u: goto L_08B5AB80;
    case 358u: goto L_08B5AB88;
    case 359u: goto L_08B5AB90;
    case 360u: goto L_08B5AB98;
    case 361u: goto L_08B5ABA0;
    case 362u: goto L_08B5ABA8;
    case 363u: goto L_08B5ABB0;
    case 364u: goto L_08B5ABB8;
    case 365u: goto L_08B5ABC0;
    case 366u: goto L_08B5ABC8;
    case 367u: goto L_08B5ABD0;
    case 368u: goto L_08B5ABD8;
    case 369u: goto L_08B5ABE0;
    case 370u: goto L_08B5ABE8;
    case 371u: goto L_08B5ABF0;
    case 372u: goto L_08B5ABF8;
    case 373u: goto L_08B5AC00;
    case 374u: goto L_08B5AC08;
    case 375u: goto L_08B5AC10;
    case 376u: goto L_08B5AC18;
    case 377u: goto L_08B5AC20;
    case 378u: goto L_08B5AC28;
    case 379u: goto L_08B5AC30;
    case 380u: goto L_08B5AC38;
    case 381u: goto L_08B5AC40;
    case 382u: goto L_08B5AC48;
    case 383u: goto L_08B5AC50;
    case 384u: goto L_08B5AC58;
    case 385u: goto L_08B5AC60;
    case 386u: goto L_08B5AC68;
    case 387u: goto L_08B5AC70;
    case 388u: goto L_08B5AC78;
    case 389u: goto L_08B5AC80;
    case 390u: goto L_08B5AC88;
    case 391u: goto L_08B5AC90;
    case 392u: goto L_08B5AC98;
    case 393u: goto L_08B5ACA0;
    case 394u: goto L_08B5ACA8;
    case 395u: goto L_08B5ACB0;
    case 396u: goto L_08B5ACB8;
    case 397u: goto L_08B5ACC0;
    case 398u: goto L_08B5ACC8;
    case 399u: goto L_08B5ACD0;
    case 400u: goto L_08B5ACD8;
    case 401u: goto L_08B5ACE0;
    case 402u: goto L_08B5ACE8;
    case 403u: goto L_08B5ACF0;
    case 404u: goto L_08B5ACF8;
    case 405u: goto L_08B5AD00;
    case 406u: goto L_08B5AD08;
    case 407u: goto L_08B5AD10;
    case 408u: goto L_08B5AD18;
    case 409u: goto L_08B5AD20;
    case 410u: goto L_08B5AD28;
    case 411u: goto L_08B5AD30;
    case 412u: goto L_08B5AD38;
    case 413u: goto L_08B5ADF0;
    case 414u: goto L_08B5AE04;
    case 415u: goto L_08B5AF0C;
    case 416u: goto L_08B5AF5C;
    case 417u: goto L_08B5AF74;
    case 418u: goto L_08B5AFD4;
    case 419u: goto L_08B5B004;
    case 420u: goto L_08B5B08C;
    case 421u: goto L_08B5B0B4;
    case 422u: goto L_08B5B148;
    case 423u: goto L_08B5B1A8;
    case 424u: goto L_08B5B248;
    case 425u: goto L_08B5B398;
    case 426u: goto L_08B5B3AC;
    case 427u: goto L_08B5B3D4;
    case 428u: goto L_08B5B464;
    case 429u: goto L_08B5B5B4;
    case 430u: goto L_08B5B64C;
    case 431u: goto L_08B5B65C;
    case 432u: goto L_08B5B704;
    case 433u: goto L_08B5B7BC;
    case 434u: goto L_08B5B874;
    case 435u: goto L_08B5B90C;
    case 436u: goto L_08B5B91C;
    case 437u: goto L_08B5B944;
    case 438u: goto L_08B5B9DC;
    case 439u: goto L_08B5BA9C;
    case 440u: goto L_08B5BAAC;
    case 441u: goto L_08B5BADC;
    case 442u: goto L_08B5BB4C;
    case 443u: goto L_08B5BCAC;
    case 444u: goto L_08B5BD0C;
    case 445u: goto L_08B5BDC4;
    case 446u: goto L_08B5BE74;
    case 447u: goto L_08B5BED4;
    case 448u: goto L_08B5BF94;
    case 449u: goto L_08B5BFF0;
    case 450u: goto L_08B5BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B58000:
    rt.unsupported(0x08B58000u, 0x41484320u, "unknown not lowered yet"); return;
L_08B58028:
    rt.unsupported(0x08B58028u, 0x20594152u, "unknown not lowered yet"); return;
L_08B58050:
    rt.unsupported(0x08B58050u, 0x414E5245u, "unknown not lowered yet"); return;
L_08B58080:
    rt.unsupported(0x08B58080u, 0x47414747u, "cop1? not lowered yet"); return;
L_08B58098:
    rt.unsupported(0x08B58098u, 0x4C4C4F46u, "unknown not lowered yet"); return;
L_08B580A8:
    rt.unsupported(0x08B580A8u, 0x4E412047u, "unknown not lowered yet"); return;
L_08B580C0:
    rt.unsupported(0x08B580C0u, 0x49460020u, "cop2/vfpu not lowered yet"); return;
L_08B580D0:
    rt.unsupported(0x08B580D4u, 0x55542059u, "control flow in delay slot"); return;
L_08B580D8:
    rt.unsupported(0x08B580D8u, 0x4C454E4Eu, "unknown not lowered yet"); return;
L_08B580E8:
    rt.unsupported(0x08B580E8u, 0x4D4F4320u, "unknown not lowered yet"); return;
L_08B580F4:
    (void)(ctx.gpr[17] < static_cast<std::uint32_t>(11808) ? 1u : 0u);
    { const bool signed_ok = ctx.execute_signed_add(4u, 1u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B580F8u, 0x00202020u); return; } }
    goto L_08B580FC;
L_08B580FC:
    if (ctx.gpr[26] == ctx.gpr[18]) {
    rt.unsupported(0x08B58100u, 0x48502054u, "cop2/vfpu not lowered yet"); return;
        (void)(ctx.pc = 0x08B6A618u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B58104;
L_08B58104:
    rt.unsupported(0x08B58104u, 0x20455341u, "unknown not lowered yet"); return;
L_08B58128:
    rt.unsupported(0x08B58128u, 0x202E2044u, "unknown not lowered yet"); return;
L_08B5813C:
    rt.unsupported(0x08B5813Cu, 0x454E4E55u, "cop1? not lowered yet"); return;
L_08B58174:
    rt.unsupported(0x08B58174u, 0x4E45504Fu, "unknown not lowered yet"); return;
L_08B581A4:
    rt.unsupported(0x08B581A4u, 0x4C00202Eu, "unknown not lowered yet"); return;
L_08B581C0:
    rt.unsupported(0x08B581C0u, 0x4C4C4143u, "unknown not lowered yet"); return;
L_08B581F0:
    rt.unsupported(0x08B581F0u, 0x20594853u, "unknown not lowered yet"); return;
L_08B58200:
    rt.unsupported(0x08B58200u, 0x204E5255u, "unknown not lowered yet"); return;
L_08B5820C:
    rt.unsupported(0x08B5820Cu, 0x424F4A20u, "unknown not lowered yet"); return;
L_08B58220:
    rt.unsupported(0x08B58220u, 0x46494C20u, "cop1? not lowered yet"); return;
L_08B5822C:
    rt.unsupported(0x08B5822Cu, 0x20534920u, "unknown not lowered yet"); return;
L_08B58238:
    rt.unsupported(0x08B58238u, 0x204C414Eu, "unknown not lowered yet"); return;
L_08B58258:
    rt.unsupported(0x08B58258u, 0x4E205455u, "unknown not lowered yet"); return;
L_08B5826C:
    rt.unsupported(0x08B5826Cu, 0x20464655u, "unknown not lowered yet"); return;
L_08B5827C:
    rt.unsupported(0x08B5827Cu, 0x204E4148u, "unknown not lowered yet"); return;
L_08B58294:
    rt.unsupported(0x08B58298u, 0x54454720u, "control flow in delay slot"); return;
L_08B5829C:
    if (ctx.gpr[17] != 0u) {
    rt.unsupported(0x08B582A0u, 0x4F454449u, "unknown not lowered yet"); return;
        (void)(ctx.pc = 0x08B64720u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B582A4;
L_08B582A4:
    rt.unsupported(0x08B582A8u, 0x54544553u, "control flow in delay slot"); return;
L_08B582AC:
    if (ctx.gpr[18] == ctx.gpr[6]) {
    (void)(ctx.gpr[17] < static_cast<std::uint32_t>(17733) ? 1u : 0u);
        (void)(ctx.pc = 0x08B603C4u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B582B4;
L_08B582B4:
    (void)(ctx.gpr[17] < static_cast<std::uint32_t>(11808) ? 1u : 0u);
    rt.unsupported(0x08B582B8u, 0x45570020u, "cop1? not lowered yet"); return;
L_08B582C8:
    rt.unsupported(0x08B582C8u, 0x4E574F44u, "unknown not lowered yet"); return;
L_08B582E4:
    rt.unsupported(0x08B582E4u, 0x4F532044u, "unknown not lowered yet"); return;
L_08B582E8:
    rt.unsupported(0x08B582E8u, 0x43554D20u, "unknown not lowered yet"); return;
L_08B582F4:
    rt.unsupported(0x08B582F4u, 0x4F205441u, "unknown not lowered yet"); return;
L_08B58308:
    rt.unsupported(0x08B58308u, 0x4E574F44u, "unknown not lowered yet"); return;
L_08B5831C:
    rt.unsupported(0x08B5831Cu, 0x4E414D20u, "unknown not lowered yet"); return;
L_08B58330:
    rt.unsupported(0x08B58330u, 0x49535542u, "cop2/vfpu not lowered yet"); return;
L_08B5833C:
    rt.unsupported(0x08B5833Cu, 0x4E452047u, "unknown not lowered yet"); return;
L_08B58358:
    (void)(ctx.gpr[17] < static_cast<std::uint32_t>(11808) ? 1u : 0u);
    { const bool signed_ok = ctx.execute_signed_add(5u, 1u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B5835Cu, 0x00202E20u); return; } }
    goto L_08B58360;
L_08B58360:
    rt.unsupported(0x08B58360u, 0x43455053u, "unknown not lowered yet"); return;
L_08B58390:
    rt.unsupported(0x08B58390u, 0x464F204Cu, "cop1? not lowered yet"); return;
L_08B5839C:
    { const bool signed_ok = ctx.execute_signed_add(5u, 1u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B5839Cu, 0x00202E20u); return; } }
    goto L_08B583A0;
L_08B583A0:
    rt.unsupported(0x08B583A0u, 0x4C505041u, "unknown not lowered yet"); return;
L_08B583B4:
    rt.unsupported(0x08B583B4u, 0x41204452u, "unknown not lowered yet"); return;
L_08B583D4:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B583D8u, 0x202E2045u, "unknown not lowered yet"); return;
        (void)(ctx.pc = 0x08B6A4E4u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B583DC;
L_08B583DC:
    rt.unsupported(0x08B583DCu, 0x202E202Eu, "unknown not lowered yet"); return;
L_08B583F4:
    rt.unsupported(0x08B583F4u, 0x454E2920u, "cop1? not lowered yet"); return;
L_08B58408:
    rt.unsupported(0x08B58408u, 0x2029544Fu, "unknown not lowered yet"); return;
L_08B58418:
    rt.unsupported(0x08B58418u, 0x44432053u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[10] != ctx.gpr[14]) {
    rt.unsupported(0x08B58420u, 0x2044454Bu, "unknown not lowered yet"); return;
        (void)(ctx.pc = 0x08B628D0u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B58424;
L_08B58424:
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[10]) < 17481 ? 1u : 0u);
    rt.unsupported(0x08B58428u, 0x4E49203Au, "unknown not lowered yet"); return;
L_08B58438:
    rt.unsupported(0x08B58438u, 0x47494220u, "cop1? not lowered yet"); return;
L_08B58450:
    rt.unsupported(0x08B58450u, 0x20544148u, "unknown not lowered yet"); return;
L_08B5846C:
    rt.unsupported(0x08B5846Cu, 0x202E2029u, "unknown not lowered yet"); return;
L_08B58484:
    rt.unsupported(0x08B58484u, 0x20524F46u, "unknown not lowered yet"); return;
L_08B58498:
    if (ctx.gpr[18] != ctx.gpr[4]) {
    rt.unsupported(0x08B5849Cu, 0x45522044u, "cop1? not lowered yet"); return;
        (void)(ctx.pc = 0x08B605ECu, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B584A0;
L_08B584A0:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B584A4u, 0x464F2045u, "cop1? not lowered yet"); return;
        (void)(ctx.pc = 0x08B699D4u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B584A8;
L_08B584A8:
    rt.unsupported(0x08B584A8u, 0x45485420u, "cop1? not lowered yet"); return;
L_08B584D4:
    rt.unsupported(0x08B584D4u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B584E4:
    ctx.gpr[5] = (ctx.gpr[18] < static_cast<std::uint32_t>(20047) ? 1u : 0u);
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[10]) < 18720 ? 1u : 0u);
    rt.unsupported(0x08B584ECu, 0x4F4E2053u, "unknown not lowered yet"); return;
L_08B58514:
    rt.unsupported(0x08B58514u, 0x202E202Eu, "unknown not lowered yet"); return;
L_08B5853C:
    if (ctx.gpr[25] == 0u) {
    rt.unsupported(0x08B58540u, 0x204E4950u, "unknown not lowered yet"); return;
        (void)(ctx.pc = 0x08B689C0u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B58544;
L_08B58544:
    rt.unsupported(0x08B58544u, 0x41444F54u, "unknown not lowered yet"); return;
L_08B58560:
    rt.unsupported(0x08B58564u, 0x5453203Au, "control flow in delay slot"); return;
L_08B58568:
    rt.unsupported(0x08B58568u, 0x49524545u, "cop2/vfpu not lowered yet"); return;
L_08B58574:
    rt.unsupported(0x08B58574u, 0x4720592Du, "cop1? not lowered yet"); return;
L_08B5858C:
    { const bool signed_ok = ctx.execute_signed_add(4u, 1u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B5858Cu, 0x00202020u); return; } }
    goto L_08B58590;
L_08B58590:
    rt.unsupported(0x08B58590u, 0x414E4946u, "unknown not lowered yet"); return;
L_08B585B0:
    if (ctx.gpr[1] != 0u) {
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[10]) < 16712 ? 1u : 0u);
        (void)(ctx.pc = 0x08B63E34u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B585B8;
L_08B585B8:
    rt.unsupported(0x08B585B8u, 0x20412053u, "unknown not lowered yet"); return;
L_08B585DC:
    ctx.gpr[5] = (22089u << 16u);
    if (ctx.gpr[18] == ctx.gpr[21]) {
    rt.unsupported(0x08B585E4u, 0x4C415320u, "unknown not lowered yet"); return;
        (void)(ctx.pc = 0x08B6C264u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B585E8;
L_08B585E8:
    rt.unsupported(0x08B585E8u, 0x454D5345u, "cop1? not lowered yet"); return;
L_08B585F4:
    if (ctx.gpr[1] != 0u) {
    rt.unsupported(0x08B585F8u, 0x4154204Fu, "unknown not lowered yet"); return;
        (void)(ctx.pc = 0x08B69B40u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B585FC;
L_08B585FC:
    if (static_cast<std::int32_t>(ctx.gpr[9]) <= 0) {
    rt.unsupported(0x08B58600u, 0x4620554Fu, "cop1? not lowered yet"); return;
        (void)(ctx.pc = 0x08B69B2Cu, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B58604;
L_08B58604:
    rt.unsupported(0x08B58604u, 0x4120524Fu, "unknown not lowered yet"); return;
L_08B5861C:
    rt.unsupported(0x08B5861Cu, 0x4120534Cu, "unknown not lowered yet"); return;
L_08B58628:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B5862Cu, 0x204C4145u, "unknown not lowered yet"); return;
        (void)(ctx.pc = 0x08B60730u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B58630;
L_08B58630:
    rt.unsupported(0x08B58630u, 0x43204557u, "unknown not lowered yet"); return;
L_08B5863C:
    rt.unsupported(0x08B5863Cu, 0x45502050u, "cop1? not lowered yet"); return;
L_08B5864C:
    rt.unsupported(0x08B5864Cu, 0x20454854u, "unknown not lowered yet"); return;
L_08B58658:
    rt.unsupported(0x08B58658u, 0x202E202Eu, "unknown not lowered yet"); return;
L_08B58664:
    rt.unsupported(0x08B58664u, 0x43205255u, "unknown not lowered yet"); return;
L_08B58690:
    if (ctx.gpr[26] == ctx.gpr[5]) {
    rt.unsupported(0x08B58694u, 0x4854203Au, "cop2/vfpu not lowered yet"); return;
        (void)(ctx.pc = 0x08B6B798u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B58698;
L_08B58698:
    rt.unsupported(0x08B58698u, 0x4E4F2045u, "unknown not lowered yet"); return;
L_08B586B0:
    rt.unsupported(0x08B586B0u, 0x4449534Eu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B586B4u, 0x4F442045u, "unknown not lowered yet"); return;
L_08B586D8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[10]) < 20033 ? 1u : 0u);
    rt.unsupported(0x08B586E0u, 0x5245424Du, "control flow in delay slot"); return;
L_08B586E4:
    rt.unsupported(0x08B586E4u, 0x454E4F20u, "cop1? not lowered yet"); return;
L_08B586F4:
    (void)(ctx.gpr[17] < static_cast<std::uint32_t>(11808) ? 1u : 0u);
    { const bool signed_ok = ctx.execute_signed_add(4u, 1u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B586F8u, 0x00202020u); return; } }
    goto L_08B586FC;
L_08B586FC:
    rt.unsupported(0x08B586FCu, 0x49504143u, "cop2/vfpu not lowered yet"); return;
L_08B58718:
    rt.unsupported(0x08B58718u, 0x4E495245u, "unknown not lowered yet"); return;
L_08B58724:
    if (ctx.gpr[10] != ctx.gpr[15]) {
    rt.unsupported(0x08B58728u, 0x44204847u, "cop1? not lowered yet"); return;
        (void)(ctx.pc = 0x08B6D048u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B5872C;
L_08B5872C:
    if (ctx.gpr[26] == ctx.gpr[12]) {
    rt.unsupported(0x08B58730u, 0x444E4120u, "unsupported CFC1 control register"); return;
        (void)(ctx.pc = 0x08B68C44u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B58734;
L_08B58734:
    rt.unsupported(0x08B58738u, 0x56412059u, "control flow in delay slot"); return;
L_08B5873C:
    rt.unsupported(0x08B5873Cu, 0x414C4941u, "unknown not lowered yet"); return;
L_08B58754:
    if (ctx.gpr[18] == ctx.gpr[5]) {
    rt.unsupported(0x08B58758u, 0x204E4F53u, "unknown not lowered yet"); return;
        (void)(ctx.pc = 0x08B6C7D8u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B5875C;
L_08B5875C:
    if (ctx.gpr[10] != ctx.gpr[17]) {
    rt.unsupported(0x08B58760u, 0x44455249u, "unsupported CFC1 control register"); return;
        (void)(ctx.pc = 0x08B69CA8u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B58764;
L_08B58764:
    rt.unsupported(0x08B58764u, 0x202E202Eu, "unknown not lowered yet"); return;
L_08B58770:
    rt.unsupported(0x08B58770u, 0x20455641u, "unknown not lowered yet"); return;
L_08B5878C:
    rt.unsupported(0x08B5878Cu, 0x49485449u, "cop2/vfpu not lowered yet"); return;
L_08B587A8:
    rt.unsupported(0x08B587A8u, 0x204F5420u, "unknown not lowered yet"); return;
L_08B587C4:
    rt.unsupported(0x08B587C4u, 0x20202E20u, "unknown not lowered yet"); return;
L_08B587E0:
    rt.unsupported(0x08B587E0u, 0x45535255u, "cop1? not lowered yet"); return;
L_08B587F4:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B587F8u, 0x41475241u, "unknown not lowered yet"); return;
        (void)(ctx.pc = 0x08B6B504u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B587FC;
L_08B587FC:
    ctx.gpr[19] = (ctx.gpr[18] < static_cast<std::uint32_t>(17741) ? 1u : 0u);
    rt.unsupported(0x08B58800u, 0x204D4F43u, "unknown not lowered yet"); return;
L_08B58808:
    ctx.gpr[23] = (ctx.gpr[18] < static_cast<std::uint32_t>(22359) ? 1u : 0u);
    rt.unsupported(0x08B5880Cu, 0x4E415247u, "unknown not lowered yet"); return;
L_08B5881C:
    rt.unsupported(0x08B5881Cu, 0x204D4F43u, "unknown not lowered yet"); return;
L_08B58824:
    ctx.gpr[23] = (ctx.gpr[18] < static_cast<std::uint32_t>(22359) ? 1u : 0u);
    rt.unsupported(0x08B58828u, 0x4B434F52u, "cop2/vfpu not lowered yet"); return;
L_08B58834:
    rt.unsupported(0x08B58834u, 0x4F432E53u, "unknown not lowered yet"); return;
L_08B58844:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B58848u, 0x454C5241u, "cop1? not lowered yet"); return;
        (void)(ctx.pc = 0x08B6B554u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B5884C;
L_08B5884C:
    ctx.gpr[19] = (ctx.gpr[18] < static_cast<std::uint32_t>(17477) ? 1u : 0u);
    rt.unsupported(0x08B58850u, 0x204D4F43u, "unknown not lowered yet"); return;
L_08B58858:
    ctx.gpr[23] = (ctx.gpr[18] < static_cast<std::uint32_t>(22359) ? 1u : 0u);
    rt.unsupported(0x08B5885Cu, 0x4B434F52u, "cop2/vfpu not lowered yet"); return;
L_08B58868:
    rt.unsupported(0x08B58868u, 0x4F432E53u, "unknown not lowered yet"); return;
L_08B58870:
    if (ctx.gpr[26] != ctx.gpr[23]) {
    rt.unsupported(0x08B58874u, 0x4F522E57u, "unknown not lowered yet"); return;
        goto L_08B588F4;
    }
    goto L_08B58878;
L_08B58878:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B5887Cu, 0x454C5241u, "cop1? not lowered yet"); return;
        (void)(ctx.pc = 0x08B6B588u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B58880;
L_08B58880:
    ctx.gpr[19] = (ctx.gpr[18] < static_cast<std::uint32_t>(17477) ? 1u : 0u);
    rt.unsupported(0x08B58884u, 0x204D4F43u, "unknown not lowered yet"); return;
L_08B5888C:
    (void)(ctx.gpr[1] << 0u);
    rt.unsupported(0x08B58890u, 0x00020001u, "special? not lowered yet"); return;
L_08B588C0:
    rt.unsupported(0x08B588C0u, 0x000E000Du, "special? not lowered yet"); return;
L_08B588F4:
    // nop
    goto L_08B588F8;
L_08B588F8:
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // nop
    // nop
    // nop
    goto L_08B58920;
L_08B58920:
    // nop
    // nop
    // nop
    // nop
    goto L_08B58930;
L_08B58930:
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[24] = (0u << 16u);
    // nop
    rt.unsupported(0x08B5894Cu, 0x406FE000u, "unknown not lowered yet"); return;
L_08B58950:
    // nop
    // nop
    // nop
    // nop
    (void)(0u >> 0u);
    // nop
    goto L_08B58968;
L_08B58968:
    // nop
    // nop
    // nop
    ctx.pc = 0x02B0F500u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B589D0:
    if (ctx.gpr[3] != ctx.gpr[4]) {
    rt.unsupported(0x08B589D4u, 0x61657268u, "vfpu0 not lowered yet"); return;
        (void)(ctx.pc = 0x08B73F28u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B589D8;
L_08B589D8:
    (void)(0u & 0u);
    // nop
    rt.unsupported(0x08B589E0u, 0x00049828u, "special? not lowered yet"); return;
L_08B58A64:
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B58A80;
L_08B58A80:
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
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B58AD0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B58B00:
    rt.unsupported(0x08B58B04u, 0x08ACAA54u, "control flow in delay slot"); return;
L_08B58C0C:
    rt.unsupported(0x08B58C10u, 0x08ACEE9Cu, "control flow in delay slot"); return;
L_08B58EAC:
    // nop
    rt.unsupported(0x08B58EB4u, 0x08B0B4D0u, "control flow in delay slot"); return;
L_08B58EB8:
    rt.unsupported(0x08B58EB8u, 0x0000000Cu, "syscall not lowered yet"); return;
L_08B58ED8:
    // nop
    rt.unsupported(0x08B58EE0u, 0x40666666u, "unknown not lowered yet"); return;
    ctx.pc = 0x02B6B0E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B58F2C:
    rt.unsupported(0x08B58F30u, 0x08B2DB0Cu, "control flow in delay slot"); return;
L_08B59054:
    rt.unsupported(0x08B59058u, 0x08B2DB0Cu, "control flow in delay slot"); return;
L_08B5906C:
    rt.unsupported(0x08B5906Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B5912C:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x02CB6C30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B59144:
    rt.unsupported(0x08B59144u, 0x00000001u, "special? not lowered yet"); return;
L_08B5921C:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59220u, 0x000000B0u, "special? not lowered yet"); return;
L_08B5922C:
    rt.unsupported(0x08B5922Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59244:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B59250u, 0x0000008Du, "special? not lowered yet"); return;
L_08B5925C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.lo);
        (void)(ctx.pc = 0x08B6A788u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B59274;
L_08B59274:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    (void)(~(0u | 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    if (ctx.gpr[13] == 0u) ctx.gpr[10] = (ctx.gpr[2]);
        (void)(ctx.pc = 0x08B6A7A0u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B5928C;
L_08B5928C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B592A0u, 0x0041464Cu, "control flow in delay slot"); return;
L_08B592A4:
    rt.unsupported(0x08B592A4u, 0x00000001u, "special? not lowered yet"); return;
L_08B592BC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B592C8u, 0x0000008Du, "special? not lowered yet"); return;
L_08B592D4:
    rt.unsupported(0x08B592D4u, 0x00000001u, "special? not lowered yet"); return;
L_08B592EC:
    rt.unsupported(0x08B592ECu, 0x00000001u, "special? not lowered yet"); return;
L_08B59304:
    rt.unsupported(0x08B59304u, 0x00000001u, "special? not lowered yet"); return;
L_08B5931C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    { const bool signed_ok = ctx.execute_signed_sub(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B59328u, 0x000000A2u); return; } }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[1] >> (ctx.gpr[2] & 31u));
        (void)(ctx.pc = 0x08B6A848u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B59334;
L_08B59334:
    rt.unsupported(0x08B59334u, 0x00000001u, "special? not lowered yet"); return;
L_08B59354:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59358u, 0x000000A8u, "special? not lowered yet"); return;
L_08B59364:
    rt.unsupported(0x08B59364u, 0x00000001u, "special? not lowered yet"); return;
L_08B5937C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B59388u, 0x0000008Du, "special? not lowered yet"); return;
L_08B59394:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B593A8u, 0x00434341u, "special? not lowered yet"); return;
        (void)(ctx.pc = 0x08B6A8C0u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B593AC;
L_08B593AC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    (void)(~(0u | 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[1] >> 9u);
        (void)(ctx.pc = 0x08B6A8D8u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B593C4;
L_08B593C4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B593D8u, 0x00004C4Cu, "control flow in delay slot"); return;
L_08B593DC:
    rt.unsupported(0x08B593DCu, 0x00000001u, "special? not lowered yet"); return;
L_08B593F4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B59408u, 0x00524F48u, "control flow in delay slot"); return;
L_08B5940C:
    rt.unsupported(0x08B5940Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59424:
    rt.unsupported(0x08B59424u, 0x00000001u, "special? not lowered yet"); return;
L_08B5943C:
    rt.unsupported(0x08B5943Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59454:
    rt.unsupported(0x08B59454u, 0x00000001u, "special? not lowered yet"); return;
L_08B5946C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B59478u, 0x000000B3u, "special? not lowered yet"); return;
L_08B59484:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    rt.unsupported(0x08B5949Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B594A4:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B594A8u, 0x0000008Eu, "special? not lowered yet"); return;
L_08B594B4:
    rt.unsupported(0x08B594B4u, 0x00000001u, "special? not lowered yet"); return;
L_08B594CC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B594D8u, 0x0000008Du, "special? not lowered yet"); return;
L_08B594E4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.lo);
        (void)(ctx.pc = 0x08B6AA10u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B594FC;
L_08B594FC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    (void)(~(0u | 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    if (ctx.gpr[13] == 0u) ctx.gpr[10] = (ctx.gpr[2]);
        (void)(ctx.pc = 0x08B6AA28u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B59514;
L_08B59514:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B59528u, 0x0041464Cu, "control flow in delay slot"); return;
L_08B5952C:
    rt.unsupported(0x08B5952Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59544:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[1] >> (ctx.gpr[2] & 31u));
        (void)(ctx.pc = 0x08B6AA70u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B5955C;
L_08B5955C:
    rt.unsupported(0x08B5955Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59574:
    rt.unsupported(0x08B59574u, 0x00000001u, "special? not lowered yet"); return;
L_08B5958C:
    rt.unsupported(0x08B5958Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B595A4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B595B0u, 0x000000B2u, "special? not lowered yet"); return;
L_08B595BC:
    rt.unsupported(0x08B595BCu, 0x00000001u, "special? not lowered yet"); return;
L_08B595DC:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B595E0u, 0x0000008Eu, "special? not lowered yet"); return;
L_08B595EC:
    rt.unsupported(0x08B595ECu, 0x00000001u, "special? not lowered yet"); return;
L_08B59604:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B59610u, 0x0000008Du, "special? not lowered yet"); return;
L_08B5961C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B59630u, 0x00434341u, "special? not lowered yet"); return;
        (void)(ctx.pc = 0x08B6AB48u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B59634;
L_08B59634:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    (void)(~(0u | 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[1] >> 9u);
        (void)(ctx.pc = 0x08B6AB60u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B5964C;
L_08B5964C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B59660u, 0x00004C4Cu, "control flow in delay slot"); return;
L_08B59664:
    rt.unsupported(0x08B59664u, 0x00000001u, "special? not lowered yet"); return;
L_08B5967C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59688u, 0x000000B2u, "special? not lowered yet"); return;
L_08B59694:
    rt.unsupported(0x08B59694u, 0x00000001u, "special? not lowered yet"); return;
L_08B596AC:
    rt.unsupported(0x08B596ACu, 0x00000001u, "special? not lowered yet"); return;
L_08B596C4:
    rt.unsupported(0x08B596C4u, 0x00000001u, "special? not lowered yet"); return;
L_08B596DC:
    rt.unsupported(0x08B596DCu, 0x00000001u, "special? not lowered yet"); return;
L_08B596F4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B59700u, 0x000000B3u, "special? not lowered yet"); return;
L_08B5970C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    rt.unsupported(0x08B59724u, 0x00000001u, "special? not lowered yet"); return;
L_08B5972C:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59730u, 0x000000B0u, "special? not lowered yet"); return;
L_08B5973C:
    rt.unsupported(0x08B5973Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59754:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B59760u, 0x0000008Du, "special? not lowered yet"); return;
L_08B5976C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.lo);
        (void)(ctx.pc = 0x08B6AC98u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B59784;
L_08B59784:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    (void)(~(0u | 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    if (ctx.gpr[13] == 0u) ctx.gpr[10] = (ctx.gpr[2]);
        (void)(ctx.pc = 0x08B6ACB0u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B5979C;
L_08B5979C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B597B0u, 0x0041464Cu, "control flow in delay slot"); return;
L_08B597B4:
    rt.unsupported(0x08B597B4u, 0x00000001u, "special? not lowered yet"); return;
L_08B597CC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B597D8u, 0x0000008Du, "special? not lowered yet"); return;
L_08B597E4:
    rt.unsupported(0x08B597E4u, 0x00000001u, "special? not lowered yet"); return;
L_08B597FC:
    rt.unsupported(0x08B597FCu, 0x00000001u, "special? not lowered yet"); return;
L_08B59814:
    rt.unsupported(0x08B59814u, 0x00000001u, "special? not lowered yet"); return;
L_08B5982C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    { const bool signed_ok = ctx.execute_signed_sub(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B59838u, 0x000000A2u); return; } }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[1] >> (ctx.gpr[2] & 31u));
        (void)(ctx.pc = 0x08B6AD58u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B59844;
L_08B59844:
    rt.unsupported(0x08B59844u, 0x00000001u, "special? not lowered yet"); return;
L_08B59864:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59868u, 0x000000A8u, "special? not lowered yet"); return;
L_08B59874:
    rt.unsupported(0x08B59874u, 0x00000001u, "special? not lowered yet"); return;
L_08B5988C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B59898u, 0x0000008Du, "special? not lowered yet"); return;
L_08B598A4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B598B8u, 0x00434341u, "special? not lowered yet"); return;
        (void)(ctx.pc = 0x08B6ADD0u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B598BC;
L_08B598BC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    (void)(~(0u | 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[1] >> 9u);
        (void)(ctx.pc = 0x08B6ADE8u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B598D4;
L_08B598D4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B598E8u, 0x00464F4Cu, "control flow in delay slot"); return;
L_08B598EC:
    rt.unsupported(0x08B598ECu, 0x00000001u, "special? not lowered yet"); return;
L_08B59904:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B59918u, 0x00524F48u, "control flow in delay slot"); return;
L_08B5991C:
    rt.unsupported(0x08B5991Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59934:
    rt.unsupported(0x08B59934u, 0x00000001u, "special? not lowered yet"); return;
L_08B5994C:
    rt.unsupported(0x08B5994Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59964:
    rt.unsupported(0x08B59964u, 0x00000001u, "special? not lowered yet"); return;
L_08B5997C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    rt.unsupported(0x08B59994u, 0x00000001u, "special? not lowered yet"); return;
L_08B5999C:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B599A0u, 0x0000008Eu, "special? not lowered yet"); return;
L_08B599AC:
    rt.unsupported(0x08B599ACu, 0x00000001u, "special? not lowered yet"); return;
L_08B599C4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B599D0u, 0x0000008Du, "special? not lowered yet"); return;
L_08B599DC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.lo);
        (void)(ctx.pc = 0x08B6AF08u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B599F4;
L_08B599F4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    (void)(~(0u | 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    if (ctx.gpr[13] == 0u) ctx.gpr[10] = (ctx.gpr[2]);
        (void)(ctx.pc = 0x08B6AF20u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B59A0C;
L_08B59A0C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B59A20u, 0x0041464Cu, "control flow in delay slot"); return;
L_08B59A24:
    rt.unsupported(0x08B59A24u, 0x00000001u, "special? not lowered yet"); return;
L_08B59A3C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[1] >> (ctx.gpr[2] & 31u));
        (void)(ctx.pc = 0x08B6AF68u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B59A54;
L_08B59A54:
    rt.unsupported(0x08B59A54u, 0x00000001u, "special? not lowered yet"); return;
L_08B59A6C:
    rt.unsupported(0x08B59A6Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59A84:
    rt.unsupported(0x08B59A84u, 0x00000001u, "special? not lowered yet"); return;
L_08B59A9C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59AA8u, 0x000000B2u, "special? not lowered yet"); return;
L_08B59AB4:
    rt.unsupported(0x08B59AB4u, 0x00000001u, "special? not lowered yet"); return;
L_08B59AD4:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59AD8u, 0x0000008Eu, "special? not lowered yet"); return;
L_08B59AE4:
    rt.unsupported(0x08B59AE4u, 0x00000001u, "special? not lowered yet"); return;
L_08B59AFC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B59B08u, 0x0000008Du, "special? not lowered yet"); return;
L_08B59B14:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B59B28u, 0x00434341u, "special? not lowered yet"); return;
        (void)(ctx.pc = 0x08B6B040u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B59B2C;
L_08B59B2C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    (void)(~(0u | 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[1] >> 9u);
        (void)(ctx.pc = 0x08B6B058u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B59B44;
L_08B59B44:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B59B58u, 0x00464F4Cu, "control flow in delay slot"); return;
L_08B59B5C:
    rt.unsupported(0x08B59B5Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59B74:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59B80u, 0x000000B2u, "special? not lowered yet"); return;
L_08B59B8C:
    rt.unsupported(0x08B59B8Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59BA4:
    rt.unsupported(0x08B59BA4u, 0x00000001u, "special? not lowered yet"); return;
L_08B59BBC:
    rt.unsupported(0x08B59BBCu, 0x00000001u, "special? not lowered yet"); return;
L_08B59BD4:
    rt.unsupported(0x08B59BD4u, 0x00000001u, "special? not lowered yet"); return;
L_08B59BEC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    rt.unsupported(0x08B59C04u, 0x00000001u, "special? not lowered yet"); return;
L_08B59C0C:
    rt.unsupported(0x08B59C10u, 0x08B59354u, "control flow in delay slot"); return;
L_08B59CB8:
    // nop
    rt.unsupported(0x08B59CC0u, 0x08AD6F34u, "control flow in delay slot"); return;
L_08B59D2C:
    ctx.gpr[6] = (26214u << 16u);
    rt.unsupported(0x08B59D30u, 0x40000000u, "unknown not lowered yet"); return;
L_08B59D58:
    if (ctx.gpr[15] == ctx.gpr[11]) {
    ctx.gpr[25] = (7864u << 16u);
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 213u, 0x08B3B1D8u>(ctx, &aot_mem); return;
    }
    goto L_08B59D60;
L_08B59D60:
    rt.unsupported(0x08B59D60u, 0x40666666u, "unknown not lowered yet"); return;
L_08B59D88:
    (void)(~(0u | 0u));
    ctx.pc = 0x02CB9660u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B59E88:
    // nop
    rt.unsupported(0x08B59E90u, 0x08839C84u, "control flow in delay slot"); return;
L_08B59EC0:
    rt.unsupported(0x08B59EC0u, 0x20202000u, "unknown not lowered yet"); return;
L_08B59EE8:
    rt.unsupported(0x08B59EECu, 0x10101010u, "control flow in delay slot"); return;
L_08B59EF0:
    rt.unsupported(0x08B59EF0u, 0x04040410u, "regimm? not lowered yet"); return;
L_08B59F00:
    rt.unsupported(0x08B59F00u, 0x41411010u, "unknown not lowered yet"); return;
L_08B59F24:
    rt.unsupported(0x08B59F24u, 0x42424242u, "unknown not lowered yet"); return;
L_08B59F44:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B59FC8;
L_08B59FC8:
    // nop
    rt.unsupported(0x08B59FD0u, 0x08B5A204u, "control flow in delay slot"); return;
L_08B5A1AC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B5A204;
L_08B5A204:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B5A25C;
L_08B5A25C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    if (ctx.gpr[1] == 0u) (void)(0u);
    ctx.pc = 0x02D67F20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5A2B8:
    if (ctx.gpr[1] == 0u) (void)(0u);
    (void)(ctx.gpr[3] >> 0u);
    (void)(ctx.gpr[5] << (0u & 31u));
    (void)(ctx.gpr[7] >> (0u & 31u));
    jump_target = 0u;
    if (ctx.gpr[11] == 0u) (void)(0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5A2E0:
    rt.unsupported(0x08B5A2E0u, 0x00000001u, "special? not lowered yet"); return;
L_08B5A490:
    rt.unsupported(0x08B5A490u, 0x00000005u, "special? not lowered yet"); return;
L_08B5A680:
    ctx.gpr[18] = (ctx.gpr[25] & 12592u);
    ctx.gpr[22] = (ctx.gpr[25] | 13620u);
    rt.unsupported(0x08B5A688u, 0x62613938u, "vfpu0 not lowered yet"); return;
L_08B5A6D8:
    rt.unsupported(0x08B5A6D8u, 0x20202020u, "unknown not lowered yet"); return;
L_08B5A6E8:
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    // nop
    rt.unsupported(0x08B5A6FCu, 0xC0100000u, "unknown not lowered yet"); return;
L_08B5A708:
    rt.unsupported(0x08B5A708u, 0x20202020u, "unknown not lowered yet"); return;
L_08B5A718:
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    rt.unsupported(0x08B5A728u, 0x00000001u, "special? not lowered yet"); return;
L_08B5A72C:
    rt.unsupported(0x08B5A730u, 0x08B2F874u, "control flow in delay slot"); return;
L_08B5A770:
    // nop
    // nop
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(0u + static_cast<std::uint32_t>(0))))));
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.gpr[6] = (11842u << 16u);
    ctx.gpr[25] = (ctx.gpr[11] | 15478u);
    ctx.gpr[10] = (14831u << 16u);
    // nop
    rt.unsupported(0x08B5A794u, 0x43500000u, "unknown not lowered yet"); return;
L_08B5A7A0:
    ctx.gpr[23] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(-1532), ctx.gpr[23]));
    ctx.gpr[25] = (39321u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[1] + static_cast<std::uint32_t>(-27815)));
    ctx.gpr[18] = (18724u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) > 0;
    ctx.gpr[12] = (29125u << 16u);
      if (branch_taken) {
          (void)(ctx.pc = 0x08B78A70u, rt.invoke_chained_call(ctx, &aot_mem)); return;
      }
      goto L_08B5A7B8;
    }
L_08B5A7B8:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(990)));
    ctx.gpr[7] = (18020u << 16u);
    { const float vfpu_constant = std::bit_cast<float>(0x00000000u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<31u, 4u>(vfpu_value); }
    ctx.gpr[3] = (39433u << 16u);
    { const float vfpu_value[1]{static_cast<float>(21060)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<62u, 1u>(vfpu_value); }
    ctx.gpr[2] = (61714u << 16u);
    // nop
    // nop
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[6];
    ctx.gpr[27] = (52091u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 19u, 0x08B53C14u>(ctx, &aot_mem); return;
      }
      goto L_08B5A7E0;
    }
L_08B5A7E0:
    if (ctx.gpr[4] == ctx.gpr[31]) {
    ctx.gpr[19] = (17427u << 16u);
        (void)(ctx.pc = 0x08B727E4u, rt.invoke_chained_call(ctx, &aot_mem)); return;
    }
    goto L_08B5A7E8;
L_08B5A7E8:
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[17];
    ctx.gpr[25] = (65267u << 16u);
      if (branch_taken) {
          (void)(ctx.pc = 0x08B654C4u, rt.invoke_chained_call(ctx, &aot_mem)); return;
      }
      goto L_08B5A7F0;
    }
L_08B5A7F0:
    // nop
    ctx.gpr[16] = ((ctx.gpr[31] >> 0u) & 0x00000001u);
    // nop
    rt.unsupported(0x08B5A7FCu, 0xC3500000u, "unknown not lowered yet"); return;
L_08B5A808:
    // nop
    (void)(0u << 16u);
    // nop
    rt.unsupported(0x08B5A814u, 0x40000000u, "unknown not lowered yet"); return;
L_08B5A818:
    // nop
    ctx.gpr[16] = (0u << 16u);
    // nop
    rt.unsupported(0x08B5A824u, 0x40240000u, "unknown not lowered yet"); return;
L_08B5A88C:
    rt.unsupported(0x08B5A88Cu, 0x42D6BCC4u, "unknown not lowered yet"); return;
L_08B5A890:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(0));
    rt.unsupported(0x08B5A894u, 0x430C6BF5u, "unknown not lowered yet"); return;
L_08B5A8E0:
    (void)(ctx.gpr[31] | 32768u);
    rt.unsupported(0x08B5A8E4u, 0x4341C379u, "unknown not lowered yet"); return;
L_08B5A904:
    rt.unsupported(0x08B5A904u, 0x75154FDDu, "unknown not lowered yet"); return;
L_08B5A908:
    ctx.gpr[24] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(-30276)));
    ctx.gpr[28] = (53938u << 16u);
    rt.unsupported(0x08B5A910u, 0xD5A8A733u, "vfpu not lowered yet"); return;
L_08B5A930:
    rt.unsupported(0x08B5A930u, 0x00000005u, "special? not lowered yet"); return;
L_08B5A940:
    // nop
    // nop
    goto L_08B5A948;
L_08B5A948:
    rt.unsupported(0x08B5A94Cu, 0x08B5A940u, "control flow in delay slot"); return;
L_08B5A950:
    rt.unsupported(0x08B5A954u, 0x08B5A948u, "control flow in delay slot"); return;
L_08B5A958:
    rt.unsupported(0x08B5A95Cu, 0x08B5A950u, "control flow in delay slot"); return;
L_08B5A960:
    rt.unsupported(0x08B5A964u, 0x08B5A958u, "control flow in delay slot"); return;
L_08B5A968:
    rt.unsupported(0x08B5A96Cu, 0x08B5A960u, "control flow in delay slot"); return;
L_08B5A970:
    rt.unsupported(0x08B5A974u, 0x08B5A968u, "control flow in delay slot"); return;
L_08B5A978:
    rt.unsupported(0x08B5A97Cu, 0x08B5A970u, "control flow in delay slot"); return;
L_08B5A980:
    rt.unsupported(0x08B5A984u, 0x08B5A978u, "control flow in delay slot"); return;
L_08B5A988:
    rt.unsupported(0x08B5A98Cu, 0x08B5A980u, "control flow in delay slot"); return;
L_08B5A990:
    rt.unsupported(0x08B5A994u, 0x08B5A988u, "control flow in delay slot"); return;
L_08B5A998:
    rt.unsupported(0x08B5A99Cu, 0x08B5A990u, "control flow in delay slot"); return;
L_08B5A9A0:
    rt.unsupported(0x08B5A9A4u, 0x08B5A998u, "control flow in delay slot"); return;
L_08B5A9A8:
    rt.unsupported(0x08B5A9ACu, 0x08B5A9A0u, "control flow in delay slot"); return;
L_08B5A9B0:
    rt.unsupported(0x08B5A9B4u, 0x08B5A9A8u, "control flow in delay slot"); return;
L_08B5A9B8:
    rt.unsupported(0x08B5A9BCu, 0x08B5A9B0u, "control flow in delay slot"); return;
L_08B5A9C0:
    rt.unsupported(0x08B5A9C4u, 0x08B5A9B8u, "control flow in delay slot"); return;
L_08B5A9C8:
    rt.unsupported(0x08B5A9CCu, 0x08B5A9C0u, "control flow in delay slot"); return;
L_08B5A9D0:
    rt.unsupported(0x08B5A9D4u, 0x08B5A9C8u, "control flow in delay slot"); return;
L_08B5A9D8:
    rt.unsupported(0x08B5A9DCu, 0x08B5A9D0u, "control flow in delay slot"); return;
L_08B5A9E0:
    rt.unsupported(0x08B5A9E4u, 0x08B5A9D8u, "control flow in delay slot"); return;
L_08B5A9E8:
    rt.unsupported(0x08B5A9ECu, 0x08B5A9E0u, "control flow in delay slot"); return;
L_08B5A9F0:
    rt.unsupported(0x08B5A9F4u, 0x08B5A9E8u, "control flow in delay slot"); return;
L_08B5A9F8:
    rt.unsupported(0x08B5A9FCu, 0x08B5A9F0u, "control flow in delay slot"); return;
L_08B5AA00:
    rt.unsupported(0x08B5AA04u, 0x08B5A9F8u, "control flow in delay slot"); return;
L_08B5AA08:
    rt.unsupported(0x08B5AA0Cu, 0x08B5AA00u, "control flow in delay slot"); return;
L_08B5AA10:
    rt.unsupported(0x08B5AA14u, 0x08B5AA08u, "control flow in delay slot"); return;
L_08B5AA18:
    rt.unsupported(0x08B5AA1Cu, 0x08B5AA10u, "control flow in delay slot"); return;
L_08B5AA20:
    rt.unsupported(0x08B5AA24u, 0x08B5AA18u, "control flow in delay slot"); return;
L_08B5AA28:
    rt.unsupported(0x08B5AA2Cu, 0x08B5AA20u, "control flow in delay slot"); return;
L_08B5AA30:
    rt.unsupported(0x08B5AA34u, 0x08B5AA28u, "control flow in delay slot"); return;
L_08B5AA38:
    rt.unsupported(0x08B5AA3Cu, 0x08B5AA30u, "control flow in delay slot"); return;
L_08B5AA40:
    rt.unsupported(0x08B5AA44u, 0x08B5AA38u, "control flow in delay slot"); return;
L_08B5AA48:
    rt.unsupported(0x08B5AA4Cu, 0x08B5AA40u, "control flow in delay slot"); return;
L_08B5AA50:
    rt.unsupported(0x08B5AA54u, 0x08B5AA48u, "control flow in delay slot"); return;
L_08B5AA58:
    rt.unsupported(0x08B5AA5Cu, 0x08B5AA50u, "control flow in delay slot"); return;
L_08B5AA60:
    rt.unsupported(0x08B5AA64u, 0x08B5AA58u, "control flow in delay slot"); return;
L_08B5AA68:
    rt.unsupported(0x08B5AA6Cu, 0x08B5AA60u, "control flow in delay slot"); return;
L_08B5AA70:
    rt.unsupported(0x08B5AA74u, 0x08B5AA68u, "control flow in delay slot"); return;
L_08B5AA78:
    rt.unsupported(0x08B5AA7Cu, 0x08B5AA70u, "control flow in delay slot"); return;
L_08B5AA80:
    rt.unsupported(0x08B5AA84u, 0x08B5AA78u, "control flow in delay slot"); return;
L_08B5AA88:
    rt.unsupported(0x08B5AA8Cu, 0x08B5AA80u, "control flow in delay slot"); return;
L_08B5AA90:
    rt.unsupported(0x08B5AA94u, 0x08B5AA88u, "control flow in delay slot"); return;
L_08B5AA98:
    rt.unsupported(0x08B5AA9Cu, 0x08B5AA90u, "control flow in delay slot"); return;
L_08B5AAA0:
    rt.unsupported(0x08B5AAA4u, 0x08B5AA98u, "control flow in delay slot"); return;
L_08B5AAA8:
    rt.unsupported(0x08B5AAACu, 0x08B5AAA0u, "control flow in delay slot"); return;
L_08B5AAB0:
    rt.unsupported(0x08B5AAB4u, 0x08B5AAA8u, "control flow in delay slot"); return;
L_08B5AAB8:
    rt.unsupported(0x08B5AABCu, 0x08B5AAB0u, "control flow in delay slot"); return;
L_08B5AAC0:
    rt.unsupported(0x08B5AAC4u, 0x08B5AAB8u, "control flow in delay slot"); return;
L_08B5AAC8:
    rt.unsupported(0x08B5AACCu, 0x08B5AAC0u, "control flow in delay slot"); return;
L_08B5AAD0:
    rt.unsupported(0x08B5AAD4u, 0x08B5AAC8u, "control flow in delay slot"); return;
L_08B5AAD8:
    rt.unsupported(0x08B5AADCu, 0x08B5AAD0u, "control flow in delay slot"); return;
L_08B5AAE0:
    rt.unsupported(0x08B5AAE4u, 0x08B5AAD8u, "control flow in delay slot"); return;
L_08B5AAE8:
    rt.unsupported(0x08B5AAECu, 0x08B5AAE0u, "control flow in delay slot"); return;
L_08B5AAF0:
    rt.unsupported(0x08B5AAF4u, 0x08B5AAE8u, "control flow in delay slot"); return;
L_08B5AAF8:
    rt.unsupported(0x08B5AAFCu, 0x08B5AAF0u, "control flow in delay slot"); return;
L_08B5AB00:
    rt.unsupported(0x08B5AB04u, 0x08B5AAF8u, "control flow in delay slot"); return;
L_08B5AB08:
    rt.unsupported(0x08B5AB0Cu, 0x08B5AB00u, "control flow in delay slot"); return;
L_08B5AB10:
    rt.unsupported(0x08B5AB14u, 0x08B5AB08u, "control flow in delay slot"); return;
L_08B5AB18:
    rt.unsupported(0x08B5AB1Cu, 0x08B5AB10u, "control flow in delay slot"); return;
L_08B5AB20:
    rt.unsupported(0x08B5AB24u, 0x08B5AB18u, "control flow in delay slot"); return;
L_08B5AB28:
    rt.unsupported(0x08B5AB2Cu, 0x08B5AB20u, "control flow in delay slot"); return;
L_08B5AB30:
    rt.unsupported(0x08B5AB34u, 0x08B5AB28u, "control flow in delay slot"); return;
L_08B5AB38:
    rt.unsupported(0x08B5AB3Cu, 0x08B5AB30u, "control flow in delay slot"); return;
L_08B5AB40:
    rt.unsupported(0x08B5AB44u, 0x08B5AB38u, "control flow in delay slot"); return;
L_08B5AB48:
    rt.unsupported(0x08B5AB4Cu, 0x08B5AB40u, "control flow in delay slot"); return;
L_08B5AB50:
    rt.unsupported(0x08B5AB54u, 0x08B5AB48u, "control flow in delay slot"); return;
L_08B5AB58:
    rt.unsupported(0x08B5AB5Cu, 0x08B5AB50u, "control flow in delay slot"); return;
L_08B5AB60:
    rt.unsupported(0x08B5AB64u, 0x08B5AB58u, "control flow in delay slot"); return;
L_08B5AB68:
    rt.unsupported(0x08B5AB6Cu, 0x08B5AB60u, "control flow in delay slot"); return;
L_08B5AB70:
    rt.unsupported(0x08B5AB74u, 0x08B5AB68u, "control flow in delay slot"); return;
L_08B5AB78:
    rt.unsupported(0x08B5AB7Cu, 0x08B5AB70u, "control flow in delay slot"); return;
L_08B5AB80:
    rt.unsupported(0x08B5AB84u, 0x08B5AB78u, "control flow in delay slot"); return;
L_08B5AB88:
    rt.unsupported(0x08B5AB8Cu, 0x08B5AB80u, "control flow in delay slot"); return;
L_08B5AB90:
    rt.unsupported(0x08B5AB94u, 0x08B5AB88u, "control flow in delay slot"); return;
L_08B5AB98:
    rt.unsupported(0x08B5AB9Cu, 0x08B5AB90u, "control flow in delay slot"); return;
L_08B5ABA0:
    rt.unsupported(0x08B5ABA4u, 0x08B5AB98u, "control flow in delay slot"); return;
L_08B5ABA8:
    rt.unsupported(0x08B5ABACu, 0x08B5ABA0u, "control flow in delay slot"); return;
L_08B5ABB0:
    rt.unsupported(0x08B5ABB4u, 0x08B5ABA8u, "control flow in delay slot"); return;
L_08B5ABB8:
    rt.unsupported(0x08B5ABBCu, 0x08B5ABB0u, "control flow in delay slot"); return;
L_08B5ABC0:
    rt.unsupported(0x08B5ABC4u, 0x08B5ABB8u, "control flow in delay slot"); return;
L_08B5ABC8:
    rt.unsupported(0x08B5ABCCu, 0x08B5ABC0u, "control flow in delay slot"); return;
L_08B5ABD0:
    rt.unsupported(0x08B5ABD4u, 0x08B5ABC8u, "control flow in delay slot"); return;
L_08B5ABD8:
    rt.unsupported(0x08B5ABDCu, 0x08B5ABD0u, "control flow in delay slot"); return;
L_08B5ABE0:
    rt.unsupported(0x08B5ABE4u, 0x08B5ABD8u, "control flow in delay slot"); return;
L_08B5ABE8:
    rt.unsupported(0x08B5ABECu, 0x08B5ABE0u, "control flow in delay slot"); return;
L_08B5ABF0:
    rt.unsupported(0x08B5ABF4u, 0x08B5ABE8u, "control flow in delay slot"); return;
L_08B5ABF8:
    rt.unsupported(0x08B5ABFCu, 0x08B5ABF0u, "control flow in delay slot"); return;
L_08B5AC00:
    rt.unsupported(0x08B5AC04u, 0x08B5ABF8u, "control flow in delay slot"); return;
L_08B5AC08:
    rt.unsupported(0x08B5AC0Cu, 0x08B5AC00u, "control flow in delay slot"); return;
L_08B5AC10:
    rt.unsupported(0x08B5AC14u, 0x08B5AC08u, "control flow in delay slot"); return;
L_08B5AC18:
    rt.unsupported(0x08B5AC1Cu, 0x08B5AC10u, "control flow in delay slot"); return;
L_08B5AC20:
    rt.unsupported(0x08B5AC24u, 0x08B5AC18u, "control flow in delay slot"); return;
L_08B5AC28:
    rt.unsupported(0x08B5AC2Cu, 0x08B5AC20u, "control flow in delay slot"); return;
L_08B5AC30:
    rt.unsupported(0x08B5AC34u, 0x08B5AC28u, "control flow in delay slot"); return;
L_08B5AC38:
    rt.unsupported(0x08B5AC3Cu, 0x08B5AC30u, "control flow in delay slot"); return;
L_08B5AC40:
    rt.unsupported(0x08B5AC44u, 0x08B5AC38u, "control flow in delay slot"); return;
L_08B5AC48:
    rt.unsupported(0x08B5AC4Cu, 0x08B5AC40u, "control flow in delay slot"); return;
L_08B5AC50:
    rt.unsupported(0x08B5AC54u, 0x08B5AC48u, "control flow in delay slot"); return;
L_08B5AC58:
    rt.unsupported(0x08B5AC5Cu, 0x08B5AC50u, "control flow in delay slot"); return;
L_08B5AC60:
    rt.unsupported(0x08B5AC64u, 0x08B5AC58u, "control flow in delay slot"); return;
L_08B5AC68:
    rt.unsupported(0x08B5AC6Cu, 0x08B5AC60u, "control flow in delay slot"); return;
L_08B5AC70:
    rt.unsupported(0x08B5AC74u, 0x08B5AC68u, "control flow in delay slot"); return;
L_08B5AC78:
    rt.unsupported(0x08B5AC7Cu, 0x08B5AC70u, "control flow in delay slot"); return;
L_08B5AC80:
    rt.unsupported(0x08B5AC84u, 0x08B5AC78u, "control flow in delay slot"); return;
L_08B5AC88:
    rt.unsupported(0x08B5AC8Cu, 0x08B5AC80u, "control flow in delay slot"); return;
L_08B5AC90:
    rt.unsupported(0x08B5AC94u, 0x08B5AC88u, "control flow in delay slot"); return;
L_08B5AC98:
    rt.unsupported(0x08B5AC9Cu, 0x08B5AC90u, "control flow in delay slot"); return;
L_08B5ACA0:
    rt.unsupported(0x08B5ACA4u, 0x08B5AC98u, "control flow in delay slot"); return;
L_08B5ACA8:
    rt.unsupported(0x08B5ACACu, 0x08B5ACA0u, "control flow in delay slot"); return;
L_08B5ACB0:
    rt.unsupported(0x08B5ACB4u, 0x08B5ACA8u, "control flow in delay slot"); return;
L_08B5ACB8:
    rt.unsupported(0x08B5ACBCu, 0x08B5ACB0u, "control flow in delay slot"); return;
L_08B5ACC0:
    rt.unsupported(0x08B5ACC4u, 0x08B5ACB8u, "control flow in delay slot"); return;
L_08B5ACC8:
    rt.unsupported(0x08B5ACCCu, 0x08B5ACC0u, "control flow in delay slot"); return;
L_08B5ACD0:
    rt.unsupported(0x08B5ACD4u, 0x08B5ACC8u, "control flow in delay slot"); return;
L_08B5ACD8:
    rt.unsupported(0x08B5ACDCu, 0x08B5ACD0u, "control flow in delay slot"); return;
L_08B5ACE0:
    rt.unsupported(0x08B5ACE4u, 0x08B5ACD8u, "control flow in delay slot"); return;
L_08B5ACE8:
    rt.unsupported(0x08B5ACECu, 0x08B5ACE0u, "control flow in delay slot"); return;
L_08B5ACF0:
    rt.unsupported(0x08B5ACF4u, 0x08B5ACE8u, "control flow in delay slot"); return;
L_08B5ACF8:
    rt.unsupported(0x08B5ACFCu, 0x08B5ACF0u, "control flow in delay slot"); return;
L_08B5AD00:
    rt.unsupported(0x08B5AD04u, 0x08B5ACF8u, "control flow in delay slot"); return;
L_08B5AD08:
    rt.unsupported(0x08B5AD0Cu, 0x08B5AD00u, "control flow in delay slot"); return;
L_08B5AD10:
    rt.unsupported(0x08B5AD14u, 0x08B5AD08u, "control flow in delay slot"); return;
L_08B5AD18:
    rt.unsupported(0x08B5AD1Cu, 0x08B5AD10u, "control flow in delay slot"); return;
L_08B5AD20:
    rt.unsupported(0x08B5AD24u, 0x08B5AD18u, "control flow in delay slot"); return;
L_08B5AD28:
    rt.unsupported(0x08B5AD2Cu, 0x08B5AD20u, "control flow in delay slot"); return;
L_08B5AD30:
    rt.unsupported(0x08B5AD34u, 0x08B5AD28u, "control flow in delay slot"); return;
L_08B5AD38:
    rt.unsupported(0x08B5AD3Cu, 0x08B5AD30u, "control flow in delay slot"); return;
L_08B5ADF0:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B5AE04;
L_08B5AE04:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5AF0C:
    // nop
    // nop
    ctx.pc = 0x0202FDC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5AF5C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020E00F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5AF74:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02BEC3B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5AFD4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B004:
    // nop
    // nop
    ctx.pc = 0x028BB250u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B08C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B0B4:
    // nop
    // nop
    ctx.pc = 0x028BAD20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B148:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02BF78A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B1A8:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021E1410u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B248:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B398:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02BF8C20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B3AC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B3D4:
    // nop
    // nop
    ctx.pc = 0x028BAD20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B464:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B5B4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C03EF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B64C:
    // nop
    // nop
    ctx.pc = 0x02B13F90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B65C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028BFDD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B704:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C04840u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B7BC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B874:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C05F60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B90C:
    // nop
    // nop
    ctx.pc = 0x02B13F90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B91C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B944:
    // nop
    // nop
    ctx.pc = 0x026767E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B9DC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BA9C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C07A30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BAAC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021E1410u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BADC:
    // nop
    // nop
    ctx.pc = 0x028BB250u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BB4C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BCAC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02BEC270u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BD0C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BDC4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C0C3E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BE74:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C0D060u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BED4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283F7B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BF94:
    rt.unsupported(0x08B5BF94u, 0x00000035u, "special? not lowered yet"); return;
L_08B5BFF0:
    { const bool branch_taken = static_cast<std::int32_t>(0u) <= 0;
    (void)(0u & 89u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 3u, 0x08B5C008u>(ctx, &aot_mem); return;
      }
      goto L_08B5BFF8;
    }
L_08B5BFF8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<5u, 1u>(vfpu_d); }
    rt.unsupported(0x08B5BFFCu, 0xC0000001u, "unknown not lowered yet"); return;
}

void recomp_unit_0213(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0213_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_213(Runtime &runtime) {
    runtime.register_generated_unit(213u, 0x08B58000u, 16384u, &recomp_unit_0213, &recomp_unit_0213_entry);
    runtime.register_function(0x08B58000u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58028u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58050u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58080u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58098u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580E8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58104u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58128u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5813Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58174u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B581A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B581C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B581F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58200u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5820Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58220u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5822Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58238u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58258u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5826Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5827Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58294u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5829Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582ACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582E8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58308u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5831Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58330u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5833Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58358u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58360u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58390u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5839Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B583A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B583B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B583D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B583DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B583F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58408u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58418u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58424u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58438u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58450u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5846Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58484u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58498u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B584A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B584A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B584D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B584E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58514u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5853Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58544u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58560u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58568u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58574u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5858Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58590u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585B8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585E8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58604u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5861Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58628u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58630u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5863Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5864Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58658u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58664u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58690u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58698u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B586B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B586D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B586E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B586F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B586FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58718u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58724u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5872Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58734u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5873Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58754u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5875Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58764u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58770u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5878Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B587A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B587C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B587E0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B587F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B587FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58808u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5881Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58824u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58834u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58844u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5884Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58858u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58868u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58870u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58878u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58880u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5888Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B588C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B588F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B588F8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58920u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58930u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58950u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58968u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B589D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B589D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58A64u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58A80u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58B00u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58C0Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58EACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58EB8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58ED8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58F2Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59054u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5906Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5912Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59144u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5921Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5922Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59244u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5925Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59274u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5928Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B592A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B592BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B592D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B592ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59304u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5931Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59334u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59354u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59364u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5937Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59394u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B593ACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B593C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B593DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B593F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5940Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59424u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5943Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59454u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5946Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59484u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B594A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B594B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B594CCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B594E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B594FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59514u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5952Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59544u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5955Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59574u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5958Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B595A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B595BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B595DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B595ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59604u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5961Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59634u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5964Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59664u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5967Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59694u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B596ACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B596C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B596DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B596F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5970Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5972Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5973Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59754u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5976Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59784u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5979Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B597B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B597CCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B597E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B597FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59814u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5982Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59844u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59864u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59874u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5988Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B598A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B598BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B598D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B598ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59904u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5991Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59934u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5994Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59964u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5997Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5999Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B599ACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B599C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B599DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B599F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A0Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A24u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A3Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A54u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A6Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A84u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A9Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59AB4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59AD4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59AE4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59AFCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59B14u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59B2Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59B44u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59B5Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59B74u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59B8Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59BA4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59BBCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59BD4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59BECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59C0Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59CB8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D2Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D58u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D60u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D88u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59E88u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59EC0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59EE8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59EF0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59F00u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59F24u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59F44u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59FC8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A1ACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A204u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A25Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A2B8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A2E0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A490u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A680u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A6D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A6E8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A708u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A718u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A72Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A770u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A7A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A7B8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A7E0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A7E8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A7F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A808u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A818u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A88Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A890u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A8E0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A904u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A908u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A930u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A940u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A948u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A950u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A958u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A960u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A968u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A970u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A978u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A980u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A988u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A990u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A998u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9B8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9E0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9E8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9F8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA00u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA08u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA10u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA18u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA20u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA28u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA30u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA38u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA40u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA50u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA58u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA60u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA68u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA70u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA78u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA80u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA88u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA90u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA98u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAA0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAA8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAB0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAB8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAC0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAC8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAD0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAD8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAE0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAE8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAF0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAF8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB00u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB08u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB10u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB18u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB20u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB28u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB30u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB38u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB40u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB50u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB58u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB60u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB68u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB70u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB78u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB80u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB88u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB90u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB98u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABA0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABA8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABB0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABB8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABC0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABC8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABD0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABD8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABE0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABE8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABF0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABF8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC00u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC08u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC10u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC18u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC20u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC28u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC30u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC38u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC40u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC50u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC58u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC60u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC68u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC70u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC78u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC80u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC88u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC90u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC98u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACA0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACA8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACB0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACB8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACC0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACC8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACD0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACD8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACE0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACE8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACF0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACF8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AD00u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AD08u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AD10u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AD18u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AD20u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AD28u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AD30u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AD38u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ADF0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AE04u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AF0Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AF5Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AF74u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AFD4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B004u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B08Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B0B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B148u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B1A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B248u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B398u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B3ACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B3D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B464u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B5B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B64Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B65Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B704u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B7BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B874u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B90Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B91Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B944u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B9DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BA9Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BAACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BADCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BB4Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BCACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BD0Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BDC4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BE74u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BED4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BF94u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BFF0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BFF8u, &recomp_unit_0213, "recomp_unit_0213");
}
} // namespace psprecomp
