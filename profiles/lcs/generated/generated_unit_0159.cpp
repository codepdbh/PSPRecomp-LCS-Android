#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0159[4066] = {
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 19,
    0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 28,
    0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0,
    36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 42,
    0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 46, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 67, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 0, 0, 0, 81, 82, 0,
    83, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0,
    0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 101, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 106,
    0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115,
    0, 0, 0, 0, 0, 0, 116, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 125, 126, 0, 0,
    0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131,
    0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 137, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 145,
    0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 0, 0, 0, 151, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 157,
    0, 158, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0,
    165, 166, 0, 0, 167, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0,
    0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210,
    211, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 0, 216, 0, 0, 217, 218, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 232,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 0, 237, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 244,
    0, 245, 246, 0, 247, 0, 248, 0, 249, 0, 0, 250, 0, 0, 251, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0,
    0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0,
    0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 281, 0,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0,
    287, 0, 0, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 298,
    0, 299, 0, 300, 0, 301, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 306, 307, 0, 0, 0, 0, 308, 0, 309, 0, 310, 0, 311, 0,
    0, 0, 0, 0, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325,
    0, 0, 0, 326, 0, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 0, 334, 0, 335, 0, 336, 0, 337, 0,
    0, 0, 0, 0, 338, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0,
    350, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 358, 0, 359,
    0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 364, 0, 0, 365, 0, 366, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0,
    369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 375, 0, 376, 0, 377, 0, 378, 0,
    379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 385, 0, 386, 0, 0, 0, 0, 0, 387, 0, 388, 0, 389, 0, 0, 0, 0, 0, 390, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393,
    0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 399, 0, 0, 400, 0, 401, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0,
    0, 408, 0, 409, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 418, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 425, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0,
    0, 432, 0, 433, 0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439,
    440, 0, 441, 0, 442, 0, 0, 0, 443, 0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 0, 447, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 450, 0, 451, 0, 452, 0, 0, 0, 0, 453, 0, 454, 0, 455, 0, 456, 0, 0, 0, 0, 457, 0, 458, 459, 0, 0, 0, 0, 0,
    460, 461, 0, 462, 0, 0, 463, 0, 0, 0, 464, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0,
    0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0,
    0, 0, 476, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0,
    0, 496, 0, 0, 0, 497, 0, 0, 498, 0, 0, 499, 0, 500, 501, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0,
    0, 506, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 511, 512, 0, 513, 0, 0, 0, 514, 0, 0, 0,
    0, 515, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0,
    0, 0, 0, 0, 0, 521, 0, 522, 0, 523, 524, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 531, 532, 0, 0, 0, 0, 0, 533, 0, 534, 0, 535, 536, 0, 0, 537, 0, 0, 0, 0, 0, 0,
    538, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 544,
    0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 549, 0, 550, 0, 0, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0,
    0, 0, 553, 0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0,
    0, 561, 562, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 568, 0, 0, 0, 569, 0, 0, 0,
    570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 574, 0, 575, 0, 0, 0, 0, 576, 0,
    577, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 582, 0, 583, 584, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 587, 0, 0, 588, 0, 0, 589, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 0,
    0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0,
    0, 0, 599, 0, 0, 600, 0, 601, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 607,
    0, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 610, 0, 611, 0, 0, 0, 0, 0, 0, 612, 0, 0, 613, 0, 614, 0, 615, 0, 616, 0, 617,
    0, 0, 618, 0, 0, 0, 0, 619, 0, 0, 620, 0, 0, 0, 621, 0, 622, 0, 623, 0, 624, 0, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0,
    0, 628, 629, 0, 630, 0, 0, 631, 0, 0, 632, 0, 0, 0, 633, 634, 0, 0, 635, 0, 0, 636, 0, 0, 637, 0, 0, 638, 639, 640, 0, 0,
    641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 643, 0, 644,
    0, 645,
};
void recomp_unit_0159_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A80000u;
        entry_id = (entry_delta < 16264u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0159[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A80000;
    case 2u: goto L_08A808AC;
    case 3u: goto L_08A808D4;
    case 4u: goto L_08A808FC;
    case 5u: goto L_08A80924;
    case 6u: goto L_08A80934;
    case 7u: goto L_08A80958;
    case 8u: goto L_08A8096C;
    case 9u: goto L_08A80CC0;
    case 10u: goto L_08A80CEC;
    case 11u: goto L_08A80D14;
    case 12u: goto L_08A80D28;
    case 13u: goto L_08A80D38;
    case 14u: goto L_08A80D48;
    case 15u: goto L_08A80D50;
    case 16u: goto L_08A80D60;
    case 17u: goto L_08A80D68;
    case 18u: goto L_08A80D74;
    case 19u: goto L_08A80D7C;
    case 20u: goto L_08A80D84;
    case 21u: goto L_08A80D90;
    case 22u: goto L_08A80D9C;
    case 23u: goto L_08A80DAC;
    case 24u: goto L_08A80DC8;
    case 25u: goto L_08A80DD0;
    case 26u: goto L_08A80DDC;
    case 27u: goto L_08A80DF8;
    case 28u: goto L_08A80DFC;
    case 29u: goto L_08A80E08;
    case 30u: goto L_08A80E10;
    case 31u: goto L_08A80E1C;
    case 32u: goto L_08A80E38;
    case 33u: goto L_08A80E3C;
    case 34u: goto L_08A80E4C;
    case 35u: goto L_08A80E74;
    case 36u: goto L_08A80E80;
    case 37u: goto L_08A80E90;
    case 38u: goto L_08A80EBC;
    case 39u: goto L_08A80EC8;
    case 40u: goto L_08A80ED8;
    case 41u: goto L_08A80EF4;
    case 42u: goto L_08A80EFC;
    case 43u: goto L_08A80F0C;
    case 44u: goto L_08A80F2C;
    case 45u: goto L_08A80F48;
    case 46u: goto L_08A80F4C;
    case 47u: goto L_08A80F58;
    case 48u: goto L_08A80F70;
    case 49u: goto L_08A80F90;
    case 50u: goto L_08A80FCC;
    case 51u: goto L_08A80FE4;
    case 52u: goto L_08A81014;
    case 53u: goto L_08A81028;
    case 54u: goto L_08A81030;
    case 55u: goto L_08A8104C;
    case 56u: goto L_08A8105C;
    case 57u: goto L_08A81068;
    case 58u: goto L_08A81090;
    case 59u: goto L_08A81098;
    case 60u: goto L_08A810B4;
    case 61u: goto L_08A810BC;
    case 62u: goto L_08A810C8;
    case 63u: goto L_08A810D8;
    case 64u: goto L_08A81100;
    case 65u: goto L_08A81198;
    case 66u: goto L_08A811A8;
    case 67u: goto L_08A811B0;
    case 68u: goto L_08A811B4;
    case 69u: goto L_08A811C8;
    case 70u: goto L_08A811E8;
    case 71u: goto L_08A81224;
    case 72u: goto L_08A81230;
    case 73u: goto L_08A81254;
    case 74u: goto L_08A81260;
    case 75u: goto L_08A812BC;
    case 76u: goto L_08A812C0;
    case 77u: goto L_08A812C8;
    case 78u: goto L_08A812D0;
    case 79u: goto L_08A812D8;
    case 80u: goto L_08A812E0;
    case 81u: goto L_08A812F4;
    case 82u: goto L_08A812F8;
    case 83u: goto L_08A81300;
    case 84u: goto L_08A81310;
    case 85u: goto L_08A81318;
    case 86u: goto L_08A81364;
    case 87u: goto L_08A8138C;
    case 88u: goto L_08A81398;
    case 89u: goto L_08A813A0;
    case 90u: goto L_08A813A8;
    case 91u: goto L_08A813BC;
    case 92u: goto L_08A813C4;
    case 93u: goto L_08A813CC;
    case 94u: goto L_08A813D4;
    case 95u: goto L_08A813E0;
    case 96u: goto L_08A813F0;
    case 97u: goto L_08A81404;
    case 98u: goto L_08A81418;
    case 99u: goto L_08A81428;
    case 100u: goto L_08A81444;
    case 101u: goto L_08A81448;
    case 102u: goto L_08A81458;
    case 103u: goto L_08A81460;
    case 104u: goto L_08A8146C;
    case 105u: goto L_08A81474;
    case 106u: goto L_08A8147C;
    case 107u: goto L_08A81490;
    case 108u: goto L_08A81498;
    case 109u: goto L_08A814A0;
    case 110u: goto L_08A814A8;
    case 111u: goto L_08A814B4;
    case 112u: goto L_08A814C4;
    case 113u: goto L_08A814D8;
    case 114u: goto L_08A814EC;
    case 115u: goto L_08A814FC;
    case 116u: goto L_08A81518;
    case 117u: goto L_08A8151C;
    case 118u: goto L_08A8152C;
    case 119u: goto L_08A8155C;
    case 120u: goto L_08A8159C;
    case 121u: goto L_08A815BC;
    case 122u: goto L_08A815D0;
    case 123u: goto L_08A815DC;
    case 124u: goto L_08A815E8;
    case 125u: goto L_08A815F0;
    case 126u: goto L_08A815F4;
    case 127u: goto L_08A81608;
    case 128u: goto L_08A81614;
    case 129u: goto L_08A81638;
    case 130u: goto L_08A81660;
    case 131u: goto L_08A8167C;
    case 132u: goto L_08A81688;
    case 133u: goto L_08A81694;
    case 134u: goto L_08A816C8;
    case 135u: goto L_08A816DC;
    case 136u: goto L_08A816EC;
    case 137u: goto L_08A816F0;
    case 138u: goto L_08A81708;
    case 139u: goto L_08A81718;
    case 140u: goto L_08A81728;
    case 141u: goto L_08A81744;
    case 142u: goto L_08A81750;
    case 143u: goto L_08A8175C;
    case 144u: goto L_08A81768;
    case 145u: goto L_08A8177C;
    case 146u: goto L_08A81784;
    case 147u: goto L_08A8178C;
    case 148u: goto L_08A81794;
    case 149u: goto L_08A8179C;
    case 150u: goto L_08A817A4;
    case 151u: goto L_08A817B8;
    case 152u: goto L_08A817C0;
    case 153u: goto L_08A817CC;
    case 154u: goto L_08A817D8;
    case 155u: goto L_08A817E4;
    case 156u: goto L_08A817F4;
    case 157u: goto L_08A817FC;
    case 158u: goto L_08A81804;
    case 159u: goto L_08A8180C;
    case 160u: goto L_08A81820;
    case 161u: goto L_08A81830;
    case 162u: goto L_08A81850;
    case 163u: goto L_08A81858;
    case 164u: goto L_08A81864;
    case 165u: goto L_08A81880;
    case 166u: goto L_08A81884;
    case 167u: goto L_08A81890;
    case 168u: goto L_08A81898;
    case 169u: goto L_08A818A4;
    case 170u: goto L_08A818C0;
    case 171u: goto L_08A818C4;
    case 172u: goto L_08A818D4;
    case 173u: goto L_08A818E4;
    case 174u: goto L_08A818F4;
    case 175u: goto L_08A81904;
    case 176u: goto L_08A81924;
    case 177u: goto L_08A81928;
    case 178u: goto L_08A81934;
    case 179u: goto L_08A81944;
    case 180u: goto L_08A81954;
    case 181u: goto L_08A81970;
    case 182u: goto L_08A8197C;
    case 183u: goto L_08A81A0C;
    case 184u: goto L_08A81A24;
    case 185u: goto L_08A81A30;
    case 186u: goto L_08A81B08;
    case 187u: goto L_08A81B58;
    case 188u: goto L_08A81B6C;
    case 189u: goto L_08A81B78;
    case 190u: goto L_08A81C10;
    case 191u: goto L_08A81C9C;
    case 192u: goto L_08A81CB4;
    case 193u: goto L_08A81CC0;
    case 194u: goto L_08A81D84;
    case 195u: goto L_08A81DD8;
    case 196u: goto L_08A81DEC;
    case 197u: goto L_08A81DF8;
    case 198u: goto L_08A81E8C;
    case 199u: goto L_08A81F1C;
    case 200u: goto L_08A81F34;
    case 201u: goto L_08A81F40;
    case 202u: goto L_08A82008;
    case 203u: goto L_08A82058;
    case 204u: goto L_08A8206C;
    case 205u: goto L_08A82078;
    case 206u: goto L_08A82110;
    case 207u: goto L_08A82130;
    case 208u: goto L_08A82164;
    case 209u: goto L_08A8216C;
    case 210u: goto L_08A8217C;
    case 211u: goto L_08A82180;
    case 212u: goto L_08A82188;
    case 213u: goto L_08A82198;
    case 214u: goto L_08A821A4;
    case 215u: goto L_08A821AC;
    case 216u: goto L_08A821BC;
    case 217u: goto L_08A821C8;
    case 218u: goto L_08A821CC;
    case 219u: goto L_08A821DC;
    case 220u: goto L_08A821E4;
    case 221u: goto L_08A82240;
    case 222u: goto L_08A82244;
    case 223u: goto L_08A8224C;
    case 224u: goto L_08A82278;
    case 225u: goto L_08A82290;
    case 226u: goto L_08A822A4;
    case 227u: goto L_08A822AC;
    case 228u: goto L_08A822D0;
    case 229u: goto L_08A822DC;
    case 230u: goto L_08A822E8;
    case 231u: goto L_08A822F4;
    case 232u: goto L_08A822FC;
    case 233u: goto L_08A8232C;
    case 234u: goto L_08A82334;
    case 235u: goto L_08A82340;
    case 236u: goto L_08A82348;
    case 237u: goto L_08A82354;
    case 238u: goto L_08A82358;
    case 239u: goto L_08A82370;
    case 240u: goto L_08A8239C;
    case 241u: goto L_08A823CC;
    case 242u: goto L_08A823E8;
    case 243u: goto L_08A823F4;
    case 244u: goto L_08A823FC;
    case 245u: goto L_08A82404;
    case 246u: goto L_08A82408;
    case 247u: goto L_08A82410;
    case 248u: goto L_08A82418;
    case 249u: goto L_08A82420;
    case 250u: goto L_08A8242C;
    case 251u: goto L_08A82438;
    case 252u: goto L_08A82440;
    case 253u: goto L_08A8244C;
    case 254u: goto L_08A82468;
    case 255u: goto L_08A82474;
    case 256u: goto L_08A82484;
    case 257u: goto L_08A824AC;
    case 258u: goto L_08A8250C;
    case 259u: goto L_08A82524;
    case 260u: goto L_08A82548;
    case 261u: goto L_08A82550;
    case 262u: goto L_08A82594;
    case 263u: goto L_08A825E0;
    case 264u: goto L_08A825F4;
    case 265u: goto L_08A82608;
    case 266u: goto L_08A82630;
    case 267u: goto L_08A82640;
    case 268u: goto L_08A82680;
    case 269u: goto L_08A8268C;
    case 270u: goto L_08A82698;
    case 271u: goto L_08A826A4;
    case 272u: goto L_08A826B0;
    case 273u: goto L_08A826C0;
    case 274u: goto L_08A826C8;
    case 275u: goto L_08A826D0;
    case 276u: goto L_08A8271C;
    case 277u: goto L_08A82728;
    case 278u: goto L_08A82734;
    case 279u: goto L_08A82768;
    case 280u: goto L_08A82770;
    case 281u: goto L_08A82778;
    case 282u: goto L_08A82788;
    case 283u: goto L_08A827B4;
    case 284u: goto L_08A827DC;
    case 285u: goto L_08A827E8;
    case 286u: goto L_08A827F4;
    case 287u: goto L_08A82800;
    case 288u: goto L_08A82810;
    case 289u: goto L_08A82818;
    case 290u: goto L_08A82820;
    case 291u: goto L_08A82828;
    case 292u: goto L_08A82830;
    case 293u: goto L_08A8283C;
    case 294u: goto L_08A8284C;
    case 295u: goto L_08A8285C;
    case 296u: goto L_08A82868;
    case 297u: goto L_08A82874;
    case 298u: goto L_08A8287C;
    case 299u: goto L_08A82884;
    case 300u: goto L_08A8288C;
    case 301u: goto L_08A82894;
    case 302u: goto L_08A8289C;
    case 303u: goto L_08A828A8;
    case 304u: goto L_08A828B4;
    case 305u: goto L_08A828C0;
    case 306u: goto L_08A828C8;
    case 307u: goto L_08A828CC;
    case 308u: goto L_08A828E0;
    case 309u: goto L_08A828E8;
    case 310u: goto L_08A828F0;
    case 311u: goto L_08A828F8;
    case 312u: goto L_08A82910;
    case 313u: goto L_08A82918;
    case 314u: goto L_08A82920;
    case 315u: goto L_08A82938;
    case 316u: goto L_08A82958;
    case 317u: goto L_08A8296C;
    case 318u: goto L_08A82980;
    case 319u: goto L_08A8299C;
    case 320u: goto L_08A829AC;
    case 321u: goto L_08A829BC;
    case 322u: goto L_08A829CC;
    case 323u: goto L_08A829DC;
    case 324u: goto L_08A829EC;
    case 325u: goto L_08A829FC;
    case 326u: goto L_08A82A0C;
    case 327u: goto L_08A82A18;
    case 328u: goto L_08A82A20;
    case 329u: goto L_08A82A28;
    case 330u: goto L_08A82A30;
    case 331u: goto L_08A82A38;
    case 332u: goto L_08A82A44;
    case 333u: goto L_08A82A50;
    case 334u: goto L_08A82A60;
    case 335u: goto L_08A82A68;
    case 336u: goto L_08A82A70;
    case 337u: goto L_08A82A78;
    case 338u: goto L_08A82A90;
    case 339u: goto L_08A82A94;
    case 340u: goto L_08A82AA4;
    case 341u: goto L_08A82AF8;
    case 342u: goto L_08A82B20;
    case 343u: goto L_08A82B3C;
    case 344u: goto L_08A82B4C;
    case 345u: goto L_08A82B6C;
    case 346u: goto L_08A82BAC;
    case 347u: goto L_08A82BC8;
    case 348u: goto L_08A82BD4;
    case 349u: goto L_08A82BEC;
    case 350u: goto L_08A82C00;
    case 351u: goto L_08A82C0C;
    case 352u: goto L_08A82C1C;
    case 353u: goto L_08A82C24;
    case 354u: goto L_08A82C30;
    case 355u: goto L_08A82C3C;
    case 356u: goto L_08A82C54;
    case 357u: goto L_08A82C60;
    case 358u: goto L_08A82C74;
    case 359u: goto L_08A82C7C;
    case 360u: goto L_08A82C88;
    case 361u: goto L_08A82C94;
    case 362u: goto L_08A82CAC;
    case 363u: goto L_08A82CB8;
    case 364u: goto L_08A82CC0;
    case 365u: goto L_08A82CCC;
    case 366u: goto L_08A82CD4;
    case 367u: goto L_08A82CE0;
    case 368u: goto L_08A82CF0;
    case 369u: goto L_08A82D00;
    case 370u: goto L_08A82D10;
    case 371u: goto L_08A82D20;
    case 372u: goto L_08A82D30;
    case 373u: goto L_08A82D40;
    case 374u: goto L_08A82D54;
    case 375u: goto L_08A82D60;
    case 376u: goto L_08A82D68;
    case 377u: goto L_08A82D70;
    case 378u: goto L_08A82D78;
    case 379u: goto L_08A82D80;
    case 380u: goto L_08A82D88;
    case 381u: goto L_08A82DB4;
    case 382u: goto L_08A82DBC;
    case 383u: goto L_08A82DD4;
    case 384u: goto L_08A82DDC;
    case 385u: goto L_08A82E04;
    case 386u: goto L_08A82E0C;
    case 387u: goto L_08A82E24;
    case 388u: goto L_08A82E2C;
    case 389u: goto L_08A82E34;
    case 390u: goto L_08A82E4C;
    case 391u: goto L_08A82E50;
    case 392u: goto L_08A82E64;
    case 393u: goto L_08A82E7C;
    case 394u: goto L_08A82E84;
    case 395u: goto L_08A82EA8;
    case 396u: goto L_08A82EB0;
    case 397u: goto L_08A82ED8;
    case 398u: goto L_08A82EE0;
    case 399u: goto L_08A82EE4;
    case 400u: goto L_08A82EF0;
    case 401u: goto L_08A82EF8;
    case 402u: goto L_08A82F24;
    case 403u: goto L_08A82F2C;
    case 404u: goto L_08A82F34;
    case 405u: goto L_08A82F3C;
    case 406u: goto L_08A82F64;
    case 407u: goto L_08A82F6C;
    case 408u: goto L_08A82F84;
    case 409u: goto L_08A82F8C;
    case 410u: goto L_08A82F94;
    case 411u: goto L_08A82FAC;
    case 412u: goto L_08A82FC4;
    case 413u: goto L_08A82FCC;
    case 414u: goto L_08A82FF0;
    case 415u: goto L_08A82FF8;
    case 416u: goto L_08A83020;
    case 417u: goto L_08A83028;
    case 418u: goto L_08A8302C;
    case 419u: goto L_08A83038;
    case 420u: goto L_08A83040;
    case 421u: goto L_08A83058;
    case 422u: goto L_08A83060;
    case 423u: goto L_08A830E4;
    case 424u: goto L_08A830EC;
    case 425u: goto L_08A83114;
    case 426u: goto L_08A8311C;
    case 427u: goto L_08A83138;
    case 428u: goto L_08A83140;
    case 429u: goto L_08A83148;
    case 430u: goto L_08A83170;
    case 431u: goto L_08A83178;
    case 432u: goto L_08A83184;
    case 433u: goto L_08A8318C;
    case 434u: goto L_08A83194;
    case 435u: goto L_08A8319C;
    case 436u: goto L_08A831C8;
    case 437u: goto L_08A831D0;
    case 438u: goto L_08A831D8;
    case 439u: goto L_08A831FC;
    case 440u: goto L_08A83200;
    case 441u: goto L_08A83208;
    case 442u: goto L_08A83210;
    case 443u: goto L_08A83220;
    case 444u: goto L_08A83228;
    case 445u: goto L_08A83230;
    case 446u: goto L_08A83240;
    case 447u: goto L_08A83250;
    case 448u: goto L_08A83258;
    case 449u: goto L_08A83260;
    case 450u: goto L_08A8328C;
    case 451u: goto L_08A83294;
    case 452u: goto L_08A8329C;
    case 453u: goto L_08A832B0;
    case 454u: goto L_08A832B8;
    case 455u: goto L_08A832C0;
    case 456u: goto L_08A832C8;
    case 457u: goto L_08A832DC;
    case 458u: goto L_08A832E4;
    case 459u: goto L_08A832E8;
    case 460u: goto L_08A83300;
    case 461u: goto L_08A83304;
    case 462u: goto L_08A8330C;
    case 463u: goto L_08A83318;
    case 464u: goto L_08A83328;
    case 465u: goto L_08A83330;
    case 466u: goto L_08A83338;
    case 467u: goto L_08A83354;
    case 468u: goto L_08A83370;
    case 469u: goto L_08A8338C;
    case 470u: goto L_08A833A8;
    case 471u: goto L_08A833C0;
    case 472u: goto L_08A833CC;
    case 473u: goto L_08A833D4;
    case 474u: goto L_08A833E4;
    case 475u: goto L_08A833F0;
    case 476u: goto L_08A83408;
    case 477u: goto L_08A83410;
    case 478u: goto L_08A83424;
    case 479u: goto L_08A83434;
    case 480u: goto L_08A8343C;
    case 481u: goto L_08A8345C;
    case 482u: goto L_08A83464;
    case 483u: goto L_08A83498;
    case 484u: goto L_08A834A0;
    case 485u: goto L_08A834A8;
    case 486u: goto L_08A834B0;
    case 487u: goto L_08A834CC;
    case 488u: goto L_08A834E0;
    case 489u: goto L_08A83518;
    case 490u: goto L_08A83528;
    case 491u: goto L_08A83538;
    case 492u: goto L_08A83548;
    case 493u: goto L_08A83554;
    case 494u: goto L_08A8355C;
    case 495u: goto L_08A83574;
    case 496u: goto L_08A83584;
    case 497u: goto L_08A83594;
    case 498u: goto L_08A835A0;
    case 499u: goto L_08A835AC;
    case 500u: goto L_08A835B4;
    case 501u: goto L_08A835B8;
    case 502u: goto L_08A835C4;
    case 503u: goto L_08A835D4;
    case 504u: goto L_08A835E8;
    case 505u: goto L_08A835F4;
    case 506u: goto L_08A83604;
    case 507u: goto L_08A8360C;
    case 508u: goto L_08A8361C;
    case 509u: goto L_08A83630;
    case 510u: goto L_08A83638;
    case 511u: goto L_08A83654;
    case 512u: goto L_08A83658;
    case 513u: goto L_08A83660;
    case 514u: goto L_08A83670;
    case 515u: goto L_08A83684;
    case 516u: goto L_08A83694;
    case 517u: goto L_08A836A4;
    case 518u: goto L_08A836C0;
    case 519u: goto L_08A836DC;
    case 520u: goto L_08A836F8;
    case 521u: goto L_08A83714;
    case 522u: goto L_08A8371C;
    case 523u: goto L_08A83724;
    case 524u: goto L_08A83728;
    case 525u: goto L_08A83730;
    case 526u: goto L_08A8374C;
    case 527u: goto L_08A83798;
    case 528u: goto L_08A837B4;
    case 529u: goto L_08A83800;
    case 530u: goto L_08A8381C;
    case 531u: goto L_08A83828;
    case 532u: goto L_08A8382C;
    case 533u: goto L_08A83844;
    case 534u: goto L_08A8384C;
    case 535u: goto L_08A83854;
    case 536u: goto L_08A83858;
    case 537u: goto L_08A83864;
    case 538u: goto L_08A83880;
    case 539u: goto L_08A83894;
    case 540u: goto L_08A838A4;
    case 541u: goto L_08A838C0;
    case 542u: goto L_08A838DC;
    case 543u: goto L_08A838F0;
    case 544u: goto L_08A838FC;
    case 545u: goto L_08A83908;
    case 546u: goto L_08A83918;
    case 547u: goto L_08A83928;
    case 548u: goto L_08A83940;
    case 549u: goto L_08A83944;
    case 550u: goto L_08A8394C;
    case 551u: goto L_08A83968;
    case 552u: goto L_08A83970;
    case 553u: goto L_08A83988;
    case 554u: goto L_08A83998;
    case 555u: goto L_08A839A4;
    case 556u: goto L_08A839B8;
    case 557u: goto L_08A839C4;
    case 558u: goto L_08A839D4;
    case 559u: goto L_08A839E4;
    case 560u: goto L_08A839F4;
    case 561u: goto L_08A83A04;
    case 562u: goto L_08A83A08;
    case 563u: goto L_08A83A1C;
    case 564u: goto L_08A83A24;
    case 565u: goto L_08A83A34;
    case 566u: goto L_08A83A44;
    case 567u: goto L_08A83A5C;
    case 568u: goto L_08A83A60;
    case 569u: goto L_08A83A70;
    case 570u: goto L_08A83A80;
    case 571u: goto L_08A83A90;
    case 572u: goto L_08A83AC4;
    case 573u: goto L_08A83AD4;
    case 574u: goto L_08A83ADC;
    case 575u: goto L_08A83AE4;
    case 576u: goto L_08A83AF8;
    case 577u: goto L_08A83B00;
    case 578u: goto L_08A83B14;
    case 579u: goto L_08A83B20;
    case 580u: goto L_08A83B2C;
    case 581u: goto L_08A83B4C;
    case 582u: goto L_08A83B64;
    case 583u: goto L_08A83B6C;
    case 584u: goto L_08A83B70;
    case 585u: goto L_08A83BA0;
    case 586u: goto L_08A83BB0;
    case 587u: goto L_08A83BB8;
    case 588u: goto L_08A83BC4;
    case 589u: goto L_08A83BD0;
    case 590u: goto L_08A83BD8;
    case 591u: goto L_08A83BEC;
    case 592u: goto L_08A83C04;
    case 593u: goto L_08A83C18;
    case 594u: goto L_08A83C2C;
    case 595u: goto L_08A83C34;
    case 596u: goto L_08A83C48;
    case 597u: goto L_08A83C58;
    case 598u: goto L_08A83C70;
    case 599u: goto L_08A83C88;
    case 600u: goto L_08A83C94;
    case 601u: goto L_08A83C9C;
    case 602u: goto L_08A83CAC;
    case 603u: goto L_08A83CB4;
    case 604u: goto L_08A83CF0;
    case 605u: goto L_08A83D58;
    case 606u: goto L_08A83D6C;
    case 607u: goto L_08A83D7C;
    case 608u: goto L_08A83D90;
    case 609u: goto L_08A83DA4;
    case 610u: goto L_08A83DAC;
    case 611u: goto L_08A83DB4;
    case 612u: goto L_08A83DD0;
    case 613u: goto L_08A83DDC;
    case 614u: goto L_08A83DE4;
    case 615u: goto L_08A83DEC;
    case 616u: goto L_08A83DF4;
    case 617u: goto L_08A83DFC;
    case 618u: goto L_08A83E08;
    case 619u: goto L_08A83E1C;
    case 620u: goto L_08A83E28;
    case 621u: goto L_08A83E38;
    case 622u: goto L_08A83E40;
    case 623u: goto L_08A83E48;
    case 624u: goto L_08A83E50;
    case 625u: goto L_08A83E5C;
    case 626u: goto L_08A83E6C;
    case 627u: goto L_08A83E78;
    case 628u: goto L_08A83E84;
    case 629u: goto L_08A83E88;
    case 630u: goto L_08A83E90;
    case 631u: goto L_08A83E9C;
    case 632u: goto L_08A83EA8;
    case 633u: goto L_08A83EB8;
    case 634u: goto L_08A83EBC;
    case 635u: goto L_08A83EC8;
    case 636u: goto L_08A83ED4;
    case 637u: goto L_08A83EE0;
    case 638u: goto L_08A83EEC;
    case 639u: goto L_08A83EF0;
    case 640u: goto L_08A83EF4;
    case 641u: goto L_08A83F00;
    case 642u: goto L_08A83F60;
    case 643u: goto L_08A83F74;
    case 644u: goto L_08A83F7C;
    case 645u: goto L_08A83F84;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A80000:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (33792u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (34048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (34304u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (34560u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (34816u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (35072u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (35328u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (35584u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (35840u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (36096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (36352u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (36608u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (36864u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (37120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (37376u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (37632u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (37888u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (38144u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (38400u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (38656u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (38912u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (39168u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (39424u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (39680u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (39936u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (40192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (40448u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (40704u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (40960u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (41216u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (41472u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (41728u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (41984u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (42240u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (42496u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (42752u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (43008u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (43264u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (43520u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (43776u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (44032u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (44288u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (44544u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (44800u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (45056u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (45312u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (47104u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (47360u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (47616u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (47872u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (48128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (48384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (48640u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (48896u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (49408u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (49664u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (49920u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (50176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (50432u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (50688u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (50944u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (51200u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (51456u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (51712u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (51968u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (52224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (52480u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (52736u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (52992u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (53248u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (53760u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (54016u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (54272u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (54528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (54784u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (55040u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (55296u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (55552u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (55808u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (56064u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (56320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (56576u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (56832u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (57088u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (57600u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (58880u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (59136u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (59392u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (59648u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A808ACu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 416u, 0x08A7F4A8u>(ctx, &aot_mem) && ctx.pc == 0x08A808ACu) goto L_08A808AC;
    return;
L_08A808AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (15360u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 61u);
    ctx.gpr[31] = (0x08A808D4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 415u, 0x08A7F404u>(ctx, &aot_mem) && ctx.pc == 0x08A808D4u) goto L_08A808D4;
    return;
L_08A808D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (14848u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[31] = (0x08A808FCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 415u, 0x08A7F404u>(ctx, &aot_mem) && ctx.pc == 0x08A808FCu) goto L_08A808FC;
    return;
L_08A808FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 65u);
    ctx.gpr[31] = (0x08A80924u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 415u, 0x08A7F404u>(ctx, &aot_mem) && ctx.pc == 0x08A80924u) goto L_08A80924;
    return;
L_08A80924:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (10752u << 16u);
    goto L_08A80934;
L_08A80934:
    ctx.gpr[5] = (ctx.gpr[18] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 43u);
    ctx.gpr[31] = (0x08A80958u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 415u, 0x08A7F404u>(ctx, &aot_mem) && ctx.pc == 0x08A80958u) goto L_08A80958;
    return;
L_08A80958:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A80934;
      }
      goto L_08A8096C;
    }
L_08A8096C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22976));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    ctx.gpr[8] = (ctx.gpr[8] << 12u);
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[6] = (ctx.gpr[8] | ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (57856u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[9] & 15u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] << 12u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[4] = (ctx.gpr[7] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (58112u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[8] & 15u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] << 12u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[4] = (ctx.gpr[7] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (58368u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[8] & 15u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] << 12u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[4] = (ctx.gpr[7] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (58624u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (16896u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] >> 8u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] >> 8u);
    ctx.gpr[7] = (17152u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (17664u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (17664u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (17920u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 4096u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[9] = (19456u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (19712u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (54272u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 10u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (54528u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (5376u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (5632u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A80CC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    ctx.gpr[2] = (0u | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A80CEC:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A80D14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A80D28u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A80D28u) goto L_08A80D28;
    return;
L_08A80D28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A80D9C;
      }
      goto L_08A80D38;
    }
L_08A80D38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-2))))));
    ctx.gpr[5] = (0u | 95u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A80D9C;
      }
      goto L_08A80D48;
    }
L_08A80D48:
    ctx.gpr[31] = (0x08A80D50u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A80D50u) goto L_08A80D50;
    return;
L_08A80D50:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A80D74;
      }
      goto L_08A80D60;
    }
L_08A80D60:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A80D9C;
      }
      goto L_08A80D68;
    }
L_08A80D68:
    ctx.gpr[4] = (0u | 76u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A80D9C;
      }
      goto L_08A80D74;
    }
L_08A80D74:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A80D90;
      }
      goto L_08A80D7C;
    }
L_08A80D7C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80D9C;
      }
      goto L_08A80D84;
    }
L_08A80D84:
    ctx.gpr[4] = (0u | 67u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A80D9C;
      }
      goto L_08A80D90;
    }
L_08A80D90:
    ctx.gpr[4] = (0u | 84u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A80D9C;
      }
      goto L_08A80D9C;
    }
L_08A80D9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A80DAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80DFC;
      }
      goto L_08A80DC8;
    }
L_08A80DC8:
    ctx.gpr[31] = (0x08A80DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08A80DD0u) goto L_08A80DD0;
    return;
L_08A80DD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80DF8;
      }
      goto L_08A80DDC;
    }
L_08A80DDC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A80DF8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A80DF8u) goto L_08A80DF8;
    return;
L_08A80DF8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_08A80DFC;
L_08A80DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80E3C;
      }
      goto L_08A80E08;
    }
L_08A80E08:
    ctx.gpr[31] = (0x08A80E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08A80E10u) goto L_08A80E10;
    return;
L_08A80E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80E38;
      }
      goto L_08A80E1C;
    }
L_08A80E1C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A80E38u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A80E38u) goto L_08A80E38;
    return;
L_08A80E38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    goto L_08A80E3C;
L_08A80E3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A80E4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A80E74u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    goto L_08A81728;
L_08A80E74:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A80E80u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80E80u) goto L_08A80E80;
    return;
L_08A80E80:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_08A80F58;
      }
      goto L_08A80E90;
    }
L_08A80E90:
    ctx.gpr[5] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[6] = (ctx.gpr[4] ^ 5u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80F58;
      }
      goto L_08A80EBC;
    }
L_08A80EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80EFC;
      }
      goto L_08A80EC8;
    }
L_08A80EC8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A80ED8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 654u, 0x0899F668u>(ctx, &aot_mem) && ctx.pc == 0x08A80ED8u) goto L_08A80ED8;
    return;
L_08A80ED8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (0u | 56u);
    ctx.gpr[31] = (0x08A80EF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80EF4u) goto L_08A80EF4;
    return;
L_08A80EF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52))))));
      if (branch_taken) {
          goto L_08A80F4C;
      }
      goto L_08A80EFC;
    }
L_08A80EFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A80F4C;
      }
      goto L_08A80F0C;
    }
L_08A80F0C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23214));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A80F2Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 654u, 0x0899F668u>(ctx, &aot_mem) && ctx.pc == 0x08A80F2Cu) goto L_08A80F2C;
    return;
L_08A80F2C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (0u | 56u);
    ctx.gpr[31] = (0x08A80F48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80F48u) goto L_08A80F48;
    return;
L_08A80F48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52))))));
    goto L_08A80F4C;
L_08A80F4C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A80F58;
L_08A80F58:
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
L_08A80F70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[31]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A80F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A80F90u) goto L_08A80F90;
    return;
L_08A80F90:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
        goto L_08A80FCC;
    }
    goto L_08A80FCC;
L_08A80FCC:
    ctx.gpr[6] = (16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A811B0;
      }
      goto L_08A80FE4;
    }
L_08A80FE4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27772)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
      if (branch_taken) {
          goto L_08A81030;
      }
      goto L_08A81014;
    }
L_08A81014:
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08A81028;
    }
    goto L_08A81028;
L_08A81028:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A811B4;
      }
      goto L_08A81030;
    }
L_08A81030:
    ctx.gpr[6] = (16576u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A810BC;
      }
      goto L_08A8104C;
    }
L_08A8104C:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A810B4;
      }
      goto L_08A8105C;
    }
L_08A8105C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(53))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08A81098;
      }
      goto L_08A81068;
    }
L_08A81068:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_08A810C8;
    }
    goto L_08A81090;
L_08A81090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81100;
      }
      goto L_08A81098;
    }
L_08A81098:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(53))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A811B4;
      }
      goto L_08A810B4;
    }
L_08A810B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A811B4;
      }
      goto L_08A810BC;
    }
L_08A810BC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A811B4;
      }
      goto L_08A810C8;
    }
L_08A810C8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A81100;
      }
      goto L_08A810D8;
    }
L_08A810D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A81198;
      }
      goto L_08A81100;
    }
L_08A81100:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08A81198;
L_08A81198:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A811B0;
      }
      goto L_08A811A8;
    }
L_08A811A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A811B4;
      }
      goto L_08A811B0;
    }
L_08A811B0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A811B4;
L_08A811B4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A811C8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5900), static_cast<std::uint16_t>(0u));
    ctx.gpr[7] = (2275u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[8] = (ctx.gpr[4] << 5u);
    goto L_08A811E8;
L_08A811E8:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 336 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08A811E8;
      }
      goto L_08A81224;
    }
L_08A81224:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23424));
    goto L_08A81230;
L_08A81230:
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A81230;
      }
      goto L_08A81254;
    }
L_08A81254:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5898), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A81260:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    ctx.gpr[19] = (2275u << 16u);
    ctx.gpr[21] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    ctx.gpr[16] = (0u | 6u);
    ctx.gpr[18] = (0u | 320u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(5992));
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A812C0;
      }
      goto L_08A812BC;
    }
L_08A812BC:
    ctx.gpr[16] = (0u | 2u);
    goto L_08A812C0;
L_08A812C0:
    ctx.gpr[31] = (0x08A812C8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A812C8u) goto L_08A812C8;
    return;
L_08A812C8:
    ctx.gpr[31] = (0x08A812D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 178u, 0x08A9879Cu>(ctx, &aot_mem) && ctx.pc == 0x08A812D0u) goto L_08A812D0;
    return;
L_08A812D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(23728)));
      if (branch_taken) {
          goto L_08A812E0;
      }
      goto L_08A812D8;
    }
