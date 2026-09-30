#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0051[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 12,
    0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 27, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0,
    0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54,
    0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0,
    88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0,
    0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107,
    0, 0, 108, 0, 0, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 136, 0,
    0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 141, 0, 0, 142, 143, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 146, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 151, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0,
    0, 157, 158, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 162, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 169, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0,
    172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0,
    177, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 189, 0, 0, 0, 0, 190, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 195, 196, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 202, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0,
    0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 213, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219,
    0, 0, 0, 0, 0, 0, 220, 221, 0, 0, 222, 0, 223, 0, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 228, 229, 0,
    230, 0, 0, 231, 0, 232, 0, 233, 0, 234, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 244, 0, 245, 0, 246, 0, 0,
    247, 0, 0, 248, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 254, 0, 255,
    0, 0, 256, 0, 257, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 262, 0, 0, 263, 0, 264, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 269, 0, 0, 0, 0, 270, 0,
    0, 271, 0, 272, 0, 0, 273, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0,
    0, 278, 0, 279, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0,
    0, 0, 287, 0, 0, 288, 0, 289, 0, 290, 0, 0, 291, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 299, 0, 300, 0, 301,
    0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 309, 0,
    310, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 317, 0, 0, 0,
    0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0,
    0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0,
    337, 0, 338, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 343, 0, 344, 0, 0, 345, 0, 0, 346, 347, 0, 0,
    0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 351, 0, 0, 352, 0, 0, 0,
    353, 0, 0, 354, 0, 355, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0,
    0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383,
    0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 392,
    0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0,
    0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0,
    408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0,
    0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430,
    0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0,
    0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447,
    0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 454, 0,
    0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0,
    0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0,
    0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 475, 0, 0,
    0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0,
    0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0,
    0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0,
    497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0,
    0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505, 506, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0,
    0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0,
    0, 526, 0, 527, 0, 528, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 532, 0, 0, 0, 0, 533, 0, 0,
    0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 541,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 547,
    0, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0,
    554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 557, 0, 558, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 566, 0, 0, 0, 567,
    0, 0, 0, 568, 0, 569, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 574, 0, 0,
    0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 0, 577, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    579, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 584,
    0, 0, 585, 0, 0, 586, 587, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 592, 0,
    593, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 596, 0, 597, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 601, 0, 0, 602,
};
void recomp_unit_0051_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088D0000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0051[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088D0000;
    case 2u: goto L_088D001C;
    case 3u: goto L_088D0048;
    case 4u: goto L_088D0054;
    case 5u: goto L_088D0084;
    case 6u: goto L_088D00AC;
    case 7u: goto L_088D00BC;
    case 8u: goto L_088D00C4;
    case 9u: goto L_088D00CC;
    case 10u: goto L_088D00E8;
    case 11u: goto L_088D00F0;
    case 12u: goto L_088D00FC;
    case 13u: goto L_088D0108;
    case 14u: goto L_088D014C;
    case 15u: goto L_088D026C;
    case 16u: goto L_088D027C;
    case 17u: goto L_088D028C;
    case 18u: goto L_088D0314;
    case 19u: goto L_088D0330;
    case 20u: goto L_088D034C;
    case 21u: goto L_088D0368;
    case 22u: goto L_088D0384;
    case 23u: goto L_088D03A0;
    case 24u: goto L_088D03BC;
    case 25u: goto L_088D03D8;
    case 26u: goto L_088D03F4;
    case 27u: goto L_088D03F8;
    case 28u: goto L_088D0420;
    case 29u: goto L_088D04E8;
    case 30u: goto L_088D0514;
    case 31u: goto L_088D0520;
    case 32u: goto L_088D064C;
    case 33u: goto L_088D0668;
    case 34u: goto L_088D0690;
    case 35u: goto L_088D06A8;
    case 36u: goto L_088D0780;
    case 37u: goto L_088D0798;
    case 38u: goto L_088D086C;
    case 39u: goto L_088D0884;
    case 40u: goto L_088D08C0;
    case 41u: goto L_088D090C;
    case 42u: goto L_088D0A38;
    case 43u: goto L_088D0A4C;
    case 44u: goto L_088D0A90;
    case 45u: goto L_088D0AF8;
    case 46u: goto L_088D0BEC;
    case 47u: goto L_088D0C04;
    case 48u: goto L_088D0C3C;
    case 49u: goto L_088D0C88;
    case 50u: goto L_088D0DC4;
    case 51u: goto L_088D0DDC;
    case 52u: goto L_088D0E0C;
    case 53u: goto L_088D0E64;
    case 54u: goto L_088D0F7C;
    case 55u: goto L_088D0F94;
    case 56u: goto L_088D0FC4;
    case 57u: goto L_088D101C;
    case 58u: goto L_088D1134;
    case 59u: goto L_088D114C;
    case 60u: goto L_088D1184;
    case 61u: goto L_088D11E8;
    case 62u: goto L_088D1300;
    case 63u: goto L_088D1318;
    case 64u: goto L_088D1358;
    case 65u: goto L_088D13B0;
    case 66u: goto L_088D1448;
    case 67u: goto L_088D1460;
    case 68u: goto L_088D1490;
    case 69u: goto L_088D14DC;
    case 70u: goto L_088D1570;
    case 71u: goto L_088D1588;
    case 72u: goto L_088D15B8;
    case 73u: goto L_088D15F8;
    case 74u: goto L_088D1684;
    case 75u: goto L_088D169C;
    case 76u: goto L_088D16E0;
    case 77u: goto L_088D1708;
    case 78u: goto L_088D1788;
    case 79u: goto L_088D17B0;
    case 80u: goto L_088D17C0;
    case 81u: goto L_088D1820;
    case 82u: goto L_088D18B8;
    case 83u: goto L_088D18C4;
    case 84u: goto L_088D18D0;
    case 85u: goto L_088D18DC;
    case 86u: goto L_088D18E8;
    case 87u: goto L_088D18F4;
    case 88u: goto L_088D1900;
    case 89u: goto L_088D190C;
    case 90u: goto L_088D1918;
    case 91u: goto L_088D1924;
    case 92u: goto L_088D1930;
    case 93u: goto L_088D193C;
    case 94u: goto L_088D1948;
    case 95u: goto L_088D1954;
    case 96u: goto L_088D1960;
    case 97u: goto L_088D196C;
    case 98u: goto L_088D1978;
    case 99u: goto L_088D1984;
    case 100u: goto L_088D1990;
    case 101u: goto L_088D199C;
    case 102u: goto L_088D19A8;
    case 103u: goto L_088D19B4;
    case 104u: goto L_088D19C0;
    case 105u: goto L_088D19CC;
    case 106u: goto L_088D19D8;
    case 107u: goto L_088D19FC;
    case 108u: goto L_088D1A08;
    case 109u: goto L_088D1A18;
    case 110u: goto L_088D1A20;
    case 111u: goto L_088D1A28;
    case 112u: goto L_088D1A30;
    case 113u: goto L_088D1A40;
    case 114u: goto L_088D1A54;
    case 115u: goto L_088D1A80;
    case 116u: goto L_088D1A88;
    case 117u: goto L_088D1A9C;
    case 118u: goto L_088D1AB0;
    case 119u: goto L_088D1AC0;
    case 120u: goto L_088D1AD0;
    case 121u: goto L_088D1ADC;
    case 122u: goto L_088D1AF8;
    case 123u: goto L_088D1B18;
    case 124u: goto L_088D1B24;
    case 125u: goto L_088D1B30;
    case 126u: goto L_088D1B38;
    case 127u: goto L_088D1B50;
    case 128u: goto L_088D1B58;
    case 129u: goto L_088D1B70;
    case 130u: goto L_088D1B9C;
    case 131u: goto L_088D1BA8;
    case 132u: goto L_088D1BD4;
    case 133u: goto L_088D1BDC;
    case 134u: goto L_088D1BE4;
    case 135u: goto L_088D1BEC;
    case 136u: goto L_088D1BF8;
    case 137u: goto L_088D1C08;
    case 138u: goto L_088D1C14;
    case 139u: goto L_088D1C38;
    case 140u: goto L_088D1C40;
    case 141u: goto L_088D1C50;
    case 142u: goto L_088D1C5C;
    case 143u: goto L_088D1C60;
    case 144u: goto L_088D1C70;
    case 145u: goto L_088D1D00;
    case 146u: goto L_088D1D0C;
    case 147u: goto L_088D1D10;
    case 148u: goto L_088D1D28;
    case 149u: goto L_088D1D44;
    case 150u: goto L_088D1DF8;
    case 151u: goto L_088D1E04;
    case 152u: goto L_088D1E08;
    case 153u: goto L_088D1E20;
    case 154u: goto L_088D1E30;
    case 155u: goto L_088D1E6C;
    case 156u: goto L_088D1E74;
    case 157u: goto L_088D1E84;
    case 158u: goto L_088D1E88;
    case 159u: goto L_088D1E90;
    case 160u: goto L_088D1EA0;
    case 161u: goto L_088D1EB4;
    case 162u: goto L_088D1EBC;
    case 163u: goto L_088D1EC8;
    case 164u: goto L_088D1EDC;
    case 165u: goto L_088D1EF8;
    case 166u: goto L_088D1F28;
    case 167u: goto L_088D1F38;
    case 168u: goto L_088D1F50;
    case 169u: goto L_088D1F54;
    case 170u: goto L_088D1F64;
    case 171u: goto L_088D1F78;
    case 172u: goto L_088D1F80;
    case 173u: goto L_088D1F94;
    case 174u: goto L_088D1FB0;
    case 175u: goto L_088D1FE0;
    case 176u: goto L_088D1FF0;
    case 177u: goto L_088D2000;
    case 178u: goto L_088D200C;
    case 179u: goto L_088D2018;
    case 180u: goto L_088D2020;
    case 181u: goto L_088D2034;
    case 182u: goto L_088D203C;
    case 183u: goto L_088D2050;
    case 184u: goto L_088D206C;
    case 185u: goto L_088D20BC;
    case 186u: goto L_088D20C8;
    case 187u: goto L_088D20E0;
    case 188u: goto L_088D20F8;
    case 189u: goto L_088D2108;
    case 190u: goto L_088D211C;
    case 191u: goto L_088D2120;
    case 192u: goto L_088D2128;
    case 193u: goto L_088D2148;
    case 194u: goto L_088D2158;
    case 195u: goto L_088D216C;
    case 196u: goto L_088D2170;
    case 197u: goto L_088D2178;
    case 198u: goto L_088D2198;
    case 199u: goto L_088D21A0;
    case 200u: goto L_088D21B0;
    case 201u: goto L_088D21C0;
    case 202u: goto L_088D21D4;
    case 203u: goto L_088D21D8;
    case 204u: goto L_088D21E4;
    case 205u: goto L_088D21F8;
    case 206u: goto L_088D2208;
    case 207u: goto L_088D2210;
    case 208u: goto L_088D2228;
    case 209u: goto L_088D2258;
    case 210u: goto L_088D2294;
    case 211u: goto L_088D22A4;
    case 212u: goto L_088D22B4;
    case 213u: goto L_088D22B8;
    case 214u: goto L_088D22C8;
    case 215u: goto L_088D22D0;
    case 216u: goto L_088D22E4;
    case 217u: goto L_088D2310;
    case 218u: goto L_088D2330;
    case 219u: goto L_088D237C;
    case 220u: goto L_088D2398;
    case 221u: goto L_088D239C;
    case 222u: goto L_088D23A8;
    case 223u: goto L_088D23B0;
    case 224u: goto L_088D23C0;
    case 225u: goto L_088D23C8;
    case 226u: goto L_088D23D0;
    case 227u: goto L_088D23D8;
    case 228u: goto L_088D23F4;
    case 229u: goto L_088D23F8;
    case 230u: goto L_088D2400;
    case 231u: goto L_088D240C;
    case 232u: goto L_088D2414;
    case 233u: goto L_088D241C;
    case 234u: goto L_088D2424;
    case 235u: goto L_088D2428;
    case 236u: goto L_088D2450;
    case 237u: goto L_088D2484;
    case 238u: goto L_088D2494;
    case 239u: goto L_088D24A4;
    case 240u: goto L_088D24B0;
    case 241u: goto L_088D24B8;
    case 242u: goto L_088D24CC;
    case 243u: goto L_088D24DC;
    case 244u: goto L_088D24E4;
    case 245u: goto L_088D24EC;
    case 246u: goto L_088D24F4;
    case 247u: goto L_088D2500;
    case 248u: goto L_088D250C;
    case 249u: goto L_088D2510;
    case 250u: goto L_088D2530;
    case 251u: goto L_088D2558;
    case 252u: goto L_088D2564;
    case 253u: goto L_088D256C;
    case 254u: goto L_088D2574;
    case 255u: goto L_088D257C;
    case 256u: goto L_088D2588;
    case 257u: goto L_088D2590;
    case 258u: goto L_088D2598;
    case 259u: goto L_088D25A4;
    case 260u: goto L_088D25C0;
    case 261u: goto L_088D25DC;
    case 262u: goto L_088D2608;
    case 263u: goto L_088D2614;
    case 264u: goto L_088D261C;
    case 265u: goto L_088D262C;
    case 266u: goto L_088D2634;
    case 267u: goto L_088D2650;
    case 268u: goto L_088D2658;
    case 269u: goto L_088D2664;
    case 270u: goto L_088D2678;
    case 271u: goto L_088D2684;
    case 272u: goto L_088D268C;
    case 273u: goto L_088D2698;
    case 274u: goto L_088D26A0;
    case 275u: goto L_088D26B0;
    case 276u: goto L_088D26C8;
    case 277u: goto L_088D26F8;
    case 278u: goto L_088D2704;
    case 279u: goto L_088D270C;
    case 280u: goto L_088D271C;
    case 281u: goto L_088D2724;
    case 282u: goto L_088D2740;
    case 283u: goto L_088D2748;
    case 284u: goto L_088D2754;
    case 285u: goto L_088D2768;
    case 286u: goto L_088D2774;
    case 287u: goto L_088D2788;
    case 288u: goto L_088D2794;
    case 289u: goto L_088D279C;
    case 290u: goto L_088D27A4;
    case 291u: goto L_088D27B0;
    case 292u: goto L_088D27B8;
    case 293u: goto L_088D27C8;
    case 294u: goto L_088D27E4;
    case 295u: goto L_088D282C;
    case 296u: goto L_088D284C;
    case 297u: goto L_088D2858;
    case 298u: goto L_088D2860;
    case 299u: goto L_088D286C;
    case 300u: goto L_088D2874;
    case 301u: goto L_088D287C;
    case 302u: goto L_088D289C;
    case 303u: goto L_088D28A4;
    case 304u: goto L_088D28B4;
    case 305u: goto L_088D28BC;
    case 306u: goto L_088D28CC;
    case 307u: goto L_088D28E4;
    case 308u: goto L_088D28EC;
    case 309u: goto L_088D28F8;
    case 310u: goto L_088D2900;
    case 311u: goto L_088D2908;
    case 312u: goto L_088D2928;
    case 313u: goto L_088D2934;
    case 314u: goto L_088D2944;
    case 315u: goto L_088D2958;
    case 316u: goto L_088D2968;
    case 317u: goto L_088D2970;
    case 318u: goto L_088D2988;
    case 319u: goto L_088D2998;
    case 320u: goto L_088D29AC;
    case 321u: goto L_088D29B4;
    case 322u: goto L_088D29D8;
    case 323u: goto L_088D2A08;
    case 324u: goto L_088D2A34;
    case 325u: goto L_088D2A4C;
    case 326u: goto L_088D2A54;
    case 327u: goto L_088D2A70;
    case 328u: goto L_088D2A78;
    case 329u: goto L_088D2A8C;
    case 330u: goto L_088D2AA0;
    case 331u: goto L_088D2AB0;
    case 332u: goto L_088D2AC4;
    case 333u: goto L_088D2ACC;
    case 334u: goto L_088D2AD4;
    case 335u: goto L_088D2AE4;
    case 336u: goto L_088D2AF8;
    case 337u: goto L_088D2B00;
    case 338u: goto L_088D2B08;
    case 339u: goto L_088D2B1C;
    case 340u: goto L_088D2B24;
    case 341u: goto L_088D2B38;
    case 342u: goto L_088D2B48;
    case 343u: goto L_088D2B50;
    case 344u: goto L_088D2B58;
    case 345u: goto L_088D2B64;
    case 346u: goto L_088D2B70;
    case 347u: goto L_088D2B74;
    case 348u: goto L_088D2B8C;
    case 349u: goto L_088D2BD0;
    case 350u: goto L_088D2BDC;
    case 351u: goto L_088D2BE4;
    case 352u: goto L_088D2BF0;
    case 353u: goto L_088D2C00;
    case 354u: goto L_088D2C0C;
    case 355u: goto L_088D2C14;
    case 356u: goto L_088D2C1C;
    case 357u: goto L_088D2C24;
    case 358u: goto L_088D2C40;
    case 359u: goto L_088D2C5C;
    case 360u: goto L_088D2C78;
    case 361u: goto L_088D2C94;
    case 362u: goto L_088D2CA4;
    case 363u: goto L_088D2CC0;
    case 364u: goto L_088D2CD4;
    case 365u: goto L_088D2CD8;
    case 366u: goto L_088D2CEC;
    case 367u: goto L_088D2D18;
    case 368u: goto L_088D2D20;
    case 369u: goto L_088D2D38;
    case 370u: goto L_088D2D40;
    case 371u: goto L_088D2D50;
    case 372u: goto L_088D2D78;
    case 373u: goto L_088D2DA4;
    case 374u: goto L_088D2DB4;
    case 375u: goto L_088D2DD0;
    case 376u: goto L_088D2DD4;
    case 377u: goto L_088D2E04;
    case 378u: goto L_088D2E24;
    case 379u: goto L_088D2E34;
    case 380u: goto L_088D2E44;
    case 381u: goto L_088D2E4C;
    case 382u: goto L_088D2E60;
    case 383u: goto L_088D2E7C;
    case 384u: goto L_088D2E94;
    case 385u: goto L_088D2EB8;
    case 386u: goto L_088D2EE8;
    case 387u: goto L_088D2F20;
    case 388u: goto L_088D2F44;
    case 389u: goto L_088D2F50;
    case 390u: goto L_088D2F58;
    case 391u: goto L_088D2F68;
    case 392u: goto L_088D2F7C;
    case 393u: goto L_088D2F84;
    case 394u: goto L_088D2FBC;
    case 395u: goto L_088D2FE0;
    case 396u: goto L_088D2FF0;
    case 397u: goto L_088D3010;
    case 398u: goto L_088D3024;
    case 399u: goto L_088D3050;
    case 400u: goto L_088D3058;
    case 401u: goto L_088D3078;
    case 402u: goto L_088D308C;
    case 403u: goto L_088D30A0;
    case 404u: goto L_088D30B0;
    case 405u: goto L_088D30BC;
    case 406u: goto L_088D30CC;
    case 407u: goto L_088D30EC;
    case 408u: goto L_088D3100;
    case 409u: goto L_088D312C;
    case 410u: goto L_088D3134;
    case 411u: goto L_088D3148;
    case 412u: goto L_088D3174;
    case 413u: goto L_088D317C;
    case 414u: goto L_088D31A4;
    case 415u: goto L_088D31AC;
    case 416u: goto L_088D31E4;
    case 417u: goto L_088D31F8;
    case 418u: goto L_088D320C;
    case 419u: goto L_088D321C;
    case 420u: goto L_088D3230;
    case 421u: goto L_088D3244;
    case 422u: goto L_088D3254;
    case 423u: goto L_088D3268;
    case 424u: goto L_088D3270;
    case 425u: goto L_088D329C;
    case 426u: goto L_088D32B8;
    case 427u: goto L_088D32C0;
    case 428u: goto L_088D32C8;
    case 429u: goto L_088D32E8;
    case 430u: goto L_088D32FC;
    case 431u: goto L_088D3310;
    case 432u: goto L_088D3320;
    case 433u: goto L_088D3350;
    case 434u: goto L_088D335C;
    case 435u: goto L_088D336C;
    case 436u: goto L_088D338C;
    case 437u: goto L_088D33A0;
    case 438u: goto L_088D33CC;
    case 439u: goto L_088D33D4;
    case 440u: goto L_088D33E8;
    case 441u: goto L_088D3414;
    case 442u: goto L_088D341C;
    case 443u: goto L_088D3430;
    case 444u: goto L_088D3444;
    case 445u: goto L_088D3454;
    case 446u: goto L_088D3468;
    case 447u: goto L_088D347C;
    case 448u: goto L_088D348C;
    case 449u: goto L_088D349C;
    case 450u: goto L_088D34AC;
    case 451u: goto L_088D34C4;
    case 452u: goto L_088D34DC;
    case 453u: goto L_088D34E4;
    case 454u: goto L_088D34F8;
    case 455u: goto L_088D350C;
    case 456u: goto L_088D351C;
    case 457u: goto L_088D3530;
    case 458u: goto L_088D3544;
    case 459u: goto L_088D3554;
    case 460u: goto L_088D3564;
    case 461u: goto L_088D3574;
    case 462u: goto L_088D358C;
    case 463u: goto L_088D35A4;
    case 464u: goto L_088D35AC;
    case 465u: goto L_088D35C0;
    case 466u: goto L_088D35D4;
    case 467u: goto L_088D35E4;
    case 468u: goto L_088D35F8;
    case 469u: goto L_088D360C;
    case 470u: goto L_088D361C;
    case 471u: goto L_088D362C;
    case 472u: goto L_088D363C;
    case 473u: goto L_088D3654;
    case 474u: goto L_088D366C;
    case 475u: goto L_088D3674;
    case 476u: goto L_088D3688;
    case 477u: goto L_088D369C;
    case 478u: goto L_088D36AC;
    case 479u: goto L_088D36C0;
    case 480u: goto L_088D36D4;
    case 481u: goto L_088D36E4;
    case 482u: goto L_088D36F4;
    case 483u: goto L_088D3704;
    case 484u: goto L_088D371C;
    case 485u: goto L_088D3734;
    case 486u: goto L_088D373C;
    case 487u: goto L_088D3750;
    case 488u: goto L_088D3764;
    case 489u: goto L_088D3774;
    case 490u: goto L_088D3788;
    case 491u: goto L_088D379C;
    case 492u: goto L_088D37AC;
    case 493u: goto L_088D37C4;
    case 494u: goto L_088D37CC;
    case 495u: goto L_088D37EC;
    case 496u: goto L_088D37F4;
    case 497u: goto L_088D3800;
    case 498u: goto L_088D3818;
    case 499u: goto L_088D3840;
    case 500u: goto L_088D3848;
    case 501u: goto L_088D3864;
    case 502u: goto L_088D386C;
    case 503u: goto L_088D3888;
    case 504u: goto L_088D38A8;
    case 505u: goto L_088D38C0;
    case 506u: goto L_088D38C4;
    case 507u: goto L_088D38D4;
    case 508u: goto L_088D38F4;
    case 509u: goto L_088D3940;
    case 510u: goto L_088D3948;
    case 511u: goto L_088D3950;
    case 512u: goto L_088D3980;
    case 513u: goto L_088D3994;
    case 514u: goto L_088D39A8;
    case 515u: goto L_088D39BC;
    case 516u: goto L_088D39D0;
    case 517u: goto L_088D39E4;
    case 518u: goto L_088D39F8;
    case 519u: goto L_088D3A04;
    case 520u: goto L_088D3A18;
    case 521u: goto L_088D3A2C;
    case 522u: goto L_088D3A3C;
    case 523u: goto L_088D3A50;
    case 524u: goto L_088D3A64;
    case 525u: goto L_088D3A74;
    case 526u: goto L_088D3A84;
    case 527u: goto L_088D3A8C;
    case 528u: goto L_088D3A94;
    case 529u: goto L_088D3A9C;
    case 530u: goto L_088D3AAC;
    case 531u: goto L_088D3AD8;
    case 532u: goto L_088D3AE0;
    case 533u: goto L_088D3AF4;
    case 534u: goto L_088D3B08;
    case 535u: goto L_088D3B18;
    case 536u: goto L_088D3B2C;
    case 537u: goto L_088D3B40;
    case 538u: goto L_088D3B50;
    case 539u: goto L_088D3B60;
    case 540u: goto L_088D3B6C;
    case 541u: goto L_088D3B7C;
    case 542u: goto L_088D3BA8;
    case 543u: goto L_088D3BB0;
    case 544u: goto L_088D3BC4;
    case 545u: goto L_088D3BD8;
    case 546u: goto L_088D3BE8;
    case 547u: goto L_088D3BFC;
    case 548u: goto L_088D3C10;
    case 549u: goto L_088D3C20;
    case 550u: goto L_088D3C30;
    case 551u: goto L_088D3C3C;
    case 552u: goto L_088D3C4C;
    case 553u: goto L_088D3C78;
    case 554u: goto L_088D3C80;
    case 555u: goto L_088D3C9C;
    case 556u: goto L_088D3CAC;
    case 557u: goto L_088D3CB8;
    case 558u: goto L_088D3CC0;
    case 559u: goto L_088D3CCC;
    case 560u: goto L_088D3CDC;
    case 561u: goto L_088D3D24;
    case 562u: goto L_088D3D2C;
    case 563u: goto L_088D3D3C;
    case 564u: goto L_088D3D48;
    case 565u: goto L_088D3D60;
    case 566u: goto L_088D3D6C;
    case 567u: goto L_088D3D7C;
    case 568u: goto L_088D3D8C;
    case 569u: goto L_088D3D94;
    case 570u: goto L_088D3DA0;
    case 571u: goto L_088D3DA8;
    case 572u: goto L_088D3DC8;
    case 573u: goto L_088D3DD8;
    case 574u: goto L_088D3DF4;
    case 575u: goto L_088D3E10;
    case 576u: goto L_088D3E1C;
    case 577u: goto L_088D3E38;
    case 578u: goto L_088D3E3C;
    case 579u: goto L_088D3E80;
    case 580u: goto L_088D3E84;
    case 581u: goto L_088D3ED0;
    case 582u: goto L_088D3ED8;
    case 583u: goto L_088D3EEC;
    case 584u: goto L_088D3EFC;
    case 585u: goto L_088D3F08;
    case 586u: goto L_088D3F14;
    case 587u: goto L_088D3F18;
    case 588u: goto L_088D3F3C;
    case 589u: goto L_088D3F44;
    case 590u: goto L_088D3F64;
    case 591u: goto L_088D3F6C;
    case 592u: goto L_088D3F78;
    case 593u: goto L_088D3F80;
    case 594u: goto L_088D3F94;
    case 595u: goto L_088D3FA4;
    case 596u: goto L_088D3FB4;
    case 597u: goto L_088D3FBC;
    case 598u: goto L_088D3FC8;
    case 599u: goto L_088D3FD8;
    case 600u: goto L_088D3FE8;
    case 601u: goto L_088D3FF0;
    case 602u: goto L_088D3FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088D0000:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11036)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11040)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D0048;
      }
      goto L_088D001C;
    }
