#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0073[4095] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0,
    23, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 29, 0, 0, 30, 0, 31, 0, 0, 32,
    0, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 40,
    0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 57,
    0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 73,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135,
    0, 0, 0, 0, 0, 136, 0, 0, 137, 138, 0, 0, 0, 0, 0, 139, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 155, 0, 156, 0, 157, 0, 158, 159, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170,
    0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 193,
    0, 0, 0, 194, 0, 195, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198,
    0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 205,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 209,
    0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 213, 0, 214, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 220, 0, 0, 221,
    0, 0, 222, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0,
    0, 230, 0, 231, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 239, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0,
    0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 250, 0, 251, 0, 252, 0,
    0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0,
    0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0,
    0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 294,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0,
    299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 311, 0, 0, 0, 312, 0, 0, 0, 313,
    0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 322, 0,
    323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 333, 334, 0, 0, 0,
    0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 338, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0,
    0, 0, 344, 0, 0, 0, 0, 345, 346, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 349, 0, 350, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 357, 0, 358, 359,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0,
    0, 363, 0, 0, 0, 0, 364, 0, 0, 365, 0, 366, 0, 367, 0, 0, 0, 0, 0, 368, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 372,
    0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 375, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0,
    0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 394, 0,
    395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0,
    0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 407, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0,
    411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416,
    0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 420, 421, 0, 422, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0,
    0, 0, 426, 0, 427, 0, 428, 429, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0,
    435, 0, 0, 436, 0, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 0, 442, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 0,
    452, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0,
    459, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466,
    0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 469, 0, 470, 0, 471, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0,
    0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 487, 488, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0,
    0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0,
    0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 0, 518,
};
void recomp_unit_0073_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08928000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0073[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08928000;
    case 2u: goto L_08928004;
    case 3u: goto L_08928024;
    case 4u: goto L_08928038;
    case 5u: goto L_08928044;
    case 6u: goto L_08928074;
    case 7u: goto L_08928084;
    case 8u: goto L_08928090;
    case 9u: goto L_0892809C;
    case 10u: goto L_089280A8;
    case 11u: goto L_089280B8;
    case 12u: goto L_089280BC;
    case 13u: goto L_089280F0;
    case 14u: goto L_08928100;
    case 15u: goto L_08928104;
    case 16u: goto L_0892812C;
    case 17u: goto L_08928134;
    case 18u: goto L_0892813C;
    case 19u: goto L_08928144;
    case 20u: goto L_0892814C;
    case 21u: goto L_0892815C;
    case 22u: goto L_08928174;
    case 23u: goto L_08928180;
    case 24u: goto L_08928184;
    case 25u: goto L_089281A0;
    case 26u: goto L_089281C0;
    case 27u: goto L_089281CC;
    case 28u: goto L_089281D8;
    case 29u: goto L_089281DC;
    case 30u: goto L_089281E8;
    case 31u: goto L_089281F0;
    case 32u: goto L_089281FC;
    case 33u: goto L_08928208;
    case 34u: goto L_08928210;
    case 35u: goto L_08928224;
    case 36u: goto L_08928240;
    case 37u: goto L_08928250;
    case 38u: goto L_08928264;
    case 39u: goto L_08928278;
    case 40u: goto L_0892827C;
    case 41u: goto L_0892828C;
    case 42u: goto L_089282A0;
    case 43u: goto L_089282AC;
    case 44u: goto L_089282B8;
    case 45u: goto L_089282C0;
    case 46u: goto L_089282D0;
    case 47u: goto L_08928300;
    case 48u: goto L_0892830C;
    case 49u: goto L_08928318;
    case 50u: goto L_08928324;
    case 51u: goto L_08928330;
    case 52u: goto L_08928334;
    case 53u: goto L_0892833C;
    case 54u: goto L_0892835C;
    case 55u: goto L_08928368;
    case 56u: goto L_08928370;
    case 57u: goto L_0892837C;
    case 58u: goto L_0892838C;
    case 59u: goto L_08928394;
    case 60u: goto L_089283B4;
    case 61u: goto L_089283C0;
    case 62u: goto L_089283C8;
    case 63u: goto L_089283D8;
    case 64u: goto L_089283E4;
    case 65u: goto L_08928410;
    case 66u: goto L_08928420;
    case 67u: goto L_0892842C;
    case 68u: goto L_0892843C;
    case 69u: goto L_08928444;
    case 70u: goto L_0892844C;
    case 71u: goto L_08928458;
    case 72u: goto L_0892846C;
    case 73u: goto L_0892847C;
    case 74u: goto L_0892848C;
    case 75u: goto L_089284A4;
    case 76u: goto L_089284D0;
    case 77u: goto L_089284E0;
    case 78u: goto L_089284E8;
    case 79u: goto L_0892850C;
    case 80u: goto L_08928514;
    case 81u: goto L_0892852C;
    case 82u: goto L_08928580;
    case 83u: goto L_089285E0;
    case 84u: goto L_08928668;
    case 85u: goto L_08928688;
    case 86u: goto L_08928690;
    case 87u: goto L_089286F8;
    case 88u: goto L_08928730;
    case 89u: goto L_0892873C;
    case 90u: goto L_08928768;
    case 91u: goto L_08928770;
    case 92u: goto L_0892883C;
    case 93u: goto L_08928848;
    case 94u: goto L_089289F8;
    case 95u: goto L_08928A38;
    case 96u: goto L_08928A44;
    case 97u: goto L_08928A50;
    case 98u: goto L_08928A5C;
    case 99u: goto L_08928A6C;
    case 100u: goto L_08928B10;
    case 101u: goto L_08928B1C;
    case 102u: goto L_08928B28;
    case 103u: goto L_08928B34;
    case 104u: goto L_08928B40;
    case 105u: goto L_08928C2C;
    case 106u: goto L_08928C3C;
    case 107u: goto L_08928C48;
    case 108u: goto L_08928CC0;
    case 109u: goto L_08928CC8;
    case 110u: goto L_08928CEC;
    case 111u: goto L_08928DCC;
    case 112u: goto L_08928E10;
    case 113u: goto L_08928E48;
    case 114u: goto L_08928EFC;
    case 115u: goto L_08928F70;
    case 116u: goto L_08928FC8;
    case 117u: goto L_0892903C;
    case 118u: goto L_08929078;
    case 119u: goto L_08929090;
    case 120u: goto L_089290A8;
    case 121u: goto L_089290D0;
    case 122u: goto L_089290DC;
    case 123u: goto L_089290E4;
    case 124u: goto L_089290F4;
    case 125u: goto L_0892910C;
    case 126u: goto L_08929124;
    case 127u: goto L_0892913C;
    case 128u: goto L_08929154;
    case 129u: goto L_0892916C;
    case 130u: goto L_08929184;
    case 131u: goto L_0892919C;
    case 132u: goto L_089291B4;
    case 133u: goto L_089291CC;
    case 134u: goto L_089291E4;
    case 135u: goto L_089291FC;
    case 136u: goto L_08929214;
    case 137u: goto L_08929220;
    case 138u: goto L_08929224;
    case 139u: goto L_0892923C;
    case 140u: goto L_08929240;
    case 141u: goto L_08929254;
    case 142u: goto L_08929268;
    case 143u: goto L_08929294;
    case 144u: goto L_0892929C;
    case 145u: goto L_089292A8;
    case 146u: goto L_089292B8;
    case 147u: goto L_089292C0;
    case 148u: goto L_08929304;
    case 149u: goto L_0892930C;
    case 150u: goto L_08929348;
    case 151u: goto L_089293DC;
    case 152u: goto L_089293E4;
    case 153u: goto L_089294C8;
    case 154u: goto L_089294F8;
    case 155u: goto L_08929504;
    case 156u: goto L_0892950C;
    case 157u: goto L_08929514;
    case 158u: goto L_0892951C;
    case 159u: goto L_08929520;
    case 160u: goto L_0892953C;
    case 161u: goto L_08929544;
    case 162u: goto L_0892954C;
    case 163u: goto L_0892958C;
    case 164u: goto L_089295A8;
    case 165u: goto L_089295B0;
    case 166u: goto L_08929618;
    case 167u: goto L_08929624;
    case 168u: goto L_08929678;
    case 169u: goto L_089296C0;
    case 170u: goto L_089296FC;
    case 171u: goto L_08929708;
    case 172u: goto L_08929718;
    case 173u: goto L_08929720;
    case 174u: goto L_08929734;
    case 175u: goto L_0892975C;
    case 176u: goto L_08929768;
    case 177u: goto L_08929814;
    case 178u: goto L_0892981C;
    case 179u: goto L_0892982C;
    case 180u: goto L_08929870;
    case 181u: goto L_08929878;
    case 182u: goto L_08929880;
    case 183u: goto L_089298A8;
    case 184u: goto L_089298B8;
    case 185u: goto L_089298EC;
    case 186u: goto L_08929914;
    case 187u: goto L_08929924;
    case 188u: goto L_08929934;
    case 189u: goto L_08929944;
    case 190u: goto L_0892994C;
    case 191u: goto L_08929960;
    case 192u: goto L_0892996C;
    case 193u: goto L_0892997C;
    case 194u: goto L_0892998C;
    case 195u: goto L_08929994;
    case 196u: goto L_08929998;
    case 197u: goto L_089299B0;
    case 198u: goto L_089299FC;
    case 199u: goto L_08929A08;
    case 200u: goto L_08929A10;
    case 201u: goto L_08929A60;
    case 202u: goto L_08929A9C;
    case 203u: goto L_08929AD8;
    case 204u: goto L_08929AF4;
    case 205u: goto L_08929AFC;
    case 206u: goto L_08929C50;
    case 207u: goto L_08929C5C;
    case 208u: goto L_08929C74;
    case 209u: goto L_08929C7C;
    case 210u: goto L_08929C88;
    case 211u: goto L_08929C94;
    case 212u: goto L_08929CA0;
    case 213u: goto L_08929CA8;
    case 214u: goto L_08929CB0;
    case 215u: goto L_08929CB8;
    case 216u: goto L_08929CC4;
    case 217u: goto L_08929CD0;
    case 218u: goto L_08929CDC;
    case 219u: goto L_08929CE4;
    case 220u: goto L_08929CF0;
    case 221u: goto L_08929CFC;
    case 222u: goto L_08929D08;
    case 223u: goto L_08929D10;
    case 224u: goto L_08929D1C;
    case 225u: goto L_08929D44;
    case 226u: goto L_08929D4C;
    case 227u: goto L_08929D60;
    case 228u: goto L_08929D6C;
    case 229u: goto L_08929D78;
    case 230u: goto L_08929D84;
    case 231u: goto L_08929D8C;
    case 232u: goto L_08929D9C;
    case 233u: goto L_08929DA8;
    case 234u: goto L_08929DB4;
    case 235u: goto L_08929DC4;
    case 236u: goto L_08929DD4;
    case 237u: goto L_08929DE4;
    case 238u: goto L_08929E2C;
    case 239u: goto L_08929E30;
    case 240u: goto L_08929E3C;
    case 241u: goto L_08929E48;
    case 242u: goto L_08929E50;
    case 243u: goto L_08929E6C;
    case 244u: goto L_08929F54;
    case 245u: goto L_08929F78;
    case 246u: goto L_08929F98;
    case 247u: goto L_08929FBC;
    case 248u: goto L_08929FD0;
    case 249u: goto L_08929FE0;
    case 250u: goto L_08929FE8;
    case 251u: goto L_08929FF0;
    case 252u: goto L_08929FF8;
    case 253u: goto L_0892A00C;
    case 254u: goto L_0892A01C;
    case 255u: goto L_0892A02C;
    case 256u: goto L_0892A03C;
    case 257u: goto L_0892A07C;
    case 258u: goto L_0892A0B0;
    case 259u: goto L_0892A0C4;
    case 260u: goto L_0892A0D8;
    case 261u: goto L_0892A0E0;
    case 262u: goto L_0892A120;
    case 263u: goto L_0892A188;
    case 264u: goto L_0892A1A0;
    case 265u: goto L_0892A1B8;
    case 266u: goto L_0892A1D4;
    case 267u: goto L_0892A1E4;
    case 268u: goto L_0892A204;
    case 269u: goto L_0892A220;
    case 270u: goto L_0892A24C;
    case 271u: goto L_0892A260;
    case 272u: goto L_0892A274;
    case 273u: goto L_0892A284;
    case 274u: goto L_0892A2C8;
    case 275u: goto L_0892A2F4;
    case 276u: goto L_0892A324;
    case 277u: goto L_0892A32C;
    case 278u: goto L_0892A338;
    case 279u: goto L_0892A374;
    case 280u: goto L_0892A3DC;
    case 281u: goto L_0892A3F4;
    case 282u: goto L_0892A40C;
    case 283u: goto L_0892A428;
    case 284u: goto L_0892A448;
    case 285u: goto L_0892A464;
    case 286u: goto L_0892A490;
    case 287u: goto L_0892A4A4;
    case 288u: goto L_0892A4B8;
    case 289u: goto L_0892A4C8;
    case 290u: goto L_0892A50C;
    case 291u: goto L_0892A538;
    case 292u: goto L_0892A568;
    case 293u: goto L_0892A570;
    case 294u: goto L_0892A57C;
    case 295u: goto L_0892A5B8;
    case 296u: goto L_0892A5DC;
    case 297u: goto L_0892A5E8;
    case 298u: goto L_0892A5F4;
    case 299u: goto L_0892A600;
    case 300u: goto L_0892A618;
    case 301u: goto L_0892A620;
    case 302u: goto L_0892A634;
    case 303u: goto L_0892A64C;
    case 304u: goto L_0892A6B4;
    case 305u: goto L_0892A6C0;
    case 306u: goto L_0892A6DC;
    case 307u: goto L_0892A6E4;
    case 308u: goto L_0892A720;
    case 309u: goto L_0892A74C;
    case 310u: goto L_0892A754;
    case 311u: goto L_0892A75C;
    case 312u: goto L_0892A76C;
    case 313u: goto L_0892A77C;
    case 314u: goto L_0892A798;
    case 315u: goto L_0892A834;
    case 316u: goto L_0892A83C;
    case 317u: goto L_0892A840;
    case 318u: goto L_0892A850;
    case 319u: goto L_0892A880;
    case 320u: goto L_0892A958;
    case 321u: goto L_0892A964;
    case 322u: goto L_0892A978;
    case 323u: goto L_0892A980;
    case 324u: goto L_0892AA5C;
    case 325u: goto L_0892AA6C;
    case 326u: goto L_0892AA80;
    case 327u: goto L_0892AAA0;
    case 328u: goto L_0892AB24;
    case 329u: goto L_0892AB2C;
    case 330u: goto L_0892AB34;
    case 331u: goto L_0892AB4C;
    case 332u: goto L_0892AB58;
    case 333u: goto L_0892AB6C;
    case 334u: goto L_0892AB70;
    case 335u: goto L_0892AB88;
    case 336u: goto L_0892ABB8;
    case 337u: goto L_0892ABD8;
    case 338u: goto L_0892ABDC;
    case 339u: goto L_0892AC04;
    case 340u: goto L_0892AC24;
    case 341u: goto L_0892AC4C;
    case 342u: goto L_0892AC60;
    case 343u: goto L_0892AC74;
    case 344u: goto L_0892AC88;
    case 345u: goto L_0892AC9C;
    case 346u: goto L_0892ACA0;
    case 347u: goto L_0892ACB8;
    case 348u: goto L_0892ACC0;
    case 349u: goto L_0892AD04;
    case 350u: goto L_0892AD0C;
    case 351u: goto L_0892AD14;
    case 352u: goto L_0892AD2C;
    case 353u: goto L_0892AD40;
    case 354u: goto L_0892AD4C;
    case 355u: goto L_0892ADDC;
    case 356u: goto L_0892ADE8;
    case 357u: goto L_0892ADF0;
    case 358u: goto L_0892ADF8;
    case 359u: goto L_0892ADFC;
    case 360u: goto L_0892AE44;
    case 361u: goto L_0892AE88;
    case 362u: goto L_0892AEE4;
    case 363u: goto L_0892AF04;
    case 364u: goto L_0892AF18;
    case 365u: goto L_0892AF24;
    case 366u: goto L_0892AF2C;
    case 367u: goto L_0892AF34;
    case 368u: goto L_0892AF4C;
    case 369u: goto L_0892AF50;
    case 370u: goto L_0892AF60;
    case 371u: goto L_0892AF78;
    case 372u: goto L_0892AF7C;
    case 373u: goto L_0892AF8C;
    case 374u: goto L_0892AFA4;
    case 375u: goto L_0892AFA8;
    case 376u: goto L_0892AFB0;
    case 377u: goto L_0892AFB8;
    case 378u: goto L_0892AFD8;
    case 379u: goto L_0892AFE8;
    case 380u: goto L_0892B03C;
    case 381u: goto L_0892B090;
    case 382u: goto L_0892B09C;
    case 383u: goto L_0892B0A8;
    case 384u: goto L_0892B0D8;
    case 385u: goto L_0892B0E0;
    case 386u: goto L_0892B108;
    case 387u: goto L_0892B110;
    case 388u: goto L_0892B128;
    case 389u: goto L_0892B154;
    case 390u: goto L_0892B178;
    case 391u: goto L_0892B198;
    case 392u: goto L_0892B1E8;
    case 393u: goto L_0892B1F0;
    case 394u: goto L_0892B1F8;
    case 395u: goto L_0892B200;
    case 396u: goto L_0892B208;
    case 397u: goto L_0892B244;
    case 398u: goto L_0892B268;
    case 399u: goto L_0892B278;
    case 400u: goto L_0892B28C;
    case 401u: goto L_0892B29C;
    case 402u: goto L_0892B2B8;
    case 403u: goto L_0892B2E4;
    case 404u: goto L_0892B2F4;
    case 405u: goto L_0892B328;
    case 406u: goto L_0892B330;
    case 407u: goto L_0892B338;
    case 408u: goto L_0892B340;
    case 409u: goto L_0892B348;
    case 410u: goto L_0892B36C;
    case 411u: goto L_0892B380;
    case 412u: goto L_0892B388;
    case 413u: goto L_0892B3AC;
    case 414u: goto L_0892B3C0;
    case 415u: goto L_0892B3E8;
    case 416u: goto L_0892B3FC;
    case 417u: goto L_0892B404;
    case 418u: goto L_0892B420;
    case 419u: goto L_0892B434;
    case 420u: goto L_0892B43C;
    case 421u: goto L_0892B440;
    case 422u: goto L_0892B448;
    case 423u: goto L_0892B44C;
    case 424u: goto L_0892B454;
    case 425u: goto L_0892B474;
    case 426u: goto L_0892B488;
    case 427u: goto L_0892B490;
    case 428u: goto L_0892B498;
    case 429u: goto L_0892B49C;
    case 430u: goto L_0892B4A4;
    case 431u: goto L_0892B510;
    case 432u: goto L_0892B528;
    case 433u: goto L_0892B55C;
    case 434u: goto L_0892B574;
    case 435u: goto L_0892B580;
    case 436u: goto L_0892B58C;
    case 437u: goto L_0892B598;
    case 438u: goto L_0892B5A0;
    case 439u: goto L_0892B5A8;
    case 440u: goto L_0892B5B0;
    case 441u: goto L_0892B5B8;
    case 442u: goto L_0892B5C4;
    case 443u: goto L_0892B5CC;
    case 444u: goto L_0892B5D4;
    case 445u: goto L_0892B5F0;
    case 446u: goto L_0892B664;
    case 447u: goto L_0892B66C;
    case 448u: goto L_0892B6E4;
    case 449u: goto L_0892B710;
    case 450u: goto L_0892B75C;
    case 451u: goto L_0892B768;
    case 452u: goto L_0892B780;
    case 453u: goto L_0892B788;
    case 454u: goto L_0892B7A4;
    case 455u: goto L_0892B7B4;
    case 456u: goto L_0892B7D4;
    case 457u: goto L_0892B7E8;
    case 458u: goto L_0892B7F0;
    case 459u: goto L_0892B800;
    case 460u: goto L_0892B818;
    case 461u: goto L_0892B824;
    case 462u: goto L_0892B838;
    case 463u: goto L_0892B848;
    case 464u: goto L_0892B8B8;
    case 465u: goto L_0892B8DC;
    case 466u: goto L_0892B8FC;
    case 467u: goto L_0892B920;
    case 468u: goto L_0892B930;
    case 469u: goto L_0892B938;
    case 470u: goto L_0892B940;
    case 471u: goto L_0892B948;
    case 472u: goto L_0892B950;
    case 473u: goto L_0892B964;
    case 474u: goto L_0892B978;
    case 475u: goto L_0892B98C;
    case 476u: goto L_0892B9A4;
    case 477u: goto L_0892B9D8;
    case 478u: goto L_0892BA08;
    case 479u: goto L_0892BA3C;
    case 480u: goto L_0892BA44;
    case 481u: goto L_0892BA74;
    case 482u: goto L_0892BAA8;
    case 483u: goto L_0892BAB8;
    case 484u: goto L_0892BACC;
    case 485u: goto L_0892BB18;
    case 486u: goto L_0892BB24;
    case 487u: goto L_0892BB38;
    case 488u: goto L_0892BB3C;
    case 489u: goto L_0892BB58;
    case 490u: goto L_0892BB60;
    case 491u: goto L_0892BBB0;
    case 492u: goto L_0892BD04;
    case 493u: goto L_0892BD1C;
    case 494u: goto L_0892BD30;
    case 495u: goto L_0892BD4C;
    case 496u: goto L_0892BD64;
    case 497u: goto L_0892BD74;
    case 498u: goto L_0892BD8C;
    case 499u: goto L_0892BDA4;
    case 500u: goto L_0892BDB4;
    case 501u: goto L_0892BDCC;
    case 502u: goto L_0892BDE8;
    case 503u: goto L_0892BDF8;
    case 504u: goto L_0892BE04;
    case 505u: goto L_0892BE20;
    case 506u: goto L_0892BE5C;
    case 507u: goto L_0892BE88;
    case 508u: goto L_0892BEA0;
    case 509u: goto L_0892BEB8;
    case 510u: goto L_0892BED0;
    case 511u: goto L_0892BEE8;
    case 512u: goto L_0892BEF4;
    case 513u: goto L_0892BF24;
    case 514u: goto L_0892BFB0;
    case 515u: goto L_0892BFB8;
    case 516u: goto L_0892BFD0;
    case 517u: goto L_0892BFE4;
    case 518u: goto L_0892BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08928000:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08928004;
L_08928004:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08928024u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08928024u) goto L_08928024;
    return;