L_08A812D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(23368), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A812F8;
      }
      goto L_08A812E0;
    }
L_08A812E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(23368)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08A812F4;
    }
    goto L_08A812F4;
L_08A812F4:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(23368), ctx.gpr[4]);
    goto L_08A812F8;
L_08A812F8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A81318;
      }
      goto L_08A81300;
    }
L_08A81300:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (0u | 0u);
        goto L_08A81310;
    }
    goto L_08A81310;
L_08A81310:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(23728), ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    goto L_08A81318;
L_08A81318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[16]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81458;
      }
      goto L_08A81364;
    }
L_08A81364:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.gpr[22] << 5u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[16] = (ctx.lo);
    goto L_08A8138C;
L_08A8138C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A813D4;
      }
      goto L_08A81398;
    }
L_08A81398:
    ctx.gpr[31] = (0x08A813A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A813A0u) goto L_08A813A0;
    return;
L_08A813A0:
    ctx.gpr[31] = (0x08A813A8u);
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A813A8u) goto L_08A813A8;
    return;
L_08A813A8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A813BCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08A82AA4;
L_08A813BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81448;
      }
      goto L_08A813C4;
    }
L_08A813C4:
    ctx.gpr[31] = (0x08A813CCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08A821E4;
L_08A813CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81448;
      }
      goto L_08A813D4;
    }
