#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0176[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3,
    0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 11, 0, 0, 0, 0, 12, 0, 0,
    0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 15, 0, 16, 17, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 28, 0,
    29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0,
    0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 60, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 66, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    91, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104,
    0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 138,
    0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    145, 0, 146, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 151, 0, 0, 0, 0, 0, 152,
    0, 0, 153, 0, 154, 0, 155, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 159, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 169, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 215, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 0, 221, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 231, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0,
    0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 260, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0,
    0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 277,
    0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0,
    0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 0, 0, 0, 0, 296, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0,
    0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0,
    0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 319, 0,
    0, 0, 0, 0, 320, 0, 321, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0,
    0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332,
    0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 342, 0, 343, 0, 0, 0,
    0, 344, 0, 345, 0, 0, 0, 346, 0, 347, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0,
    352, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 358, 0, 0, 359, 0, 0,
    0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 366, 0,
    0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 369, 0, 370, 371, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 375, 0,
    0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 379, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0,
    0, 0, 382, 0, 0, 0, 0, 383, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 387, 0, 388, 389, 0, 390, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0,
    0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 396, 397, 0, 398, 0, 0, 0, 399, 0, 400, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0,
    0, 404, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409,
    0, 410, 0, 0, 411, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0,
    416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0,
    422, 0, 423, 0, 0, 424, 0, 425, 0, 0, 426, 0, 427, 0, 0, 428, 0, 0, 429, 430, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 0,
    433, 0, 434, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0,
    446, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0,
    462, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 469, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 475, 0, 0,
    0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0,
    482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0,
    0, 0, 489, 0, 490, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497,
    0, 498, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 506,
    0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 0,
    0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 517, 0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0,
    0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 525, 0, 0, 526, 0, 527, 0, 0, 528, 0, 0,
    0, 529, 530, 0, 531, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 541, 0, 542, 0, 543, 0, 544, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 547, 0, 548, 549, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 551, 0, 552, 0, 0, 553, 0, 554, 0, 555, 0,
    0, 556, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 561, 0, 562, 563, 0, 564, 0, 0, 0, 0,
    565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 568, 0, 0,
    0, 0, 0, 0, 0, 569, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574,
    0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 0,
    0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 0,
    588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 591, 0, 592, 0, 0, 593, 0, 594, 0, 595, 0, 0, 0, 596, 0,
    597, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 0, 600, 0, 601, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 603, 0, 0, 0, 604, 0, 0, 605, 0, 606, 0, 0, 607, 0, 0, 0, 608, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 611, 0, 0,
    612, 0, 613, 614, 0, 615, 0, 616, 0, 617, 0, 618, 0, 0, 619, 0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0,
    0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0,
    0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 631, 632, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 636, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637,
    0, 638, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 640, 0, 641, 0, 0, 0, 642, 0, 643, 0, 644, 0, 0, 645, 0, 0, 646, 0, 0, 0,
    0, 647, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 652,
};
void recomp_unit_0176_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AC4004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0176[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AC4004;
    case 2u: goto L_08AC40FC;
    case 3u: goto L_08AC4100;
    case 4u: goto L_08AC4114;
    case 5u: goto L_08AC4138;
    case 6u: goto L_08AC4154;
    case 7u: goto L_08AC4158;
    case 8u: goto L_08AC4160;
    case 9u: goto L_08AC4168;
    case 10u: goto L_08AC4260;
    case 11u: goto L_08AC4264;
    case 12u: goto L_08AC4278;
    case 13u: goto L_08AC429C;
    case 14u: goto L_08AC42B8;
    case 15u: goto L_08AC42BC;
    case 16u: goto L_08AC42C4;
    case 17u: goto L_08AC42C8;
    case 18u: goto L_08AC42D0;
    case 19u: goto L_08AC42D8;
    case 20u: goto L_08AC42F8;
    case 21u: goto L_08AC4340;
    case 22u: goto L_08AC4348;
    case 23u: goto L_08AC4394;
    case 24u: goto L_08AC43B0;
    case 25u: goto L_08AC43C4;
    case 26u: goto L_08AC43E0;
    case 27u: goto L_08AC43E8;
    case 28u: goto L_08AC43FC;
    case 29u: goto L_08AC4404;
    case 30u: goto L_08AC4414;
    case 31u: goto L_08AC4438;
    case 32u: goto L_08AC447C;
    case 33u: goto L_08AC448C;
    case 34u: goto L_08AC449C;
    case 35u: goto L_08AC44B8;
    case 36u: goto L_08AC44FC;
    case 37u: goto L_08AC4508;
    case 38u: goto L_08AC4510;
    case 39u: goto L_08AC4530;
    case 40u: goto L_08AC453C;
    case 41u: goto L_08AC4544;
    case 42u: goto L_08AC4568;
    case 43u: goto L_08AC45B8;
    case 44u: goto L_08AC45C0;
    case 45u: goto L_08AC45C8;
    case 46u: goto L_08AC45E8;
    case 47u: goto L_08AC461C;
    case 48u: goto L_08AC4628;
    case 49u: goto L_08AC4678;
    case 50u: goto L_08AC4684;
    case 51u: goto L_08AC4694;
    case 52u: goto L_08AC469C;
    case 53u: goto L_08AC46BC;
    case 54u: goto L_08AC46E4;
    case 55u: goto L_08AC4708;
    case 56u: goto L_08AC4710;
    case 57u: goto L_08AC4718;
    case 58u: goto L_08AC474C;
    case 59u: goto L_08AC475C;
    case 60u: goto L_08AC4760;
    case 61u: goto L_08AC477C;
    case 62u: goto L_08AC4790;
    case 63u: goto L_08AC47AC;
    case 64u: goto L_08AC47B4;
    case 65u: goto L_08AC47C8;
    case 66u: goto L_08AC47D0;
    case 67u: goto L_08AC47D4;
    case 68u: goto L_08AC47EC;
    case 69u: goto L_08AC481C;
    case 70u: goto L_08AC4848;
    case 71u: goto L_08AC4874;
    case 72u: goto L_08AC4890;
    case 73u: goto L_08AC48E8;
    case 74u: goto L_08AC4910;
    case 75u: goto L_08AC4968;
    case 76u: goto L_08AC497C;
    case 77u: goto L_08AC499C;
    case 78u: goto L_08AC49A8;
    case 79u: goto L_08AC49CC;
    case 80u: goto L_08AC4A14;
    case 81u: goto L_08AC4A1C;
    case 82u: goto L_08AC4A34;
    case 83u: goto L_08AC4A3C;
    case 84u: goto L_08AC4A50;
    case 85u: goto L_08AC4A80;
    case 86u: goto L_08AC4AC4;
    case 87u: goto L_08AC4AD0;
    case 88u: goto L_08AC4B40;
    case 89u: goto L_08AC4B48;
    case 90u: goto L_08AC4B74;
    case 91u: goto L_08AC4B84;
    case 92u: goto L_08AC4B88;
    case 93u: goto L_08AC4BA4;
    case 94u: goto L_08AC4BB8;
    case 95u: goto L_08AC4C24;
    case 96u: goto L_08AC4C2C;
    case 97u: goto L_08AC4C94;
    case 98u: goto L_08AC4C9C;
    case 99u: goto L_08AC4CB8;
    case 100u: goto L_08AC4CF8;
    case 101u: goto L_08AC4D1C;
    case 102u: goto L_08AC4D38;
    case 103u: goto L_08AC4D5C;
    case 104u: goto L_08AC4D80;
    case 105u: goto L_08AC4D88;
    case 106u: goto L_08AC4DB8;
    case 107u: goto L_08AC4DDC;
    case 108u: goto L_08AC4DFC;
    case 109u: goto L_08AC4E20;
    case 110u: goto L_08AC4E44;
    case 111u: goto L_08AC4E4C;
    case 112u: goto L_08AC4E54;
    case 113u: goto L_08AC4E5C;
    case 114u: goto L_08AC4E74;
    case 115u: goto L_08AC4ED0;
    case 116u: goto L_08AC4ED8;
    case 117u: goto L_08AC4F00;
    case 118u: goto L_08AC4F10;
    case 119u: goto L_08AC4F34;
    case 120u: goto L_08AC4F48;
    case 121u: goto L_08AC4F58;
    case 122u: goto L_08AC4F60;
    case 123u: goto L_08AC4F98;
    case 124u: goto L_08AC4FAC;
    case 125u: goto L_08AC4FC0;
    case 126u: goto L_08AC4FD8;
    case 127u: goto L_08AC4FE4;
    case 128u: goto L_08AC4FFC;
    case 129u: goto L_08AC5008;
    case 130u: goto L_08AC5028;
    case 131u: goto L_08AC5034;
    case 132u: goto L_08AC5068;
    case 133u: goto L_08AC509C;
    case 134u: goto L_08AC50B8;
    case 135u: goto L_08AC50D4;
    case 136u: goto L_08AC50DC;
    case 137u: goto L_08AC50F8;
    case 138u: goto L_08AC5100;
    case 139u: goto L_08AC510C;
    case 140u: goto L_08AC5120;
    case 141u: goto L_08AC512C;
    case 142u: goto L_08AC5134;
    case 143u: goto L_08AC5148;
    case 144u: goto L_08AC517C;
    case 145u: goto L_08AC5184;
    case 146u: goto L_08AC518C;
    case 147u: goto L_08AC5194;
    case 148u: goto L_08AC51A4;
    case 149u: goto L_08AC51B8;
    case 150u: goto L_08AC51E4;
    case 151u: goto L_08AC51E8;
    case 152u: goto L_08AC5200;
    case 153u: goto L_08AC520C;
    case 154u: goto L_08AC5214;
    case 155u: goto L_08AC521C;
    case 156u: goto L_08AC5220;
    case 157u: goto L_08AC5240;
    case 158u: goto L_08AC5248;
    case 159u: goto L_08AC5250;
    case 160u: goto L_08AC5254;
    case 161u: goto L_08AC527C;
    case 162u: goto L_08AC5300;
    case 163u: goto L_08AC536C;
    case 164u: goto L_08AC538C;
    case 165u: goto L_08AC53B0;
    case 166u: goto L_08AC53E0;
    case 167u: goto L_08AC53E8;
    case 168u: goto L_08AC540C;
    case 169u: goto L_08AC5418;
    case 170u: goto L_08AC541C;
    case 171u: goto L_08AC5498;
    case 172u: goto L_08AC54B8;
    case 173u: goto L_08AC54DC;
    case 174u: goto L_08AC54EC;
    case 175u: goto L_08AC54F4;
    case 176u: goto L_08AC552C;
    case 177u: goto L_08AC5568;
    case 178u: goto L_08AC5594;
    case 179u: goto L_08AC55E4;
    case 180u: goto L_08AC5610;
    case 181u: goto L_08AC5624;
    case 182u: goto L_08AC562C;
    case 183u: goto L_08AC563C;
    case 184u: goto L_08AC564C;
    case 185u: goto L_08AC566C;
    case 186u: goto L_08AC567C;
    case 187u: goto L_08AC56AC;
    case 188u: goto L_08AC56BC;
    case 189u: goto L_08AC56CC;
    case 190u: goto L_08AC56E0;
    case 191u: goto L_08AC56EC;
    case 192u: goto L_08AC56F4;
    case 193u: goto L_08AC5714;
    case 194u: goto L_08AC571C;
    case 195u: goto L_08AC5728;
    case 196u: goto L_08AC573C;
    case 197u: goto L_08AC5748;
    case 198u: goto L_08AC575C;
    case 199u: goto L_08AC5768;
    case 200u: goto L_08AC5770;
    case 201u: goto L_08AC579C;
    case 202u: goto L_08AC57BC;
    case 203u: goto L_08AC57E8;
    case 204u: goto L_08AC5818;
    case 205u: goto L_08AC5820;
    case 206u: goto L_08AC5834;
    case 207u: goto L_08AC5874;
    case 208u: goto L_08AC58A4;
    case 209u: goto L_08AC58B4;
    case 210u: goto L_08AC58D8;
    case 211u: goto L_08AC590C;
    case 212u: goto L_08AC5920;
    case 213u: goto L_08AC5944;
    case 214u: goto L_08AC594C;
    case 215u: goto L_08AC5954;
    case 216u: goto L_08AC5958;
    case 217u: goto L_08AC5994;
    case 218u: goto L_08AC59BC;
    case 219u: goto L_08AC59C4;
    case 220u: goto L_08AC59CC;
    case 221u: goto L_08AC59D8;
    case 222u: goto L_08AC59DC;
    case 223u: goto L_08AC5A1C;
    case 224u: goto L_08AC5AB8;
    case 225u: goto L_08AC5ADC;
    case 226u: goto L_08AC5AFC;
    case 227u: goto L_08AC5B34;
    case 228u: goto L_08AC5B44;
    case 229u: goto L_08AC5B64;
    case 230u: goto L_08AC5B74;
    case 231u: goto L_08AC5B78;
    case 232u: goto L_08AC5C10;
    case 233u: goto L_08AC5C34;
    case 234u: goto L_08AC5C54;
    case 235u: goto L_08AC5C84;
    case 236u: goto L_08AC5C8C;
    case 237u: goto L_08AC5C94;
    case 238u: goto L_08AC5CB4;
    case 239u: goto L_08AC5CD4;
    case 240u: goto L_08AC5CE8;
    case 241u: goto L_08AC5D7C;
    case 242u: goto L_08AC5D84;
    case 243u: goto L_08AC5DB4;
    case 244u: goto L_08AC5DB8;
    case 245u: goto L_08AC5DE4;
    case 246u: goto L_08AC5E04;
    case 247u: goto L_08AC5E5C;
    case 248u: goto L_08AC5E7C;
    case 249u: goto L_08AC5E90;
    case 250u: goto L_08AC5E98;
    case 251u: goto L_08AC5EBC;
    case 252u: goto L_08AC5EDC;
    case 253u: goto L_08AC5F14;
    case 254u: goto L_08AC5F18;
    case 255u: goto L_08AC5F38;
    case 256u: goto L_08AC5F58;
    case 257u: goto L_08AC5F90;
    case 258u: goto L_08AC5FB0;
    case 259u: goto L_08AC5FC0;
    case 260u: goto L_08AC5FC8;
    case 261u: goto L_08AC5FD0;
    case 262u: goto L_08AC5FD8;
    case 263u: goto L_08AC5FF4;
    case 264u: goto L_08AC6038;
    case 265u: goto L_08AC6040;
    case 266u: goto L_08AC604C;
    case 267u: goto L_08AC6058;
    case 268u: goto L_08AC6068;
    case 269u: goto L_08AC607C;
    case 270u: goto L_08AC6088;
    case 271u: goto L_08AC6090;
    case 272u: goto L_08AC60B4;
    case 273u: goto L_08AC60C0;
    case 274u: goto L_08AC60D4;
    case 275u: goto L_08AC60E0;
    case 276u: goto L_08AC60F4;
    case 277u: goto L_08AC6100;
    case 278u: goto L_08AC6108;
    case 279u: goto L_08AC612C;
    case 280u: goto L_08AC614C;
    case 281u: goto L_08AC6178;
    case 282u: goto L_08AC61AC;
    case 283u: goto L_08AC61B4;
    case 284u: goto L_08AC61D4;
    case 285u: goto L_08AC61D8;
    case 286u: goto L_08AC6270;
    case 287u: goto L_08AC6284;
    case 288u: goto L_08AC62A8;
    case 289u: goto L_08AC62F8;
    case 290u: goto L_08AC6318;
    case 291u: goto L_08AC6388;
    case 292u: goto L_08AC63A8;
    case 293u: goto L_08AC63C8;
    case 294u: goto L_08AC63D0;
    case 295u: goto L_08AC63FC;
    case 296u: goto L_08AC641C;
    case 297u: goto L_08AC6420;
    case 298u: goto L_08AC6438;
    case 299u: goto L_08AC64B0;
    case 300u: goto L_08AC64F8;
    case 301u: goto L_08AC6508;
    case 302u: goto L_08AC6528;
    case 303u: goto L_08AC6538;
    case 304u: goto L_08AC6548;
    case 305u: goto L_08AC6550;
    case 306u: goto L_08AC6568;
    case 307u: goto L_08AC6584;
    case 308u: goto L_08AC65A0;
    case 309u: goto L_08AC6604;
    case 310u: goto L_08AC6610;
    case 311u: goto L_08AC6624;
    case 312u: goto L_08AC6668;
    case 313u: goto L_08AC667C;
    case 314u: goto L_08AC6698;
    case 315u: goto L_08AC66AC;
    case 316u: goto L_08AC66CC;
    case 317u: goto L_08AC66E0;
    case 318u: goto L_08AC66EC;
    case 319u: goto L_08AC66FC;
    case 320u: goto L_08AC6714;
    case 321u: goto L_08AC671C;
    case 322u: goto L_08AC6724;
    case 323u: goto L_08AC6730;
    case 324u: goto L_08AC6764;
    case 325u: goto L_08AC6788;
    case 326u: goto L_08AC67A8;
    case 327u: goto L_08AC67D0;
    case 328u: goto L_08AC680C;
    case 329u: goto L_08AC6840;
    case 330u: goto L_08AC684C;
    case 331u: goto L_08AC6864;
    case 332u: goto L_08AC6880;
    case 333u: goto L_08AC68A4;
    case 334u: goto L_08AC68D8;
    case 335u: goto L_08AC68FC;
    case 336u: goto L_08AC6924;
    case 337u: goto L_08AC6934;
    case 338u: goto L_08AC693C;
    case 339u: goto L_08AC6944;
    case 340u: goto L_08AC6954;
    case 341u: goto L_08AC6964;
    case 342u: goto L_08AC696C;
    case 343u: goto L_08AC6974;
    case 344u: goto L_08AC6988;
    case 345u: goto L_08AC6990;
    case 346u: goto L_08AC69A0;
    case 347u: goto L_08AC69A8;
    case 348u: goto L_08AC69B0;
    case 349u: goto L_08AC69C4;
    case 350u: goto L_08AC69E0;
    case 351u: goto L_08AC69FC;
    case 352u: goto L_08AC6A04;
    case 353u: goto L_08AC6A0C;
    case 354u: goto L_08AC6A20;
    case 355u: goto L_08AC6A34;
    case 356u: goto L_08AC6A54;
    case 357u: goto L_08AC6A64;
    case 358u: goto L_08AC6A6C;
    case 359u: goto L_08AC6A78;
    case 360u: goto L_08AC6A9C;
    case 361u: goto L_08AC6AA8;
    case 362u: goto L_08AC6AB4;
    case 363u: goto L_08AC6ABC;
    case 364u: goto L_08AC6AD4;
    case 365u: goto L_08AC6AF8;
    case 366u: goto L_08AC6AFC;
    case 367u: goto L_08AC6B20;
    case 368u: goto L_08AC6B28;
    case 369u: goto L_08AC6B38;
    case 370u: goto L_08AC6B40;
    case 371u: goto L_08AC6B44;
    case 372u: goto L_08AC6B4C;
    case 373u: goto L_08AC6B60;
    case 374u: goto L_08AC6B74;
    case 375u: goto L_08AC6B7C;
    case 376u: goto L_08AC6B98;
    case 377u: goto L_08AC6BAC;
    case 378u: goto L_08AC6BC0;
    case 379u: goto L_08AC6BC8;
    case 380u: goto L_08AC6BCC;
    case 381u: goto L_08AC6BF0;
    case 382u: goto L_08AC6C0C;
    case 383u: goto L_08AC6C20;
    case 384u: goto L_08AC6C28;
    case 385u: goto L_08AC6C34;
    case 386u: goto L_08AC6C40;
    case 387u: goto L_08AC6C54;
    case 388u: goto L_08AC6C5C;
    case 389u: goto L_08AC6C60;
    case 390u: goto L_08AC6C68;
    case 391u: goto L_08AC6CB8;
    case 392u: goto L_08AC6CC8;
    case 393u: goto L_08AC6CF0;
    case 394u: goto L_08AC6D14;
    case 395u: goto L_08AC6D24;
    case 396u: goto L_08AC6D2C;
    case 397u: goto L_08AC6D30;
    case 398u: goto L_08AC6D38;
    case 399u: goto L_08AC6D48;
    case 400u: goto L_08AC6D50;
    case 401u: goto L_08AC6D54;
    case 402u: goto L_08AC6D70;
    case 403u: goto L_08AC6D7C;
    case 404u: goto L_08AC6D88;
    case 405u: goto L_08AC6D90;
    case 406u: goto L_08AC6DA8;
    case 407u: goto L_08AC6DD4;
    case 408u: goto L_08AC6DD8;
    case 409u: goto L_08AC6E00;
    case 410u: goto L_08AC6E08;
    case 411u: goto L_08AC6E14;
    case 412u: goto L_08AC6E20;
    case 413u: goto L_08AC6E28;
    case 414u: goto L_08AC6E40;
    case 415u: goto L_08AC6E64;
    case 416u: goto L_08AC6E84;
    case 417u: goto L_08AC6EB4;
    case 418u: goto L_08AC6F2C;
    case 419u: goto L_08AC6F58;
    case 420u: goto L_08AC6F68;
    case 421u: goto L_08AC6F78;
    case 422u: goto L_08AC6F84;
    case 423u: goto L_08AC6F8C;
    case 424u: goto L_08AC6F98;
    case 425u: goto L_08AC6FA0;
    case 426u: goto L_08AC6FAC;
    case 427u: goto L_08AC6FB4;
    case 428u: goto L_08AC6FC0;
    case 429u: goto L_08AC6FCC;
    case 430u: goto L_08AC6FD0;
    case 431u: goto L_08AC6FDC;
    case 432u: goto L_08AC6FE4;
    case 433u: goto L_08AC7004;
    case 434u: goto L_08AC700C;
    case 435u: goto L_08AC7018;
    case 436u: goto L_08AC702C;
    case 437u: goto L_08AC704C;
    case 438u: goto L_08AC7054;
    case 439u: goto L_08AC7060;
    case 440u: goto L_08AC7074;
    case 441u: goto L_08AC70A4;
    case 442u: goto L_08AC70AC;
    case 443u: goto L_08AC70C0;
    case 444u: goto L_08AC70DC;
    case 445u: goto L_08AC70FC;
    case 446u: goto L_08AC7104;
    case 447u: goto L_08AC7110;
    case 448u: goto L_08AC7124;
    case 449u: goto L_08AC7144;
    case 450u: goto L_08AC714C;
    case 451u: goto L_08AC7158;
    case 452u: goto L_08AC716C;
    case 453u: goto L_08AC719C;
    case 454u: goto L_08AC71A4;
    case 455u: goto L_08AC71B8;
    case 456u: goto L_08AC71D4;
    case 457u: goto L_08AC7214;
    case 458u: goto L_08AC721C;
    case 459u: goto L_08AC7238;
    case 460u: goto L_08AC725C;
    case 461u: goto L_08AC727C;
    case 462u: goto L_08AC7284;
    case 463u: goto L_08AC7290;
    case 464u: goto L_08AC72A4;
    case 465u: goto L_08AC72C4;
    case 466u: goto L_08AC72CC;
    case 467u: goto L_08AC72D8;
    case 468u: goto L_08AC72EC;
    case 469u: goto L_08AC7314;
    case 470u: goto L_08AC731C;
    case 471u: goto L_08AC732C;
    case 472u: goto L_08AC7344;
    case 473u: goto L_08AC7364;
    case 474u: goto L_08AC736C;
    case 475u: goto L_08AC7378;
    case 476u: goto L_08AC738C;
    case 477u: goto L_08AC73AC;
    case 478u: goto L_08AC73B4;
    case 479u: goto L_08AC73C0;
    case 480u: goto L_08AC73D4;
    case 481u: goto L_08AC73FC;
    case 482u: goto L_08AC7404;
    case 483u: goto L_08AC7414;
    case 484u: goto L_08AC742C;
    case 485u: goto L_08AC744C;
    case 486u: goto L_08AC7454;
    case 487u: goto L_08AC7460;
    case 488u: goto L_08AC7474;
    case 489u: goto L_08AC748C;
    case 490u: goto L_08AC7494;
    case 491u: goto L_08AC749C;
    case 492u: goto L_08AC74A8;
    case 493u: goto L_08AC74C4;
    case 494u: goto L_08AC74CC;
    case 495u: goto L_08AC74D4;
    case 496u: goto L_08AC74E4;
    case 497u: goto L_08AC7500;
    case 498u: goto L_08AC7508;
    case 499u: goto L_08AC7510;
    case 500u: goto L_08AC7520;
    case 501u: goto L_08AC753C;
    case 502u: goto L_08AC7544;
    case 503u: goto L_08AC754C;
    case 504u: goto L_08AC755C;
    case 505u: goto L_08AC7578;
    case 506u: goto L_08AC7580;
    case 507u: goto L_08AC7588;
    case 508u: goto L_08AC7598;
    case 509u: goto L_08AC75C0;
    case 510u: goto L_08AC75CC;
    case 511u: goto L_08AC75DC;
    case 512u: goto L_08AC75E8;
    case 513u: goto L_08AC75F4;
    case 514u: goto L_08AC7608;
    case 515u: goto L_08AC762C;
    case 516u: goto L_08AC763C;
    case 517u: goto L_08AC7644;
    case 518u: goto L_08AC7650;
    case 519u: goto L_08AC7658;
    case 520u: goto L_08AC7678;
    case 521u: goto L_08AC7694;
    case 522u: goto L_08AC76A8;
    case 523u: goto L_08AC76BC;
    case 524u: goto L_08AC76CC;
    case 525u: goto L_08AC76D8;
    case 526u: goto L_08AC76E4;
    case 527u: goto L_08AC76EC;
    case 528u: goto L_08AC76F8;
    case 529u: goto L_08AC7708;
    case 530u: goto L_08AC770C;
    case 531u: goto L_08AC7714;
    case 532u: goto L_08AC771C;
    case 533u: goto L_08AC7724;
    case 534u: goto L_08AC7740;
    case 535u: goto L_08AC774C;
    case 536u: goto L_08AC775C;
    case 537u: goto L_08AC7798;
    case 538u: goto L_08AC77B8;
    case 539u: goto L_08AC77D0;
    case 540u: goto L_08AC77D8;
    case 541u: goto L_08AC77E4;
    case 542u: goto L_08AC77EC;
    case 543u: goto L_08AC77F4;
    case 544u: goto L_08AC77FC;
    case 545u: goto L_08AC782C;
    case 546u: goto L_08AC7838;
    case 547u: goto L_08AC788C;
    case 548u: goto L_08AC7894;
    case 549u: goto L_08AC7898;
    case 550u: goto L_08AC78BC;
    case 551u: goto L_08AC78D8;
    case 552u: goto L_08AC78E0;
    case 553u: goto L_08AC78EC;
    case 554u: goto L_08AC78F4;
    case 555u: goto L_08AC78FC;
    case 556u: goto L_08AC7908;
    case 557u: goto L_08AC7918;
    case 558u: goto L_08AC7920;
    case 559u: goto L_08AC7948;
    case 560u: goto L_08AC7950;
    case 561u: goto L_08AC795C;
    case 562u: goto L_08AC7964;
    case 563u: goto L_08AC7968;
    case 564u: goto L_08AC7970;
    case 565u: goto L_08AC7984;
    case 566u: goto L_08AC79B0;
    case 567u: goto L_08AC79F4;
    case 568u: goto L_08AC79F8;
    case 569u: goto L_08AC7A18;
    case 570u: goto L_08AC7A24;
    case 571u: goto L_08AC7A48;
    case 572u: goto L_08AC7A50;
    case 573u: goto L_08AC7A54;
    case 574u: goto L_08AC7A80;
    case 575u: goto L_08AC7A88;
    case 576u: goto L_08AC7AA0;
    case 577u: goto L_08AC7ACC;
    case 578u: goto L_08AC7AD8;
    case 579u: goto L_08AC7AE0;
    case 580u: goto L_08AC7AE8;
    case 581u: goto L_08AC7AF0;
    case 582u: goto L_08AC7AF8;
    case 583u: goto L_08AC7B1C;
    case 584u: goto L_08AC7B24;
    case 585u: goto L_08AC7B44;
    case 586u: goto L_08AC7B60;
    case 587u: goto L_08AC7B6C;
    case 588u: goto L_08AC7B84;
    case 589u: goto L_08AC7BAC;
    case 590u: goto L_08AC7BBC;
    case 591u: goto L_08AC7BC8;
    case 592u: goto L_08AC7BD0;
    case 593u: goto L_08AC7BDC;
    case 594u: goto L_08AC7BE4;
    case 595u: goto L_08AC7BEC;
    case 596u: goto L_08AC7BFC;
    case 597u: goto L_08AC7C04;
    case 598u: goto L_08AC7C0C;
    case 599u: goto L_08AC7C18;
    case 600u: goto L_08AC7C34;
    case 601u: goto L_08AC7C3C;
    case 602u: goto L_08AC7C5C;
    case 603u: goto L_08AC7C8C;
    case 604u: goto L_08AC7C9C;
    case 605u: goto L_08AC7CA8;
    case 606u: goto L_08AC7CB0;
    case 607u: goto L_08AC7CBC;
    case 608u: goto L_08AC7CCC;
    case 609u: goto L_08AC7CD8;
    case 610u: goto L_08AC7CF0;
    case 611u: goto L_08AC7CF8;
    case 612u: goto L_08AC7D04;
    case 613u: goto L_08AC7D0C;
    case 614u: goto L_08AC7D10;
    case 615u: goto L_08AC7D18;
    case 616u: goto L_08AC7D20;
    case 617u: goto L_08AC7D28;
    case 618u: goto L_08AC7D30;
    case 619u: goto L_08AC7D3C;
    case 620u: goto L_08AC7D44;
    case 621u: goto L_08AC7D4C;
    case 622u: goto L_08AC7D70;
    case 623u: goto L_08AC7D8C;
    case 624u: goto L_08AC7DA4;
    case 625u: goto L_08AC7DB8;
    case 626u: goto L_08AC7DD0;
    case 627u: goto L_08AC7DF4;
    case 628u: goto L_08AC7E0C;
    case 629u: goto L_08AC7E18;
    case 630u: goto L_08AC7E24;
    case 631u: goto L_08AC7E30;
    case 632u: goto L_08AC7E34;
    case 633u: goto L_08AC7E3C;
    case 634u: goto L_08AC7E44;
    case 635u: goto L_08AC7E64;
    case 636u: goto L_08AC7E70;
    case 637u: goto L_08AC7F00;
    case 638u: goto L_08AC7F08;
    case 639u: goto L_08AC7F14;
    case 640u: goto L_08AC7F34;
    case 641u: goto L_08AC7F3C;
    case 642u: goto L_08AC7F4C;
    case 643u: goto L_08AC7F54;
    case 644u: goto L_08AC7F5C;
    case 645u: goto L_08AC7F68;
    case 646u: goto L_08AC7F74;
    case 647u: goto L_08AC7F88;
    case 648u: goto L_08AC7F94;
    case 649u: goto L_08AC7FC0;
    case 650u: goto L_08AC7FCC;
    case 651u: goto L_08AC7FEC;
    case 652u: goto L_08AC7FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AC4004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_08AC4158;
    }
    goto L_08AC40FC;