L_088D001C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22912)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15952)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11008)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(17536), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11012)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11016)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D0048;
L_088D0048:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22240)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22912)));
        goto L_088D0084;
    }
    goto L_088D0054;
L_088D0054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22912)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15952)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11044)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(17552), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11048)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11052)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D00AC;
      }
      goto L_088D0084;
    }
L_088D0084:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15952)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11020)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(17552), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11024)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11028)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D00AC;
L_088D00AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6856)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D00E8;
      }
      goto L_088D00BC;
    }
L_088D00BC:
    ctx.gpr[31] = (0x088D00C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 421u, 0x08ACA8D4u>(ctx, &aot_mem) && ctx.pc == 0x088D00C4u) goto L_088D00C4;
    return;
L_088D00C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_088D00E8;
      }
      goto L_088D00CC;
    }
L_088D00CC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(17536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(17552), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D00E8;
L_088D00E8:
    ctx.gpr[31] = (0x088D00F0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 397u, 0x088CF174u>(ctx, &aot_mem) && ctx.pc == 0x088D00F0u) goto L_088D00F0;
    return;
L_088D00F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21112)));
    ctx.gpr[31] = (0x088D00FCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 843u, 0x08AD3564u>(ctx, &aot_mem) && ctx.pc == 0x088D00FCu) goto L_088D00FC;
    return;