L_08A813D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81448;
      }
      goto L_08A813E0;
    }
L_08A813E0:
    ctx.gpr[23] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81448;
      }
      goto L_08A813F0;
    }
L_08A813F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[6] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(84), 0u);
        goto L_08A81448;
    }
    goto L_08A81404;
L_08A81404:
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A81418u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 426u, 0x088A9DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A81418u) goto L_08A81418;
    return;
L_08A81418:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(104), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81444;
      }
      goto L_08A81428;
    }
L_08A81428:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A81444u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A81444u) goto L_08A81444;
    return;
L_08A81444:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(84), 0u);
    goto L_08A81448;
L_08A81448:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A8138C;
      }
      goto L_08A81458;
    }
L_08A81458:
    ctx.gpr[16] = (0u | 320u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(30720));
    goto L_08A81460;
L_08A81460:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A814A8;
      }
      goto L_08A8146C;
    }
L_08A8146C:
    ctx.gpr[31] = (0x08A81474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A81474u) goto L_08A81474;
    return;
L_08A81474:
    ctx.gpr[31] = (0x08A8147Cu);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8147Cu) goto L_08A8147C;
    return;
L_08A8147C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A81490u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08A82AA4;
L_08A81490:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8151C;
      }
      goto L_08A81498;
    }