L_08928024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x08928038u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08928038u) goto L_08928038;
    return;
L_08928038:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928044:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928074u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 569u, 0x08927550u>(ctx, &aot_mem) && ctx.pc == 0x08928074u) goto L_08928074;
    return;
L_08928074:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08928104;
    }
    goto L_08928084;
L_08928084:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08928090u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 569u, 0x08927550u>(ctx, &aot_mem) && ctx.pc == 0x08928090u) goto L_08928090;
    return;
L_08928090:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089280F0;
      }
      goto L_0892809C;
    }
L_0892809C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[6] == ctx.gpr[19]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
        goto L_089280BC;
    }
    goto L_089280A8;
L_089280A8:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089280A8;
      }
      goto L_089280B8;
    }
L_089280B8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    goto L_089280BC;
L_089280BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08928100;
      }
      goto L_089280F0;
    }
L_089280F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    goto L_08928100;
L_08928100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08928104;
L_08928104:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0892812C;
L_0892812C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928144;
      }
      goto L_08928134;
    }
L_08928134:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0892814C;
      }
      goto L_0892813C;
    }
L_0892813C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892815C;
      }
      goto L_08928144;
    }
L_08928144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928184;
      }
      goto L_0892814C;
    }
L_0892814C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0892812C;
      }
      goto L_0892815C;
    }