L_088D00FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D027C;
      }
      goto L_088D0108;
    }
L_088D0108:
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22912)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11056)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15952)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (2274u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11060)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17568));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11064)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088D014Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21116)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 843u, 0x08AD3564u>(ctx, &aot_mem) && ctx.pc == 0x088D014Cu) goto L_088D014C;
    return;
L_088D014C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088D026Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21116)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 854u, 0x08AD364Cu>(ctx, &aot_mem) && ctx.pc == 0x088D026Cu) goto L_088D026C;
    return;
L_088D026C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088D027Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 135u, 0x08A5D14Cu>(ctx, &aot_mem) && ctx.pc == 0x088D027Cu) goto L_088D027C;
    return;
L_088D027C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 257 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D03F8;
      }
      goto L_088D028C;
    }
L_088D028C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (15232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16448u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[18] = (2274u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17536)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[7] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(17536));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(17552));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(17568));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088D0314;
    }
    goto L_088D0314;
L_088D0314:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(17536), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088D0330;
    }
    goto L_088D0330;
L_088D0330:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088D034C;
    }
    goto L_088D034C;
L_088D034C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17552)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088D0368;
    }
    goto L_088D0368;
L_088D0368:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17552), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088D0384;
    }
    goto L_088D0384;
L_088D0384:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088D03A0;
    }
    goto L_088D03A0;
L_088D03A0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17536)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088D03BC;
    }
    goto L_088D03BC;
L_088D03BC:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(17568), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088D03D8;
    }
    goto L_088D03D8;
L_088D03D8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088D03F4;
    }
    goto L_088D03F4;
L_088D03F4:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088D03F8;
L_088D03F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0420:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21060)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21056)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21088)));
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[14] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(21064), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(21084)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(21092), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(21100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (16281u << 16u);
    ctx.gpr[8] = (16268u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.gpr[13] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[24] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(21072), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(21068), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(21076), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(21080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21096), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(21104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D04E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[7] = (2176u << 16u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 96u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17632));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D0514u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(25752));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x088D0514u) goto L_088D0514;
    return;
L_088D0514:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D0520:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32016));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32496));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32624));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32752));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32656));
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32592));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[5] = (2231u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32528));
    ctx.gpr[17] = (2274u << 16u);
    ctx.gpr[4] = (49152u << 16u);
    ctx.gpr[23] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[30]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 17u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(17632));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(31920));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_088D064C;
L_088D064C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D0668u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 315u, 0x08869F20u>(ctx, &aot_mem) && ctx.pc == 0x088D0668u) goto L_088D0668;
    return;
L_088D0668:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D0690u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 269u, 0x08A7D68Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0690u) goto L_088D0690;
    return;
L_088D0690:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_088D064C;
      }
      goto L_088D06A8;
    }
L_088D06A8:
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (15897u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | 39320u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (16140u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | 52428u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    goto L_088D0780;
L_088D0780:
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088D0780;
      }
      goto L_088D0798;
    }
L_088D0798:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (48998u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (48819u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_088D086C;
L_088D086C:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088D086C;
      }
      goto L_088D0884;
    }
L_088D0884:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (2274u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(18592));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D08C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 315u, 0x08869F20u>(ctx, &aot_mem) && ctx.pc == 0x088D08C0u) goto L_088D08C0;
    return;
L_088D08C0:
    ctx.gpr[4] = (48947u << 16u);
    ctx.gpr[5] = (49049u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D090Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 269u, 0x08A7D68Cu>(ctx, &aot_mem) && ctx.pc == 0x088D090Cu) goto L_088D090C;
    return;
L_088D090C:
    ctx.gpr[18] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (48844u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[4] | 52428u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52432u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (16166u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    goto L_088D0A38;
L_088D0A38:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088D0A38;
      }
      goto L_088D0A4C;
    }
L_088D0A4C:
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D0A90u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 315u, 0x08869F20u>(ctx, &aot_mem) && ctx.pc == 0x088D0A90u) goto L_088D0A90;
    return;