L_08A81498:
    ctx.gpr[31] = (0x08A814A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A821E4;
L_08A814A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8151C;
      }
      goto L_08A814A8;
    }
L_08A814A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8151C;
      }
      goto L_08A814B4;
    }
L_08A814B4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8151C;
      }
      goto L_08A814C4;
    }
L_08A814C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[6] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), 0u);
        goto L_08A8151C;
    }
    goto L_08A814D8;
L_08A814D8:
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A814ECu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 426u, 0x088A9DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A814ECu) goto L_08A814EC;
    return;
L_08A814EC:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(104), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81518;
      }
      goto L_08A814FC;
    }
L_08A814FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A81518u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A81518u) goto L_08A81518;
    return;
L_08A81518:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), 0u);
    goto L_08A8151C;
L_08A8151C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 336 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A81460;
      }
      goto L_08A8152C;
    }
L_08A8152C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8155C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A8159Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08A81708;
L_08A8159C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A815BCu);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 206u, 0x08A84F08u>(ctx, &aot_mem) && ctx.pc == 0x08A815BCu) goto L_08A815BC;
    return;
L_08A815BC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81614;
      }
      goto L_08A815D0;
    }
L_08A815D0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A815DCu);
    ctx.gpr[4] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A815DCu) goto L_08A815DC;
    return;
L_08A815DC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A815F4;
      }
      goto L_08A815E8;
    }
L_08A815E8:
    ctx.gpr[31] = (0x08A815F0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 414u, 0x089198E0u>(ctx, &aot_mem) && ctx.pc == 0x08A815F0u) goto L_08A815F0;
    return;
L_08A815F0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A815F4;
L_08A815F4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08A81608u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 57u, 0x089C0478u>(ctx, &aot_mem) && ctx.pc == 0x08A81608u) goto L_08A81608;
    return;
L_08A81608:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A81614u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 426u, 0x08A5A2CCu>(ctx, &aot_mem) && ctx.pc == 0x08A81614u) goto L_08A81614;
    return;
L_08A81614:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A81638:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A81660u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08A81708;
L_08A81660:
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[8] = (16624u << 16u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30336));
    goto L_08A8167C;
L_08A8167C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A816DC;
      }
      goto L_08A81688;
    }
L_08A81688:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A816DC;
      }
      goto L_08A81694;
    }
L_08A81694:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A816DC;
      }
      goto L_08A816C8;
    }
L_08A816C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A816F0;
      }
      goto L_08A816DC;
    }
L_08A816DC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 336 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A8167C;
      }
      goto L_08A816EC;
    }
L_08A816EC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A816F0;
L_08A816F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A81708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A81718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81718u) goto L_08A81718;
    return;
L_08A81718:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A81728:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(284)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A8179C;
      }
      goto L_08A81744;
    }
L_08A81744:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A81794;
      }
      goto L_08A81750;
    }
L_08A81750:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(282)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8178C;
      }
      goto L_08A8175C;
    }
L_08A8175C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A81784;
      }
      goto L_08A81768;
    }
L_08A81768:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A817A4;
      }
      goto L_08A8177C;
    }
L_08A8177C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A817B8;
      }
      goto L_08A81784;
    }
L_08A81784:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A817C0;
      }
      goto L_08A8178C;
    }
L_08A8178C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 38u);
      if (branch_taken) {
          goto L_08A817C0;
      }
      goto L_08A81794;
    }
L_08A81794:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 37u);
      if (branch_taken) {
          goto L_08A817C0;
      }
      goto L_08A8179C;
    }
L_08A8179C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 38u);
      if (branch_taken) {
          goto L_08A817C0;
      }
      goto L_08A817A4;
    }
L_08A817A4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A817B8;
L_08A817B8:
    ctx.gpr[31] = (0x08A817C0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 492u, 0x08AD6480u>(ctx, &aot_mem) && ctx.pc == 0x08A817C0u) goto L_08A817C0;
    return;
L_08A817C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A817CC:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23424));
    goto L_08A817D8;
L_08A817D8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A817FC;
      }
      goto L_08A817E4;
    }
L_08A817E4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A817D8;
      }
      goto L_08A817F4;
    }
L_08A817F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A81804;
      }
      goto L_08A817FC;
    }
L_08A817FC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[2] = (0u | 1u);
    goto L_08A81804;
L_08A81804:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8180C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A81820u);
    // nop
    goto L_08A822AC;
L_08A81820:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_08A818D4;
      }
      goto L_08A81830;
    }
L_08A81830:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81884;
      }
      goto L_08A81850;
    }
L_08A81850:
    ctx.gpr[31] = (0x08A81858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08A81858u) goto L_08A81858;
    return;
L_08A81858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81880;
      }
      goto L_08A81864;
    }
L_08A81864:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A81880u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A81880u) goto L_08A81880;
    return;