L_0892815C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08928174u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 686u, 0x08927EB0u>(ctx, &aot_mem) && ctx.pc == 0x08928174u) goto L_08928174;
    return;
L_08928174:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08928180u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0892833C;
L_08928180:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_08928184;
L_08928184:
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
L_089281A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089281CC;
      }
      goto L_089281C0;
    }
L_089281C0:
    ctx.gpr[2] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7056));
      if (branch_taken) {
          goto L_08928210;
      }
      goto L_089281CC;
    }
L_089281CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089281D8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 569u, 0x08927550u>(ctx, &aot_mem) && ctx.pc == 0x089281D8u) goto L_089281D8;
    return;
L_089281D8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_089281DC;
L_089281DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089281E8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 186u, 0x08A59128u>(ctx, &aot_mem) && ctx.pc == 0x089281E8u) goto L_089281E8;
    return;
L_089281E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928208;
      }
      goto L_089281F0;
    }
L_089281F0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089281DC;
      }
      goto L_089281FC;
    }
L_089281FC:
    ctx.gpr[2] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7056));
      if (branch_taken) {
          goto L_08928210;
      }
      goto L_08928208;
    }
L_08928208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08928210;
      }
      goto L_08928210;
    }
L_08928210:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928224:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08928264;
      }
      goto L_08928240;
    }
L_08928240:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928264;
      }
      goto L_08928250;
    }
L_08928250:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_089282C0;
      }
      goto L_08928264;
    }
L_08928264:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08928278u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 567u, 0x089274DCu>(ctx, &aot_mem) && ctx.pc == 0x08928278u) goto L_08928278;
    return;
L_08928278:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0892827C;
L_0892827C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089282A0;
      }
      goto L_0892828C;
    }
L_0892828C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089282B8;
      }
      goto L_089282A0;
    }
L_089282A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892827C;
      }
      goto L_089282AC;
    }
L_089282AC:
    ctx.gpr[2] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7056));
      if (branch_taken) {
          goto L_089282C0;
      }
      goto L_089282B8;
    }
L_089282B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089282C0;
      }
      goto L_089282C0;
    }
L_089282C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089282D0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[8] << (ctx.gpr[6] & 31u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (0u | 4u);
    goto L_08928300;
L_08928300:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08928318;
      }
      goto L_0892830C;
    }
L_0892830C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08928330;
      }
      goto L_08928318;
    }
L_08928318:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928300;
      }
      goto L_08928324;
    }
L_08928324:
    ctx.gpr[2] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7056));
      if (branch_taken) {
          goto L_08928334;
      }
      goto L_08928330;
    }
L_08928330:
    ctx.gpr[2] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08928334;
L_08928334:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892833C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08928370;
      }
      goto L_0892835C;
    }
L_0892835C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089283C8;
      }
      goto L_08928368;
    }
L_08928368:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08928394;
      }
      goto L_08928370;
    }
L_08928370:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089283C8;
      }
      goto L_0892837C;
    }
L_0892837C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0892838Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089282D0;
L_0892838C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089283D8;
      }
      goto L_08928394;
    }
L_08928394:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089283C8;
      }
      goto L_089283B4;
    }
L_089283B4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089283C0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08928224;
L_089283C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089283D8;
      }
      goto L_089283C8;
    }
L_089283C8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089283D8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089281A0;
L_089283D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089283E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928410u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0892833C;
L_08928410:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7056));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08928444;
      }
      goto L_08928420;
    }
L_08928420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892844C;
      }
      goto L_0892842C;
    }
L_0892842C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0892843Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20728));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 350u, 0x08A018ACu>(ctx, &aot_mem) && ctx.pc == 0x0892843Cu) goto L_0892843C;
    return;
L_0892843C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892847C;
      }
      goto L_08928444;
    }
L_08928444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892848C;
      }
      goto L_0892844C;
    }
L_0892844C:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892847C;
      }
      goto L_08928458;
    }
L_08928458:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[12])) && ctx.fpr[12] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892847C;
      }
      goto L_0892846C;
    }
L_0892846C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0892847Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20748));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 350u, 0x08A018ACu>(ctx, &aot_mem) && ctx.pc == 0x0892847Cu) goto L_0892847C;
    return;
L_0892847C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0892848Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08928044;
L_0892848C:
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
L_089284A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089284D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08928224;
L_089284D0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7056));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089284E8;
      }
      goto L_089284E0;
    }
L_089284E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928514;
      }
      goto L_089284E8;
    }