L_088D0A90:
    ctx.gpr[4] = (48844u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (49024u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (49056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (16281u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (48896u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088D0AF8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 269u, 0x08A7D68Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0AF8u) goto L_088D0AF8;
    return;
L_088D0AF8:
    ctx.gpr[17] = (0u | 4u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (16000u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (48819u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (49011u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (48921u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_088D0BEC;
L_088D0BEC:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088D0BEC;
      }
      goto L_088D0C04;
    }
L_088D0C04:
    ctx.gpr[4] = (48921u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(18688));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (16320u << 16u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D0C3Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 315u, 0x08869F20u>(ctx, &aot_mem) && ctx.pc == 0x088D0C3Cu) goto L_088D0C3C;
    return;
L_088D0C3C:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (49049u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088D0C88u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 269u, 0x08A7D68Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0C88u) goto L_088D0C88;
    return;
L_088D0C88:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (16217u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (48460u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (48844u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (48985u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_088D0DC4;
L_088D0DC4:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088D0DC4;
      }
      goto L_088D0DDC;
    }
L_088D0DDC:
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[6] = (16396u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(18784));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D0E0Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 315u, 0x08869F20u>(ctx, &aot_mem) && ctx.pc == 0x088D0E0Cu) goto L_088D0E0C;
    return;
L_088D0E0C:
    ctx.gpr[5] = (48793u << 16u);
    ctx.gpr[4] = (49049u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (48716u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (16281u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088D0E64u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 269u, 0x08A7D68Cu>(ctx, &aot_mem) && ctx.pc == 0x088D0E64u) goto L_088D0E64;
    return;
L_088D0E64:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (16102u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (48870u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (48665u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_088D0F7C;
L_088D0F7C:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088D0F7C;
      }
      goto L_088D0F94;
    }
L_088D0F94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[6] = (16307u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(18880));
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D0FC4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 315u, 0x08869F20u>(ctx, &aot_mem) && ctx.pc == 0x088D0FC4u) goto L_088D0FC4;
    return;
L_088D0FC4:
    ctx.gpr[5] = (48921u << 16u);
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (48665u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088D101Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 269u, 0x08A7D68Cu>(ctx, &aot_mem) && ctx.pc == 0x088D101Cu) goto L_088D101C;
    return;
L_088D101C:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (48844u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (15820u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_088D1134;
L_088D1134:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088D1134;
      }
      goto L_088D114C;
    }
L_088D114C:
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[6] = (16345u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(18976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D1184u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 315u, 0x08869F20u>(ctx, &aot_mem) && ctx.pc == 0x088D1184u) goto L_088D1184;
    return;
L_088D1184:
    ctx.gpr[5] = (48947u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (48716u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (48793u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16281u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088D11E8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 269u, 0x08A7D68Cu>(ctx, &aot_mem) && ctx.pc == 0x088D11E8u) goto L_088D11E8;
    return;
L_088D11E8:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (48844u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (48588u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (48921u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_088D1300;
L_088D1300:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088D1300;
      }
      goto L_088D1318;
    }
L_088D1318:
    ctx.gpr[4] = (48844u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[6] = (16307u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(19072));
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D1358u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 315u, 0x08869F20u>(ctx, &aot_mem) && ctx.pc == 0x088D1358u) goto L_088D1358;
    return;
L_088D1358:
    ctx.gpr[5] = (48998u << 16u);
    ctx.gpr[4] = (48947u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (48793u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[6] = (16179u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088D13B0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 269u, 0x08A7D68Cu>(ctx, &aot_mem) && ctx.pc == 0x088D13B0u) goto L_088D13B0;
    return;
L_088D13B0:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    goto L_088D1448;
L_088D1448:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088D1448;
      }
      goto L_088D1460;
    }
L_088D1460:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[6] = (16307u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(19168));
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D1490u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 315u, 0x08869F20u>(ctx, &aot_mem) && ctx.pc == 0x088D1490u) goto L_088D1490;
    return;
L_088D1490:
    ctx.gpr[4] = (48947u << 16u);
    ctx.gpr[5] = (48844u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088D14DCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 269u, 0x08A7D68Cu>(ctx, &aot_mem) && ctx.pc == 0x088D14DCu) goto L_088D14DC;
    return;
L_088D14DC:
    ctx.gpr[17] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_088D1570;
L_088D1570:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088D1570;
      }
      goto L_088D1588;
    }
L_088D1588:
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[6] = (16179u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(19264));
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D15B8u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 315u, 0x08869F20u>(ctx, &aot_mem) && ctx.pc == 0x088D15B8u) goto L_088D15B8;
    return;
L_088D15B8:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16268u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088D15F8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 269u, 0x08A7D68Cu>(ctx, &aot_mem) && ctx.pc == 0x088D15F8u) goto L_088D15F8;
    return;
L_088D15F8:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_088D1684;
L_088D1684:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088D1684;
      }
      goto L_088D169C;
    }
L_088D169C:
    ctx.gpr[5] = (48716u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[4] = (2274u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(19360));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D16E0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 315u, 0x08869F20u>(ctx, &aot_mem) && ctx.pc == 0x088D16E0u) goto L_088D16E0;
    return;
L_088D16E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088D1708u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 269u, 0x08A7D68Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1708u) goto L_088D1708;
    return;
L_088D1708:
    ctx.gpr[4] = (49353u << 16u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (49590u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 15729u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16585u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (16822u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 15729u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (16435u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32464));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 11u);
    ctx.gpr[31] = (0x088D1788u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 270u, 0x08A7D6A8u>(ctx, &aot_mem) && ctx.pc == 0x088D1788u) goto L_088D1788;
    return;
L_088D1788:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(19456));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (16908u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D17B0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 315u, 0x08869F20u>(ctx, &aot_mem) && ctx.pc == 0x088D17B0u) goto L_088D17B0;
    return;
L_088D17B0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088D17C0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 269u, 0x08A7D68Cu>(ctx, &aot_mem) && ctx.pc == 0x088D17C0u) goto L_088D17C0;
    return;
L_088D17C0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1820:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21180)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21176)));
    ctx.gpr[10] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(21184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(21192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16014u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(21188), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[4] | 14571u);
    ctx.gpr[3] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[7] = (2176u << 16u);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[12] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17632));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(25560));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 96u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(21196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D18B8u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(21200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x088D18B8u) goto L_088D18B8;
    return;
L_088D18B8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088D18C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21208));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088D18C4u) goto L_088D18C4;
    return;
L_088D18C4:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x088D18D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18592));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 582u, 0x088063D8u>(ctx, &aot_mem) && ctx.pc == 0x088D18D0u) goto L_088D18D0;
    return;
L_088D18D0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088D18DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21220));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088D18DCu) goto L_088D18DC;
    return;
L_088D18DC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x088D18E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4368));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 582u, 0x088063D8u>(ctx, &aot_mem) && ctx.pc == 0x088D18E8u) goto L_088D18E8;
    return;
L_088D18E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088D18F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21232));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088D18F4u) goto L_088D18F4;
    return;
L_088D18F4:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x088D1900u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18688));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 582u, 0x088063D8u>(ctx, &aot_mem) && ctx.pc == 0x088D1900u) goto L_088D1900;
    return;
L_088D1900:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088D190Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21244));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088D190Cu) goto L_088D190C;
    return;
L_088D190C:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x088D1918u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18784));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 582u, 0x088063D8u>(ctx, &aot_mem) && ctx.pc == 0x088D1918u) goto L_088D1918;
    return;
L_088D1918:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088D1924u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21256));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088D1924u) goto L_088D1924;
    return;
L_088D1924:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x088D1930u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18880));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 582u, 0x088063D8u>(ctx, &aot_mem) && ctx.pc == 0x088D1930u) goto L_088D1930;
    return;
L_088D1930:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088D193Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21268));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088D193Cu) goto L_088D193C;
    return;
L_088D193C:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x088D1948u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18976));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 582u, 0x088063D8u>(ctx, &aot_mem) && ctx.pc == 0x088D1948u) goto L_088D1948;
    return;
L_088D1948:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088D1954u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21280));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088D1954u) goto L_088D1954;
    return;
L_088D1954:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x088D1960u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19072));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 582u, 0x088063D8u>(ctx, &aot_mem) && ctx.pc == 0x088D1960u) goto L_088D1960;
    return;
L_088D1960:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088D196Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21292));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088D196Cu) goto L_088D196C;
    return;
L_088D196C:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x088D1978u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19168));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 582u, 0x088063D8u>(ctx, &aot_mem) && ctx.pc == 0x088D1978u) goto L_088D1978;
    return;
L_088D1978:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088D1984u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21304));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088D1984u) goto L_088D1984;
    return;
L_088D1984:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x088D1990u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19264));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 582u, 0x088063D8u>(ctx, &aot_mem) && ctx.pc == 0x088D1990u) goto L_088D1990;
    return;
L_088D1990:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088D199Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21316));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088D199Cu) goto L_088D199C;
    return;
L_088D199C:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x088D19A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19360));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 582u, 0x088063D8u>(ctx, &aot_mem) && ctx.pc == 0x088D19A8u) goto L_088D19A8;
    return;
L_088D19A8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088D19B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21328));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088D19B4u) goto L_088D19B4;
    return;
L_088D19B4:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x088D19C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19456));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 582u, 0x088063D8u>(ctx, &aot_mem) && ctx.pc == 0x088D19C0u) goto L_088D19C0;
    return;
L_088D19C0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088D19CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21340));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088D19CCu) goto L_088D19CC;
    return;
L_088D19CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D19D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088D1A28;
      }
      goto L_088D19FC;
    }
L_088D19FC:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D1A20;
      }
      goto L_088D1A08;
    }
L_088D1A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088D1A18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 201u, 0x08A591E0u>(ctx, &aot_mem) && ctx.pc == 0x088D1A18u) goto L_088D1A18;
    return;
L_088D1A18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D1A30;
      }
      goto L_088D1A20;
    }
L_088D1A20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D1A40;
      }
      goto L_088D1A28;
    }
L_088D1A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1A40;
      }
      goto L_088D1A30;
    }
L_088D1A30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D1A40;
L_088D1A40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1A54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088D1A88;
      }
      goto L_088D1A80;
    }
L_088D1A80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D1ADC;
      }
      goto L_088D1A88;
    }
L_088D1A88:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088D1A9Cu);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(13280));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088D1A9Cu) goto L_088D1A9C;
    return;
L_088D1A9C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D1AB0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x088D1AB0u) goto L_088D1AB0;
    return;
L_088D1AB0:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x088D1AC0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088D1AC0u) goto L_088D1AC0;
    return;
L_088D1AC0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D1AD0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 555u, 0x0891713Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1AD0u) goto L_088D1AD0;
    return;
L_088D1AD0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088D1ADC;
      }
      goto L_088D1ADC;
    }
L_088D1ADC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1AF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1B24;
      }
      goto L_088D1B18;
    }
L_088D1B18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1B38;
      }
      goto L_088D1B24;
    }
L_088D1B24:
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_088D1B58;
    }
    goto L_088D1B30;
L_088D1B30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1C60;
      }
      goto L_088D1B38;
    }
L_088D1B38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088D1B50u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 277u, 0x088B97C8u>(ctx, &aot_mem) && ctx.pc == 0x088D1B50u) goto L_088D1B50;
    return;
L_088D1B50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1C60;
      }
      goto L_088D1B58;
    }
L_088D1B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_088D1B9C;
      }
      goto L_088D1B70;
    }
L_088D1B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    goto L_088D1B9C;
L_088D1B9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1BDC;
      }
      goto L_088D1BA8;
    }
L_088D1BA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1BEC;
      }
      goto L_088D1BD4;
    }
L_088D1BD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1BF8;
      }
      goto L_088D1BDC;
    }
L_088D1BDC:
    ctx.gpr[31] = (0x088D1BE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 143u, 0x08A009E0u>(ctx, &aot_mem) && ctx.pc == 0x088D1BE4u) goto L_088D1BE4;
    return;
L_088D1BE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1C60;
      }
      goto L_088D1BEC;
    }
L_088D1BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088D1BF8;
L_088D1BF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1C40;
      }
      goto L_088D1C08;
    }
L_088D1C08:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088D1C38;
      }
      goto L_088D1C14;
    }
L_088D1C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    goto L_088D1C38;
L_088D1C38:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D1C5C;
      }
      goto L_088D1C40;
    }
L_088D1C40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x088D1C50u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 277u, 0x088B97C8u>(ctx, &aot_mem) && ctx.pc == 0x088D1C50u) goto L_088D1C50;
    return;
L_088D1C50:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088D1C5C;
L_088D1C5C:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_088D1C60;
L_088D1C60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1C70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1D10;
      }
      goto L_088D1D00;
    }
L_088D1D00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D1D0Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 265u, 0x088B9728u>(ctx, &aot_mem) && ctx.pc == 0x088D1D0Cu) goto L_088D1D0C;
    return;
L_088D1D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088D1D10;
L_088D1D10:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D1D28u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 352u, 0x088B9F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1D28u) goto L_088D1D28;
    return;
L_088D1D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1D44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 33 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1E08;
      }
      goto L_088D1DF8;
    }
L_088D1DF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D1E04u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 265u, 0x088B9728u>(ctx, &aot_mem) && ctx.pc == 0x088D1E04u) goto L_088D1E04;
    return;
L_088D1E04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088D1E08;
L_088D1E08:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D1E20u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 352u, 0x088B9F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1E20u) goto L_088D1E20;
    return;