L_08AC40FC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08AC4100;
L_08AC4100:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AC4138;
      }
      goto L_08AC4114;
    }
L_08AC4114:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    goto L_08AC4138;
L_08AC4138:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC4100;
      }
      goto L_08AC4154;
    }
L_08AC4154:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08AC4158;
L_08AC4158:
    ctx.gpr[31] = (0x08AC4160u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 278u, 0x08B096C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC4160u) goto L_08AC4160;
    return;
L_08AC4160:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08AC42C8;
      }
      goto L_08AC4168;
    }
L_08AC4168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
        goto L_08AC42BC;
    }
    goto L_08AC4260;
L_08AC4260:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08AC4264;
L_08AC4264:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AC429C;
      }
      goto L_08AC4278;
    }
L_08AC4278:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    goto L_08AC429C;
L_08AC429C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC4264;
      }
      goto L_08AC42B8;
    }
L_08AC42B8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08AC42BC;
L_08AC42BC:
    ctx.gpr[31] = (0x08AC42C4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 278u, 0x08B096C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC42C4u) goto L_08AC42C4;
    return;
L_08AC42C4:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    goto L_08AC42C8;
L_08AC42C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC42D8;
      }
      goto L_08AC42D0;
    }
L_08AC42D0:
    ctx.gpr[31] = (0x08AC42D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AC42D8u) goto L_08AC42D8;
    return;