L_08A81880:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_08A81884;
L_08A81884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A818C4;
      }
      goto L_08A81890;
    }
L_08A81890:
    ctx.gpr[31] = (0x08A81898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08A81898u) goto L_08A81898;
    return;
L_08A81898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A818C0;
      }
      goto L_08A818A4;
    }
L_08A818A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A818C0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A818C0u) goto L_08A818C0;
    return;
L_08A818C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    goto L_08A818C4;
L_08A818C4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    goto L_08A818D4;
L_08A818D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A818E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A818F4u);
    // nop
    goto L_08A822AC;
L_08A818F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A81924;
      }
      goto L_08A81904;
    }
L_08A81904:
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A81928;
      }
      goto L_08A81924;
    }
L_08A81924:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08A81928;
L_08A81928:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A81934:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A81944u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A822AC;
L_08A81944:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A81970;
      }
      goto L_08A81954;
    }
L_08A81954:
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A81970;
L_08A81970:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8197C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A81B58;
      }
      goto L_08A81A0C;
    }
L_08A81A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] & 1023u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A81A30;
      }
      goto L_08A81A24;
    }
L_08A81A24:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_08A81A30;
L_08A81A30:
    ctx.gpr[4] = (15304u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27924)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[19] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08A81B08u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 323u, 0x0892A980u>(ctx, &aot_mem) && ctx.pc == 0x08A81B08u) goto L_08A81B08;
    return;
L_08A81B08:
    ctx.gpr[4] = (48844u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[10] = (0u | 7u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A81B58u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08A81B58u) goto L_08A81B58;
    return;
L_08A81B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A81B78;
      }
      goto L_08A81B6C;
    }
L_08A81B6C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A81B78;
L_08A81B78:
    ctx.gpr[4] = (15176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A81C10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A81DD8;
      }
      goto L_08A81C9C;
    }
L_08A81C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A81CC0;
      }
      goto L_08A81CB4;
    }
L_08A81CB4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_08A81CC0;
L_08A81CC0:
    ctx.gpr[4] = (15432u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27924)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[19] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08A81D84u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 323u, 0x0892A980u>(ctx, &aot_mem) && ctx.pc == 0x08A81D84u) goto L_08A81D84;
    return;
L_08A81D84:
    ctx.gpr[4] = (48921u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 7u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A81DD8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08A81DD8u) goto L_08A81DD8;
    return;
L_08A81DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] & 1023u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A81DF8;
      }
      goto L_08A81DEC;
    }
L_08A81DEC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A81DF8;
L_08A81DF8:
    ctx.gpr[4] = (15304u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A81E8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16736u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A82058;
      }
      goto L_08A81F1C;
    }
L_08A81F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A81F40;
      }
      goto L_08A81F34;
    }
L_08A81F34:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_08A81F40;
L_08A81F40:
    ctx.gpr[4] = (15176u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27924)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[19] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    ctx.gpr[11] = (ctx.gpr[19] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08A82008u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 323u, 0x0892A980u>(ctx, &aot_mem) && ctx.pc == 0x08A82008u) goto L_08A82008;
    return;
L_08A82008:
    ctx.gpr[4] = (48921u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[10] = (0u | 5u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A82058u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08A82058u) goto L_08A82058;
    return;
L_08A82058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] & 4095u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A82078;
      }
      goto L_08A8206C;
    }
L_08A8206C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A82078;
L_08A82078:
    ctx.gpr[4] = (15048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A82110:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    goto L_08A82130;
L_08A82130:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8216C;
      }
      goto L_08A82164;
    }
L_08A82164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A82180;
      }
      goto L_08A8216C;
    }
L_08A8216C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 336 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A82130;
      }
      goto L_08A8217C;
    }
L_08A8217C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A82180;
L_08A82180:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A82188:
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30336));
    goto L_08A82198;
L_08A82198:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A821CC;
      }
      goto L_08A821A4;
    }
L_08A821A4:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A821CC;
      }
      goto L_08A821AC;
    }
L_08A821AC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (ctx.gpr[4] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A821C8;
      }
      goto L_08A821BC;
    }
L_08A821BC:
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A821CC;
      }
      goto L_08A821C8;
    }
L_08A821C8:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), 0u);
    goto L_08A821CC;
L_08A821CC:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 336 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A82198;
      }
      goto L_08A821DC;
    }
L_08A821DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A821E4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-5898)));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(23424));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5898), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-5898)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A82244;
      }
      goto L_08A82240;
    }
L_08A82240:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5898), static_cast<std::uint16_t>(0u));
    goto L_08A82244;
L_08A82244:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8224C:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (0u | 65534u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82290;
      }
      goto L_08A82278;
    }
L_08A82278:
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[2] = (ctx.gpr[5] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A822A4;
      }
      goto L_08A82290;
    }
L_08A82290:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[2] = (ctx.gpr[5] << 16u);
    ctx.gpr[2] = (ctx.gpr[4] | ctx.gpr[2]);
    goto L_08A822A4;
L_08A822A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A822AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] & 65535u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A822DC;
      }
      goto L_08A822D0;
    }
L_08A822D0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A822DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23520));
    goto L_08A80CC0;
L_08A822DC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 336 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A822F4;
      }
      goto L_08A822E8;
    }
L_08A822E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A822F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23456));
    goto L_08A80CC0;
L_08A822F4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A82334;
      }
      goto L_08A822FC;
    }
L_08A822FC:
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] & ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] >> 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A82348;
      }
      goto L_08A8232C;
    }
L_08A8232C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A82358;
      }
      goto L_08A82334;
    }
L_08A82334:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A82340u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23396));
    goto L_08A80CC0;
L_08A82340:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A82358;
      }
      goto L_08A82348;
    }
L_08A82348:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A82354u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23376));
    goto L_08A80CC0;
L_08A82354:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08A82358;
L_08A82358:
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
L_08A82370:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8239Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8239Cu) goto L_08A8239C;
    return;
L_08A8239C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[22] ^ 4u);
    ctx.gpr[5] = (ctx.gpr[22] ^ 5u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[22] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82484;
      }
      goto L_08A823CC;
    }
L_08A823CC:
    ctx.gpr[20] = (2275u << 16u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (0u | 3u);
    ctx.gpr[18] = (0u | 4u);
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-30336));
    goto L_08A823E8;
L_08A823E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(50)));
    if (ctx.gpr[4] == ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
        goto L_08A82408;
    }
    goto L_08A823F4;
L_08A823F4:
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
        goto L_08A82408;
    }
    goto L_08A823FC;
L_08A823FC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A82474;
      }
      goto L_08A82404;
    }
L_08A82404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    goto L_08A82408;
L_08A82408:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82474;
      }
      goto L_08A82410;
    }
L_08A82410:
    ctx.gpr[31] = (0x08A82418u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    goto L_08A81728;
L_08A82418:
    ctx.gpr[31] = (0x08A82420u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82420u) goto L_08A82420;
    return;
L_08A82420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A82474;
      }
      goto L_08A8242C;
    }
L_08A8242C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A82474;
      }
      goto L_08A82438;
    }
L_08A82438:
    ctx.gpr[31] = (0x08A82440u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08A82440u) goto L_08A82440;
    return;
L_08A82440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82468;
      }
      goto L_08A8244C;
    }
L_08A8244C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A82468u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A82468u) goto L_08A82468;
    return;
L_08A82468:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    goto L_08A82474;
L_08A82474:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 336 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A823E8;
      }
      goto L_08A82484;
    }
L_08A82484:
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
L_08A824AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[6] = (0u | 30u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08A8250C;
    }
    goto L_08A8250C;
L_08A8250C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.gpr[22] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15561u << 16u);
      if (branch_taken) {
          goto L_08A82640;
      }
      goto L_08A82524;
    }
L_08A82524:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (2228u << 16u);
    goto L_08A82548;
L_08A82548:
    ctx.gpr[31] = (0x08A82550u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A82550u) goto L_08A82550;
    return;
L_08A82550:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A82594u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A82594u) goto L_08A82594;
    return;
L_08A82594:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[28] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A825E0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A825E0u) goto L_08A825E0;
    return;
L_08A825E0:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82630;
      }
      goto L_08A825F4;
    }
L_08A825F4:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[31] = (0x08A82608u);
    ctx.gpr[23] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(122)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A82608u) goto L_08A82608;
    return;
L_08A82608:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[7] = (ctx.gpr[4] & 3u);
    ctx.gpr[7] = (ctx.gpr[22] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A82630u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 206u, 0x08A84F08u>(ctx, &aot_mem) && ctx.pc == 0x08A82630u) goto L_08A82630;
    return;
L_08A82630:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A82548;
      }
      goto L_08A82640;
    }
L_08A82640:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A82680:
    ctx.gpr[2] = (2275u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-30336));
    goto L_08A8268C;
L_08A8268C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A826B0;
      }
      goto L_08A82698;
    }
L_08A82698:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A826C8;
      }
      goto L_08A826A4;
    }
L_08A826A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A826C8;
      }
      goto L_08A826B0;
    }
L_08A826B0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 336 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A8268C;
      }
      goto L_08A826C0;
    }
L_08A826C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A826C8;
      }
      goto L_08A826C8;
    }
L_08A826C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A826D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    ctx.gpr[21] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[20] = (0u | 4u);
    ctx.gpr[19] = (0u | 8u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-30336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    goto L_08A8271C;
L_08A8271C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A82734;
      }
      goto L_08A82728;
    }
L_08A82728:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A82778;
      }
      goto L_08A82734;
    }
L_08A82734:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A82778;
      }
      goto L_08A82768;
    }
L_08A82768:
    ctx.gpr[31] = (0x08A82770u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08A80DAC;
L_08A82770:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    goto L_08A82778;
L_08A82778:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 336 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A8271C;
      }
      goto L_08A82788;
    }
L_08A82788:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A827B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A82820;
      }
      goto L_08A827DC;
    }
L_08A827DC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A82818;
      }
      goto L_08A827E8;
    }
L_08A827E8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(278)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A82818;
      }
      goto L_08A827F4;
    }
L_08A827F4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A82818;
      }
      goto L_08A82800;
    }
L_08A82800:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A82828;
      }
      goto L_08A82810;
    }
L_08A82810:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8289C;
      }
      goto L_08A82818;
    }
L_08A82818:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A828CC;
      }
      goto L_08A82820;
    }
L_08A82820:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A828CC;
      }
      goto L_08A82828;
    }
L_08A82828:
    ctx.gpr[31] = (0x08A82830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A82830u) goto L_08A82830;
    return;
L_08A82830:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8284C;
      }
      goto L_08A8283C;
    }
L_08A8283C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A82884;
      }
      goto L_08A8284C;
    }
L_08A8284C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8287C;
      }
      goto L_08A8285C;
    }
L_08A8285C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8287C;
      }
      goto L_08A82868;
    }
L_08A82868:
    ctx.gpr[5] = (ctx.gpr[16] < static_cast<std::uint32_t>(260) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] < static_cast<std::uint32_t>(294) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8288C;
      }
      goto L_08A82874;
    }
L_08A82874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8289C;
      }
      goto L_08A8287C;
    }
L_08A8287C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A828CC;
      }
      goto L_08A82884;
    }
L_08A82884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A828CC;
      }
      goto L_08A8288C;
    }
L_08A8288C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8289C;
      }
      goto L_08A82894;
    }
L_08A82894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A828CC;
      }
      goto L_08A8289C;
    }
L_08A8289C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A828C0;
      }
      goto L_08A828A8;
    }
L_08A828A8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(274)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A828C0;
      }
      goto L_08A828B4;
    }
L_08A828B4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A828C8;
      }
      goto L_08A828C0;
    }
L_08A828C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A828CC;
      }
      goto L_08A828C8;
    }
L_08A828C8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A828CC;
L_08A828CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A828E0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A828E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A828F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A828F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A82910u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A82910u) goto L_08A82910;
    return;