L_088D1E20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1E30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088D1E74;
      }
      goto L_088D1E6C;
    }
L_088D1E6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088D1E88;
      }
      goto L_088D1E74;
    }
L_088D1E74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x088D1E84u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 3u, 0x08AA8038u>(ctx, &aot_mem) && ctx.pc == 0x088D1E84u) goto L_088D1E84;
    return;
L_088D1E84:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D1E88;
L_088D1E88:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D1EBC;
      }
      goto L_088D1E90;
    }
L_088D1E90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D1EC8;
      }
      goto L_088D1EA0;
    }
L_088D1EA0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D1EB4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    goto L_088D1C70;
L_088D1EB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088D1EDC;
      }
      goto L_088D1EBC;
    }
L_088D1EBC:
    ctx.gpr[2] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7056));
      if (branch_taken) {
          goto L_088D1EDC;
      }
      goto L_088D1EC8;
    }
L_088D1EC8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D1EDCu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_088D1FB0;
L_088D1EDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1EF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D1F28u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 7u, 0x08AA8098u>(ctx, &aot_mem) && ctx.pc == 0x088D1F28u) goto L_088D1F28;
    return;
L_088D1F28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D1F54;
      }
      goto L_088D1F38;
    }
L_088D1F38:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D1F50u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(13288));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 312u, 0x08A0152Cu>(ctx, &aot_mem) && ctx.pc == 0x088D1F50u) goto L_088D1F50;
    return;
L_088D1F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_088D1F54;
L_088D1F54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D1F80;
      }
      goto L_088D1F64;
    }
L_088D1F64:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D1F78u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    goto L_088D1C70;
L_088D1F78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088D1F94;
      }
      goto L_088D1F80;
    }
L_088D1F80:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D1F94u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_088D1FB0;
L_088D1F94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D1FB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 101 ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088D1FF0;
      }
      goto L_088D1FE0;
    }
L_088D1FE0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D1FF0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13296));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 350u, 0x08A018ACu>(ctx, &aot_mem) && ctx.pc == 0x088D1FF0u) goto L_088D1FF0;
    return;
L_088D1FF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D203C;
      }
      goto L_088D2000;
    }
L_088D2000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088D200Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 53u, 0x0892833Cu>(ctx, &aot_mem) && ctx.pc == 0x088D200Cu) goto L_088D200C;
    return;
L_088D200C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2020;
      }
      goto L_088D2018;
    }
L_088D2018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2050;
      }
      goto L_088D2020;
    }
L_088D2020:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D2034u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_088D1E30;
L_088D2034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2050;
      }
      goto L_088D203C;
    }
L_088D203C:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D2050u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_088D1EF8;
L_088D2050:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D206C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    ctx.gpr[23] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 5u);
    ctx.gpr[30] = (0u | 6u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(13288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    goto L_088D20BC;
L_088D20BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088D21A0;
      }
      goto L_088D20C8;
    }
L_088D20C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088D20E0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 64u, 0x089283E4u>(ctx, &aot_mem) && ctx.pc == 0x088D20E0u) goto L_088D20E0;
    return;
L_088D20E0:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088D2148;
      }
      goto L_088D20F8;
    }
L_088D20F8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088D2120;
      }
      goto L_088D2108;
    }
L_088D2108:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (0x088D211Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 3u, 0x08AA8038u>(ctx, &aot_mem) && ctx.pc == 0x088D211Cu) goto L_088D211C;
    return;
L_088D211C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D2120;
L_088D2120:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D2198;
      }
      goto L_088D2128;
    }
L_088D2128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D2228;
      }
      goto L_088D2148;
    }
L_088D2148:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088D2170;
      }
      goto L_088D2158;
    }
L_088D2158:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088D216Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 3u, 0x08AA8038u>(ctx, &aot_mem) && ctx.pc == 0x088D216Cu) goto L_088D216C;
    return;
L_088D216C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D2170;
L_088D2170:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D2198;
      }
      goto L_088D2178;
    }
L_088D2178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D2228;
      }
      goto L_088D2198;
    }
L_088D2198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D21D8;
      }
      goto L_088D21A0;
    }
L_088D21A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D21B0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 7u, 0x08AA8098u>(ctx, &aot_mem) && ctx.pc == 0x088D21B0u) goto L_088D21B0;
    return;
L_088D21B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D21D8;
      }
      goto L_088D21C0;
    }
L_088D21C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D21D4u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 312u, 0x08A0152Cu>(ctx, &aot_mem) && ctx.pc == 0x088D21D4u) goto L_088D21D4;
    return;
L_088D21D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_088D21D8;
L_088D21D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088D2210;
      }
      goto L_088D21E4;
    }
L_088D21E4:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 101 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D20BC;
      }
      goto L_088D21F8;
    }
L_088D21F8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D2208u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13316));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 350u, 0x08A018ACu>(ctx, &aot_mem) && ctx.pc == 0x088D2208u) goto L_088D2208;
    return;
L_088D2208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2228;
      }
      goto L_088D2210;
    }
L_088D2210:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D2228u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088D1D44;
L_088D2228:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2258:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] - ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D2294u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 7u, 0x08AA8098u>(ctx, &aot_mem) && ctx.pc == 0x088D2294u) goto L_088D2294;
    return;
L_088D2294:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D22B8;
      }
      goto L_088D22A4;
    }
L_088D22A4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D22B4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 7u, 0x08AA8098u>(ctx, &aot_mem) && ctx.pc == 0x088D22B4u) goto L_088D22B4;
    return;
L_088D22B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D22B8;
L_088D22B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D22D0;
      }
      goto L_088D22C8;
    }
L_088D22C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D2310;
      }
      goto L_088D22D0;
    }
L_088D22D0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D22E4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    goto L_088D1C70;
L_088D22E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088D2310;
L_088D2310:
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
L_088D2330:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[21] << (ctx.gpr[7] & 31u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[21]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088D239C;
      }
      goto L_088D237C;
    }
L_088D237C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088D2398u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 3u, 0x08AA8038u>(ctx, &aot_mem) && ctx.pc == 0x088D2398u) goto L_088D2398;
    return;
L_088D2398:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088D239C;
L_088D239C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D23D0;
      }
      goto L_088D23A8;
    }
L_088D23A8:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088D23C8;
      }
      goto L_088D23B0;
    }
L_088D23B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088D23D8;
      }
      goto L_088D23C0;
    }
L_088D23C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D23F8;
      }
      goto L_088D23C8;
    }
L_088D23C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088D2428;
      }
      goto L_088D23D0;
    }
L_088D23D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D2428;
      }
      goto L_088D23D8;
    }
L_088D23D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D23F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 3u, 0x08AA8038u>(ctx, &aot_mem) && ctx.pc == 0x088D23F4u) goto L_088D23F4;
    return;
L_088D23F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D23F8;
L_088D23F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D241C;
      }
      goto L_088D2400;
    }
L_088D2400:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088D240Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 186u, 0x08A59128u>(ctx, &aot_mem) && ctx.pc == 0x088D240Cu) goto L_088D240C;
    return;
L_088D240C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2424;
      }
      goto L_088D2414;
    }
L_088D2414:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088D2428;
      }
      goto L_088D241C;
    }
L_088D241C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D2428;
      }
      goto L_088D2424;
    }
L_088D2424:
    ctx.gpr[2] = (0u | 0u);
    goto L_088D2428;
L_088D2428:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2450:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D2484u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 7u, 0x08AA8098u>(ctx, &aot_mem) && ctx.pc == 0x088D2484u) goto L_088D2484;
    return;
L_088D2484:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D24EC;
      }
      goto L_088D2494;
    }
L_088D2494:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D24A4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 7u, 0x08AA8098u>(ctx, &aot_mem) && ctx.pc == 0x088D24A4u) goto L_088D24A4;
    return;
L_088D24A4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D24B0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 186u, 0x08A59128u>(ctx, &aot_mem) && ctx.pc == 0x088D24B0u) goto L_088D24B0;
    return;
L_088D24B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D24E4;
      }
      goto L_088D24B8;
    }
L_088D24B8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D24CCu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_088D1C70;
L_088D24CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D24F4;
      }
      goto L_088D24DC;
    }
L_088D24DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2510;
      }
      goto L_088D24E4;
    }
L_088D24E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088D2510;
      }
      goto L_088D24EC;
    }
L_088D24EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088D2510;
      }
      goto L_088D24F4;
    }
L_088D24F4:
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[18] != ctx.gpr[5]) {
    ctx.gpr[2] = (0u | 1u);
        goto L_088D2510;
    }
    goto L_088D2500;
L_088D2500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2510;
      }
      goto L_088D250C;
    }
L_088D250C:
    ctx.gpr[2] = (0u | 1u);
    goto L_088D2510;
L_088D2510:
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
L_088D2530:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_088D2558;
L_088D2558:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D2564u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 409u, 0x08AED6A0u>(ctx, &aot_mem) && ctx.pc == 0x088D2564u) goto L_088D2564;
    return;
L_088D2564:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2574;
      }
      goto L_088D256C;
    }
L_088D256C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D25C0;
      }
      goto L_088D2574;
    }
L_088D2574:
    ctx.gpr[31] = (0x088D257Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088D257Cu) goto L_088D257C;
    return;
L_088D257C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088D2598;
      }
      goto L_088D2588;
    }
L_088D2588:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088D25A4;
      }
      goto L_088D2590;
    }
L_088D2590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088D25C0;
      }
      goto L_088D2598;
    }
L_088D2598:
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088D25C0;
      }
      goto L_088D25A4;
    }
L_088D25A4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2558;
      }
      goto L_088D25C0;
    }
L_088D25C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D25DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088D261C;
      }
      goto L_088D2608;
    }
L_088D2608:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D2634;
      }
      goto L_088D2614;
    }
L_088D2614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2658;
      }
      goto L_088D261C;
    }
L_088D261C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D262Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 330u, 0x08A016B4u>(ctx, &aot_mem) && ctx.pc == 0x088D262Cu) goto L_088D262C;
    return;
L_088D262C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D26B0;
      }
      goto L_088D2634;
    }
L_088D2634:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[2] = (0u | 1u);
        goto L_088D2650;
    }
    goto L_088D2650;
L_088D2650:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D26B0;
      }
      goto L_088D2658;
    }
L_088D2658:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D268C;
      }
      goto L_088D2664;
    }
L_088D2664:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D2678u);
    ctx.gpr[7] = (0u | 12u);
    goto L_088D2450;
L_088D2678:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D26A0;
      }
      goto L_088D2684;
    }
L_088D2684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D26B0;
      }
      goto L_088D268C;
    }
L_088D268C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088D2698u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088D2530;
L_088D2698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 0 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D26B0;
      }
      goto L_088D26A0;
    }
L_088D26A0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D26B0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 330u, 0x08A016B4u>(ctx, &aot_mem) && ctx.pc == 0x088D26B0u) goto L_088D26B0;
    return;
L_088D26B0:
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
L_088D26C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088D270C;
      }
      goto L_088D26F8;
    }
L_088D26F8:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D2724;
      }
      goto L_088D2704;
    }
L_088D2704:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2748;
      }
      goto L_088D270C;
    }
L_088D270C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D271Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 330u, 0x08A016B4u>(ctx, &aot_mem) && ctx.pc == 0x088D271Cu) goto L_088D271C;
    return;
L_088D271C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D27C8;
      }
      goto L_088D2724;
    }
L_088D2724:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[2] = (0u | 1u);
        goto L_088D2740;
    }
    goto L_088D2740;