L_089284E8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0892850Cu);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08928044;
L_0892850C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928514;
      }
      goto L_08928514;
    }
L_08928514:
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
L_0892852C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6684), ctx.gpr[5]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6680), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(19104));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(19104), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928580:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (2275u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(19104));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
        goto L_089285E0;
    }
    goto L_089285E0;
L_089285E0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6680)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6680)));
    ctx.gpr[7] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-2528)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6680)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2528));
    ctx.gpr[8] = (15692u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6680)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6680)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6680)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6680), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928668:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6680)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6684)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[7] != ctx.gpr[8]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
        goto L_08928690;
    }
    goto L_08928688;
L_08928688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928730;
      }
      goto L_08928690;
    }
L_08928690:
    ctx.gpr[7] = (2275u << 16u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(19104));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(19104)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6680)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6684)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (0u | 20u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[31] = (0x089286F8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 612u, 0x08AB366Cu>(ctx, &aot_mem) && ctx.pc == 0x089286F8u) goto L_089286F8;
    return;
L_089286F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2528));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6684)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6680)));
    ctx.gpr[31] = (0x08928730u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08928730u) goto L_08928730;
    return;
L_08928730:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892873C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[9] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-6680)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6684)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08928770;
      }
      goto L_08928768;
    }
L_08928768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892883C;
      }
      goto L_08928770;
    }
L_08928770:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[2] = (ctx.gpr[4] >> 8u);
    ctx.gpr[3] = (15u << 16u);
    ctx.gpr[11] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[11] = (4096u << 16u);
    ctx.gpr[11] = (ctx.gpr[2] | ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[11] = (256u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (ctx.gpr[4] & ctx.gpr[11]);
    ctx.gpr[2] = (2048u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912), ctx.gpr[7]);
    ctx.gpr[11] = (ctx.gpr[11] | ctx.gpr[2]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912), ctx.gpr[7]);
    ctx.gpr[7] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(19104));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6684)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-6680)));
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[10] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x0892883Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08928C48;
L_0892883C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928848:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (14848u << 16u);
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (15104u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (51440u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (57088u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (57600u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8448u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089289F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089289F8u) goto L_089289F8;
    return;
L_089289F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (18176u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x08928A38u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08928A38u) goto L_08928A38;
    return;
L_08928A38:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08928A44u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08928A44u) goto L_08928A44;
    return;
L_08928A44:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08928A50u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08928A50u) goto L_08928A50;
    return;
L_08928A50:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08928A5Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08928A5Cu) goto L_08928A5C;
    return;
L_08928A5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928A6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (22016u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (22528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (22272u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (22528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4912));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (18176u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928B10u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08928B10u) goto L_08928B10;
    return;
L_08928B10:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08928B1Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08928B1Cu) goto L_08928B1C;
    return;
L_08928B1C:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08928B28u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08928B28u) goto L_08928B28;
    return;
L_08928B28:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08928B34u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08928B34u) goto L_08928B34;
    return;
L_08928B34:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928B40:
    ctx.gpr[5] = (14848u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[7] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-2528)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[9] = (15104u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2528));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-464));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<40u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<41u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<42u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<43u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 3u>(vfpu_d); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<31u, 4u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 40u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 0u, 4u);
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
      ctx.read_vfpu_matrix(vfpu_s, 36u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 0u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 20u, 4u);
      ctx.eat_vfpu_prefixes(); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928C2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928C3Cu);
    // nop
    goto L_08928B40;
L_08928C3C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928C48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[7] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[23] = (0u | 255u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[20] = (15u << 16u);
    ctx.gpr[19] = (4096u << 16u);
    ctx.gpr[22] = (18432u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[21] = (18688u << 16u);
      if (branch_taken) {
          goto L_08928CC8;
      }
      goto L_08928CC0;
    }
L_08928CC0:
    ctx.gpr[31] = (0x08928CC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 617u, 0x08AB36E8u>(ctx, &aot_mem) && ctx.pc == 0x08928CC8u) goto L_08928CC8;
    return;
L_08928CC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08928CECu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 173u, 0x08A497E8u>(ctx, &aot_mem) && ctx.pc == 0x08928CECu) goto L_08928CEC;
    return;
L_08928CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2816u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[8] = (2048u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[23] & ctx.gpr[6]);
    ctx.gpr[7] = (21760u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[23] >> 24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (22528u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (22016u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (22272u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[24])) && ctx.fpr[22] == ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2560u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08928FC8;
      }
      goto L_08928DCC;
    }
L_08928DCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (50944u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(257));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16670u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] | 26214u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[13])) && ctx.fpr[22] == ctx.fpr[13]));
    ctx.gpr[6] = (18944u << 16u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[7] = (19200u << 16u);
      if (branch_taken) {
          goto L_08928E48;
      }
      goto L_08928E10;
    }
L_08928E10:
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[9] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08928E48;
L_08928E48:
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[9] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[17] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08928F70;
      }
      goto L_08928EFC;
    }
L_08928EFC:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08928F70;
L_08928F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (50944u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0892903C;
      }
      goto L_08928FC8;
    }
L_08928FC8:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0892903C;
L_0892903C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929078:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08929090u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 614u, 0x08AB36B0u>(ctx, &aot_mem) && ctx.pc == 0x08929090u) goto L_08929090;
    return;
L_08929090:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089290A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2275u << 16u);
    ctx.gpr[16] = (2275u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(22192));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(27568));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089290D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC30u>(ctx, &aot_mem) && ctx.pc == 0x089290D0u) goto L_089290D0;
    return;
L_089290D0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x089290DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20768));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892F99Cu>(ctx, &aot_mem) && ctx.pc == 0x089290DCu) goto L_089290DC;
    return;
L_089290DC:
    ctx.gpr[31] = (0x089290E4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 619u, 0x0892FBDCu>(ctx, &aot_mem) && ctx.pc == 0x089290E4u) goto L_089290E4;
    return;
L_089290E4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089290F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20780));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089290F4u) goto L_089290F4;
    return;
L_089290F4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27904), ctx.gpr[2]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0892910Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20792));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x0892910Cu) goto L_0892910C;
    return;
L_0892910C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27908), ctx.gpr[2]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929124u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20804));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08929124u) goto L_08929124;
    return;
L_08929124:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27912), ctx.gpr[2]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0892913Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20816));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x0892913Cu) goto L_0892913C;
    return;
L_0892913C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27916), ctx.gpr[2]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929154u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20828));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08929154u) goto L_08929154;
    return;
L_08929154:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27920), ctx.gpr[2]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0892916Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20844));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x0892916Cu) goto L_0892916C;
    return;
L_0892916C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27924), ctx.gpr[2]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929184u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20856));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08929184u) goto L_08929184;
    return;
L_08929184:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27928), ctx.gpr[2]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0892919Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20876));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x0892919Cu) goto L_0892919C;
    return;
L_0892919C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27932), ctx.gpr[2]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089291B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20888));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089291B4u) goto L_089291B4;
    return;
L_089291B4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27936), ctx.gpr[2]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089291CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20900));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089291CCu) goto L_089291CC;
    return;
L_089291CC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27940), ctx.gpr[2]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089291E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20912));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089291E4u) goto L_089291E4;
    return;
L_089291E4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27944), ctx.gpr[2]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089291FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20928));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089291FCu) goto L_089291FC;
    return;
L_089291FC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27952), ctx.gpr[2]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929214u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20940));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08929214u) goto L_08929214;
    return;
L_08929214:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08929220u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27956), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 626u, 0x0892FC54u>(ctx, &aot_mem) && ctx.pc == 0x08929220u) goto L_08929220;
    return;
L_08929220:
    ctx.gpr[4] = (0u | 0u);
    goto L_08929224;
L_08929224:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08929224;
      }
      goto L_0892923C;
    }
L_0892923C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08929240;
L_08929240:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08929240;
      }
      goto L_08929254;
    }
L_08929254:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929268:
    ctx.gpr[13] = (ctx.gpr[10] | 0u);
    ctx.gpr[12] = (ctx.gpr[4] & 255u);
    ctx.gpr[3] = (ctx.gpr[7] << 16u);
    ctx.gpr[2] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[9] = (ctx.gpr[13] & 255u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27568));
    goto L_08929294;
L_08929294:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089292B8;
      }
      goto L_0892929C;
    }
L_0892929C:
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_089292B8;
      }
      goto L_089292A8;
    }
L_089292A8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_08929294;
      }
      goto L_089292B8;
    }
L_089292B8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929304;
      }
      goto L_089292C0;
    }
L_089292C0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    goto L_08929304;
L_08929304:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892930C:
    ctx.gpr[13] = (ctx.gpr[11] | 0u);
    ctx.gpr[2] = (ctx.gpr[8] & 255u);
    ctx.gpr[3] = (ctx.gpr[7] << 16u);
    ctx.gpr[12] = (ctx.gpr[4] & 255u);
    ctx.gpr[11] = (ctx.gpr[9] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[13] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6676)));
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[13]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
      if (branch_taken) {
          goto L_089293DC;
      }
      goto L_08929348;
    }
L_08929348:
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6676)));
    ctx.gpr[13] = (ctx.gpr[13] << 6u);
    ctx.gpr[14] = (2275u << 16u);
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(19120));
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[14]);
    aot_mem.aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[13] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(54))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[9] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(54))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[8] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6676)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6676), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089293DC;
L_089293DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089293E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[20] = (ctx.gpr[9] & 255u);
    ctx.gpr[21] = (ctx.gpr[10] & 255u);
    ctx.gpr[22] = (ctx.gpr[11] & 255u);
    ctx.gpr[23] = (2232u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(13216));
    ctx.gpr[30] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[19] = ctx.fpr[19] - ctx.fpr[0];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[1];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[2];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[8] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
      if (branch_taken) {
          goto L_08929514;
      }
      goto L_089294C8;
    }