L_08A82910:
    ctx.gpr[31] = (0x08A82918u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 310u, 0x089454F4u>(ctx, &aot_mem) && ctx.pc == 0x08A82918u) goto L_08A82918;
    return;
L_08A82918:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8296C;
      }
      goto L_08A82920;
    }
L_08A82920:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A82938u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 669u, 0x08A87384u>(ctx, &aot_mem) && ctx.pc == 0x08A82938u) goto L_08A82938;
    return;
L_08A82938:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A82958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A82958u) goto L_08A82958;
    return;
L_08A82958:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A8296Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 362u, 0x08945824u>(ctx, &aot_mem) && ctx.pc == 0x08A8296Cu) goto L_08A8296C;
    return;
L_08A8296C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A82980:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29196)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A82A30;
      }
      goto L_08A8299C;
    }
L_08A8299C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A82A28;
      }
      goto L_08A829AC;
    }
L_08A829AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A82A20;
      }
      goto L_08A829BC;
    }
L_08A829BC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A82A20;
      }
      goto L_08A829CC;
    }
L_08A829CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A82A20;
      }
      goto L_08A829DC;
    }
L_08A829DC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A82A20;
      }
      goto L_08A829EC;
    }
L_08A829EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A82A20;
      }
      goto L_08A829FC;
    }
L_08A829FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A82A20;
      }
      goto L_08A82A0C;
    }
L_08A82A0C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
        goto L_08A82A38;
    }
    goto L_08A82A18;
L_08A82A18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82A44;
      }
      goto L_08A82A20;
    }
L_08A82A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82A94;
      }
      goto L_08A82A28;
    }
L_08A82A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82A94;
      }
      goto L_08A82A30;
    }
L_08A82A30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82A94;
      }
      goto L_08A82A38;
    }
L_08A82A38:
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82A70;
      }
      goto L_08A82A44;
    }
L_08A82A44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A82A68;
      }
      goto L_08A82A50;
    }
L_08A82A50:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1916)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82A78;
      }
      goto L_08A82A60;
    }
L_08A82A60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82A94;
      }
      goto L_08A82A68;
    }
L_08A82A68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82A94;
      }
      goto L_08A82A70;
    }
L_08A82A70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82A94;
      }
      goto L_08A82A78;
    }
L_08A82A78:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A82A90u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1916)));
    goto L_08A824AC;
L_08A82A90:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(0u));
    goto L_08A82A94;
L_08A82A94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A82AA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A82B3C;
      }
      goto L_08A82AF8;
    }
L_08A82AF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82B3C;
      }
      goto L_08A82B20;
    }
L_08A82B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A82B3C;
L_08A82B3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A82C7C;
      }
      goto L_08A82B4C;
    }
L_08A82B4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A82B6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82B6Cu) goto L_08A82B6C;
    return;
L_08A82B6C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A82BEC;
      }
      goto L_08A82BAC;
    }
L_08A82BAC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.lo);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A82BD4;
      }
      goto L_08A82BC8;
    }
L_08A82BC8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08A82BD4;
L_08A82BD4:
    ctx.gpr[4] = (18863u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51200u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A82BEC;
L_08A82BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A82C0C;
      }
      goto L_08A82C00;
    }
L_08A82C00:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A82C0C;
L_08A82C0C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
        goto L_08A82C24;
    }
    goto L_08A82C1C;
L_08A82C1C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A82C3C;
      }
      goto L_08A82C24;
    }
L_08A82C24:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A82C3C;
      }
      goto L_08A82C30;
    }
L_08A82C30:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A82C3C;
L_08A82C3C:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A82C60;
      }
      goto L_08A82C54;
    }
L_08A82C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(426), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08A82C74;
      }
      goto L_08A82C60;
    }
L_08A82C60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(426), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08A82C74;
L_08A82C74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82C7C;
      }
      goto L_08A82C7C;
    }
L_08A82C7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A83A34;
      }
      goto L_08A82C88;
    }
L_08A82C88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A82CD4;
      }
      goto L_08A82C94;
    }
L_08A82C94:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A82CACu);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A83CF0;
L_08A82CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82CC0;
      }
      goto L_08A82CB8;
    }
L_08A82CB8:
    ctx.gpr[31] = (0x08A82CC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08A82CC0u) goto L_08A82CC0;
    return;
L_08A82CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82CD4;
      }
      goto L_08A82CCC;
    }
L_08A82CCC:
    ctx.gpr[31] = (0x08A82CD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08A82CD4u) goto L_08A82CD4;
    return;
L_08A82CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83CB4;
      }
      goto L_08A82CE0;
    }
L_08A82CE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A82D40;
      }
      goto L_08A82CF0;
    }
L_08A82CF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A82D40;
      }
      goto L_08A82D00;
    }
L_08A82D00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A82D40;
      }
      goto L_08A82D10;
    }
L_08A82D10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A82D40;
      }
      goto L_08A82D20;
    }
L_08A82D20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A82D40;
      }
      goto L_08A82D30;
    }
L_08A82D30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A83210;
      }
      goto L_08A82D40;
    }
L_08A82D40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08A83208;
      }
      goto L_08A82D54;
    }
L_08A82D54:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A82E34;
      }
      goto L_08A82D60;
    }
L_08A82D60:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A82F3C;
      }
      goto L_08A82D68;
    }
L_08A82D68:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A82DDC;
      }
      goto L_08A82D70;
    }
L_08A82D70:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A83060;
      }
      goto L_08A82D78;
    }
L_08A82D78:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A83148;
      }
      goto L_08A82D80;
    }
L_08A82D80:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82DD4;
      }
      goto L_08A82D88;
    }
L_08A82D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A82DB4u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 58u, 0x088A03DCu>(ctx, &aot_mem) && ctx.pc == 0x08A82DB4u) goto L_08A82DB4;
    return;
L_08A82DB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A82DD4;
      }
      goto L_08A82DBC;
    }
L_08A82DBC:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A82DD4;
L_08A82DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A839B8;
      }
      goto L_08A82DDC;
    }
L_08A82DDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A82E04u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x08A82E04u) goto L_08A82E04;
    return;
L_08A82E04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_08A82E24;
      }
      goto L_08A82E0C;
    }
L_08A82E0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A82E24;
L_08A82E24:
    ctx.gpr[31] = (0x08A82E2Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A82E2Cu) goto L_08A82E2C;
    return;
L_08A82E2C:
    ctx.gpr[31] = (0x08A82E34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08A82E34u) goto L_08A82E34;
    return;
L_08A82E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A82E50;
      }
      goto L_08A82E4C;
    }
L_08A82E4C:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A82E50;
L_08A82E50:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A82EF0;
      }
      goto L_08A82E64;
    }
L_08A82E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_08A82E84;
      }
      goto L_08A82E7C;
    }
L_08A82E7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A82EA8;
      }
      goto L_08A82E84;
    }
L_08A82E84:
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_08A82EA8;
L_08A82EA8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82EE4;
      }
      goto L_08A82EB0;
    }
L_08A82EB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[31] = (0x08A82ED8u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 58u, 0x088A03DCu>(ctx, &aot_mem) && ctx.pc == 0x08A82ED8u) goto L_08A82ED8;
    return;
L_08A82ED8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82EE4;
      }
      goto L_08A82EE0;
    }
L_08A82EE0:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A82EE4;
L_08A82EE4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A82E64;
      }
      goto L_08A82EF0;
    }
L_08A82EF0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82F34;
      }
      goto L_08A82EF8;
    }
L_08A82EF8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08A82F24u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 406u, 0x08A46A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82F24u) goto L_08A82F24;
    return;
L_08A82F24:
    ctx.gpr[31] = (0x08A82F2Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A80DAC;
L_08A82F2C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    goto L_08A82F34;
L_08A82F34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A839B8;
      }
      goto L_08A82F3C;
    }
L_08A82F3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A82F64u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x08A82F64u) goto L_08A82F64;
    return;
L_08A82F64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_08A82F84;
      }
      goto L_08A82F6C;
    }
L_08A82F6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A82F84;
L_08A82F84:
    ctx.gpr[31] = (0x08A82F8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A82F8Cu) goto L_08A82F8C;
    return;
L_08A82F8C:
    ctx.gpr[31] = (0x08A82F94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08A82F94u) goto L_08A82F94;
    return;
L_08A82F94:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A83038;
      }
      goto L_08A82FAC;
    }
L_08A82FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_08A82FCC;
      }
      goto L_08A82FC4;
    }
L_08A82FC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A82FF0;
      }
      goto L_08A82FCC;
    }
L_08A82FCC:
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_08A82FF0;
L_08A82FF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8302C;
      }
      goto L_08A82FF8;
    }
L_08A82FF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[31] = (0x08A83020u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 58u, 0x088A03DCu>(ctx, &aot_mem) && ctx.pc == 0x08A83020u) goto L_08A83020;
    return;
L_08A83020:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8302C;
      }
      goto L_08A83028;
    }
L_08A83028:
    ctx.gpr[19] = (0u | 1u);
    goto L_08A8302C;
L_08A8302C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A82FAC;
      }
      goto L_08A83038;
    }
L_08A83038:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A83058;
      }
      goto L_08A83040;
    }
L_08A83040:
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A83058;
L_08A83058:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A839B8;
      }
      goto L_08A83060;
    }
L_08A83060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[6] = (15395u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A830E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A830E4u) goto L_08A830E4;
    return;
L_08A830E4:
    ctx.gpr[31] = (0x08A830ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08A830ECu) goto L_08A830EC;
    return;
L_08A830EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A83114u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x08A83114u) goto L_08A83114;
    return;
L_08A83114:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83140;
      }
      goto L_08A8311C;
    }
L_08A8311C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A83140;
      }
      goto L_08A83138;
    }
L_08A83138:
    ctx.gpr[4] = (0u | 14u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A83140;
L_08A83140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A839B8;
      }
      goto L_08A83148;
    }
L_08A83148:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A83170u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x08A83170u) goto L_08A83170;
    return;
L_08A83170:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83184;
      }
      goto L_08A83178;
    }
L_08A83178:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A83184;
L_08A83184:
    ctx.gpr[31] = (0x08A8318Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A8318Cu) goto L_08A8318C;
    return;
L_08A8318C:
    ctx.gpr[31] = (0x08A83194u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08A83194u) goto L_08A83194;
    return;
L_08A83194:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83200;
      }
      goto L_08A8319C;
    }
L_08A8319C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A831C8u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 58u, 0x088A03DCu>(ctx, &aot_mem) && ctx.pc == 0x08A831C8u) goto L_08A831C8;
    return;
L_08A831C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83200;
      }
      goto L_08A831D0;
    }
L_08A831D0:
    ctx.gpr[31] = (0x08A831D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A80DAC;
L_08A831D8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (0u | 89u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A831FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08A831FCu) goto L_08A831FC;
    return;
L_08A831FC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08A83200;
L_08A83200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A839B8;
      }
      goto L_08A83208;
    }
L_08A83208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A839B8;
      }
      goto L_08A83210;
    }
L_08A83210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08A83220u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    goto L_08A827B4;
L_08A83220:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A832C0;
      }
      goto L_08A83228;
    }
L_08A83228:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8329C;
      }
      goto L_08A83230;
    }
L_08A83230:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83260;
      }
      goto L_08A83240;
    }
L_08A83240:
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A83250u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08A80F70;
L_08A83250:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A832E8;
      }
      goto L_08A83258;
    }
L_08A83258:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08A832E8;
      }
      goto L_08A83260;
    }
L_08A83260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8328Cu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 58u, 0x088A03DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8328Cu) goto L_08A8328C;
    return;
L_08A8328C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A832E8;
      }
      goto L_08A83294;
    }
L_08A83294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08A832E8;
      }
      goto L_08A8329C;
    }
L_08A8329C:
    ctx.gpr[4] = (16358u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A832B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A80F70;
L_08A832B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A832E8;
      }
      goto L_08A832B8;
    }