L_088D2740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D27C8;
      }
      goto L_088D2748;
    }
L_088D2748:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D27A4;
      }
      goto L_088D2754;
    }
L_088D2754:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D2768u);
    ctx.gpr[7] = (0u | 13u);
    goto L_088D2450;
L_088D2768:
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088D279C;
      }
      goto L_088D2774;
    }
L_088D2774:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D2788u);
    ctx.gpr[7] = (0u | 12u);
    goto L_088D2450;
L_088D2788:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088D27B8;
      }
      goto L_088D2794;
    }
L_088D2794:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_088D27C8;
      }
      goto L_088D279C;
    }
L_088D279C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D27C8;
      }
      goto L_088D27A4;
    }
L_088D27A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088D27B0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088D2530;
L_088D27B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 1 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D27C8;
      }
      goto L_088D27B8;
    }
L_088D27B8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D27C8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 330u, 0x08A016B4u>(ctx, &aot_mem) && ctx.pc == 0x088D27C8u) goto L_088D27C8;
    return;
L_088D27C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D27E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[7] = (2225u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(13336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    ctx.gpr[30] = (0u | 4u);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    goto L_088D282C;
L_088D282C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[23] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    ctx.gpr[21] = (0u | 2u);
      if (branch_taken) {
          goto L_088D2860;
      }
      goto L_088D284C;
    }
L_088D284C:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(-16));
    ctx.gpr[31] = (0x088D2858u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_088D1A54;
L_088D2858:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D287C;
      }
      goto L_088D2860;
    }
L_088D2860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_088D28BC;
      }
      goto L_088D286C;
    }
L_088D286C:
    ctx.gpr[31] = (0x088D2874u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_088D1A54;
L_088D2874:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D28BC;
      }
      goto L_088D287C;
    }
L_088D287C:
    ctx.gpr[16] = (ctx.gpr[23] + static_cast<std::uint32_t>(-16));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D289Cu);
    ctx.gpr[8] = (0u | 14u);
    goto L_088D2258;
L_088D289C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D29B4;
      }
      goto L_088D28A4;
    }
L_088D28A4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D28B4u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 321u, 0x08A0161Cu>(ctx, &aot_mem) && ctx.pc == 0x088D28B4u) goto L_088D28B4;
    return;
L_088D28B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D29B4;
      }
      goto L_088D28BC;
    }
L_088D28BC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D29B4;
      }
      goto L_088D28CC;
    }
L_088D28CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-12)));
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[19] + static_cast<std::uint32_t>(-8));
    goto L_088D28E4;
L_088D28E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2928;
      }
      goto L_088D28EC;
    }
L_088D28EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_088D2908;
      }
      goto L_088D28F8;
    }
L_088D28F8:
    ctx.gpr[31] = (0x088D2900u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088D1A54;
L_088D2900:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2928;
      }
      goto L_088D2908;
    }
L_088D2908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-8));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088D28E4;
      }
      goto L_088D2928;
    }
L_088D2928:
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(-2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088D2944;
      }
      goto L_088D2934;
    }
L_088D2934:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[31] = (0x088D2944u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 350u, 0x08A018ACu>(ctx, &aot_mem) && ctx.pc == 0x088D2944u) goto L_088D2944;
    return;
L_088D2944:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x088D2958u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B2Cu>(ctx, &aot_mem) && ctx.pc == 0x088D2958u) goto L_088D2958;
    return;
L_088D2958:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088D2998;
      }
      goto L_088D2968;
    }
L_088D2968:
    ctx.gpr[16] = (ctx.gpr[21] << 3u);
    ctx.gpr[16] = (ctx.gpr[23] - ctx.gpr[16]);
    goto L_088D2970;
L_088D2970:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[18]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088D2988u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088D2988u) goto L_088D2988;
    return;
L_088D2988:
    ctx.gpr[18] = (ctx.gpr[23] + ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088D2970;
      }
      goto L_088D2998;
    }
L_088D2998:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D29ACu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 555u, 0x0891713Cu>(ctx, &aot_mem) && ctx.pc == 0x088D29ACu) goto L_088D29AC;
    return;
L_088D29AC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_088D29B4;
L_088D29B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D282C;
      }
      goto L_088D29D8;
    }
L_088D29D8:
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
L_088D2A08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088D2B08;
      }
      goto L_088D2A34;
    }
L_088D2A34:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(13512)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2A4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088D2B74;
      }
      goto L_088D2A54;
    }
L_088D2A54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[2] = (0u | 1u);
        goto L_088D2A70;
    }
    goto L_088D2A70;
L_088D2A70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2B74;
      }
      goto L_088D2A78;
    }
L_088D2A78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_088D2B74;
      }
      goto L_088D2A8C;
    }
L_088D2A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_088D2B74;
      }
      goto L_088D2AA0;
    }
L_088D2AA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D2ACC;
      }
      goto L_088D2AB0;
    }
L_088D2AB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D2AC4u);
    ctx.gpr[7] = (0u | 5u);
    goto L_088D2330;
L_088D2AC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D2B1C;
      }
      goto L_088D2ACC;
    }
L_088D2ACC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088D2B74;
      }
      goto L_088D2AD4;
    }
L_088D2AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D2B00;
      }
      goto L_088D2AE4;
    }
L_088D2AE4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D2AF8u);
    ctx.gpr[7] = (0u | 5u);
    goto L_088D2330;
L_088D2AF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D2B1C;
      }
      goto L_088D2B00;
    }
L_088D2B00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088D2B74;
      }
      goto L_088D2B08;
    }
L_088D2B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_088D2B74;
      }
      goto L_088D2B1C;
    }
L_088D2B1C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2B50;
      }
      goto L_088D2B24;
    }
L_088D2B24:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D2B38u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_088D1C70;
L_088D2B38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D2B58;
      }
      goto L_088D2B48;
    }
L_088D2B48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2B74;
      }
      goto L_088D2B50;
    }
L_088D2B50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D2B74;
      }
      goto L_088D2B58;
    }
L_088D2B58:
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[2] = (0u | 1u);
        goto L_088D2B74;
    }
    goto L_088D2B64;
L_088D2B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2B74;
      }
      goto L_088D2B70;
    }
L_088D2B70:
    ctx.gpr[2] = (0u | 1u);
    goto L_088D2B74;
L_088D2B74:
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
L_088D2B8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D2BD0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_088D19D8;
L_088D2BD0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_088D2D20;
      }
      goto L_088D2BDC;
    }
L_088D2BDC:
    ctx.gpr[31] = (0x088D2BE4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_088D19D8;
L_088D2BE4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2D20;
      }
      goto L_088D2BF0;
    }
L_088D2BF0:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(-6));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(-6));
      if (branch_taken) {
          goto L_088D2D18;
      }
      goto L_088D2C00;
    }
L_088D2C00:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088D2C40;
      }
      goto L_088D2C0C;
    }
L_088D2C0C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088D2C5C;
      }
      goto L_088D2C14;
    }
L_088D2C14:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D2C78;
      }
      goto L_088D2C1C;
    }
L_088D2C1C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088D2C94;
      }
      goto L_088D2C24;
    }
L_088D2C24:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D2D50;
      }
      goto L_088D2C40;
    }
L_088D2C40:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D2D50;
      }
      goto L_088D2C5C;
    }
L_088D2C5C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D2D50;
      }
      goto L_088D2C78;
    }
L_088D2C78:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D2D50;
      }
      goto L_088D2C94;
    }
L_088D2C94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (0x088D2CA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 46u, 0x089282D0u>(ctx, &aot_mem) && ctx.pc == 0x088D2CA4u) goto L_088D2CA4;
    return;
L_088D2CA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[5]);
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D2CD8;
      }
      goto L_088D2CC0;
    }
L_088D2CC0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D2CD4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13360));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 350u, 0x08A018ACu>(ctx, &aot_mem) && ctx.pc == 0x088D2CD4u) goto L_088D2CD4;
    return;
L_088D2CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_088D2CD8;
L_088D2CD8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D2CECu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_088D1C70;
L_088D2CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D2D50;
      }
      goto L_088D2D18;
    }
L_088D2D18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2D50;
      }
      goto L_088D2D20;
    }
L_088D2D20:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D2D38u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    goto L_088D2258;
L_088D2D38:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D2D50;
      }
      goto L_088D2D40;
    }
L_088D2D40:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088D2D50u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 325u, 0x08A01650u>(ctx, &aot_mem) && ctx.pc == 0x088D2D50u) goto L_088D2D50;
    return;
L_088D2D50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2D78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    goto L_088D2DA4;
L_088D2DA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_088D2DD4;
    }
    goto L_088D2DB4;
L_088D2DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D2DD0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 277u, 0x088B97C8u>(ctx, &aot_mem) && ctx.pc == 0x088D2DD0u) goto L_088D2DD0;
    return;
L_088D2DD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_088D2DD4;
L_088D2DD4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_088D2E04;
L_088D2E04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] & 12u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2E60;
      }
      goto L_088D2E24;
    }
L_088D2E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D2E44;
      }
      goto L_088D2E34;
    }
L_088D2E34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2E60;
      }
      goto L_088D2E44;
    }
L_088D2E44:
    ctx.gpr[31] = (0x088D2E4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088D1AF8;
L_088D2E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D2E94;
      }
      goto L_088D2E60;
    }
L_088D2E60:
    ctx.gpr[4] = (ctx.gpr[19] >> 24u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[22] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[19] & 63u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (ctx.gpr[23] + ctx.gpr[22]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D2E7C;
    }
L_088D2E7C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(13544)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D2E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 44u, 0x088D4458u>(ctx, &aot_mem); return;
      }
      goto L_088D2EB8;
    }
L_088D2EB8:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D2EE8;
    }
L_088D2EE8:
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D2F20;
    }
L_088D2F20:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[19] >> 15u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & 511u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2F50;
      }
      goto L_088D2F44;
    }
L_088D2F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_088D2F50;
L_088D2F50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D2F58;
    }
L_088D2F58:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[19] = (ctx.gpr[4] << 3u);
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
    goto L_088D2F68;
L_088D2F68:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2F68;
      }
      goto L_088D2F7C;
    }
L_088D2F7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D2F84;
    }
L_088D2F84:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D2FBC;
    }
L_088D2FBC:
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[4] << 3u);
    ctx.gpr[20] = (ctx.gpr[18] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088D2FE0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 46u, 0x089282D0u>(ctx, &aot_mem) && ctx.pc == 0x088D2FE0u) goto L_088D2FE0;
    return;
L_088D2FE0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3010;
      }
      goto L_088D2FF0;
    }
L_088D2FF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D3050;
      }
      goto L_088D3010;
    }
L_088D3010:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D3024u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088D1E30;
L_088D3024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088D3050;
L_088D3050:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D3058;
    }
L_088D3058:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[20] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[23] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_088D308C;
      }
      goto L_088D3078;
    }
L_088D3078:
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[21] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[23] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_088D30A0;
      }
      goto L_088D308C;
    }
L_088D308C:
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[21] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2000));
    goto L_088D30A0;
L_088D30A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D3134;
      }
      goto L_088D30B0;
    }
L_088D30B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088D30BCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 53u, 0x0892833Cu>(ctx, &aot_mem) && ctx.pc == 0x088D30BCu) goto L_088D30BC;
    return;
L_088D30BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D30EC;
      }
      goto L_088D30CC;
    }
L_088D30CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D312C;
      }
      goto L_088D30EC;
    }
L_088D30EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088D3100u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088D1E30;
L_088D3100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088D312C;
L_088D312C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3174;
      }
      goto L_088D3134;
    }