L_089294C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08929514;
      }
      goto L_089294F8;
    }
L_089294F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(935)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929514;
      }
      goto L_08929504;
    }
L_08929504:
    ctx.gpr[31] = (0x0892950Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0892950Cu) goto L_0892950C;
    return;
L_0892950C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892951C;
      }
      goto L_08929514;
    }
L_08929514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08929520;
      }
      goto L_0892951C;
    }
L_0892951C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08929520;
L_08929520:
    ctx.gpr[5] = (17462u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08929544;
      }
      goto L_0892953C;
    }
L_0892953C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929678;
      }
      goto L_08929544;
    }
L_08929544:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892958C;
      }
      goto L_0892954C;
    }
L_0892954C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(196)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(200)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08929678;
      }
      goto L_0892958C;
    }
L_0892958C:
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[5] = (16802u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08929618;
      }
      goto L_089295A8;
    }
L_089295A8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16784u << 16u);
      if (branch_taken) {
          goto L_08929618;
      }
      goto L_089295B0;
    }
L_089295B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    goto L_08929618;
L_08929618:
    ctx.gpr[4] = (16576u << 16u);
    ctx.gpr[31] = (0x08929624u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08929624u) goto L_08929624;
    return;
L_08929624:
    ctx.gpr[4] = (ctx.gpr[16] ^ ctx.gpr[2]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 128u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08929678u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    goto L_0892930C;
L_08929678:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089296C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (8u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
      if (branch_taken) {
          goto L_0892975C;
      }
      goto L_089296FC;
    }
L_089296FC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929720;
      }
      goto L_08929708;
    }
L_08929708:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 60u);
      if (branch_taken) {
          goto L_08929720;
      }
      goto L_08929718;
    }
L_08929718:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0892975C;
      }
      goto L_08929720;
    }
L_08929720:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(11140))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892975C;
      }
      goto L_08929734;
    }
L_08929734:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[31] = (0x0892975Cu);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08929768;
L_0892975C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929768:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[31]);
    ctx.gpr[5] = (16720u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = ctx.fpr[19] - ctx.fpr[0];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[1];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[2];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08929A60;
      }
      goto L_08929814;
    }
L_08929814:
    ctx.gpr[31] = (0x0892981Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0892981Cu) goto L_0892981C;
    return;
L_0892981C:
    ctx.gpr[18] = (ctx.gpr[2] ^ ctx.gpr[16]);
    ctx.gpr[18] = (ctx.gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08929880;
      }
      goto L_0892982C;
    }
L_0892982C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-464));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08929878;
      }
      goto L_08929870;
    }
L_08929870:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08929878;
L_08929878:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929A60;
      }
      goto L_08929880;
    }
L_08929880:
    ctx.fpr[22] = std::sqrt(ctx.fpr[22]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089298B8;
      }
      goto L_089298A8;
    }
L_089298A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11140))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_089298EC;
      }
      goto L_089298B8;
    }
L_089298B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11140))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[4] << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[20] = (ctx.gpr[19] & 255u);
    goto L_089298EC;
L_089298EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08929944;
      }
      goto L_08929914;
    }
L_08929914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08929944;
      }
      goto L_08929924;
    }
L_08929924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08929944;
      }
      goto L_08929934;
    }
L_08929934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08929A10;
      }
      goto L_08929944;
    }
L_08929944:
    ctx.gpr[31] = (0x0892994Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x0892994Cu) goto L_0892994C;
    return;
L_0892994C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08929960u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x08929960u) goto L_08929960;
    return;
L_08929960:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0892996Cu);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x0892996Cu) goto L_0892996C;
    return;
L_0892996C:
    ctx.gpr[21] = (ctx.gpr[21] << 6u);
    ctx.gpr[21] = (ctx.gpr[2] + ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
      if (branch_taken) {
          goto L_08929994;
      }
      goto L_0892997C;
    }
L_0892997C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
        goto L_08929998;
    }
    goto L_0892998C;
L_0892998C:
    ctx.gpr[31] = (0x08929994u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08929994u) goto L_08929994;
    return;
L_08929994:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    goto L_08929998;
L_08929998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[31] = (0x089299B0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x089299B0u) goto L_089299B0;
    return;
L_089299B0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929A10;
      }
      goto L_089299FC;
    }
L_089299FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929A10;
      }
      goto L_08929A08;
    }
L_08929A08:
    ctx.gpr[31] = (0x08929A10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08929A10u) goto L_08929A10;
    return;
L_08929A10:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27908)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08929A60u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    goto L_0892930C;
L_08929A60:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929A9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(11144))))));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_08929C50;
      }
      goto L_08929AD8;
    }
L_08929AD8:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (16128u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08929AFC;
      }
      goto L_08929AF4;
    }
L_08929AF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929C50;
      }
      goto L_08929AFC;
    }
L_08929AFC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(11144))))));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.fpr[19] = ctx.fpr[19] - ctx.fpr[17];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.gpr[7] = (16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[19] + ctx.fpr[18];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = ctx.fpr[0] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[9] = (ctx.gpr[9] << 4u);
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[9]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[17] = ctx.fpr[18] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(51));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27956)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(384)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(448)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[6] = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[5] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[5] = (16752u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[19] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08929C50u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    goto L_0892A980;
L_08929C50:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929C5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08929CA8;
      }
      goto L_08929C74;
    }
L_08929C74:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08929D10;
      }
      goto L_08929C7C;
    }
L_08929C7C:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08929C88u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08929C88u) goto L_08929C88;
    return;
L_08929C88:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08929C94u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08929C94u) goto L_08929C94;
    return;
L_08929C94:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08929CA0u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08929CA0u) goto L_08929CA0;
    return;
L_08929CA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929D10;
      }
      goto L_08929CA8;
    }
L_08929CA8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08929CE4;
      }
      goto L_08929CB0;
    }
L_08929CB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929D10;
      }
      goto L_08929CB8;
    }
L_08929CB8:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08929CC4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08929CC4u) goto L_08929CC4;
    return;
L_08929CC4:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08929CD0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08929CD0u) goto L_08929CD0;
    return;
L_08929CD0:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08929CDCu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08929CDCu) goto L_08929CDC;
    return;
L_08929CDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929D10;
      }
      goto L_08929CE4;
    }
L_08929CE4:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08929CF0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08929CF0u) goto L_08929CF0;
    return;
L_08929CF0:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08929CFCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08929CFCu) goto L_08929CFC;
    return;
L_08929CFC:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08929D08u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08929D08u) goto L_08929D08;
    return;
L_08929D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929D10;
      }
      goto L_08929D10;
    }
L_08929D10:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929D1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[17] = (2275u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(22192));
    ctx.gpr[31] = (0x08929D44u);
    // nop
    goto L_08928848;
L_08929D44:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08929D4C;
L_08929D4C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08929D4C;
      }
      goto L_08929D60;
    }
L_08929D60:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(5376));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08929E48;
      }
      goto L_08929D6C;
    }
L_08929D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929E3C;
      }
      goto L_08929D78;
    }
L_08929D78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929E3C;
      }
      goto L_08929D84;
    }
L_08929D84:
    ctx.gpr[31] = (0x08929D8Cu);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    goto L_08929C5C;
L_08929D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08929D9Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08929D9Cu) goto L_08929D9C;
    return;
L_08929D9C:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08929E3C;
      }
      goto L_08929DA8;
    }
L_08929DA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929E30;
      }
      goto L_08929DB4;
    }
L_08929DB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(94)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08929E30;
      }
      goto L_08929DC4;
    }
L_08929DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08929E30;
      }
      goto L_08929DD4;
    }
L_08929DD4:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08929DE4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08928C2C;
L_08929DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(95)));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(92))))));
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(97)));
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(106)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08929E2Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08928C48;
L_08929E2C:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08929E30;
L_08929E30:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(112));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08929DA8;
      }
      goto L_08929E3C;
    }
L_08929E3C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08929D6C;
      }
      goto L_08929E48;
    }
L_08929E48:
    ctx.gpr[31] = (0x08929E50u);
    // nop
    goto L_08928A6C;
L_08929E50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929E6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22192));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[26] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = ctx.fpr[13] - ctx.fpr[26];
    ctx.fpr[26] = ctx.fpr[13] + ctx.fpr[26];
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[16] = (2227u << 16u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_08929F54;
    }
    goto L_08929F54;
L_08929F54:
    ctx.fpr[14] = ctx.fpr[24] / ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
        goto L_08929F78;
    }
    goto L_08929F78;
L_08929F78:
    ctx.fpr[14] = ctx.fpr[22] / ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[21] = (0u | 99u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_08929F98;
    }
    goto L_08929F98;
L_08929F98:
    ctx.fpr[12] = ctx.fpr[26] / ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 99u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
        goto L_08929FBC;
    }
    goto L_08929FBC;
L_08929FBC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929FE0;
      }
      goto L_08929FD0;
    }
L_08929FD0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08929FF0;
      }
      goto L_08929FE0;
    }
L_08929FE0:
    ctx.gpr[31] = (0x08929FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 155u, 0x088C4C18u>(ctx, &aot_mem) && ctx.pc == 0x08929FE8u) goto L_08929FE8;
    return;
L_08929FE8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08929FF0;
L_08929FF0:
    ctx.gpr[31] = (0x08929FF8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0892852C;
L_08929FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (2227u << 16u);
      if (branch_taken) {
          goto L_0892A0D8;
      }
      goto L_0892A00C;
    }