L_08AC42D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC42F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_08AC4340;
L_08AC4340:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4404;
      }
      goto L_08AC4348;
    }
L_08AC4348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4404;
      }
      goto L_08AC4394;
    }
L_08AC4394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AC43B0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC43B0u) goto L_08AC43B0;
    return;
L_08AC43B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC43E0;
      }
      goto L_08AC43C4;
    }
L_08AC43C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC43FC;
      }
      goto L_08AC43E0;
    }
L_08AC43E0:
    ctx.gpr[31] = (0x08AC43E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 403u, 0x08B0A818u>(ctx, &aot_mem) && ctx.pc == 0x08AC43E8u) goto L_08AC43E8;
    return;
L_08AC43E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AC43FC;
L_08AC43FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4340;
      }
      goto L_08AC4404;
    }
L_08AC4404:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AC4414u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC5834;
L_08AC4414:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC4438:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC447Cu);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AC5834;
L_08AC447C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AC448Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC448Cu) goto L_08AC448C;
    return;
L_08AC448C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC449Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08AC5034;
L_08AC449C:
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
L_08AC44B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC44FCu);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08AC4CB8;
L_08AC44FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC4508:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC4510:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(112));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AC4530u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC4530u) goto L_08AC4530;
    return;
L_08AC4530:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC453C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC4544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC45C0;
      }
      goto L_08AC4568;
    }
L_08AC4568:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[10]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AC45C8;
      }
      goto L_08AC45B8;
    }
L_08AC45B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC45E8;
      }
      goto L_08AC45C0;
    }
L_08AC45C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC461C;
      }
      goto L_08AC45C8;
    }
L_08AC45C8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    goto L_08AC45E8;
L_08AC45E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AC461Cu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 333u, 0x08B09E68u>(ctx, &aot_mem) && ctx.pc == 0x08AC461Cu) goto L_08AC461C;
    return;
L_08AC461C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC4628:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC4684;
      }
      goto L_08AC4678;
    }
L_08AC4678:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[31] = (0x08AC4684u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC4A80;
L_08AC4684:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08AC4694u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 654u, 0x088A7E18u>(ctx, &aot_mem) && ctx.pc == 0x08AC4694u) goto L_08AC4694;
    return;
L_08AC4694:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4708;
      }
      goto L_08AC469C;
    }
L_08AC469C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AC46E4;
      }
      goto L_08AC46BC;
    }
L_08AC46BC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4708;
      }
      goto L_08AC46E4;
    }
L_08AC46E4:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC4710;
      }
      goto L_08AC4708;
    }
L_08AC4708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC47D4;
      }
      goto L_08AC4710;
    }
L_08AC4710:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC47D0;
      }
      goto L_08AC4718;
    }
L_08AC4718:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC47D0;
      }
      goto L_08AC474C;
    }
L_08AC474C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AC4760;
      }
      goto L_08AC475C;
    }
L_08AC475C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), 0u);
    goto L_08AC4760;
L_08AC4760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AC477Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC477Cu) goto L_08AC477C;
    return;
L_08AC477C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC47AC;
      }
      goto L_08AC4790;
    }