L_08A832B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08A832E8;
      }
      goto L_08A832C0;
    }
L_08A832C0:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A832E8;
      }
      goto L_08A832C8;
    }
L_08A832C8:
    ctx.gpr[4] = (16358u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A832DCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A80F70;
L_08A832DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A832E8;
      }
      goto L_08A832E4;
    }
L_08A832E4:
    ctx.gpr[21] = (0u | 1u);
    goto L_08A832E8;
L_08A832E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A83304;
      }
      goto L_08A83300;
    }
L_08A83300:
    ctx.gpr[21] = (0u | 0u);
    goto L_08A83304;
L_08A83304:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83660;
      }
      goto L_08A8330C;
    }
L_08A8330C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A83318u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    goto L_08A81728;
L_08A83318:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 37 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A833C0;
      }
      goto L_08A83328;
    }
L_08A83328:
    ctx.gpr[31] = (0x08A83330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 78u, 0x089184E0u>(ctx, &aot_mem) && ctx.pc == 0x08A83330u) goto L_08A83330;
    return;
L_08A83330:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A833C0;
      }
      goto L_08A83338;
    }
L_08A83338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A833C0;
      }
      goto L_08A83354;
    }
L_08A83354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A833C0;
      }
      goto L_08A83370;
    }
L_08A83370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A833C0;
      }
      goto L_08A8338C;
    }
L_08A8338C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(122)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A833C0;
      }
      goto L_08A833A8;
    }
L_08A833A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[21] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A83658;
      }
      goto L_08A833C0;
    }
L_08A833C0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 37 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83658;
      }
      goto L_08A833CC;
    }
L_08A833CC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83658;
      }
      goto L_08A833D4;
    }
L_08A833D4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(257), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A833E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08A833E4u) goto L_08A833E4;
    return;
L_08A833E4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A833F0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A833F0u) goto L_08A833F0;
    return;
L_08A833F0:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08A83408u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83408u) goto L_08A83408;
    return;
L_08A83408:
    ctx.gpr[31] = (0x08A83410u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A83410u) goto L_08A83410;
    return;
L_08A83410:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(257)));
      if (branch_taken) {
          goto L_08A83658;
      }
      goto L_08A83424;
    }
L_08A83424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_08A83464;
    }
    goto L_08A83434;
L_08A83434:
    ctx.gpr[31] = (0x08A8343Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8343Cu) goto L_08A8343C;
    return;
L_08A8343C:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_08A83464;
    }
    goto L_08A8345C;
L_08A8345C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08A83658;
      }
      goto L_08A83464;
    }
L_08A83464:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A834A0;
      }
      goto L_08A83498;
    }
L_08A83498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A83658;
      }
      goto L_08A834A0;
    }
L_08A834A0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A834E0;
      }
      goto L_08A834A8;
    }
L_08A834A8:
    ctx.gpr[31] = (0x08A834B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A834B0u) goto L_08A834B0;
    return;
L_08A834B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3212)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1500) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83658;
      }
      goto L_08A834CC;
    }
L_08A834CC:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[21] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(23728), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A83658;
      }
      goto L_08A834E0;
    }
L_08A834E0:
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] ^ 4u);
    ctx.gpr[6] = (ctx.gpr[19] ^ 5u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(23728), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[19] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83574;
      }
      goto L_08A83518;
    }
L_08A83518:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A83548;
      }
      goto L_08A83528;
    }
L_08A83528:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A83548;
      }
      goto L_08A83538;
    }
L_08A83538:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A83574;
      }
      goto L_08A83548;
    }
L_08A83548:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A83554u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08A80E4C;
L_08A83554:
    ctx.gpr[31] = (0x08A8355Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8355Cu) goto L_08A8355C;
    return;
L_08A8355C:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A83574u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 191u, 0x0885103Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83574u) goto L_08A83574;
    return;
L_08A83574:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A835F4;
      }
      goto L_08A83584;
    }
L_08A83584:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A835C4;
      }
      goto L_08A83594;
    }
L_08A83594:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A835A0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A835A0u) goto L_08A835A0;
    return;
L_08A835A0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A835B8;
      }
      goto L_08A835AC;
    }
L_08A835AC:
    ctx.gpr[31] = (0x08A835B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A835B4u) goto L_08A835B4;
    return;
L_08A835B4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08A835B8;
L_08A835B8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A835C4;
L_08A835C4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A835D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23356));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A835D4u) goto L_08A835D4;
    return;
L_08A835D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A835E8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A835E8u) goto L_08A835E8;
    return;
L_08A835E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A835F4;
L_08A835F4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23368)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8360C;
      }
      goto L_08A83604;
    }
L_08A83604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A83630;
      }
      goto L_08A8360C;
    }
L_08A8360C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83630;
      }
      goto L_08A8361C;
    }
L_08A8361C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A83630u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A83630u) goto L_08A83630;
    return;
L_08A83630:
    ctx.gpr[31] = (0x08A83638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A83638u) goto L_08A83638;
    return;
L_08A83638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3212)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1500) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83658;
      }
      goto L_08A83654;
    }
L_08A83654:
    ctx.gpr[21] = (0u | 0u);
    goto L_08A83658;
L_08A83658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83694;
      }
      goto L_08A83660;
    }
L_08A83660:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83694;
      }
      goto L_08A83670;
    }
L_08A83670:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A83684u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A83684u) goto L_08A83684;
    return;
L_08A83684:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A83694;
L_08A83694:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83728;
      }
      goto L_08A836A4;
    }
L_08A836A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A83714;
      }
      goto L_08A836C0;
    }
L_08A836C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(274)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A83714;
      }
      goto L_08A836DC;
    }
L_08A836DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A83714;
      }
      goto L_08A836F8;
    }
L_08A836F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(294)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A83728;
      }
      goto L_08A83714;
    }
L_08A83714:
    ctx.gpr[31] = (0x08A8371Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 310u, 0x089454F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8371Cu) goto L_08A8371C;
    return;
L_08A8371C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83728;
      }
      goto L_08A83724;
    }
L_08A83724:
    ctx.gpr[21] = (0u | 0u);
    goto L_08A83728;
L_08A83728:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A839B8;
      }
      goto L_08A83730;
    }
L_08A83730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[30] << 7u);
      if (branch_taken) {
          goto L_08A83798;
      }
      goto L_08A8374C;
    }
L_08A8374C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[30] << 4u);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
    ctx.gpr[5] = (15948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1212)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A839B8;
      }
      goto L_08A83798;
    }
L_08A83798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[30] << 7u);
      if (branch_taken) {
          goto L_08A83800;
      }
      goto L_08A837B4;
    }
L_08A837B4:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[30] << 4u);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(359)));
    ctx.gpr[5] = (15948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A839B8;
      }
      goto L_08A83800;
    }
L_08A83800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(292)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_08A8382C;
    }
    goto L_08A8381C;
L_08A8381C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A839B8;
      }
      goto L_08A83828;
    }
L_08A83828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_08A8382C;
L_08A8382C:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(294)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
        goto L_08A83858;
    }
    goto L_08A83844;
L_08A83844:
    ctx.gpr[31] = (0x08A8384Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 30u, 0x089581F0u>(ctx, &aot_mem) && ctx.pc == 0x08A8384Cu) goto L_08A8384C;
    return;
L_08A8384C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A839B8;
      }
      goto L_08A83854;
    }
L_08A83854:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    goto L_08A83858;
L_08A83858:
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A83880;
      }
      goto L_08A83864;
    }
L_08A83864:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A839B8;
      }
      goto L_08A83880;
    }
L_08A83880:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[31] = (0x08A83894u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23348));
    goto L_08A80CC0;
L_08A83894:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83970;
      }
      goto L_08A838A4;
    }
L_08A838A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08A838DC;
      }
      goto L_08A838C0;
    }
L_08A838C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(278)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A83944;
      }
      goto L_08A838DC;
    }
L_08A838DC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08A838F0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 650u, 0x088A7DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A838F0u) goto L_08A838F0;
    return;
L_08A838F0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83944;
      }
      goto L_08A838FC;
    }
L_08A838FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08A83928;
    }
    goto L_08A83908;
L_08A83908:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[31] = (0x08A83918u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A83918u) goto L_08A83918;
    return;
L_08A83918:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08A83928;
L_08A83928:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 65535u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A83944;
      }
      goto L_08A83940;
    }
L_08A83940:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A83944;
L_08A83944:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83968;
      }
      goto L_08A8394C;
    }
L_08A8394C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08A83968u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(96))))));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 475u, 0x08919E58u>(ctx, &aot_mem) && ctx.pc == 0x08A83968u) goto L_08A83968;
    return;
L_08A83968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A839B8;
      }
      goto L_08A83970;
    }
L_08A83970:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A83988u);
    ctx.gpr[8] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 25u, 0x08A842CCu>(ctx, &aot_mem) && ctx.pc == 0x08A83988u) goto L_08A83988;
    return;
L_08A83988:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A839B8;
      }
      goto L_08A83998;
    }
L_08A83998:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A839B8;
      }
      goto L_08A839A4;
    }
L_08A839A4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A839B8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A839B8u) goto L_08A839B8;
    return;
L_08A839B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A83CB4;
      }
      goto L_08A839C4;
    }
L_08A839C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (0u | 20u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
        goto L_08A83A08;
    }
    goto L_08A839D4;
L_08A839D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
        goto L_08A83A08;
    }
    goto L_08A839E4;
L_08A839E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (0u | 5u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
        goto L_08A83A08;
    }
    goto L_08A839F4;
L_08A839F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A83CB4;
      }
      goto L_08A83A04;
    }
L_08A83A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    goto L_08A83A08;
L_08A83A08:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83CB4;
      }
      goto L_08A83A1C;
    }
L_08A83A1C:
    ctx.gpr[31] = (0x08A83A24u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A80DAC;
L_08A83A24:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A83CB4;
      }
      goto L_08A83A34;
    }
L_08A83A34:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A83A60;
      }
      goto L_08A83A44;
    }
L_08A83A44:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83A60;
      }
      goto L_08A83A5C;
    }
L_08A83A5C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A83A60;
L_08A83A60:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
      if (branch_taken) {
          goto L_08A83CB4;
      }
      goto L_08A83A70;
    }
L_08A83A70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83CB4;
      }
      goto L_08A83A80;
    }
L_08A83A80:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A83BA0;
      }
      goto L_08A83A90;
    }
L_08A83A90:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83BA0;
      }
      goto L_08A83AC4;
    }
L_08A83AC4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A83AD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x08A83AD4u) goto L_08A83AD4;
    return;
L_08A83AD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A83AE4;
      }
      goto L_08A83ADC;
    }
L_08A83ADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A83B70;
      }
      goto L_08A83AE4;
    }
L_08A83AE4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A83AF8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x08A83AF8u) goto L_08A83AF8;
    return;
L_08A83AF8:
    ctx.gpr[31] = (0x08A83B00u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 111u, 0x08A34AF8u>(ctx, &aot_mem) && ctx.pc == 0x08A83B00u) goto L_08A83B00;
    return;
L_08A83B00:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A83B14u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83B14u) goto L_08A83B14;
    return;
L_08A83B14:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_08A83B2C;
    }
    goto L_08A83B20;
L_08A83B20:
    ctx.gpr[4] = (17658u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A83B4C;
      }
      goto L_08A83B2C;
    }
L_08A83B2C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08A83B4C;
L_08A83B4C:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A83B6C;
      }
      goto L_08A83B64;
    }
L_08A83B64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08A83BA0;
      }
      goto L_08A83B6C;
    }
L_08A83B6C:
    ctx.gpr[4] = (2232u << 16u);
    goto L_08A83B70;
L_08A83B70:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A83AC4;
      }
      goto L_08A83BA0;
    }
L_08A83BA0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A83BD0;
      }
      goto L_08A83BB0;
    }
L_08A83BB0:
    ctx.gpr[31] = (0x08A83BB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83BB8u) goto L_08A83BB8;
    return;