L_0892A00C:
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[5] << 2u);
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[4]);
    goto L_0892A01C;
L_0892A01C:
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_0892A0C4;
      }
      goto L_0892A02C;
    }
L_0892A02C:
    ctx.gpr[16] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_0892A03C;
L_0892A03C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0892A07Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0892A120;
L_0892A07C:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0892A0B0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0892A120;
L_0892A0B0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_0892A03C;
      }
      goto L_0892A0C4;
    }
L_0892A0C4:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_0892A01C;
      }
      goto L_0892A0D8;
    }
L_0892A0D8:
    ctx.gpr[31] = (0x0892A0E0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08928668;
L_0892A0E0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A120:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
      if (branch_taken) {
          goto L_0892A338;
      }
      goto L_0892A188;
    }
L_0892A188:
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[21] = (2229u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_0892A1A0;
L_0892A1A0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892A324;
      }
      goto L_0892A1B8;
    }
L_0892A1B8:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A324;
      }
      goto L_0892A1D4;
    }
L_0892A1D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0892A324;
      }
      goto L_0892A1E4;
    }
L_0892A1E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16248u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892A324;
      }
      goto L_0892A204;
    }
L_0892A204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0892A220u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A220u) goto L_0892A220;
    return;
L_0892A220:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892A324;
      }
      goto L_0892A24C;
    }
L_0892A24C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[30] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892A324;
      }
      goto L_0892A260;
    }
L_0892A260:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892A324;
      }
      goto L_0892A274;
    }
L_0892A274:
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892A324;
      }
      goto L_0892A284;
    }
L_0892A284:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892A324;
      }
      goto L_0892A2C8;
    }
L_0892A2C8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892A324;
      }
      goto L_0892A2F4;
    }
L_0892A2F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x0892A324u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_0892BBB0;
L_0892A324:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A1A0;
      }
      goto L_0892A32C;
    }
L_0892A32C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0892A338;
L_0892A338:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A374:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
      if (branch_taken) {
          goto L_0892A57C;
      }
      goto L_0892A3DC;
    }
L_0892A3DC:
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[21] = (2229u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_0892A3F4;
L_0892A3F4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892A568;
      }
      goto L_0892A40C;
    }
L_0892A40C:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0892A568;
      }
      goto L_0892A428;
    }
L_0892A428:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16248u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892A568;
      }
      goto L_0892A448;
    }
L_0892A448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0892A464u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A464u) goto L_0892A464;
    return;
L_0892A464:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892A568;
      }
      goto L_0892A490;
    }
L_0892A490:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[30] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892A568;
      }
      goto L_0892A4A4;
    }
L_0892A4A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892A568;
      }
      goto L_0892A4B8;
    }
L_0892A4B8:
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892A568;
      }
      goto L_0892A4C8;
    }
L_0892A4C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892A568;
      }
      goto L_0892A50C;
    }
L_0892A50C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892A568;
      }
      goto L_0892A538;
    }
L_0892A538:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x0892A568u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_0892BBB0;
L_0892A568:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A3F4;
      }
      goto L_0892A570;
    }
L_0892A570:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0892A57C;
L_0892A57C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A5B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[17] = (2275u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(22192));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (2230u << 16u);
    goto L_0892A5DC;
L_0892A5DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A620;
      }
      goto L_0892A5E8;
    }
L_0892A5E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(98)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A620;
      }
      goto L_0892A5F4;
    }
L_0892A5F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(105)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A618;
      }
      goto L_0892A600;
    }
L_0892A600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A620;
      }
      goto L_0892A618;
    }
L_0892A618:
    ctx.gpr[31] = (0x0892A620u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08929078;
L_0892A620:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_0892A5DC;
      }
      goto L_0892A634;
    }
L_0892A634:
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
L_0892A64C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[17] = (2275u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(27568));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0892A6B4;
L_0892A6B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A840;
      }
      goto L_0892A6C0;
    }
L_0892A6C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A6E4;
      }
      goto L_0892A6DC;
    }
L_0892A6DC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0892A840;
      }
      goto L_0892A6E4;
    }
L_0892A6E4:
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] >> 2u);
    ctx.gpr[2] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(55)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(57)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0892A75C;
      }
      goto L_0892A720;
    }
L_0892A720:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x0892A74Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_0892A980;
L_0892A74C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A840;
      }
      goto L_0892A754;
    }
L_0892A754:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0892A840;
      }
      goto L_0892A75C;
    }
L_0892A75C:
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[26];
        goto L_0892A76C;
    }
    goto L_0892A76C;
L_0892A76C:
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[26];
        goto L_0892A77C;
    }
    goto L_0892A77C;
L_0892A77C:
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[26];
        goto L_0892A798;
    }
    goto L_0892A798;
L_0892A798:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[18];
    ctx.fpr[17] = ctx.fpr[20] - ctx.fpr[17];
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[19]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[8] = (ctx.gpr[4] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[19]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x0892A834u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_0892A980;
L_0892A834:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A840;
      }
      goto L_0892A83C;
    }
L_0892A83C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    goto L_0892A840;
L_0892A840:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0892A6B4;
      }
      goto L_0892A850;
    }
L_0892A850:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A880:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[11] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A958:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27568));
    ctx.gpr[5] = (0u | 0u);
    goto L_0892A964;
L_0892A964:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0892A964;
      }
      goto L_0892A978;
    }
L_0892A978:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A980:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[2] = (ctx.gpr[8] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[3] = (ctx.gpr[6] | 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[5] & 255u);
    ctx.gpr[30] = (ctx.gpr[2] << 16u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 16u));
    ctx.gpr[23] = (ctx.gpr[9] & 255u);
    ctx.gpr[22] = (ctx.gpr[10] & 255u);
    ctx.gpr[21] = (ctx.gpr[11] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_0892AA6C;
      }
      goto L_0892AA5C;
    }
L_0892AA5C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[18]) || std::isnan(ctx.fpr[13])) && ctx.fpr[18] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892ADF8;
      }
      goto L_0892AA6C;
    }
L_0892AA6C:
    ctx.gpr[17] = (2275u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[18]) || std::isnan(ctx.fpr[13])) && ctx.fpr[18] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(22192));
      if (branch_taken) {
          goto L_0892AB24;
      }
      goto L_0892AA80;
    }
L_0892AA80:
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892AB24;
      }
      goto L_0892AAA0;
    }
L_0892AAA0:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[18];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[30] = (ctx.gpr[4] << 16u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 16u));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[23]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[23] = (ctx.gpr[23] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    goto L_0892AB24;
L_0892AB24:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0892AB2C;
L_0892AB2C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
      if (branch_taken) {
          goto L_0892AB6C;
      }
      goto L_0892AB34;
    }
L_0892AB34:
    ctx.gpr[10] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_0892AB58;
      }
      goto L_0892AB4C;
    }
L_0892AB4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
        goto L_0892AB70;
    }
    goto L_0892AB58;
L_0892AB58:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892AB2C;
      }
      goto L_0892AB6C;
    }
L_0892AB6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    goto L_0892AB70;
L_0892AB70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AD04;
      }
      goto L_0892AB88;
    }
L_0892AB88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[19]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0892ABDC;
    }
    goto L_0892ABB8;
L_0892ABB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892ACC0;
      }
      goto L_0892ABD8;
    }
L_0892ABD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_0892ABDC;
L_0892ABDC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
        goto L_0892ACA0;
    }
    goto L_0892AC04;
L_0892AC04:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
        goto L_0892ACA0;
    }
    goto L_0892AC24;
L_0892AC24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
        goto L_0892ACA0;
    }
    goto L_0892AC4C;
L_0892AC4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[28]) || std::isnan(ctx.fpr[12])) && ctx.fpr[28] == ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
        goto L_0892ACA0;
    }
    goto L_0892AC60;
L_0892AC60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[26]) || std::isnan(ctx.fpr[12])) && ctx.fpr[26] == ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
        goto L_0892ACA0;
    }
    goto L_0892AC74;
L_0892AC74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[12])) && ctx.fpr[24] == ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
        goto L_0892ACA0;
    }
    goto L_0892AC88;
L_0892AC88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[12])) && ctx.fpr[22] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892ACC0;
      }
      goto L_0892AC9C;
    }
L_0892AC9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    goto L_0892ACA0;
L_0892ACA0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[31] = (0x0892ACB8u);
    // nop
    goto L_08929078;
L_0892ACB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AD4C;
      }
      goto L_0892ACC0;
    }
L_0892ACC0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0892ADFC;
      }
      goto L_0892AD04;
    }
L_0892AD04:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_0892AD0C;
L_0892AD0C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
      if (branch_taken) {
          goto L_0892AD40;
      }
      goto L_0892AD14;
    }
L_0892AD14:
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AD40;
      }
      goto L_0892AD2C;
    }
L_0892AD2C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892AD0C;
      }
      goto L_0892AD40;
    }
L_0892AD40:
    ctx.gpr[4] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892ADF0;
      }
      goto L_0892AD4C;
    }
L_0892AD4C:
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0892ADDCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08929E6C;
L_0892ADDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892ADF8;
      }
      goto L_0892ADE8;
    }
L_0892ADE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0892ADFC;
      }
      goto L_0892ADF0;
    }
L_0892ADF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0892ADFC;
      }
      goto L_0892ADF8;
    }
L_0892ADF8:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    goto L_0892ADFC;
L_0892ADFC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892AE44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[31]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27904)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(11140))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0892B6E4;
      }
      goto L_0892AE88;
    }