L_08AC4790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC47C8;
      }
      goto L_08AC47AC;
    }
L_08AC47AC:
    ctx.gpr[31] = (0x08AC47B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 403u, 0x08B0A818u>(ctx, &aot_mem) && ctx.pc == 0x08AC47B4u) goto L_08AC47B4;
    return;
L_08AC47B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AC47C8;
L_08AC47C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4710;
      }
      goto L_08AC47D0;
    }
L_08AC47D0:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[18]));
    goto L_08AC47D4;
L_08AC47D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC47EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(176))))));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC481Cu);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(180))))));
    goto L_08AC4628;
L_08AC481C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(176))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(180))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(92))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4A1C;
      }
      goto L_08AC4848;
    }
L_08AC4848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(144))))));
    goto L_08AC4874;
L_08AC4874:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC4890u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 270u, 0x08B09608u>(ctx, &aot_mem) && ctx.pc == 0x08AC4890u) goto L_08AC4890;
    return;
L_08AC4890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08AC49A8;
      }
      goto L_08AC48E8;
    }
L_08AC48E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC4910u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 270u, 0x08B09608u>(ctx, &aot_mem) && ctx.pc == 0x08AC4910u) goto L_08AC4910;
    return;
L_08AC4910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(180))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[4] << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08AC49A8;
      }
      goto L_08AC4968;
    }
L_08AC4968:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08AC499C;
      }
      goto L_08AC497C;
    }
L_08AC497C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_08AC499C;
L_08AC499C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08AC4874;
      }
      goto L_08AC49A8;
    }
L_08AC49A8:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AC49CCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC49CCu) goto L_08AC49CC;
    return;
L_08AC49CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(176))))));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(146), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(146))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(148))))));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AC4A14u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC4A14u) goto L_08AC4A14;
    return;
L_08AC4A14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(176))))));
      if (branch_taken) {
          goto L_08AC4A3C;
      }
      goto L_08AC4A1C;
    }
L_08AC4A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AC4A34u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC4A34u) goto L_08AC4A34;
    return;
L_08AC4A34:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(176))))));
    goto L_08AC4A3C;
L_08AC4A3C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08AC4A50u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    goto L_08AC54F4;
L_08AC4A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC4A80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC4AD0;
      }
      goto L_08AC4AC4;
    }
L_08AC4AC4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AC4AD0;
L_08AC4AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (ctx.gpr[5] >> 29u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[8] >> 29u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    goto L_08AC4B40;
L_08AC4B40:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4C9C;
      }
      goto L_08AC4B48;
    }
L_08AC4B48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4C9C;
      }
      goto L_08AC4B74;
    }
L_08AC4B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AC4B88;
      }
      goto L_08AC4B84;
    }
L_08AC4B84:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), 0u);
    goto L_08AC4B88;
L_08AC4B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AC4BA4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC4BA4u) goto L_08AC4BA4;
    return;
L_08AC4BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AC4C24;
      }
      goto L_08AC4BB8;
    }
L_08AC4BB8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[8] = (ctx.gpr[8] >> 29u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] >> 29u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AC4C94;
      }
      goto L_08AC4C24;
    }
L_08AC4C24:
    ctx.gpr[31] = (0x08AC4C2Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 403u, 0x08B0A818u>(ctx, &aot_mem) && ctx.pc == 0x08AC4C2Cu) goto L_08AC4C2C;
    return;
L_08AC4C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (ctx.gpr[5] >> 29u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[8] >> 29u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    goto L_08AC4C94;
L_08AC4C94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4B40;
      }
      goto L_08AC4C9C;
    }
L_08AC4C9C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[18]));
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
L_08AC4CB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    goto L_08AC4CF8;
L_08AC4CF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[8] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AC4D88;
      }
      goto L_08AC4D1C;
    }
L_08AC4D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AC4D38u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC4D38u) goto L_08AC4D38;
    return;
L_08AC4D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08AC4D80;
      }
      goto L_08AC4D5C;
    }
L_08AC4D5C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(128));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    goto L_08AC4D80;
L_08AC4D80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AC4CF8;
      }
      goto L_08AC4D88;
    }
L_08AC4D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    goto L_08AC4DB8;
L_08AC4DB8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AC4E4C;
      }
      goto L_08AC4DDC;
    }
L_08AC4DDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AC4DFCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC4DFCu) goto L_08AC4DFC;
    return;
L_08AC4DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08AC4E44;
      }
      goto L_08AC4E20;
    }
L_08AC4E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(128));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    goto L_08AC4E44;
L_08AC4E44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08AC4DB8;
      }
      goto L_08AC4E4C;
    }
L_08AC4E4C:
    ctx.gpr[31] = (0x08AC4E54u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 360u, 0x08B0A53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4E54u) goto L_08AC4E54;
    return;
L_08AC4E54:
    ctx.gpr[31] = (0x08AC4E5Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 360u, 0x08B0A53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4E5Cu) goto L_08AC4E5C;
    return;
L_08AC4E5C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC4E74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[8] ^ ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08AC4ED0;
L_08AC4ED0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4F48;
      }
      goto L_08AC4ED8;
    }
L_08AC4ED8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC4F48;
      }
      goto L_08AC4F00;
    }
L_08AC4F00:
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AC4F34;
      }
      goto L_08AC4F10;
    }
L_08AC4F10:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    goto L_08AC4F34;
L_08AC4F34:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[8] ^ ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08AC4ED0;
      }
      goto L_08AC4F48;
    }
L_08AC4F48:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC4F58:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC4F60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC4F98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15912));
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 658u, 0x08AC3DB8u>(ctx, &aot_mem) && ctx.pc == 0x08AC4F98u) goto L_08AC4F98;
    return;
L_08AC4F98:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC4FACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 452u, 0x088A9FFCu>(ctx, &aot_mem) && ctx.pc == 0x08AC4FACu) goto L_08AC4FAC;
    return;
L_08AC4FAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC4FC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC4FD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x08AC4FD8u) goto L_08AC4FD8;
    return;
L_08AC4FD8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC4FE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC4FFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 384u, 0x088A9A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC4FFCu) goto L_08AC4FFC;
    return;
L_08AC4FFC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC5008:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC5028u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 384u, 0x088A9A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC5028u) goto L_08AC5028;
    return;
L_08AC5028:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC5034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC509C;
      }
      goto L_08AC5068;
    }
L_08AC5068:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC50DC;
      }
      goto L_08AC509C;
    }
L_08AC509C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(46))))));
    ctx.gpr[31] = (0x08AC50B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC4628;
L_08AC50B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AC5100;
      }
      goto L_08AC50D4;
    }
L_08AC50D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AC512C;
      }
      goto L_08AC50DC;
    }
L_08AC50DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AC50F8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC50F8u) goto L_08AC50F8;
    return;
L_08AC50F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5134;
      }
      goto L_08AC5100;
    }
L_08AC5100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08AC5120;
    }
    goto L_08AC510C;
L_08AC510C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08AC5120;
L_08AC5120:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC5134;
      }
      goto L_08AC512C;
    }
L_08AC512C:
    ctx.gpr[31] = (0x08AC5134u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 383u, 0x08B0A660u>(ctx, &aot_mem) && ctx.pc == 0x08AC5134u) goto L_08AC5134;
    return;
L_08AC5134:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC5148:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC518C;
      }
      goto L_08AC517C;
    }
L_08AC517C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC5194;
      }
      goto L_08AC5184;
    }
L_08AC5184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5240;
      }
      goto L_08AC518C;
    }
L_08AC518C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5254;
      }
      goto L_08AC5194;
    }
L_08AC5194:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AC51A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 449u, 0x08A5A444u>(ctx, &aot_mem) && ctx.pc == 0x08AC51A4u) goto L_08AC51A4;
    return;
L_08AC51A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC51E8;
      }
      goto L_08AC51B8;
    }
L_08AC51B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AC51E8;
      }
      goto L_08AC51E4;
    }
L_08AC51E4:
    ctx.gpr[18] = (0u | 1u);
    goto L_08AC51E8;
L_08AC51E8:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[21] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC5240;
      }
      goto L_08AC5200;
    }
L_08AC5200:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AC521C;
      }
      goto L_08AC520C;
    }
L_08AC520C:
    ctx.gpr[31] = (0x08AC5214u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 423u, 0x08A5A250u>(ctx, &aot_mem) && ctx.pc == 0x08AC5214u) goto L_08AC5214;
    return;
L_08AC5214:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08AC5220;
      }
      goto L_08AC521C;
    }
L_08AC521C:
    ctx.gpr[18] = (0u | 0u);
    goto L_08AC5220;
L_08AC5220:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[21] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08AC5200;
      }
      goto L_08AC5240;
    }
L_08AC5240:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5250;
      }
      goto L_08AC5248;
    }
L_08AC5248:
    ctx.gpr[31] = (0x08AC5250u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC4544;
L_08AC5250:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    goto L_08AC5254;
L_08AC5254:
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
L_08AC527C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(192))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[10]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AC5300;
L_08AC5300:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[12]);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[12]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[12] = (ctx.gpr[14] ^ ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[13]);
    ctx.gpr[12] = (ctx.gpr[12] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[12] = (ctx.gpr[12] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[15]);
    ctx.gpr[12] = (ctx.gpr[12] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[12] = (ctx.gpr[12] & 255u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[13]);
      if (branch_taken) {
          goto L_08AC5418;
      }
      goto L_08AC536C;
    }
L_08AC536C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    if (ctx.gpr[12] != ctx.gpr[13]) {
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
        goto L_08AC53B0;
    }
    goto L_08AC538C;
L_08AC538C:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-4));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[12]);
    ctx.gpr[12] = (ctx.gpr[13] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[12]);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    goto L_08AC53B0;
L_08AC53B0:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[12]);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[12] = (ctx.gpr[12] ^ ctx.gpr[13]);
    ctx.gpr[12] = (ctx.gpr[12] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[12] = (ctx.gpr[12] & 255u);
    ctx.gpr[12] = (ctx.gpr[12] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[12] = (ctx.gpr[12] & 255u);
    if (ctx.gpr[12] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[3]);
        goto L_08AC541C;
    }
    goto L_08AC53E0;
L_08AC53E0:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AC540C;
      }
      goto L_08AC53E8;
    }
L_08AC53E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08AC540C;
L_08AC540C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AC5300;
      }
      goto L_08AC5418;
    }
L_08AC5418:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[3]);
    goto L_08AC541C;
L_08AC541C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[8]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[10] ^ ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AC54EC;
      }
      goto L_08AC5498;
    }
L_08AC5498:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08AC54DC;
      }
      goto L_08AC54B8;
    }
L_08AC54B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8));
    goto L_08AC54DC;
L_08AC54DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AC54EC;
L_08AC54EC:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC54F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    goto L_08AC552C;
L_08AC552C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08AC567C;
    }
    goto L_08AC5568;
L_08AC5568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08AC5594u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 270u, 0x08B09608u>(ctx, &aot_mem) && ctx.pc == 0x08AC5594u) goto L_08AC5594;
    return;
L_08AC5594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC5624;
      }
      goto L_08AC55E4;
    }
L_08AC55E4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(98))))));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08AC562C;
    }
    goto L_08AC5610;
L_08AC5610:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC562C;
      }
      goto L_08AC5624;
    }
L_08AC5624:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AC562C;
L_08AC562C:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08AC567C;
    }
    goto L_08AC563C;
L_08AC563C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC566C;
      }
      goto L_08AC564C;
    }
L_08AC564C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_08AC566C;
L_08AC566C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC552C;
      }
      goto L_08AC567C;
    }
L_08AC567C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08AC571C;
    }
    goto L_08AC56AC;
L_08AC56AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AC56EC;
      }
      goto L_08AC56BC;
    }
L_08AC56BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AC56E0;
    }
    goto L_08AC56CC;
L_08AC56CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AC56E0;
L_08AC56E0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC56F4;
      }
      goto L_08AC56EC;
    }