L_088D3134:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088D3148u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088D1EF8;
L_088D3148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088D3174;
L_088D3174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D317C;
    }
L_088D317C:
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D31A4u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    goto L_088D206C;
L_088D31A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D31AC;
    }
L_088D31AC:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D31E4;
    }
L_088D31E4:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088D320C;
      }
      goto L_088D31F8;
    }
L_088D31F8:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D321C;
      }
      goto L_088D320C;
    }
L_088D320C:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088D321C;
L_088D321C:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088D3244;
      }
      goto L_088D3230;
    }
L_088D3230:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[19] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088D3254;
      }
      goto L_088D3244;
    }
L_088D3244:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2000));
    goto L_088D3254;
L_088D3254:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088D3268u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_088D206C;
L_088D3268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D3270;
    }
L_088D3270:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[5] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] << (ctx.gpr[4] & 31u));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (ctx.gpr[19] >> 6u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] & 511u);
    ctx.gpr[31] = (0x088D329Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 690u, 0x08927F14u>(ctx, &aot_mem) && ctx.pc == 0x088D329Cu) goto L_088D329C;
    return;
L_088D329C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D32C0;
      }
      goto L_088D32B8;
    }
L_088D32B8:
    ctx.gpr[31] = (0x088D32C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 102u, 0x0891C7F4u>(ctx, &aot_mem) && ctx.pc == 0x088D32C0u) goto L_088D32C0;
    return;
L_088D32C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D32C8;
    }
L_088D32C8:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[20] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[23] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_088D32FC;
      }
      goto L_088D32E8;
    }
L_088D32E8:
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[21] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[23] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_088D3310;
      }
      goto L_088D32FC;
    }
L_088D32FC:
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[21] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2000));
    goto L_088D3310;
L_088D3310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 25u, 0x088D42B8u>(ctx, &aot_mem); return;
      }
      goto L_088D3320;
    }
L_088D3320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D33D4;
      }
      goto L_088D3350;
    }
L_088D3350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088D335Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 46u, 0x089282D0u>(ctx, &aot_mem) && ctx.pc == 0x088D335Cu) goto L_088D335C;
    return;
L_088D335C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D338C;
      }
      goto L_088D336C;
    }
L_088D336C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D33CC;
      }
      goto L_088D338C;
    }
L_088D338C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088D33A0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088D1E30;
L_088D33A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088D33CC;
L_088D33CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3414;
      }
      goto L_088D33D4;
    }
L_088D33D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088D33E8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088D1EF8;
L_088D33E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088D3414;
L_088D3414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D341C;
    }
L_088D341C:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088D3444;
      }
      goto L_088D3430;
    }
L_088D3430:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D3454;
      }
      goto L_088D3444;
    }
L_088D3444:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088D3454;
L_088D3454:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088D347C;
      }
      goto L_088D3468;
    }
L_088D3468:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[19] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088D348C;
      }
      goto L_088D347C;
    }
L_088D347C:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2000));
    goto L_088D348C;
L_088D348C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D34C4;
      }
      goto L_088D349C;
    }
L_088D349C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088D34C4;
      }
      goto L_088D34AC;
    }
L_088D34AC:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D34DC;
      }
      goto L_088D34C4;
    }
L_088D34C4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D34DCu);
    ctx.gpr[8] = (0u | 6u);
    goto L_088D2B8C;
L_088D34DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D34E4;
    }
L_088D34E4:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088D350C;
      }
      goto L_088D34F8;
    }
L_088D34F8:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D351C;
      }
      goto L_088D350C;
    }
L_088D350C:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088D351C;
L_088D351C:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088D3544;
      }
      goto L_088D3530;
    }
L_088D3530:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[19] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088D3554;
      }
      goto L_088D3544;
    }
L_088D3544:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2000));
    goto L_088D3554;
L_088D3554:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D358C;
      }
      goto L_088D3564;
    }
L_088D3564:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088D358C;
      }
      goto L_088D3574;
    }
L_088D3574:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D35A4;
      }
      goto L_088D358C;
    }
L_088D358C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D35A4u);
    ctx.gpr[8] = (0u | 7u);
    goto L_088D2B8C;
L_088D35A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D35AC;
    }
L_088D35AC:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088D35D4;
      }
      goto L_088D35C0;
    }
L_088D35C0:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D35E4;
      }
      goto L_088D35D4;
    }
L_088D35D4:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088D35E4;
L_088D35E4:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088D360C;
      }
      goto L_088D35F8;
    }
L_088D35F8:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[19] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088D361C;
      }
      goto L_088D360C;
    }
L_088D360C:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2000));
    goto L_088D361C;
L_088D361C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D3654;
      }
      goto L_088D362C;
    }
L_088D362C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088D3654;
      }
      goto L_088D363C;
    }
L_088D363C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D366C;
      }
      goto L_088D3654;
    }
L_088D3654:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D366Cu);
    ctx.gpr[8] = (0u | 8u);
    goto L_088D2B8C;
L_088D366C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D3674;
    }
L_088D3674:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088D369C;
      }
      goto L_088D3688;
    }
L_088D3688:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D36AC;
      }
      goto L_088D369C;
    }
L_088D369C:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088D36AC;
L_088D36AC:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088D36D4;
      }
      goto L_088D36C0;
    }
L_088D36C0:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[19] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088D36E4;
      }
      goto L_088D36D4;
    }
L_088D36D4:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2000));
    goto L_088D36E4;
L_088D36E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D371C;
      }
      goto L_088D36F4;
    }
L_088D36F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088D371C;
      }
      goto L_088D3704;
    }
L_088D3704:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D3734;
      }
      goto L_088D371C;
    }
L_088D371C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D3734u);
    ctx.gpr[8] = (0u | 9u);
    goto L_088D2B8C;
L_088D3734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D373C;
    }
L_088D373C:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088D3764;
      }
      goto L_088D3750;
    }
L_088D3750:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D3774;
      }
      goto L_088D3764;
    }
L_088D3764:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088D3774;
L_088D3774:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088D379C;
      }
      goto L_088D3788;
    }
L_088D3788:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[19] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088D37AC;
      }
      goto L_088D379C;
    }
L_088D379C:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2000));
    goto L_088D37AC;
L_088D37AC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D37C4u);
    ctx.gpr[8] = (0u | 10u);
    goto L_088D2B8C;
L_088D37C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D37CC;
    }
L_088D37CC:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D3800;
      }
      goto L_088D37EC;
    }
L_088D37EC:
    ctx.gpr[31] = (0x088D37F4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_088D19D8;
L_088D37F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3818;
      }
      goto L_088D3800;
    }
L_088D3800:
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D3864;
      }
      goto L_088D3818;
    }
L_088D3818:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088D3840u);
    ctx.gpr[8] = (0u | 11u);
    goto L_088D2258;
L_088D3840:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D3864;
      }
      goto L_088D3848;
    }
L_088D3848:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x088D3864u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 325u, 0x08A01650u>(ctx, &aot_mem) && ctx.pc == 0x088D3864u) goto L_088D3864;
    return;
L_088D3864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D386C;
    }
L_088D386C:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088D38C0;
      }
      goto L_088D3888;
    }
L_088D3888:
    ctx.gpr[5] = (ctx.gpr[19] >> 15u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088D38C4;
      }
      goto L_088D38A8;
    }
L_088D38A8:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D38C4;
      }
      goto L_088D38C0;
    }
L_088D38C0:
    ctx.gpr[4] = (0u | 1u);
    goto L_088D38C4;
L_088D38C4:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D38D4;
    }
L_088D38D4:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[6] = (ctx.gpr[19] >> 6u);
    ctx.gpr[20] = (ctx.gpr[4] & 511u);
    ctx.gpr[6] = (ctx.gpr[6] & 511u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x088D38F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088D27E4;
L_088D38F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[19] >> 24u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D3948;
      }
      goto L_088D3940;
    }
L_088D3940:
    ctx.gpr[31] = (0x088D3948u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 102u, 0x0891C7F4u>(ctx, &aot_mem) && ctx.pc == 0x088D3948u) goto L_088D3948;
    return;
L_088D3948:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D3950;
    }
L_088D3950:
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D3980;
    }
L_088D3980:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088D39A8;
      }
      goto L_088D3994;
    }
L_088D3994:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D39BC;
      }
      goto L_088D39A8;
    }
L_088D39A8:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088D39BC;
L_088D39BC:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088D39E4;
      }
      goto L_088D39D0;
    }
L_088D39D0:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D39F8;
      }
      goto L_088D39E4;
    }
L_088D39E4:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2000));
    goto L_088D39F8;
L_088D39F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[19] >> 24u);
      if (branch_taken) {
          goto L_088D3A94;
      }
      goto L_088D3A04;
    }
L_088D3A04:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088D3A2C;
      }
      goto L_088D3A18;
    }
L_088D3A18:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D3A3C;
      }
      goto L_088D3A2C;
    }
L_088D3A2C:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088D3A3C;
L_088D3A3C:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088D3A64;
      }
      goto L_088D3A50;
    }
L_088D3A50:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D3A74;
      }
      goto L_088D3A64;
    }
L_088D3A64:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[23] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-2000));
    goto L_088D3A74;
L_088D3A74:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D3A84u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_088D2A08;
L_088D3A84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 24u);
      if (branch_taken) {
          goto L_088D3A94;
      }
      goto L_088D3A8C;
    }
L_088D3A8C:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[19] >> 24u);
    goto L_088D3A94;
L_088D3A94:
    if (ctx.gpr[20] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_088D3AAC;
    }
    goto L_088D3A9C;
L_088D3A9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D3AD8;
      }
      goto L_088D3AAC;
    }
L_088D3AAC:
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_088D3AD8;
L_088D3AD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D3AE0;
    }
L_088D3AE0:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088D3B08;
      }
      goto L_088D3AF4;
    }
L_088D3AF4:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D3B18;
      }
      goto L_088D3B08;
    }
L_088D3B08:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088D3B18;
L_088D3B18:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088D3B40;
      }
      goto L_088D3B2C;
    }
L_088D3B2C:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D3B50;
      }
      goto L_088D3B40;
    }
L_088D3B40:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[23] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-2000));
    goto L_088D3B50;
L_088D3B50:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D3B60u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_088D25DC;
L_088D3B60:
    ctx.gpr[4] = (ctx.gpr[19] >> 24u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_088D3B7C;
    }
    goto L_088D3B6C;
L_088D3B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D3BA8;
      }
      goto L_088D3B7C;
    }
L_088D3B7C:
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_088D3BA8;
L_088D3BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D3BB0;
    }
L_088D3BB0:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
      if (branch_taken) {
          goto L_088D3BD8;
      }
      goto L_088D3BC4;
    }
L_088D3BC4:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D3BE8;
      }
      goto L_088D3BD8;
    }
L_088D3BD8:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    goto L_088D3BE8;
L_088D3BE8:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088D3C10;
      }
      goto L_088D3BFC;
    }
L_088D3BFC:
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D3C20;
      }
      goto L_088D3C10;
    }
L_088D3C10:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[23] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-2000));
    goto L_088D3C20;
L_088D3C20:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D3C30u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_088D26C8;
L_088D3C30:
    ctx.gpr[4] = (ctx.gpr[19] >> 24u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_088D3C4C;
    }
    goto L_088D3C3C;
L_088D3C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D3C78;
      }
      goto L_088D3C4C;
    }
L_088D3C4C:
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_088D3C78;
L_088D3C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D3C80;
    }