L_0892AE88:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(935)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AF04;
      }
      goto L_0892AEE4;
    }
L_0892AEE4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    goto L_0892AF04;
L_0892AF04:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5 ? 1u : 0u);
        goto L_0892AF2C;
    }
    goto L_0892AF18;
L_0892AF18:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892AF8C;
      }
      goto L_0892AF24;
    }
L_0892AF24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AF60;
      }
      goto L_0892AF2C;
    }
L_0892AF2C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AF8C;
      }
      goto L_0892AF34;
    }
L_0892AF34:
    ctx.gpr[6] = (18082u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892AF50;
      }
      goto L_0892AF4C;
    }
L_0892AF4C:
    ctx.gpr[4] = (0u | 1u);
    goto L_0892AF50;
L_0892AF50:
    ctx.gpr[6] = (17168u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AFB0;
      }
      goto L_0892AF60;
    }
L_0892AF60:
    ctx.gpr[6] = (18082u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892AF7C;
      }
      goto L_0892AF78;
    }
L_0892AF78:
    ctx.gpr[4] = (0u | 1u);
    goto L_0892AF7C;
L_0892AF7C:
    ctx.gpr[6] = (17168u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AFB0;
      }
      goto L_0892AF8C;
    }
L_0892AF8C:
    ctx.gpr[6] = (17314u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892AFA8;
      }
      goto L_0892AFA4;
    }
L_0892AFA4:
    ctx.gpr[4] = (0u | 1u);
    goto L_0892AFA8;
L_0892AFA8:
    ctx.gpr[6] = (16784u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_0892AFB0;
L_0892AFB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B6E4;
      }
      goto L_0892AFB8;
    }
L_0892AFB8:
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892AFE8;
      }
      goto L_0892AFD8;
    }
L_0892AFD8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11140))))));
      if (branch_taken) {
          goto L_0892B03C;
      }
      goto L_0892AFE8;
    }
L_0892AFE8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11140))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[17] - ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    goto L_0892B03C;
L_0892B03C:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[14];
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < 202 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < 217 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892B108;
      }
      goto L_0892B090;
    }
L_0892B090:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < -984 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 164u);
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892B09C;
    }
L_0892B09C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < -986 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B198;
      }
      goto L_0892B0A8;
    }
L_0892B0A8:
    ctx.gpr[6] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[6] = (16307u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B198;
      }
      goto L_0892B0D8;
    }
L_0892B0D8:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0892B198;
      }
      goto L_0892B0E0;
    }
L_0892B0E0:
    ctx.gpr[6] = (16230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[6] = (16076u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B198;
      }
      goto L_0892B108;
    }
L_0892B108:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-202));
      if (branch_taken) {
          goto L_0892B198;
      }
      goto L_0892B110;
    }
L_0892B110:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20976)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B128:
    ctx.gpr[6] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[6] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[6] = (15948u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B198;
      }
      goto L_0892B154;
    }
L_0892B154:
    ctx.gpr[6] = (16281u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[6] = (15692u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B198;
      }
      goto L_0892B178;
    }
L_0892B178:
    ctx.gpr[6] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[6] = (15605u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B198;
      }
      goto L_0892B198;
    }
L_0892B198:
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B2F4;
      }
      goto L_0892B1E8;
    }
L_0892B1E8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0892B2E4;
      }
      goto L_0892B1F0;
    }
L_0892B1F0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0892B28C;
      }
      goto L_0892B1F8;
    }
L_0892B1F8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0892B29C;
      }
      goto L_0892B200;
    }
L_0892B200:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0892B2B8;
      }
      goto L_0892B208;
    }
L_0892B208:
    ctx.gpr[4] = (16546u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 63875u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1308)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 496u);
    ctx.gpr[7] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0892B278;
      }
      goto L_0892B244;
    }
L_0892B244:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892B278;
      }
      goto L_0892B268;
    }
L_0892B268:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0892B278;
L_0892B278:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27916)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B2F4;
      }
      goto L_0892B28C;
    }
L_0892B28C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27912)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B2F4;
      }
      goto L_0892B29C;
    }
L_0892B29C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27920)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11140))))));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B2F4;
      }
      goto L_0892B2B8;
    }
L_0892B2B8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27920)));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (16396u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B2F4;
      }
      goto L_0892B2E4;
    }
L_0892B2E4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27904)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B2F4;
      }
      goto L_0892B2F4;
    }
L_0892B2F4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
        goto L_0892B338;
    }
    goto L_0892B328;
L_0892B328:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0892B404;
      }
      goto L_0892B330;
    }
L_0892B330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B348;
      }
      goto L_0892B338;
    }
L_0892B338:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B388;
      }
      goto L_0892B340;
    }
L_0892B340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B404;
      }
      goto L_0892B348;
    }
L_0892B348:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892B380;
      }
      goto L_0892B36C;
    }
L_0892B36C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0892B380;
L_0892B380:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B574;
      }
      goto L_0892B388;
    }
L_0892B388:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16145u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 60293u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892B3C0;
      }
      goto L_0892B3AC;
    }
L_0892B3AC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0892B3C0;
L_0892B3C0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16145u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 60293u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892B3FC;
      }
      goto L_0892B3E8;
    }
L_0892B3E8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0892B3FC;
L_0892B3FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B574;
      }
      goto L_0892B404;
    }
L_0892B404:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[26]) || std::isnan(ctx.fpr[13])) && ctx.fpr[26] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0892B43C;
      }
      goto L_0892B420;
    }
L_0892B420:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0892B440;
    }
    goto L_0892B434;
L_0892B434:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0892B44C;
      }
      goto L_0892B43C;
    }
L_0892B43C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0892B440;
L_0892B440:
    ctx.gpr[31] = (0x0892B448u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B448u) goto L_0892B448;
    return;
L_0892B448:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0892B44C;
L_0892B44C:
    ctx.gpr[31] = (0x0892B454u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x0892B454u) goto L_0892B454;
    return;
L_0892B454:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0892B490;
      }
      goto L_0892B474;
    }
L_0892B474:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892B490;
      }
      goto L_0892B488;
    }
L_0892B488:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0892B49C;
      }
      goto L_0892B490;
    }
L_0892B490:
    ctx.gpr[31] = (0x0892B498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B498u) goto L_0892B498;
    return;
L_0892B498:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0892B49C;
L_0892B49C:
    ctx.gpr[31] = (0x0892B4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x0892B4A4u) goto L_0892B4A4;
    return;
L_0892B4A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[26] = ctx.fpr[24] / ctx.fpr[20];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892B528;
      }
      goto L_0892B510;
    }
L_0892B510:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0892B528;
L_0892B528:
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892B574;
      }
      goto L_0892B55C;
    }
L_0892B55C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0892B574;
L_0892B574:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 211 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 213 ? 1u : 0u);
      if (branch_taken) {
          goto L_0892B5B0;
      }
      goto L_0892B580;
    }
L_0892B580:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < -954 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 169u);
      if (branch_taken) {
          goto L_0892B5A0;
      }
      goto L_0892B58C;
    }
L_0892B58C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < -955 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5C4;
      }
      goto L_0892B598;
    }
L_0892B598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5B8;
      }
      goto L_0892B5A0;
    }
L_0892B5A0:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892B5B8;
      }
      goto L_0892B5A8;
    }
L_0892B5A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5C4;
      }
      goto L_0892B5B0;
    }
L_0892B5B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5C4;
      }
      goto L_0892B5B8;
    }
L_0892B5B8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5D4;
      }
      goto L_0892B5C4;
    }
L_0892B5C4:
    ctx.gpr[31] = (0x0892B5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0892B5CCu) goto L_0892B5CC;
    return;
L_0892B5CC:
    ctx.gpr[4] = (ctx.gpr[16] ^ ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_0892B5D4;
L_0892B5D4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0892B66C;
      }
      goto L_0892B5F0;
    }
L_0892B5F0:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (16528u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0892B664u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0892930C;
L_0892B664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B6E4;
      }
      goto L_0892B66C;
    }
L_0892B66C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
    ctx.gpr[8] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (16528u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0892B6E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0892930C;
L_0892B6E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B710:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892B75Cu);
    // nop
    goto L_08928848;
L_0892B75C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x0892B768u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2528));
    goto L_08928B40;
L_0892B768:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6676)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (2275u << 16u);
      if (branch_taken) {
          goto L_0892B7A4;
      }
      goto L_0892B780;
    }
L_0892B780:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(19120));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    goto L_0892B788;
L_0892B788:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(54))))));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0892B788;
      }
      goto L_0892B7A4;
    }
L_0892B7A4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0892BB58;
      }
      goto L_0892B7B4;
    }
L_0892B7B4:
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19120));
    ctx.gpr[6] = (16928u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    goto L_0892B7D4;
L_0892B7D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(54))))));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_0892BB3C;
    }
    goto L_0892B7E8;
L_0892B7E8:
    ctx.gpr[31] = (0x0892B7F0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    goto L_08929C5C;
L_0892B7F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0892B800u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0892B800u) goto L_0892B800;
    return;
L_0892B800:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6676)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0892BB38;
      }
      goto L_0892B818;
    }
L_0892B818:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[22]);
    goto L_0892B824;
L_0892B824:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(50)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(50)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_0892BB24;
    }
    goto L_0892B838;
L_0892B838:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(44)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_0892BB24;
    }
    goto L_0892B848;
L_0892B848:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) & 0x7FFFFFFFu);
    ctx.fpr[26] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = ctx.fpr[13] - ctx.fpr[26];
    ctx.fpr[26] = ctx.fpr[13] + ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[20] / ctx.fpr[28];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[30];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(20976)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_0892B8B8;
    }
    goto L_0892B8B8;