L_08AC56EC:
    ctx.gpr[31] = (0x08AC56F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 393u, 0x08B0A744u>(ctx, &aot_mem) && ctx.pc == 0x08AC56F4u) goto L_08AC56F4;
    return;
L_08AC56F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08AC5714;
L_08AC5714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5820;
      }
      goto L_08AC571C;
    }
L_08AC571C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08AC57E8;
    }
    goto L_08AC5728;
L_08AC5728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AC5768;
      }
      goto L_08AC573C;
    }
L_08AC573C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_08AC575C;
    }
    goto L_08AC5748;
L_08AC5748:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08AC575C;
L_08AC575C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC5770;
      }
      goto L_08AC5768;
    }
L_08AC5768:
    ctx.gpr[31] = (0x08AC5770u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 383u, 0x08B0A660u>(ctx, &aot_mem) && ctx.pc == 0x08AC5770u) goto L_08AC5770;
    return;
L_08AC5770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC57BC;
      }
      goto L_08AC579C;
    }
L_08AC579C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    goto L_08AC57BC;
L_08AC57BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AC5714;
      }
      goto L_08AC57E8;
    }
L_08AC57E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC5818u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 407u, 0x08B0A870u>(ctx, &aot_mem) && ctx.pc == 0x08AC5818u) goto L_08AC5818;
    return;
L_08AC5818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5714;
      }
      goto L_08AC5820;
    }
L_08AC5820:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC5834:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-592));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08AC5874;
L_08AC5874:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[8] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AC5954;
      }
      goto L_08AC58A4;
    }
L_08AC58A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08AC58D8;
    }
    goto L_08AC58B4;
L_08AC58B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08AC58D8;
L_08AC58D8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(592))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC594C;
      }
      goto L_08AC590C;
    }
L_08AC590C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC5944;
      }
      goto L_08AC5920;
    }
L_08AC5920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    goto L_08AC5944;
L_08AC5944:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08AC5958;
      }
      goto L_08AC594C;
    }
L_08AC594C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08AC5874;
      }
      goto L_08AC5954;
    }
L_08AC5954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_08AC5958;
L_08AC5958:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[8] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AC59D8;
      }
      goto L_08AC5994;
    }
L_08AC5994:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(592))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(130))))));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08AC59DC;
    }
    goto L_08AC59BC;
L_08AC59BC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC59CC;
      }
      goto L_08AC59C4;
    }
L_08AC59C4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AC59CC;
L_08AC59CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AC6420;
      }
      goto L_08AC59D8;
    }
L_08AC59D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08AC59DC;
L_08AC59DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    goto L_08AC5A1C;
L_08AC5A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[7] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AC5B74;
      }
      goto L_08AC5AB8;
    }
L_08AC5AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AC5AFC;
      }
      goto L_08AC5ADC;
    }
L_08AC5ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    goto L_08AC5AFC;
L_08AC5AFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(592))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(212), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(212))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_08AC5B78;
    }
    goto L_08AC5B34;
L_08AC5B34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC5B64;
      }
      goto L_08AC5B44;
    }
L_08AC5B44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    goto L_08AC5B64;
L_08AC5B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC5A1C;
      }
      goto L_08AC5B74;
    }
L_08AC5B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08AC5B78;
L_08AC5B78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[7] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AC5FC0;
      }
      goto L_08AC5C10;
    }
L_08AC5C10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AC5C54;
      }
      goto L_08AC5C34;
    }
L_08AC5C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    goto L_08AC5C54;
L_08AC5C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(592))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(280), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(280))))));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08AC5CE8;
    }
    goto L_08AC5C84;
L_08AC5C84:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
        goto L_08AC5C94;
    }
    goto L_08AC5C8C;
L_08AC5C8C:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_08AC5C94;
L_08AC5C94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AC5CD4;
      }
      goto L_08AC5CB4;
    }
L_08AC5CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[4]);
    goto L_08AC5CD4;
L_08AC5CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AC6420;
      }
      goto L_08AC5CE8;
    }
L_08AC5CE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(300));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] ^ ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5E90;
      }
      goto L_08AC5D7C;
    }
L_08AC5D7C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AC5DB8;
      }
      goto L_08AC5D84;
    }
L_08AC5D84:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(88))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(348), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(348))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5E90;
      }
      goto L_08AC5DB4;
    }
L_08AC5DB4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    goto L_08AC5DB8;
L_08AC5DB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(368), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AC5E04;
      }
      goto L_08AC5DE4;
    }
L_08AC5DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[4]);
    goto L_08AC5E04;
L_08AC5E04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(368))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(370), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(370))))));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[7]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AC5E7C;
      }
      goto L_08AC5E5C;
    }
L_08AC5E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[4]);
    goto L_08AC5E7C;
L_08AC5E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AC5FC0;
      }
      goto L_08AC5E90;
    }
L_08AC5E90:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
        goto L_08AC5F18;
    }
    goto L_08AC5E98;
L_08AC5E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AC5EDC;
      }
      goto L_08AC5EBC;
    }
L_08AC5EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[4]);
    goto L_08AC5EDC;
L_08AC5EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(88))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(404), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5FC0;
      }
      goto L_08AC5F14;
    }
L_08AC5F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_08AC5F18;
L_08AC5F18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AC5F58;
      }
      goto L_08AC5F38;
    }
L_08AC5F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_08AC5F58;
L_08AC5F58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AC5FB0;
      }
      goto L_08AC5F90;
    }
L_08AC5F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    goto L_08AC5FB0;
L_08AC5FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08AC5FC0;
L_08AC5FC0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC5FD0;
      }
      goto L_08AC5FC8;
    }
L_08AC5FC8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AC5FD0;
L_08AC5FD0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6040;
      }
      goto L_08AC5FD8;
    }
L_08AC5FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AC5FF4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC5FF4u) goto L_08AC5FF4;
    return;
L_08AC5FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(592))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_08AC604C;
    }
    goto L_08AC6038;
L_08AC6038:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AC60B4;
      }
      goto L_08AC6040;
    }
L_08AC6040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AC6420;
      }
      goto L_08AC604C;
    }
L_08AC604C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08AC6088;
      }
      goto L_08AC6058;
    }
L_08AC6058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_08AC607C;
    }
    goto L_08AC6068;
L_08AC6068:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08AC607C;
L_08AC607C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC6090;
      }
      goto L_08AC6088;
    }
L_08AC6088:
    ctx.gpr[31] = (0x08AC6090u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 393u, 0x08B0A744u>(ctx, &aot_mem) && ctx.pc == 0x08AC6090u) goto L_08AC6090;
    return;
L_08AC6090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AC61AC;
      }
      goto L_08AC60B4;
    }
L_08AC60B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08AC6178;
    }
    goto L_08AC60C0;
L_08AC60C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08AC6100;
      }
      goto L_08AC60D4;
    }
L_08AC60D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
        goto L_08AC60F4;
    }
    goto L_08AC60E0;
L_08AC60E0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_08AC60F4;
L_08AC60F4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC6108;
      }
      goto L_08AC6100;
    }
L_08AC6100:
    ctx.gpr[31] = (0x08AC6108u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 383u, 0x08B0A660u>(ctx, &aot_mem) && ctx.pc == 0x08AC6108u) goto L_08AC6108;
    return;
L_08AC6108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AC614C;
      }
      goto L_08AC612C;
    }
L_08AC612C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[4]);
    goto L_08AC614C;
L_08AC614C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AC61AC;
      }
      goto L_08AC6178;
    }
L_08AC6178:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(548));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08AC61ACu);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 407u, 0x08B0A870u>(ctx, &aot_mem) && ctx.pc == 0x08AC61ACu) goto L_08AC61AC;
    return;
L_08AC61AC:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08AC61D8;
    }
    goto L_08AC61B4;
L_08AC61B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AC61D4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC61D4u) goto L_08AC61D4;
    return;
L_08AC61D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08AC61D8;
L_08AC61D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(440));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[6] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AC63D0;
      }
      goto L_08AC6270;
    }
L_08AC6270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC62A8;
      }
      goto L_08AC6284;
    }
L_08AC6284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    goto L_08AC62A8;
L_08AC62A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(592))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(88))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(488), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(490), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(488))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(490))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AC6318;
      }
      goto L_08AC62F8;
    }
L_08AC62F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[4]);
    goto L_08AC6318;
L_08AC6318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(510), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(508), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(508))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(510))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AC63A8;
      }
      goto L_08AC6388;
    }
L_08AC6388:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[5]);
    goto L_08AC63A8;
L_08AC63A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AC63C8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC63C8u) goto L_08AC63C8;
    return;
L_08AC63C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC641C;
      }
      goto L_08AC63D0;
    }
L_08AC63D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(592))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(88))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(528), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(530), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(528))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(530))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC641C;
      }
      goto L_08AC63FC;
    }
L_08AC63FC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(120));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08AC641Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC641Cu) goto L_08AC641C;
    return;
L_08AC641C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08AC6420;
L_08AC6420:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC6438:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30340)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30344)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[11] = (2230u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-30336), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-30328), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30332), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-30324), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-30320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC64B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29316)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC6508;
      }
      goto L_08AC64F8;
    }
L_08AC64F8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC6508u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15880));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08AC6508u) goto L_08AC6508;
    return;
L_08AC6508:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC6568;
      }
      goto L_08AC6528;
    }
L_08AC6528:
    ctx.gpr[5] = (0u | 99u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < 99 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
        goto L_08AC6538;
    }
    goto L_08AC6538;
L_08AC6538:
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(99) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6550;
      }
      goto L_08AC6548;
    }
L_08AC6548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 99u);
      if (branch_taken) {
          goto L_08AC6550;
      }
      goto L_08AC6550;
    }
L_08AC6550:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC6568u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15876));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08AC6568u) goto L_08AC6568;
    return;
L_08AC6568:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC6584u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15872));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08AC6584u) goto L_08AC6584;
    return;
L_08AC6584:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC65A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (0u | 60u);
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (0u | 100u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14));
    ctx.gpr[7] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[31] = (0x08AC6604u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15864));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08AC6604u) goto L_08AC6604;
    return;
L_08AC6604:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC6610:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AC6724;
      }
      goto L_08AC6624;
    }
L_08AC6624:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[7] = (17530u << 16u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[10] = (20224u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (0u | 1000u);
      if (branch_taken) {
          goto L_08AC667C;
      }
      goto L_08AC6668;
    }
L_08AC6668:
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AC6698;
      }
      goto L_08AC667C;
    }
L_08AC667C:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[10] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[10]);
    goto L_08AC6698;
L_08AC6698:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(57)));
    ctx.gpr[7] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC671C;
      }
      goto L_08AC66AC;
    }
L_08AC66AC:
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AC66E0;
      }
      goto L_08AC66CC;
    }
L_08AC66CC:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AC6724;
      }
      goto L_08AC66E0;
    }
L_08AC66E0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6724;
      }
      goto L_08AC66EC;
    }
L_08AC66EC:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AC6724;
      }
      goto L_08AC66FC;
    }
L_08AC66FC:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 167u);
    ctx.gpr[31] = (0x08AC6714u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08AC6714u) goto L_08AC6714;
    return;
L_08AC6714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6724;
      }
      goto L_08AC671C;
    }
L_08AC671C:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AC6724;
L_08AC6724:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC6730:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(333), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    goto L_08AC6764;
L_08AC6764:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AC6788;
L_08AC6788:
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6788;
      }
      goto L_08AC67A8;
    }
L_08AC67A8:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(98), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(0u));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 112u);
    ctx.gpr[6] = (0u | 132u);
    ctx.gpr[7] = (0u | 157u);
    ctx.gpr[31] = (0x08AC67D0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AC67D0u) goto L_08AC67D0;
    return;
L_08AC67D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(148));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 42u);
    ctx.gpr[6] = (0u | 58u);
    ctx.gpr[7] = (0u | 81u);
    ctx.gpr[31] = (0x08AC680Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AC680Cu) goto L_08AC680C;
    return;
L_08AC680C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6764;
      }
      goto L_08AC6840;
    }