L_08A83BB8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A83BD0;
      }
      goto L_08A83BC4;
    }
L_08A83BC4:
    ctx.gpr[4] = (17658u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A83C2C;
      }
      goto L_08A83BD0;
    }
L_08A83BD0:
    ctx.gpr[31] = (0x08A83BD8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83BD8u) goto L_08A83BD8;
    return;
L_08A83BD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x08A83BECu);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83BECu) goto L_08A83BEC;
    return;
L_08A83BEC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[31] = (0x08A83C04u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83C04u) goto L_08A83C04;
    return;
L_08A83C04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08A83C18u);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83C18u) goto L_08A83C18;
    return;
L_08A83C18:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08A83C2C;
L_08A83C2C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (17096u << 16u);
      if (branch_taken) {
          goto L_08A83C48;
      }
      goto L_08A83C34;
    }
L_08A83C34:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A83C70;
      }
      goto L_08A83C48;
    }
L_08A83C48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16409u << 16u);
      if (branch_taken) {
          goto L_08A83CB4;
      }
      goto L_08A83C58;
    }
L_08A83C58:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A83CB4;
      }
      goto L_08A83C70;
    }
L_08A83C70:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A83C88u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A83CF0;
L_08A83C88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83CB4;
      }
      goto L_08A83C94;
    }
L_08A83C94:
    ctx.gpr[31] = (0x08A83C9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08A83C9Cu) goto L_08A83C9C;
    return;
L_08A83C9C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83CB4;
      }
      goto L_08A83CAC;
    }
L_08A83CAC:
    ctx.gpr[31] = (0x08A83CB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08A83CB4u) goto L_08A83CB4;
    return;
L_08A83CB4:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A83CF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A83D6C;
      }
      goto L_08A83D58;
    }
L_08A83D58:
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A83D6C;
L_08A83D6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A83DDC;
      }
      goto L_08A83D7C;
    }
L_08A83D7C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A83DA4;
      }
      goto L_08A83D90;
    }
L_08A83D90:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A83DA4;
L_08A83DA4:
    ctx.gpr[31] = (0x08A83DACu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 492u, 0x08AD6480u>(ctx, &aot_mem) && ctx.pc == 0x08A83DACu) goto L_08A83DAC;
    return;
L_08A83DAC:
    ctx.gpr[31] = (0x08A83DB4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83DB4u) goto L_08A83DB4;
    return;
L_08A83DB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[21] = (ctx.gpr[5] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A83DDC;
      }
      goto L_08A83DD0;
    }
L_08A83DD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    goto L_08A83DDC;
L_08A83DDC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A83E90;
      }
      goto L_08A83DE4;
    }
L_08A83DE4:
    ctx.gpr[31] = (0x08A83DECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A069F8u>(ctx, &aot_mem) && ctx.pc == 0x08A83DECu) goto L_08A83DEC;
    return;
L_08A83DEC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A83DFC;
      }
      goto L_08A83DF4;
    }
L_08A83DF4:
    ctx.gpr[31] = (0x08A83DFCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A069F8u>(ctx, &aot_mem) && ctx.pc == 0x08A83DFCu) goto L_08A83DFC;
    return;
L_08A83DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A83E40;
      }
      goto L_08A83E08;
    }
L_08A83E08:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[31] = (0x08A83E1Cu);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 240u, 0x0883D3CCu>(ctx, &aot_mem) && ctx.pc == 0x08A83E1Cu) goto L_08A83E1C;
    return;
L_08A83E1C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[22] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
        goto L_08A83E40;
    }
    goto L_08A83E28;
L_08A83E28:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A83E38u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x08A83E38u) goto L_08A83E38;
    return;
L_08A83E38:
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_08A83E40;
L_08A83E40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A83EF4;
      }
      goto L_08A83E48;
    }
L_08A83E48:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A83EF4;
      }
      goto L_08A83E50;
    }
L_08A83E50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A83EF4;
      }
      goto L_08A83E5C;
    }
L_08A83E5C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[20] << 8u);
    ctx.gpr[31] = (0x08A83E6Cu);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 240u, 0x0883D3CCu>(ctx, &aot_mem) && ctx.pc == 0x08A83E6Cu) goto L_08A83E6C;
    return;
L_08A83E6C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A83E88;
      }
      goto L_08A83E78;
    }
L_08A83E78:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A83E84u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x08A83E84u) goto L_08A83E84;
    return;
L_08A83E84:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A83E88;
L_08A83E88:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A83EF4;
      }
      goto L_08A83E90;
    }
L_08A83E90:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08A83E9Cu);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08A83E9Cu) goto L_08A83E9C;
    return;
L_08A83E9C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83EBC;
      }
      goto L_08A83EA8;
    }
L_08A83EA8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A83EB8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x08A83EB8u) goto L_08A83EB8;
    return;
L_08A83EB8:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A83EBC;
L_08A83EBC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A83EF4;
      }
      goto L_08A83EC8;
    }
L_08A83EC8:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08A83ED4u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08A83ED4u) goto L_08A83ED4;
    return;
L_08A83ED4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A83EF0;
      }
      goto L_08A83EE0;
    }
L_08A83EE0:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A83EECu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x08A83EECu) goto L_08A83EEC;
    return;
L_08A83EEC:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A83EF0;
L_08A83EF0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_08A83EF4;
L_08A83EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 3u, 0x08A84020u>(ctx, &aot_mem); return;
      }
      goto L_08A83F00;
    }
L_08A83F00:
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A83F60u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A83F60u) goto L_08A83F60;
    return;
L_08A83F60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A83F74u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A83F74u) goto L_08A83F74;
    return;
L_08A83F74:
    ctx.gpr[31] = (0x08A83F7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A83F7Cu) goto L_08A83F7C;
    return;
L_08A83F7C:
    ctx.gpr[31] = (0x08A83F84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08A83F84u) goto L_08A83F84;
    return;
L_08A83F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (65532u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08A84000u; return;
}

void recomp_unit_0159(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0159_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_159(Runtime &runtime) {
    runtime.register_generated_unit(159u, 0x08A80000u, 16384u, &recomp_unit_0159, &recomp_unit_0159_entry);
    runtime.register_function(0x08A80000u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A808ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A808D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A808FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80924u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80934u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80958u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8096Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80CC0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80CECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D14u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D28u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D48u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D50u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D60u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D68u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D7Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D84u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D9Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DC8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DD0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DDCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DF8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DFCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E08u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E10u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E1Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E3Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E4Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80EBCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80EC8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80ED8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80EF4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80EFCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F0Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F48u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F4Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F58u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F70u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80FCCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80FE4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81014u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81028u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81030u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8104Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8105Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81068u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81090u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81098u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A810B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A810BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A810C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A810D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81100u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81198u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A811A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A811B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A811B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A811C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A811E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81224u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81230u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81254u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81260u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A812BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A812C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A812C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A812D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A812D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A812E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A812F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A812F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81300u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81310u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81318u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81364u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8138Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81398u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A813A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A813A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A813BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A813C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A813CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A813D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A813E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A813F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81404u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81418u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81428u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81444u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81448u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81458u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81460u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8146Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81474u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8147Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81490u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81498u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A814A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A814A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A814B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A814C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A814D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A814ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A814FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81518u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8151Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8152Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8155Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8159Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A815BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A815D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A815DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A815E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A815F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A815F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81608u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81614u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81638u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81660u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8167Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81688u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81694u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A816C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A816DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A816ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A816F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81708u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81718u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81728u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81744u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81750u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8175Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81768u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8177Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81784u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8178Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81794u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8179Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81804u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8180Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81820u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81830u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81850u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81858u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81864u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81880u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81884u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81890u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81898u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A818A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A818C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A818C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A818D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A818E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A818F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81904u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81924u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81928u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81934u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81944u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81954u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81970u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8197Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81A0Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81A24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81A30u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81B08u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81B58u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81B6Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81B78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81C10u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81C9Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81CB4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81CC0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D84u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81DD8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81DECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81DF8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E8Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F1Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F40u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82008u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82058u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8206Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82078u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82110u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82130u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82164u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8216Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8217Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82180u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82188u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82198u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A821A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A821ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A821BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A821C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A821CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A821DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A821E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82240u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82244u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8224Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82278u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82290u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8232Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82334u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82340u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82348u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82354u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82358u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82370u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8239Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A823CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A823E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A823F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A823FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82404u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82408u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82410u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82418u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82420u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8242Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82438u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82440u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8244Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82468u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82474u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82484u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A824ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8250Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82524u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82548u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82550u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82594u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A825E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A825F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82608u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82630u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82640u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82680u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8268Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82698u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A826A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A826B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A826C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A826C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A826D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8271Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82728u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82734u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82768u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82770u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82778u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82788u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A827B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A827DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A827E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A827F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82800u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82810u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82818u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82820u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82828u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82830u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8283Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8284Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8285Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82868u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82874u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8287Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82884u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8288Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82894u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8289Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82910u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82918u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82920u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82938u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82958u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8296Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82980u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8299Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A0Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A18u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A20u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A28u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A30u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A44u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A50u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A60u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A68u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A70u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A94u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82AA4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82AF8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B20u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B3Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B4Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B6Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82BACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82BC8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82BD4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82BECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C00u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C0Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C1Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C30u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C3Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C54u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C60u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C7Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C88u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C94u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82CACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82CB8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82CC0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82CCCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82CD4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82CE0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82CF0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D00u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D10u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D20u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D30u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D40u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D54u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D60u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D68u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D70u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D88u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82DB4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82DBCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82DD4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82DDCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E04u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E0Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E4Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E50u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E64u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E7Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E84u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82EA8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82EB0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82ED8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82EE0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82EE4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82EF0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82EF8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F3Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F64u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F6Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F84u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F8Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F94u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82FACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82FC4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82FCCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82FF0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82FF8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83020u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83028u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8302Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83038u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83040u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83058u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83060u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A830E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A830ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83114u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8311Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83138u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83140u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83148u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83170u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83178u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83184u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8318Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83194u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8319Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A831C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A831D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A831D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A831FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83200u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83208u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83210u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83220u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83228u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83230u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83240u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83250u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83258u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83260u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8328Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83294u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8329Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A832B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A832B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A832C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A832C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A832DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A832E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A832E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83300u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83304u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8330Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83318u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83328u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83330u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83338u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83354u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83370u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8338Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A833A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A833C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A833CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A833D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A833E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A833F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83408u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83410u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83424u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83434u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8343Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8345Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83464u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83498u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A834A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A834A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A834B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A834CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A834E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83518u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83528u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83538u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83548u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83554u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8355Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83574u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83584u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83594u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83604u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8360Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8361Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83630u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83638u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83654u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83658u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83660u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83670u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83684u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83694u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A836A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A836C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A836DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A836F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83714u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8371Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83724u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83728u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83730u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8374Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83798u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A837B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83800u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8381Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83828u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8382Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83844u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8384Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83854u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83858u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83864u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83880u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83894u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A838A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A838C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A838DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A838F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A838FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83908u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83918u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83928u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83940u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83944u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8394Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83968u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83970u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83988u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83998u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A839A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A839B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A839C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A839D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A839E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A839F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A04u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A08u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A1Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A44u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A5Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A60u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A70u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83AC4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83AD4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83ADCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83AE4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83AF8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83B00u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83B14u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83B20u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83B2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83B4Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83B64u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83B6Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83B70u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83BA0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83BB0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83BB8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83BC4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83BD0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83BD8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83BECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C04u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C18u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C48u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C58u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C70u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C88u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C94u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C9Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83CACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83CB4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83CF0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83D58u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83D6Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83D7Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83D90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83DA4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83DACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83DB4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83DD0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83DDCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83DE4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83DECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83DF4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83DFCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E08u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E1Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E28u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E40u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E48u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E50u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E5Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E6Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E84u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E88u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E9Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83EA8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83EB8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83EBCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83EC8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83ED4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83EE0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83EECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83EF0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83EF4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F00u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F60u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F7Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F84u, &recomp_unit_0159, "recomp_unit_0159");
}
} // namespace psprecomp