L_088D3C80:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088D3CB8;
      }
      goto L_088D3C9C;
    }
L_088D3C9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088D3CC0;
      }
      goto L_088D3CAC;
    }
L_088D3CAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
      if (branch_taken) {
          goto L_088D3CC0;
      }
      goto L_088D3CB8;
    }
L_088D3CB8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    goto L_088D3CC0;
L_088D3CC0:
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_088D3CDC;
    }
    goto L_088D3CCC;
L_088D3CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D3D24;
      }
      goto L_088D3CDC;
    }
L_088D3CDC:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (4u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_088D3D24;
L_088D3D24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D3D2C;
    }
L_088D3D2C:
    ctx.gpr[4] = (ctx.gpr[19] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3D48;
      }
      goto L_088D3D3C;
    }
L_088D3D3C:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088D3D48;
L_088D3D48:
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[20] = (ctx.gpr[4] & 511u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D3D60u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 314u, 0x088B9B90u>(ctx, &aot_mem) && ctx.pc == 0x088D3D60u) goto L_088D3D60;
    return;
L_088D3D60:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D3DC8;
      }
      goto L_088D3D6C;
    }
L_088D3D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D3DA8;
      }
      goto L_088D3D7C;
    }
L_088D3D7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D3D8Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 342u, 0x088B9E24u>(ctx, &aot_mem) && ctx.pc == 0x088D3D8Cu) goto L_088D3D8C;
    return;
L_088D3D8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_088D3DA0;
      }
      goto L_088D3D94;
    }
L_088D3D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088D3DA0;
L_088D3DA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 43u, 0x088D4450u>(ctx, &aot_mem); return;
      }
      goto L_088D3DA8;
    }
L_088D3DA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-16), ctx.gpr[6]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 44u, 0x088D4458u>(ctx, &aot_mem); return;
      }
      goto L_088D3DC8;
    }
L_088D3DC8:
    ctx.gpr[4] = (ctx.gpr[19] & 63u);
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D3DF4;
      }
      goto L_088D3DD8;
    }
L_088D3DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-16), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088D3ED0;
      }
      goto L_088D3DF4;
    }
L_088D3DF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[19] >> 24u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24)));
    ctx.gpr[19] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088D3E1C;
      }
      goto L_088D3E10;
    }
L_088D3E10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D3E1Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 142u, 0x08878B94u>(ctx, &aot_mem) && ctx.pc == 0x088D3E1Cu) goto L_088D3E1C;
    return;
L_088D3E1C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
        goto L_088D3E84;
    }
    goto L_088D3E38;
L_088D3E38:
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    goto L_088D3E3C;
L_088D3E3C:
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
      if (branch_taken) {
          goto L_088D3E3C;
      }
      goto L_088D3E80;
    }
L_088D3E80:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    goto L_088D3E84;
L_088D3E84:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-16), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_088D3ED0;
L_088D3ED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D2DA4;
      }
      goto L_088D3ED8;
    }
L_088D3ED8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (ctx.gpr[19] >> 15u);
    ctx.gpr[19] = (ctx.gpr[19] & 511u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24));
      if (branch_taken) {
          goto L_088D3EFC;
      }
      goto L_088D3EEC;
    }
L_088D3EEC:
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088D3EFC;
L_088D3EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_088D3F18;
    }
    goto L_088D3F08;
L_088D3F08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D3F14u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 142u, 0x08878B94u>(ctx, &aot_mem) && ctx.pc == 0x088D3F14u) goto L_088D3F14;
    return;
L_088D3F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_088D3F18;
L_088D3F18:
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_088D3F44;
    }
    goto L_088D3F3C;
L_088D3F3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 44u, 0x088D4458u>(ctx, &aot_mem); return;
      }
      goto L_088D3F44;
    }
L_088D3F44:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088D3F64u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 342u, 0x088B9E24u>(ctx, &aot_mem) && ctx.pc == 0x088D3F64u) goto L_088D3F64;
    return;
L_088D3F64:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_088D3F78;
      }
      goto L_088D3F6C;
    }
L_088D3F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088D3F78;
L_088D3F78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088D2DD4;
      }
      goto L_088D3F80;
    }
L_088D3F80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[21] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088D3FA4;
      }
      goto L_088D3F94;
    }
L_088D3F94:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D3FA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13404));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 350u, 0x08A018ACu>(ctx, &aot_mem) && ctx.pc == 0x088D3FA4u) goto L_088D3FA4;
    return;
L_088D3FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088D3FD8;
      }
      goto L_088D3FB4;
    }
L_088D3FB4:
    ctx.gpr[31] = (0x088D3FBCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_088D19D8;
L_088D3FBC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D3FD8;
      }
      goto L_088D3FC8;
    }
L_088D3FC8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D3FD8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13444));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 350u, 0x08A018ACu>(ctx, &aot_mem) && ctx.pc == 0x088D3FD8u) goto L_088D3FD8;
    return;
L_088D3FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 2u, 0x088D400Cu>(ctx, &aot_mem); return;
      }
      goto L_088D3FE8;
    }
L_088D3FE8:
    ctx.gpr[31] = (0x088D3FF0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_088D19D8;
L_088D3FF0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 2u, 0x088D400Cu>(ctx, &aot_mem); return;
      }
      goto L_088D3FFC;
    }
L_088D3FFC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.pc = 0x088D4000u; return;
}

void recomp_unit_0051(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0051_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_51(Runtime &runtime) {
    runtime.register_generated_unit(51u, 0x088D0000u, 16384u, &recomp_unit_0051, &recomp_unit_0051_entry);
    runtime.register_function(0x088D0000u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D001Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0048u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0054u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0084u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00BCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00E8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00F0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D00FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0108u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D014Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D026Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D027Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D028Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0314u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0330u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D034Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0368u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0384u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D03A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D03BCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D03D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D03F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D03F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0420u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D04E8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0514u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0520u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D064Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0668u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0690u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D06A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0780u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0798u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D086Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0884u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D08C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D090Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0A38u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0A4Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0A90u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0AF8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0BECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C04u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C3Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0C88u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0DC4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0DDCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0E0Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0E64u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0F7Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0F94u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D0FC4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D101Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1134u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D114Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1184u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D11E8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1300u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1318u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1358u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D13B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1448u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1460u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1490u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D14DCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1570u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1588u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D15B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D15F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1684u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D169Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D16E0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1708u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1788u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D17B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D17C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1820u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D18B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D18C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D18D0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D18DCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D18E8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D18F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1900u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D190Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1918u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1924u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1930u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D193Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1948u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1954u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1960u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D196Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1978u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1984u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1990u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D199Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D19A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D19B4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D19C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D19CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D19D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D19FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A08u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A20u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A28u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A30u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A40u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A54u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A80u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A88u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1A9Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1AB0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1AC0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1AD0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1ADCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1AF8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B24u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B30u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B38u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B58u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B70u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1B9Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1BA8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1BD4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1BDCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1BE4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1BECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1BF8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1C08u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1C14u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1C38u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1C40u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1C50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1C5Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1C60u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1C70u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D00u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D0Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D10u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D28u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1D44u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1DF8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E04u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E08u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E20u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E30u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E6Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E74u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E84u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E88u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1E90u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1EA0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1EB4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1EBCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1EC8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1EDCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1EF8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F28u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F38u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F54u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F64u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F80u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1F94u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1FB0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1FE0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D1FF0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2000u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D200Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2018u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2020u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2034u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D203Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2050u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D206Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D20BCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D20C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D20E0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D20F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2108u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D211Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2120u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2128u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2148u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2158u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D216Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2170u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2178u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2198u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D21A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D21B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D21C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D21D4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D21D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D21E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D21F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2208u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2210u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2228u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2258u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2294u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D22A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D22B4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D22B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D22C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D22D0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D22E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2310u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2330u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D237Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2398u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D239Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23D0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D23F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2400u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D240Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2414u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D241Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2424u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2428u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2450u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2484u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2494u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24DCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24ECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D24F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2500u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D250Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2510u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2530u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2558u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2564u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D256Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2574u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D257Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2588u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2590u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2598u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D25A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D25C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D25DCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2608u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2614u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D261Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D262Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2634u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2650u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2658u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2664u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2678u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2684u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D268Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2698u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D26A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D26B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D26C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D26F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2704u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D270Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D271Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2724u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2740u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2748u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2754u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2768u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2774u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2788u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2794u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D279Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D27A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D27B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D27B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D27C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D27E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D282Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D284Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2858u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2860u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D286Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2874u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D287Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D289Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D28A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D28B4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D28BCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D28CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D28E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D28ECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D28F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2900u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2908u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2928u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2934u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2944u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2958u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2968u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2970u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2988u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2998u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D29ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D29B4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D29D8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A08u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A34u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A4Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A54u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A70u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2A8Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2AA0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2AB0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2AC4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2ACCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2AD4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2AE4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2AF8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B00u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B08u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B1Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B24u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B38u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B48u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B58u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B64u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B70u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B74u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2B8Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2BD0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2BDCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2BE4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2BF0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C00u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C0Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C14u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C1Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C24u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C40u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C5Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2C94u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2CA4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2CC0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2CD4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2CD8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2CECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2D18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2D20u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2D38u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2D40u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2D50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2D78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2DA4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2DB4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2DD0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2DD4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E04u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E24u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E34u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E44u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E4Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E60u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E7Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2E94u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2EB8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2EE8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F20u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F44u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F58u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F68u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F7Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2F84u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2FBCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2FE0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D2FF0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3010u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3024u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3050u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3058u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3078u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D308Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D30A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D30B0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D30BCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D30CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D30ECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3100u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D312Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3134u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3148u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3174u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D317Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D31A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D31ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D31E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D31F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D320Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D321Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3230u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3244u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3254u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3268u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3270u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D329Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D32B8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D32C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D32C8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D32E8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D32FCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3310u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3320u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3350u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D335Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D336Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D338Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D33A0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D33CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D33D4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D33E8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3414u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D341Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3430u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3444u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3454u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3468u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D347Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D348Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D349Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D34ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D34C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D34DCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D34E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D34F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D350Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D351Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3530u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3544u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3554u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3564u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3574u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D358Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D35A4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D35ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D35C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D35D4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D35E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D35F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D360Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D361Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D362Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D363Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3654u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D366Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3674u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3688u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D369Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D36ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D36C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D36D4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D36E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D36F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3704u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D371Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3734u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D373Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3750u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3764u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3774u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3788u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D379Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D37ACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D37C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D37CCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D37ECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D37F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3800u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3818u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3840u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3848u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3864u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D386Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3888u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D38A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D38C0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D38C4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D38D4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D38F4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3940u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3948u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3950u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3980u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3994u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D39A8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D39BCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D39D0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D39E4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D39F8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A04u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A2Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A3Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A64u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A74u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A84u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A8Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A94u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3A9Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3AACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3AD8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3AE0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3AF4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B08u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B2Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B40u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B50u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B60u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B6Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3B7Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3BA8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3BB0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3BC4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3BD8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3BE8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3BFCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C10u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C20u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C30u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C3Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C4Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C80u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3C9Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3CACu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3CB8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3CC0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3CCCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3CDCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D24u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D2Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D3Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D48u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D60u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D6Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D7Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D8Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3D94u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3DA0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3DA8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3DC8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3DD8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3DF4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3E10u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3E1Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3E38u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3E3Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3E80u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3E84u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3ED0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3ED8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3EECu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3EFCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F08u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F14u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F18u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F3Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F44u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F64u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F6Cu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F78u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F80u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3F94u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3FA4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3FB4u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3FBCu, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3FC8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3FD8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3FE8u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3FF0u, &recomp_unit_0051, "recomp_unit_0051");
    runtime.register_function(0x088D3FFCu, &recomp_unit_0051, "recomp_unit_0051");
}
} // namespace psprecomp