L_08AC6840:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_08AC684C;
L_08AC684C:
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AC6864;
L_08AC6864:
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6864;
      }
      goto L_08AC6880;
    }
L_08AC6880:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 244u);
    ctx.gpr[6] = (0u | 225u);
    ctx.gpr[7] = (0u | 91u);
    ctx.gpr[31] = (0x08AC68A4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AC68A4u) goto L_08AC68A4;
    return;
L_08AC68A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AC684C;
      }
      goto L_08AC68D8;
    }
L_08AC68D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC68FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC693C;
      }
      goto L_08AC6924;
    }
L_08AC6924:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7660)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6944;
      }
      goto L_08AC6934;
    }
L_08AC6934:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC69C4;
      }
      goto L_08AC693C;
    }
L_08AC693C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC69C4;
      }
      goto L_08AC6944;
    }
L_08AC6944:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(332), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (0u | 1u);
    goto L_08AC6954;
L_08AC6954:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6974;
      }
      goto L_08AC6964;
    }
L_08AC6964:
    ctx.gpr[31] = (0x08AC696Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08AC65A0;
L_08AC696C:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(332), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08AC6974;
L_08AC6974:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08AC6954;
      }
      goto L_08AC6988;
    }
L_08AC6988:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    goto L_08AC6990;
L_08AC6990:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC69B0;
      }
      goto L_08AC69A0;
    }
L_08AC69A0:
    ctx.gpr[31] = (0x08AC69A8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08AC64B0;
L_08AC69A8:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(332), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08AC69B0;
L_08AC69B0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_08AC6990;
      }
      goto L_08AC69C4;
    }
L_08AC69C4:
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
L_08AC69E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(333)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6A20;
      }
      goto L_08AC69FC;
    }
L_08AC69FC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AC6A04;
L_08AC6A04:
    ctx.gpr[31] = (0x08AC6A0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC6610;
L_08AC6A0C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08AC6A04;
      }
      goto L_08AC6A20;
    }
L_08AC6A20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC6A34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08AC6A54;
L_08AC6A54:
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC6A54;
      }
      goto L_08AC6A64;
    }
L_08AC6A64:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08AC6A6C;
L_08AC6A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6B4C;
      }
      goto L_08AC6A78;
    }
L_08AC6A78:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6916));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
      if (branch_taken) {
          goto L_08AC6AF8;
      }
      goto L_08AC6A9C;
    }
L_08AC6A9C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6916)));
    if (ctx.gpr[8] != ctx.gpr[4]) {
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[6]));
        goto L_08AC6AFC;
    }
    goto L_08AC6AA8;
L_08AC6AA8:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    if (ctx.gpr[8] != ctx.gpr[4]) {
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[6]));
        goto L_08AC6AFC;
    }
    goto L_08AC6AB4;
L_08AC6AB4:
    if (ctx.gpr[6] != ctx.gpr[4]) {
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[6]));
        goto L_08AC6AFC;
    }
    goto L_08AC6ABC;
L_08AC6ABC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 244u);
    ctx.gpr[6] = (0u | 225u);
    ctx.gpr[7] = (0u | 91u);
    ctx.gpr[31] = (0x08AC6AD4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AC6AD4u) goto L_08AC6AD4;
    return;
L_08AC6AD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AC6B20;
      }
      goto L_08AC6AF8;
    }
L_08AC6AF8:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08AC6AFC;
L_08AC6AFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6916)));
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6916), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08AC6B20;
L_08AC6B20:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6B40;
      }
      goto L_08AC6B28;
    }
L_08AC6B28:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC6B38u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08AC6B38u) goto L_08AC6B38;
    return;
L_08AC6B38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6B44;
      }
      goto L_08AC6B40;
    }
L_08AC6B40:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_08AC6B44;
L_08AC6B44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6B60;
      }
      goto L_08AC6B4C;
    }
L_08AC6B4C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08AC6A6C;
      }
      goto L_08AC6B60;
    }
L_08AC6B60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC6B74:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08AC6B7C;
L_08AC6B7C:
    ctx.gpr[7] = (ctx.gpr[8] << 6u);
    ctx.gpr[9] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC6BAC;
      }
      goto L_08AC6B98;
    }
L_08AC6B98:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    goto L_08AC6BAC;
L_08AC6BAC:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6B7C;
      }
      goto L_08AC6BC0;
    }
L_08AC6BC0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC6BC8:
    ctx.gpr[7] = (0u | 0u);
    goto L_08AC6BCC;
L_08AC6BCC:
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[7] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC6C0C;
      }
      goto L_08AC6BF0;
    }
L_08AC6BF0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(98), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(0u));
    goto L_08AC6C0C;
L_08AC6C0C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6BCC;
      }
      goto L_08AC6C20;
    }
L_08AC6C20:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC6C28:
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    goto L_08AC6C34;
L_08AC6C34:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC6C5C;
      }
      goto L_08AC6C40;
    }
L_08AC6C40:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_08AC6C34;
      }
      goto L_08AC6C54;
    }
L_08AC6C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6C60;
      }
      goto L_08AC6C5C;
    }
L_08AC6C5C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08AC6C60;
L_08AC6C60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC6C68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[2] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    ctx.gpr[16] = (ctx.gpr[8] & 65535u);
    ctx.gpr[30] = (ctx.gpr[11] & 65535u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[23] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08AC6CB8;
L_08AC6CB8:
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC6CB8;
      }
      goto L_08AC6CC8;
    }
L_08AC6CC8:
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[16] << 6u);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6E84;
      }
      goto L_08AC6CF0;
    }
L_08AC6CF0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[22] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[19] = (0u | 255u);
    ctx.gpr[20] = (0u | 255u);
    ctx.gpr[17] = (ctx.gpr[21] + static_cast<std::uint32_t>(-6916));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (ctx.gpr[22] + static_cast<std::uint32_t>(-6912));
      if (branch_taken) {
          goto L_08AC6D2C;
      }
      goto L_08AC6D14;
    }
L_08AC6D14:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08AC6D24u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08AC6D24u) goto L_08AC6D24;
    return;
L_08AC6D24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6D30;
      }
      goto L_08AC6D2C;
    }
L_08AC6D2C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_08AC6D30;
L_08AC6D30:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6D50;
      }
      goto L_08AC6D38;
    }
L_08AC6D38:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(18));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AC6D48u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08AC6D48u) goto L_08AC6D48;
    return;
L_08AC6D48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6D54;
      }
      goto L_08AC6D50;
    }
L_08AC6D50:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    goto L_08AC6D54;
L_08AC6D54:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[30]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
      if (branch_taken) {
          goto L_08AC6DD4;
      }
      goto L_08AC6D70;
    }
L_08AC6D70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(-6916)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[30]));
        goto L_08AC6DD8;
    }
    goto L_08AC6D7C;
L_08AC6D7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[30]));
        goto L_08AC6DD8;
    }
    goto L_08AC6D88;
L_08AC6D88:
    if (ctx.gpr[30] != ctx.gpr[19]) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[30]));
        goto L_08AC6DD8;
    }
    goto L_08AC6D90;
L_08AC6D90:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 112u);
    ctx.gpr[6] = (0u | 132u);
    ctx.gpr[7] = (0u | 157u);
    ctx.gpr[31] = (0x08AC6DA8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AC6DA8u) goto L_08AC6DA8;
    return;
L_08AC6DA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
      if (branch_taken) {
          goto L_08AC6E00;
      }
      goto L_08AC6DD4;
    }
L_08AC6DD4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[30]));
    goto L_08AC6DD8;
L_08AC6DD8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(-6916)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-6916), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    goto L_08AC6E00;
L_08AC6E00:
    if (ctx.gpr[21] != ctx.gpr[19]) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
        goto L_08AC6E64;
    }
    goto L_08AC6E08;
L_08AC6E08:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6912)));
    if (ctx.gpr[5] != ctx.gpr[19]) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
        goto L_08AC6E64;
    }
    goto L_08AC6E14;
L_08AC6E14:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
    if (ctx.gpr[5] != ctx.gpr[19]) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
        goto L_08AC6E64;
    }
    goto L_08AC6E20;
L_08AC6E20:
    if (ctx.gpr[4] != ctx.gpr[19]) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
        goto L_08AC6E64;
    }
    goto L_08AC6E28;
L_08AC6E28:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 42u);
    ctx.gpr[6] = (0u | 58u);
    ctx.gpr[7] = (0u | 81u);
    ctx.gpr[31] = (0x08AC6E40u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AC6E40u) goto L_08AC6E40;
    return;
L_08AC6E40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AC6E84;
      }
      goto L_08AC6E64;
    }
L_08AC6E64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6912)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(-6912), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    goto L_08AC6E84;
L_08AC6E84:
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
L_08AC6EB4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30308)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30312)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[11] = (2230u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-30304), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-30296), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30300), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-30292), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-30288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC6F2C:
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
L_08AC6F58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC6F68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 47u, 0x08AC8488u>(ctx, &aot_mem) && ctx.pc == 0x08AC6F68u) goto L_08AC6F68;
    return;
L_08AC6F68:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC6F78:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC6FDC;
      }
      goto L_08AC6F84;
    }
L_08AC6F84:
    ctx.gpr[7] = (0u | 92u);
    ctx.gpr[6] = (0u | 32u);
    goto L_08AC6F8C;
L_08AC6F8C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC6FA0;
      }
      goto L_08AC6F98;
    }
L_08AC6F98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 47u);
      if (branch_taken) {
          goto L_08AC6FC0;
      }
      goto L_08AC6FA0;
    }
L_08AC6FA0:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 97 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 123 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AC6FC0;
      }
      goto L_08AC6FAC;
    }
L_08AC6FAC:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6FC0;
      }
      goto L_08AC6FB4;
    }
L_08AC6FB4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
    goto L_08AC6FC0;
L_08AC6FC0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC6FD0;
      }
      goto L_08AC6FCC;
    }
L_08AC6FCC:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    goto L_08AC6FD0;
L_08AC6FD0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC6F8C;
      }
      goto L_08AC6FDC;
    }
L_08AC6FDC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC6FE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC700C;
      }
      goto L_08AC7004;
    }
L_08AC7004:
    ctx.gpr[31] = (0x08AC700Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC700Cu) goto L_08AC700C;
    return;
L_08AC700C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[31] = (0x08AC7018u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AC7598;
L_08AC7018:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC702C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC7054;
      }
      goto L_08AC704C;
    }
L_08AC704C:
    ctx.gpr[31] = (0x08AC7054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC7054u) goto L_08AC7054;
    return;
L_08AC7054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[31] = (0x08AC7060u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AC7678;
L_08AC7060:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AC70AC;
      }
      goto L_08AC70A4;
    }
L_08AC70A4:
    ctx.gpr[31] = (0x08AC70ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC70ACu) goto L_08AC70AC;
    return;
L_08AC70AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC70C0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_08AC76BC;
L_08AC70C0:
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
L_08AC70DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC7104;
      }
      goto L_08AC70FC;
    }
L_08AC70FC:
    ctx.gpr[31] = (0x08AC7104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC7104u) goto L_08AC7104;
    return;
L_08AC7104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[31] = (0x08AC7110u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AC7714;
L_08AC7110:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7124:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC714C;
      }
      goto L_08AC7144;
    }
L_08AC7144:
    ctx.gpr[31] = (0x08AC714Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC714Cu) goto L_08AC714C;
    return;
L_08AC714C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[31] = (0x08AC7158u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AC771C;
L_08AC7158:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC716C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AC71A4;
      }
      goto L_08AC719C;
    }
L_08AC719C:
    ctx.gpr[31] = (0x08AC71A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC71A4u) goto L_08AC71A4;
    return;
L_08AC71A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC71B8u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_08AC7724;
L_08AC71B8:
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
L_08AC71D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08AC721C;
      }
      goto L_08AC7214;
    }
L_08AC7214:
    ctx.gpr[31] = (0x08AC721Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC721Cu) goto L_08AC721C;
    return;
L_08AC721C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC7238u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    goto L_08AC775C;
L_08AC7238:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC725C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC7284;
      }
      goto L_08AC727C;
    }