L_0892B8B8:
    ctx.fpr[12] = ctx.fpr[24] / ctx.fpr[28];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
        goto L_0892B8DC;
    }
    goto L_0892B8DC;
L_0892B8DC:
    ctx.fpr[12] = ctx.fpr[22] / ctx.fpr[28];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (0u | 99u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_0892B8FC;
    }
    goto L_0892B8FC;
L_0892B8FC:
    ctx.fpr[12] = ctx.fpr[26] / ctx.fpr[28];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u | 99u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    if (ctx.gpr[7] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
        goto L_0892B920;
    }
    goto L_0892B920;
L_0892B920:
    ctx.gpr[4] = (0u | 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0892B938;
      }
      goto L_0892B930;
    }
L_0892B930:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0892B948;
      }
      goto L_0892B938;
    }
L_0892B938:
    ctx.gpr[31] = (0x0892B940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 155u, 0x088C4C18u>(ctx, &aot_mem) && ctx.pc == 0x0892B940u) goto L_0892B940;
    return;
L_0892B940:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0892B948;
L_0892B948:
    ctx.gpr[31] = (0x0892B950u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0892852C;
L_0892B950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BACC;
      }
      goto L_0892B964;
    }
L_0892B964:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[23] << 5u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[5] << 2u);
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[4]);
    goto L_0892B978;
L_0892B978:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BAB8;
      }
      goto L_0892B98C;
    }
L_0892B98C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[23]);
    ctx.gpr[18] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[18]);
    goto L_0892B9A4;
L_0892B9A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(54))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0892BA44;
      }
      goto L_0892B9D8;
    }
L_0892B9D8:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0892BA08u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0892A374;
L_0892BA08:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0892BA3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0892A374;
L_0892BA3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BAA8;
      }
      goto L_0892BA44;
    }
L_0892BA44:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0892BA74u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0892A120;
L_0892BA74:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0892BAA8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0892A120;
L_0892BAA8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0892B9A4;
      }
      goto L_0892BAB8;
    }
L_0892BAB8:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_0892B978;
      }
      goto L_0892BACC;
    }
L_0892BACC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(54))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(51)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(53)));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(55)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x0892BB18u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(40)));
    goto L_0892873C;
L_0892BB18:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6676)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_0892BB24;
L_0892BB24:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0892B824;
      }
      goto L_0892BB38;
    }
L_0892BB38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_0892BB3C;
L_0892BB3C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0892B7D4;
      }
      goto L_0892BB58;
    }
L_0892BB58:
    ctx.gpr[31] = (0x0892BB60u);
    // nop
    goto L_08928A6C;
L_0892BB60:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6676), static_cast<std::uint16_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892BBB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[31]);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[13] + ctx.fpr[1];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[19];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[17] - ctx.fpr[3];
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = ctx.fpr[4] - ctx.fpr[19];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[13] + ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[1];
    ctx.gpr[6] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30944), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[0] = ctx.fpr[17] + ctx.fpr[16];
    ctx.fpr[19] = ctx.fpr[0] - ctx.fpr[18];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30944));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[1];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[19] = ctx.fpr[0] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[19] = ctx.fpr[14] + ctx.fpr[1];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[16];
    ctx.fpr[19] = ctx.fpr[16] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[1];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] - ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[14];
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0892BD04;
    }
    goto L_0892BD04;
L_0892BD04:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_0892BD1C;
    }
    goto L_0892BD1C;
L_0892BD1C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0892BD30;
    }
    goto L_0892BD30;
L_0892BD30:
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30944)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0892BD4C;
    }
    goto L_0892BD4C;
L_0892BD4C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0892BD64;
    }
    goto L_0892BD64;
L_0892BD64:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0892BD74;
    }
    goto L_0892BD74;
L_0892BD74:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0892BD8C;
    }
    goto L_0892BD8C;
L_0892BD8C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0892BDA4;
    }
    goto L_0892BDA4;
L_0892BDA4:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0892BDB4;
    }
    goto L_0892BDB4;
L_0892BDB4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0892BDCC;
    }
    goto L_0892BDCC;
L_0892BDCC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0892BDE8;
    }
    goto L_0892BDE8;
L_0892BDE8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0892BDF8;
    }
    goto L_0892BDF8;
L_0892BDF8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 120u, 0x0892D1CCu>(ctx, &aot_mem); return;
      }
      goto L_0892BE04;
    }
L_0892BE04:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(55)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 120u, 0x0892D1CCu>(ctx, &aot_mem); return;
      }
      goto L_0892BE20;
    }
L_0892BE20:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[21] = (2230u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[15] - ctx.fpr[26];
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31584));
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31264));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    goto L_0892BE5C;
L_0892BE5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
        (void)rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 119u, 0x0892D1ACu>(ctx, &aot_mem); return;
    }
    goto L_0892BE88;
L_0892BE88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
        (void)rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 119u, 0x0892D1ACu>(ctx, &aot_mem); return;
    }
    goto L_0892BEA0;
L_0892BEA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
        (void)rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 119u, 0x0892D1ACu>(ctx, &aot_mem); return;
    }
    goto L_0892BEB8;
L_0892BEB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
        (void)rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 119u, 0x0892D1ACu>(ctx, &aot_mem); return;
    }
    goto L_0892BED0;
L_0892BED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(34))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 118u, 0x0892D1A8u>(ctx, &aot_mem); return;
      }
      goto L_0892BEE8;
    }
L_0892BEE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    goto L_0892BEF4;
L_0892BEF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0892BF24u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 305u, 0x08A1DF44u>(ctx, &aot_mem) && ctx.pc == 0x0892BF24u) goto L_0892BF24;
    return;
L_0892BF24:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[25] = (0u | 1u);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[31] = (0u | 2u);
      if (branch_taken) {
          goto L_0892BFB8;
      }
      goto L_0892BFB0;
    }
L_0892BFB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 117u, 0x0892D184u>(ctx, &aot_mem); return;
      }
      goto L_0892BFB8;
    }
L_0892BFB8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892BFF8;
      }
      goto L_0892BFD0;
    }
L_0892BFD0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892BFF8;
      }
      goto L_0892BFE4;
    }
L_0892BFE4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 116u, 0x0892D180u>(ctx, &aot_mem); return;
      }
      goto L_0892BFF8;
    }
L_0892BFF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    ctx.pc = 0x0892C000u; return;
}

void recomp_unit_0073(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0073_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_73(Runtime &runtime) {
    runtime.register_generated_unit(73u, 0x08928000u, 16384u, &recomp_unit_0073, &recomp_unit_0073_entry);
    runtime.register_function(0x08928000u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928004u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928024u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928038u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928044u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928074u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928084u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928090u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892809Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928100u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928104u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892812Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928134u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892813Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928144u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892814Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892815Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928174u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928180u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928184u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928208u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928210u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928224u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928240u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928250u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928264u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928278u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892827Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892828Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928300u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892830Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928318u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928324u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928330u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928334u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892833Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892835Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928368u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928370u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892837Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892838Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928394u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928410u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928420u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892842Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892843Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928444u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892844Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928458u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892846Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892847Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892848Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089284A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089284D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089284E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089284E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892850Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928514u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892852Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928580u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089285E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928668u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928688u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928690u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089286F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928730u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892873Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928768u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928770u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892883Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928848u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B34u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C48u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DCCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E48u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F70u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928FC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892903Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929078u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929090u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892910Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929124u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892913Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929154u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892916Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929184u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892919Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929214u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929220u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929224u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892923Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929240u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929254u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929268u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929294u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892929Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089292A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089292B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089292C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929304u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892930Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929348u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089293DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089293E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929504u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892950Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929514u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892951Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929520u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892953Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929544u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892954Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892958Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929618u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929624u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929678u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089296C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089296FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929708u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929718u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929720u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929734u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892975Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929768u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929814u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892981Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892982Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929870u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929878u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929880u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929914u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929924u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929934u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929944u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892994Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929960u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892996Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892997Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892998Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929994u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929998u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089299B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089299FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AD8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CF0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D84u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E48u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FF0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A00Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A01Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A02Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A03Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A07Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A120u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A188u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A1A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A1B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A1D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A1E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A204u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A220u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A24Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A260u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A274u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A284u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A324u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A32Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A338u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A374u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A3DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A3F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A40Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A428u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A448u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A464u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A490u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A50Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A538u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A568u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A570u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A57Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A600u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A618u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A620u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A634u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A64Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A720u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A74Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A754u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A75Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A76Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A77Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A798u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A834u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A83Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A840u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A850u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A880u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A958u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A964u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A978u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A980u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AAA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB34u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB58u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB70u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABD8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ACA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ACB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ACC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD0Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADF0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AEE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF34u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFD8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B03Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B090u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B09Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B108u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B110u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B128u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B154u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B178u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B198u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B1E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B1F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B1F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B200u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B208u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B244u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B268u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B278u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B28Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B29Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B2B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B2E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B2F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B328u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B330u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B338u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B340u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B348u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B36Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B380u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B388u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B404u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B420u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B434u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B43Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B440u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B448u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B44Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B454u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B474u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B488u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B490u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B498u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B49Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B510u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B528u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B55Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B574u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B580u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B58Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B598u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B664u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B66Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B6E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B710u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B75Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B768u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B780u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B788u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B800u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B818u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B824u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B838u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B848u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B920u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B930u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B938u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B940u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B948u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B950u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B964u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B978u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B98Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B9A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B9D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BAA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BAB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BACCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB58u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDCCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BED0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFF8u, &recomp_unit_0073, "recomp_unit_0073");
}
} // namespace psprecomp