L_08AC727C:
    ctx.gpr[31] = (0x08AC7284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC7284u) goto L_08AC7284;
    return;
L_08AC7284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[31] = (0x08AC7290u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AC78BC;
L_08AC7290:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC72A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC72CC;
      }
      goto L_08AC72C4;
    }
L_08AC72C4:
    ctx.gpr[31] = (0x08AC72CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC72CCu) goto L_08AC72CC;
    return;
L_08AC72CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[31] = (0x08AC72D8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AC7984;
L_08AC72D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC72EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC731C;
      }
      goto L_08AC7314;
    }
L_08AC7314:
    ctx.gpr[31] = (0x08AC731Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC731Cu) goto L_08AC731C;
    return;
L_08AC731C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC732Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AC7AA0;
L_08AC732C:
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
L_08AC7344:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC736C;
      }
      goto L_08AC7364;
    }
L_08AC7364:
    ctx.gpr[31] = (0x08AC736Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC736Cu) goto L_08AC736C;
    return;
L_08AC736C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[31] = (0x08AC7378u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AC7B44;
L_08AC7378:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC738C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC73B4;
      }
      goto L_08AC73AC;
    }
L_08AC73AC:
    ctx.gpr[31] = (0x08AC73B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC73B4u) goto L_08AC73B4;
    return;
L_08AC73B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[31] = (0x08AC73C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AC7B84;
L_08AC73C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC73D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC7404;
      }
      goto L_08AC73FC;
    }
L_08AC73FC:
    ctx.gpr[31] = (0x08AC7404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC7404u) goto L_08AC7404;
    return;
L_08AC7404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC7414u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AC7C5C;
L_08AC7414:
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
L_08AC742C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC7454;
      }
      goto L_08AC744C;
    }
L_08AC744C:
    ctx.gpr[31] = (0x08AC7454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC7454u) goto L_08AC7454;
    return;
L_08AC7454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[31] = (0x08AC7460u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AC7D70;
L_08AC7460:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7474:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7494;
      }
      goto L_08AC748C;
    }
L_08AC748C:
    ctx.gpr[31] = (0x08AC7494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC7494u) goto L_08AC7494;
    return;
L_08AC7494:
    ctx.gpr[31] = (0x08AC749Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 474u, 0x08B0B178u>(ctx, &aot_mem) && ctx.pc == 0x08AC749Cu) goto L_08AC749C;
    return;
L_08AC749C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC74A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC74CC;
      }
      goto L_08AC74C4;
    }
L_08AC74C4:
    ctx.gpr[31] = (0x08AC74CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC74CCu) goto L_08AC74CC;
    return;
L_08AC74CC:
    ctx.gpr[31] = (0x08AC74D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11644)));
    goto L_08AC7DB8;
L_08AC74D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC74E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7508;
      }
      goto L_08AC7500;
    }
L_08AC7500:
    ctx.gpr[31] = (0x08AC7508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC7508u) goto L_08AC7508;
    return;
L_08AC7508:
    ctx.gpr[31] = (0x08AC7510u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11644)));
    goto L_08AC7E0C;
L_08AC7510:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7520:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7544;
      }
      goto L_08AC753C;
    }
L_08AC753C:
    ctx.gpr[31] = (0x08AC7544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC7544u) goto L_08AC7544;
    return;
L_08AC7544:
    ctx.gpr[31] = (0x08AC754Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11644)));
    goto L_08AC7E3C;
L_08AC754C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC755C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7580;
      }
      goto L_08AC7578;
    }
L_08AC7578:
    ctx.gpr[31] = (0x08AC7580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 508u, 0x08B0B360u>(ctx, &aot_mem) && ctx.pc == 0x08AC7580u) goto L_08AC7580;
    return;
L_08AC7580:
    ctx.gpr[31] = (0x08AC7588u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11644)));
    goto L_08AC7E44;
L_08AC7588:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7598:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC75C0u);
    ctx.gpr[19] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 39u, 0x08AC840Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC75C0u) goto L_08AC75C0;
    return;
L_08AC75C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3312)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7644;
      }
      goto L_08AC75CC;
    }
L_08AC75CC:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC75DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AC6F78;
L_08AC75DC:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC75E8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 116u, 0x08A589A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC75E8u) goto L_08AC75E8;
    return;
L_08AC75E8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC762C;
      }
      goto L_08AC75F4;
    }
L_08AC75F4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC7608u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15848));
    goto L_08AC6F2C;
L_08AC7608:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3312)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3312), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC763C;
      }
      goto L_08AC762C;
    }
L_08AC762C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC763Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15820));
    goto L_08AC6F2C;
L_08AC763C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7650;
      }
      goto L_08AC7644;
    }
L_08AC7644:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AC7650u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15788));
    goto L_08AC6F2C;
L_08AC7650:
    ctx.gpr[31] = (0x08AC7658u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 43u, 0x08AC844Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7658u) goto L_08AC7658;
    return;
L_08AC7658:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7678:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC7694u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 39u, 0x08AC840Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7694u) goto L_08AC7694;
    return;
L_08AC7694:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3312)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AC76A8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3312), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 43u, 0x08AC844Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC76A8u) goto L_08AC76A8;
    return;
L_08AC76A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC76BC:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AC76D8;
      }
      goto L_08AC76CC;
    }
L_08AC76CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC76EC;
      }
      goto L_08AC76D8;
    }
L_08AC76D8:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AC76EC;
      }
      goto L_08AC76E4;
    }
L_08AC76E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_08AC76EC;
L_08AC76EC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC770C;
      }
      goto L_08AC76F8;
    }
L_08AC76F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
        goto L_08AC7708;
    }
    goto L_08AC7708;
L_08AC7708:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_08AC770C;
L_08AC770C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7714:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC771C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7724:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC7740u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AC775C;
L_08AC7740:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC774Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08AC7B84;
L_08AC774C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC775C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC7798u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 39u, 0x08AC840Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7798u) goto L_08AC7798;
    return;
L_08AC7798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(3316)));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(3316));
    ctx.gpr[5] = (ctx.gpr[5] - 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC77D8;
      }
      goto L_08AC77B8;
    }
L_08AC77B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC77F4;
      }
      goto L_08AC77D0;
    }
L_08AC77D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AC77FC;
      }
      goto L_08AC77D8;
    }
L_08AC77D8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AC77E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15752));
    goto L_08AC6F2C;
L_08AC77E4:
    ctx.gpr[31] = (0x08AC77ECu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 43u, 0x08AC844Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC77ECu) goto L_08AC77EC;
    return;
L_08AC77EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC7898;
      }
      goto L_08AC77F4;
    }
L_08AC77F4:
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AC77FC;
L_08AC77FC:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_08AC7838;
      }
      goto L_08AC782C;
    }
L_08AC782C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27580)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08AC7838;
L_08AC7838:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[21] + static_cast<std::uint32_t>(3324));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC788Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.pc = 0x08B0BBE4u;
    return;
L_08AC788C:
    ctx.gpr[31] = (0x08AC7894u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 43u, 0x08AC844Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7894u) goto L_08AC7894;
    return;
L_08AC7894:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08AC7898;
L_08AC7898:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC78BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC78D8u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 39u, 0x08AC840Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC78D8u) goto L_08AC78D8;
    return;
L_08AC78D8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7968;
      }
      goto L_08AC78E0;
    }
L_08AC78E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC78F4;
      }
      goto L_08AC78EC;
    }
L_08AC78EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC78F4;
      }
      goto L_08AC78F4;
    }
L_08AC78F4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7968;
      }
      goto L_08AC78FC;
    }
L_08AC78FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AC7964;
      }
      goto L_08AC7908;
    }
L_08AC7908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08AC7920;
    }
    goto L_08AC7918;
L_08AC7918:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08AC7920;
L_08AC7920:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7968;
      }
      goto L_08AC7948;
    }
L_08AC7948:
    ctx.gpr[31] = (0x08AC7950u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 43u, 0x08AC844Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7950u) goto L_08AC7950;
    return;
L_08AC7950:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AC795Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC795Cu) goto L_08AC795C;
    return;
L_08AC795C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7970;
      }
      goto L_08AC7964;
    }
L_08AC7964:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_08AC7968;
L_08AC7968:
    ctx.gpr[31] = (0x08AC7970u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 43u, 0x08AC844Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7970u) goto L_08AC7970;
    return;
L_08AC7970:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7984:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(3324));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[18] = (ctx.gpr[18] - 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC79B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 39u, 0x08AC840Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC79B0u) goto L_08AC79B0;
    return;
L_08AC79B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[18] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7A80;
      }
      goto L_08AC79F4;
    }
L_08AC79F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    goto L_08AC79F8;
L_08AC79F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[5] != ctx.gpr[16]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
        goto L_08AC7A54;
    }
    goto L_08AC7A18;
L_08AC7A18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AC7A48;
      }
      goto L_08AC7A24;
    }
L_08AC7A24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08AC7A50;
      }
      goto L_08AC7A48;
    }
L_08AC7A48:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
    goto L_08AC7A50;
L_08AC7A50:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08AC7A54;
L_08AC7A54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[18] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
        goto L_08AC79F8;
    }
    goto L_08AC7A80;
L_08AC7A80:
    ctx.gpr[31] = (0x08AC7A88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 43u, 0x08AC844Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7A88u) goto L_08AC7A88;
    return;
L_08AC7A88:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7AA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC7ACCu);
    ctx.gpr[19] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 39u, 0x08AC840Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7ACCu) goto L_08AC7ACC;
    return;
L_08AC7ACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC7AE0;
      }
      goto L_08AC7AD8;
    }
L_08AC7AD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC7AE0;
      }
      goto L_08AC7AE0;
    }
L_08AC7AE0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7B1C;
      }
      goto L_08AC7AE8;
    }
L_08AC7AE8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC7AF8;
      }
      goto L_08AC7AF0;
    }
L_08AC7AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AC7AF8;
L_08AC7AF8:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(3316));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (ctx.gpr[4] - 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    goto L_08AC7B1C;
L_08AC7B1C:
    ctx.gpr[31] = (0x08AC7B24u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 43u, 0x08AC844Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7B24u) goto L_08AC7B24;
    return;
L_08AC7B24:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_08AC7B44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC7B60u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 39u, 0x08AC840Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7B60u) goto L_08AC7B60;
    return;
L_08AC7B60:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AC7B6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 43u, 0x08AC844Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7B6Cu) goto L_08AC7B6C;
    return;
L_08AC7B6C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7B84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC7BACu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 39u, 0x08AC840Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7BACu) goto L_08AC7BAC;
    return;
L_08AC7BAC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AC7BBCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 43u, 0x08AC844Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7BBCu) goto L_08AC7BBC;
    return;
L_08AC7BBC:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (0u | 1000u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_08AC7BC8;
L_08AC7BC8:
    ctx.gpr[31] = (0x08AC7BD0u);
    // nop
    ctx.pc = 0x08B0BB2Cu;
    return;
L_08AC7BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC7BEC;
      }
      goto L_08AC7BDC;
    }
L_08AC7BDC:
    ctx.gpr[31] = (0x08AC7BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7BE4u) goto L_08AC7BE4;
    return;
L_08AC7BE4:
    ctx.gpr[31] = (0x08AC7BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 278u, 0x089C1448u>(ctx, &aot_mem) && ctx.pc == 0x08AC7BECu) goto L_08AC7BEC;
    return;
L_08AC7BEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC7BFCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08AC7AA0;
L_08AC7BFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7C0C;
      }
      goto L_08AC7C04;
    }
L_08AC7C04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AC7C3C;
      }
      goto L_08AC7C0C;
    }
L_08AC7C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AC7C18u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BBE4u;
    return;
L_08AC7C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AC7C34u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0BB5Cu;
    return;
L_08AC7C34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7BC8;
      }
      goto L_08AC7C3C;
    }
L_08AC7C3C:
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
L_08AC7C5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC7C8Cu);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 39u, 0x08AC840Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7C8Cu) goto L_08AC7C8C;
    return;
L_08AC7C8C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AC7C9Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 43u, 0x08AC844Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7C9Cu) goto L_08AC7C9C;
    return;
L_08AC7C9C:
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-15708));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AC7CA8;
L_08AC7CA8:
    ctx.gpr[31] = (0x08AC7CB0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AC7B44;
L_08AC7CB0:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7D28;
      }
      goto L_08AC7CBC;
    }
L_08AC7CBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08AC7CCCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08AC6F2C;
L_08AC7CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AC7CD8u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BBE4u;
    return;
L_08AC7CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AC7CF0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B0BB5Cu;
    return;
L_08AC7CF0:
    ctx.gpr[31] = (0x08AC7CF8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 39u, 0x08AC840Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7CF8u) goto L_08AC7CF8;
    return;
L_08AC7CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AC7D0C;
      }
      goto L_08AC7D04;
    }
L_08AC7D04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC7D10;
      }
      goto L_08AC7D0C;
    }
L_08AC7D0C:
    ctx.gpr[19] = (0u | 0u);
    goto L_08AC7D10;
L_08AC7D10:
    ctx.gpr[31] = (0x08AC7D18u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 43u, 0x08AC844Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7D18u) goto L_08AC7D18;
    return;
L_08AC7D18:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AC7D28;
      }
      goto L_08AC7D20;
    }
L_08AC7D20:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7D44;
      }
      goto L_08AC7D28;
    }
L_08AC7D28:
    ctx.gpr[31] = (0x08AC7D30u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 39u, 0x08AC840Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7D30u) goto L_08AC7D30;
    return;
L_08AC7D30:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AC7D3Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 43u, 0x08AC844Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7D3Cu) goto L_08AC7D3C;
    return;
L_08AC7D3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7D4C;
      }
      goto L_08AC7D44;
    }
L_08AC7D44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AC7CA8;
      }
      goto L_08AC7D4C;
    }
L_08AC7D4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7D70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC7D8Cu);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 39u, 0x08AC840Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7D8Cu) goto L_08AC7D8C;
    return;
L_08AC7D8C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27580)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AC7DA4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3336), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 43u, 0x08AC844Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7DA4u) goto L_08AC7DA4;
    return;
L_08AC7DA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7DB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC7DD0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 39u, 0x08AC840Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7DD0u) goto L_08AC7DD0;
    return;
L_08AC7DD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(3324));
    ctx.gpr[5] = (ctx.gpr[5] - 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[17] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08AC7DF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 43u, 0x08AC844Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC7DF4u) goto L_08AC7DF4;
    return;
L_08AC7DF4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7E0C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC7E30;
      }
      goto L_08AC7E18;
    }
L_08AC7E18:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(43)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08AC7E34;
    }
    goto L_08AC7E24;
L_08AC7E24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(41)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7E34;
      }
      goto L_08AC7E30;
    }
L_08AC7E30:
    ctx.gpr[5] = (0u | 1u);
    goto L_08AC7E34;
L_08AC7E34:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7E3C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7E44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC7E64u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B0BB5Cu;
    return;
L_08AC7E64:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7E70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30268)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30272)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[8] < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[1] = (ctx.gpr[9] << 21u);
    ctx.gpr[10] = (ctx.gpr[8] >> 11u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 11u));
    ctx.gpr[10] = (ctx.gpr[1] | ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[11] >> 21u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[8] < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[1] = (ctx.gpr[9] << 21u);
    ctx.gpr[8] = (ctx.gpr[8] >> 11u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 11u));
    ctx.gpr[8] = (ctx.gpr[1] | ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[3] - ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[2] - ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < -32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7F14;
      }
      goto L_08AC7F00;
    }
L_08AC7F00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AC7F54;
      }
      goto L_08AC7F08;
    }
L_08AC7F08:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7F3C;
      }
      goto L_08AC7F14;
    }
L_08AC7F14:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 150u);
      if (branch_taken) {
          goto L_08AC7F5C;
      }
      goto L_08AC7F34;
    }
L_08AC7F34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 200u);
      if (branch_taken) {
          goto L_08AC7F68;
      }
      goto L_08AC7F3C;
    }
L_08AC7F3C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AC7F4Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08AC7F74;
L_08AC7F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC7F68;
      }
      goto L_08AC7F54;
    }
L_08AC7F54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC7F68;
      }
      goto L_08AC7F5C;
    }
L_08AC7F5C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(300));
    goto L_08AC7F68;
L_08AC7F68:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC7F74:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC7F94;
      }
      goto L_08AC7F88;
    }
L_08AC7F88:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08AC7F94;
L_08AC7F94:
    ctx.gpr[4] = (13747u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52830u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16295u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 3293u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
      if (branch_taken) {
          goto L_08AC7FCC;
      }
      goto L_08AC7FC0;
    }
L_08AC7FC0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_08AC7FCC;
L_08AC7FCC:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (18749u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 29536u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08AC7FF8;
      }
      goto L_08AC7FEC;
    }
L_08AC7FEC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    goto L_08AC7FF8;
L_08AC7FF8:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (14976u << 16u);
    ctx.pc = 0x08AC8000u; return;
}

void recomp_unit_0176(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0176_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_176(Runtime &runtime) {
    runtime.register_generated_unit(176u, 0x08AC4000u, 16384u, &recomp_unit_0176, &recomp_unit_0176_entry);
    runtime.register_function(0x08AC4004u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC40FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4100u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4114u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4138u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4154u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4158u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4160u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4168u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4260u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4264u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4278u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC429Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC42B8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC42BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC42C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC42C8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC42D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC42D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC42F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4340u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4348u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4394u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC43B0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC43C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC43E0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC43E8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC43FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4404u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4414u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4438u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC447Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC448Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC449Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC44B8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC44FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4508u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4510u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4530u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC453Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4544u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4568u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC45B8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC45C0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC45C8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC45E8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC461Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4628u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4678u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4684u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4694u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC469Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC46BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC46E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4708u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4710u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4718u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC474Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC475Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4760u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC477Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4790u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC47ACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC47B4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC47C8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC47D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC47D4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC47ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC481Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4848u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4874u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4890u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC48E8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4910u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4968u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC497Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC499Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC49A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC49CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A14u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A1Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A3Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A50u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4A80u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4AC4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4AD0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B40u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B48u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B74u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B84u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4B88u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4BA4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4BB8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4C24u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4C2Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4C94u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4C9Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4CB8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4CF8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D1Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D38u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D5Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D80u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4D88u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4DB8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4DDCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4DFCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E20u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E44u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E4Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E54u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E5Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4E74u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4ED0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4ED8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F00u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F10u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F48u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F58u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F60u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4F98u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4FACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4FC0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4FD8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4FE4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC4FFCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5008u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5028u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5034u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5068u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC509Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC50B8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC50D4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC50DCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC50F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5100u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC510Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5120u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC512Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5134u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5148u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC517Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5184u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC518Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5194u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC51A4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC51B8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC51E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC51E8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5200u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC520Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5214u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC521Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5220u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5240u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5248u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5250u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5254u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC527Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5300u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC536Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC538Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC53B0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC53E0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC53E8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC540Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5418u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC541Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5498u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC54B8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC54DCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC54ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC54F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC552Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5568u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5594u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC55E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5610u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5624u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC562Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC563Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC564Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC566Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC567Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC56ACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC56BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC56CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC56E0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC56ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC56F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5714u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC571Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5728u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC573Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5748u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC575Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5768u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5770u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC579Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC57BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC57E8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5818u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5820u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5834u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5874u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC58A4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC58B4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC58D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC590Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5920u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5944u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC594Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5954u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5958u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5994u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC59BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC59C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC59CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC59D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC59DCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5A1Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5AB8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5ADCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5AFCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5B34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5B44u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5B64u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5B74u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5B78u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5C10u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5C34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5C54u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5C84u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5C8Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5C94u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5CB4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5CD4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5CE8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5D7Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5D84u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5DB4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5DB8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5DE4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5E04u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5E5Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5E7Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5E90u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5E98u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5EBCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5EDCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5F14u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5F18u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5F38u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5F58u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5F90u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5FB0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5FC0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5FC8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5FD0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5FD8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC5FF4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6038u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6040u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC604Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6058u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6068u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC607Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6088u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6090u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC60B4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC60C0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC60D4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC60E0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC60F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6100u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6108u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC612Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC614Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6178u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC61ACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC61B4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC61D4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC61D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6270u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6284u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC62A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC62F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6318u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6388u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC63A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC63C8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC63D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC63FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC641Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6420u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6438u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC64B0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC64F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6508u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6528u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6538u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6548u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6550u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6568u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6584u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC65A0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6604u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6610u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6624u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6668u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC667Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6698u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC66ACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC66CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC66E0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC66ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC66FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6714u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC671Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6724u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6730u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6764u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6788u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC67A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC67D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC680Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6840u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC684Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6864u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6880u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC68A4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC68D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC68FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6924u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6934u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC693Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6944u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6954u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6964u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC696Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6974u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6988u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6990u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC69A0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC69A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC69B0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC69C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC69E0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC69FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A04u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A0Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A20u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A54u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A64u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A6Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A78u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6A9Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6AA8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6AB4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6ABCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6AD4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6AF8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6AFCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B20u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B28u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B38u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B40u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B44u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B4Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B60u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B74u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B7Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6B98u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6BACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6BC0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6BC8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6BCCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6BF0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C0Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C20u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C28u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C40u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C54u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C5Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C60u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6C68u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6CB8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6CC8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6CF0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D14u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D24u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D2Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D30u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D38u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D48u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D50u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D54u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D70u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D7Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D88u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6D90u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6DA8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6DD4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6DD8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E00u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E08u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E14u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E20u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E28u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E40u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E64u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6E84u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6EB4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F2Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F58u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F68u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F78u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F84u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F8Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6F98u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6FA0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6FACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6FB4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6FC0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6FCCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6FD0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6FDCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC6FE4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7004u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC700Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7018u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC702Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC704Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7054u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7060u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7074u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC70A4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC70ACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC70C0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC70DCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC70FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7104u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7110u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7124u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7144u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC714Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7158u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC716Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC719Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC71A4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC71B8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC71D4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7214u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC721Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7238u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC725Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC727Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7284u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7290u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC72A4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC72C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC72CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC72D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC72ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7314u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC731Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC732Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7344u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7364u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC736Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7378u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC738Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC73ACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC73B4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC73C0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC73D4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC73FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7404u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7414u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC742Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC744Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7454u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7460u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7474u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC748Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7494u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC749Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC74A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC74C4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC74CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC74D4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC74E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7500u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7508u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7510u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7520u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC753Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7544u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC754Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC755Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7578u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7580u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7588u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7598u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC75C0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC75CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC75DCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC75E8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC75F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7608u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC762Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC763Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7644u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7650u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7658u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7678u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7694u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC76A8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC76BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC76CCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC76D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC76E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC76ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC76F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7708u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC770Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7714u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC771Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7724u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7740u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC774Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC775Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7798u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC77B8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC77D0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC77D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC77E4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC77ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC77F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC77FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC782Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7838u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC788Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7894u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7898u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC78BCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC78D8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC78E0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC78ECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC78F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC78FCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7908u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7918u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7920u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7948u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7950u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC795Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7964u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7968u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7970u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7984u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC79B0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC79F4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC79F8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7A18u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7A24u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7A48u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7A50u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7A54u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7A80u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7A88u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7AA0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7ACCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7AD8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7AE0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7AE8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7AF0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7AF8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B1Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B24u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B44u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B60u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B6Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7B84u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7BACu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7BBCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7BC8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7BD0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7BDCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7BE4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7BECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7BFCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C04u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C0Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C18u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C3Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C5Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C8Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7C9Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7CA8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7CB0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7CBCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7CCCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7CD8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7CF0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7CF8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D04u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D0Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D10u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D18u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D20u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D28u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D30u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D3Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D44u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D4Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D70u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7D8Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7DA4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7DB8u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7DD0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7DF4u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E0Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E18u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E24u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E30u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E3Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E44u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E64u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7E70u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F00u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F08u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F14u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F34u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F3Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F4Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F54u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F5Cu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F68u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F74u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F88u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7F94u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7FC0u, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7FCCu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7FECu, &recomp_unit_0176, "recomp_unit_0176");
    runtime.register_function(0x08AC7FF8u, &recomp_unit_0176, "recomp_unit_0176");
}
} // namespace psprecomp
