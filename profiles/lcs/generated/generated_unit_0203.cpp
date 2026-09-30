#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0203[4089] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 7, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 18, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 32, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0,
    57, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 108,
    0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0,
    0, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 121, 122, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0,
    0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0, 0, 136, 0, 0,
    0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0,
    146, 0, 147, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0,
    156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 164, 0, 0, 165, 0, 166, 167,
    0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 173, 174, 175, 0, 176, 177, 178, 0, 0, 0, 179, 0, 0,
    0, 180, 181, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195,
    0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 202, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 206, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 208, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0,
    0, 0, 224, 0, 225, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0,
    255, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0,
    0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0,
    0, 0, 0, 0, 0, 0, 0, 297, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0,
    0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0,
    0, 0, 326, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 330, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0,
    345, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0,
    0, 350, 0, 0, 0, 351, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 375, 376, 377, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 0, 389, 0, 390, 391, 0, 0, 0, 392, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 395, 396, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0,
    0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 402, 0, 0, 0, 403, 0, 404, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0,
    0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0,
    0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 418, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 422, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 426,
};
void recomp_unit_0203_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B30000u;
        entry_id = (entry_delta < 16356u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0203[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B30000;
    case 2u: goto L_08B30024;
    case 3u: goto L_08B3002C;
    case 4u: goto L_08B30034;
    case 5u: goto L_08B30040;
    case 6u: goto L_08B3005C;
    case 7u: goto L_08B30060;
    case 8u: goto L_08B30070;
    case 9u: goto L_08B30088;
    case 10u: goto L_08B30098;
    case 11u: goto L_08B300B0;
    case 12u: goto L_08B3011C;
    case 13u: goto L_08B30130;
    case 14u: goto L_08B30180;
    case 15u: goto L_08B301D4;
    case 16u: goto L_08B30218;
    case 17u: goto L_08B30260;
    case 18u: goto L_08B30264;
    case 19u: goto L_08B302B0;
    case 20u: goto L_08B302C0;
    case 21u: goto L_08B302DC;
    case 22u: goto L_08B30300;
    case 23u: goto L_08B30310;
    case 24u: goto L_08B303B8;
    case 25u: goto L_08B303DC;
    case 26u: goto L_08B303F0;
    case 27u: goto L_08B30400;
    case 28u: goto L_08B30440;
    case 29u: goto L_08B30458;
    case 30u: goto L_08B30460;
    case 31u: goto L_08B30470;
    case 32u: goto L_08B30488;
    case 33u: goto L_08B3048C;
    case 34u: goto L_08B304A8;
    case 35u: goto L_08B304C8;
    case 36u: goto L_08B304E8;
    case 37u: goto L_08B30508;
    case 38u: goto L_08B30528;
    case 39u: goto L_08B30548;
    case 40u: goto L_08B30568;
    case 41u: goto L_08B30588;
    case 42u: goto L_08B305A8;
    case 43u: goto L_08B305C8;
    case 44u: goto L_08B305E8;
    case 45u: goto L_08B30608;
    case 46u: goto L_08B30634;
    case 47u: goto L_08B30638;
    case 48u: goto L_08B30650;
    case 49u: goto L_08B30668;
    case 50u: goto L_08B30694;
    case 51u: goto L_08B306A8;
    case 52u: goto L_08B306D8;
    case 53u: goto L_08B306E0;
    case 54u: goto L_08B306E8;
    case 55u: goto L_08B306F0;
    case 56u: goto L_08B306F8;
    case 57u: goto L_08B30700;
    case 58u: goto L_08B30708;
    case 59u: goto L_08B30710;
    case 60u: goto L_08B3073C;
    case 61u: goto L_08B30754;
    case 62u: goto L_08B3075C;
    case 63u: goto L_08B30790;
    case 64u: goto L_08B30854;
    case 65u: goto L_08B30858;
    case 66u: goto L_08B30888;
    case 67u: goto L_08B308B8;
    case 68u: goto L_08B308E8;
    case 69u: goto L_08B3097C;
    case 70u: goto L_08B309E8;
    case 71u: goto L_08B309F8;
    case 72u: goto L_08B30A10;
    case 73u: goto L_08B30AA4;
    case 74u: goto L_08B30AC8;
    case 75u: goto L_08B30AE0;
    case 76u: goto L_08B30AEC;
    case 77u: goto L_08B30B38;
    case 78u: goto L_08B30B40;
    case 79u: goto L_08B30B9C;
    case 80u: goto L_08B30BC0;
    case 81u: goto L_08B30BE4;
    case 82u: goto L_08B30C08;
    case 83u: goto L_08B30C20;
    case 84u: goto L_08B30C2C;
    case 85u: goto L_08B30C60;
    case 86u: goto L_08B30CB8;
    case 87u: goto L_08B30CD0;
    case 88u: goto L_08B30D84;
    case 89u: goto L_08B30DA4;
    case 90u: goto L_08B30DAC;
    case 91u: goto L_08B30DDC;
    case 92u: goto L_08B30DF4;
    case 93u: goto L_08B30E18;
    case 94u: goto L_08B30E98;
    case 95u: goto L_08B30F04;
    case 96u: goto L_08B30F1C;
    case 97u: goto L_08B30F2C;
    case 98u: goto L_08B30F48;
    case 99u: goto L_08B30F90;
    case 100u: goto L_08B31004;
    case 101u: goto L_08B31024;
    case 102u: goto L_08B31028;
    case 103u: goto L_08B31034;
    case 104u: goto L_08B31044;
    case 105u: goto L_08B31050;
    case 106u: goto L_08B31060;
    case 107u: goto L_08B3106C;
    case 108u: goto L_08B3107C;
    case 109u: goto L_08B31088;
    case 110u: goto L_08B31098;
    case 111u: goto L_08B310A4;
    case 112u: goto L_08B310B4;
    case 113u: goto L_08B310C0;
    case 114u: goto L_08B310D0;
    case 115u: goto L_08B310DC;
    case 116u: goto L_08B310EC;
    case 117u: goto L_08B310F8;
    case 118u: goto L_08B31108;
    case 119u: goto L_08B31114;
    case 120u: goto L_08B31124;
    case 121u: goto L_08B3112C;
    case 122u: goto L_08B31130;
    case 123u: goto L_08B31140;
    case 124u: goto L_08B3114C;
    case 125u: goto L_08B3115C;
    case 126u: goto L_08B31168;
    case 127u: goto L_08B31178;
    case 128u: goto L_08B31184;
    case 129u: goto L_08B31194;
    case 130u: goto L_08B311A0;
    case 131u: goto L_08B311B0;
    case 132u: goto L_08B311BC;
    case 133u: goto L_08B311CC;
    case 134u: goto L_08B311D8;
    case 135u: goto L_08B311E8;
    case 136u: goto L_08B311F4;
    case 137u: goto L_08B31204;
    case 138u: goto L_08B31210;
    case 139u: goto L_08B31220;
    case 140u: goto L_08B3122C;
    case 141u: goto L_08B3123C;
    case 142u: goto L_08B31248;
    case 143u: goto L_08B31258;
    case 144u: goto L_08B31264;
    case 145u: goto L_08B31274;
    case 146u: goto L_08B31280;
    case 147u: goto L_08B31288;
    case 148u: goto L_08B31290;
    case 149u: goto L_08B3129C;
    case 150u: goto L_08B312AC;
    case 151u: goto L_08B312B8;
    case 152u: goto L_08B312C8;
    case 153u: goto L_08B312D4;
    case 154u: goto L_08B312E4;
    case 155u: goto L_08B312F0;
    case 156u: goto L_08B31300;
    case 157u: goto L_08B3130C;
    case 158u: goto L_08B3131C;
    case 159u: goto L_08B31328;
    case 160u: goto L_08B31338;
    case 161u: goto L_08B31344;
    case 162u: goto L_08B31354;
    case 163u: goto L_08B31360;
    case 164u: goto L_08B31364;
    case 165u: goto L_08B31370;
    case 166u: goto L_08B31378;
    case 167u: goto L_08B3137C;
    case 168u: goto L_08B3138C;
    case 169u: goto L_08B31398;
    case 170u: goto L_08B313A8;
    case 171u: goto L_08B313B4;
    case 172u: goto L_08B313C4;
    case 173u: goto L_08B313CC;
    case 174u: goto L_08B313D0;
    case 175u: goto L_08B313D4;
    case 176u: goto L_08B313DC;
    case 177u: goto L_08B313E0;
    case 178u: goto L_08B313E4;
    case 179u: goto L_08B313F4;
    case 180u: goto L_08B31404;
    case 181u: goto L_08B31408;
    case 182u: goto L_08B31414;
    case 183u: goto L_08B3141C;
    case 184u: goto L_08B31424;
    case 185u: goto L_08B31434;
    case 186u: goto L_08B31440;
    case 187u: goto L_08B31450;
    case 188u: goto L_08B31478;
    case 189u: goto L_08B3149C;
    case 190u: goto L_08B314A8;
    case 191u: goto L_08B314D4;
    case 192u: goto L_08B3150C;
    case 193u: goto L_08B3151C;
    case 194u: goto L_08B31568;
    case 195u: goto L_08B3157C;
    case 196u: goto L_08B31598;
    case 197u: goto L_08B315CC;
    case 198u: goto L_08B31604;
    case 199u: goto L_08B31610;
    case 200u: goto L_08B31620;
    case 201u: goto L_08B31638;
    case 202u: goto L_08B3163C;
    case 203u: goto L_08B31640;
    case 204u: goto L_08B31668;
    case 205u: goto L_08B31670;
    case 206u: goto L_08B31674;
    case 207u: goto L_08B316A0;
    case 208u: goto L_08B316A4;
    case 209u: goto L_08B316B4;
    case 210u: goto L_08B316BC;
    case 211u: goto L_08B316D4;
    case 212u: goto L_08B31700;
    case 213u: goto L_08B3170C;
    case 214u: goto L_08B31734;
    case 215u: goto L_08B31760;
    case 216u: goto L_08B31788;
    case 217u: goto L_08B317DC;
    case 218u: goto L_08B318C0;
    case 219u: goto L_08B318CC;
    case 220u: goto L_08B318E8;
    case 221u: goto L_08B319B0;
    case 222u: goto L_08B319E8;
    case 223u: goto L_08B319F0;
    case 224u: goto L_08B31A08;
    case 225u: goto L_08B31A10;
    case 226u: goto L_08B31A1C;
    case 227u: goto L_08B31A2C;
    case 228u: goto L_08B31A40;
    case 229u: goto L_08B31A70;
    case 230u: goto L_08B31A88;
    case 231u: goto L_08B31A9C;
    case 232u: goto L_08B31AB0;
    case 233u: goto L_08B31AB8;
    case 234u: goto L_08B31AC4;
    case 235u: goto L_08B31AE8;
    case 236u: goto L_08B31B14;
    case 237u: goto L_08B31B20;
    case 238u: goto L_08B31B30;
    case 239u: goto L_08B31B44;
    case 240u: goto L_08B31B54;
    case 241u: goto L_08B31BA8;
    case 242u: goto L_08B31BAC;
    case 243u: goto L_08B31C18;
    case 244u: goto L_08B31C34;
    case 245u: goto L_08B31C48;
    case 246u: goto L_08B31C50;
    case 247u: goto L_08B31C58;
    case 248u: goto L_08B31C6C;
    case 249u: goto L_08B31C98;
    case 250u: goto L_08B31CF8;
    case 251u: goto L_08B31D40;
    case 252u: goto L_08B31D50;
    case 253u: goto L_08B31D5C;
    case 254u: goto L_08B31D74;
    case 255u: goto L_08B31D80;
    case 256u: goto L_08B31D94;
    case 257u: goto L_08B31DA0;
    case 258u: goto L_08B31DD0;
    case 259u: goto L_08B31DF4;
    case 260u: goto L_08B31E1C;
    case 261u: goto L_08B31E38;
    case 262u: goto L_08B31E40;
    case 263u: goto L_08B31E68;
    case 264u: goto L_08B31E9C;
    case 265u: goto L_08B31EB8;
    case 266u: goto L_08B31F0C;
    case 267u: goto L_08B31F80;
    case 268u: goto L_08B31F88;
    case 269u: goto L_08B3200C;
    case 270u: goto L_08B3208C;
    case 271u: goto L_08B320B0;
    case 272u: goto L_08B320E8;
    case 273u: goto L_08B32128;
    case 274u: goto L_08B32198;
    case 275u: goto L_08B321A4;
    case 276u: goto L_08B321B4;
    case 277u: goto L_08B321D0;
    case 278u: goto L_08B321DC;
    case 279u: goto L_08B321F4;
    case 280u: goto L_08B322B8;
    case 281u: goto L_08B322D0;
    case 282u: goto L_08B322D4;
    case 283u: goto L_08B323A8;
    case 284u: goto L_08B323E4;
    case 285u: goto L_08B324C0;
    case 286u: goto L_08B324D4;
    case 287u: goto L_08B324E4;
    case 288u: goto L_08B32508;
    case 289u: goto L_08B325AC;
    case 290u: goto L_08B325F0;
    case 291u: goto L_08B32674;
    case 292u: goto L_08B32708;
    case 293u: goto L_08B32740;
    case 294u: goto L_08B32770;
    case 295u: goto L_08B32788;
    case 296u: goto L_08B327F8;
    case 297u: goto L_08B3281C;
    case 298u: goto L_08B32820;
    case 299u: goto L_08B328DC;
    case 300u: goto L_08B3291C;
    case 301u: goto L_08B32934;
    case 302u: goto L_08B3293C;
    case 303u: goto L_08B32954;
    case 304u: goto L_08B329B4;
    case 305u: goto L_08B329B8;
    case 306u: goto L_08B329D8;
    case 307u: goto L_08B32A38;
    case 308u: goto L_08B32A48;
    case 309u: goto L_08B32B04;
    case 310u: goto L_08B32B60;
    case 311u: goto L_08B32B70;
    case 312u: goto L_08B32B8C;
    case 313u: goto L_08B32BA4;
    case 314u: goto L_08B32BB0;
    case 315u: goto L_08B32C74;
    case 316u: goto L_08B32D3C;
    case 317u: goto L_08B32D68;
    case 318u: goto L_08B32D8C;
    case 319u: goto L_08B32DAC;
    case 320u: goto L_08B32DBC;
    case 321u: goto L_08B32E34;
    case 322u: goto L_08B32E60;
    case 323u: goto L_08B32EA0;
    case 324u: goto L_08B32EC8;
    case 325u: goto L_08B32EEC;
    case 326u: goto L_08B32F08;
    case 327u: goto L_08B32F14;
    case 328u: goto L_08B32F24;
    case 329u: goto L_08B32F3C;
    case 330u: goto L_08B32F40;
    case 331u: goto L_08B32F4C;
    case 332u: goto L_08B32F58;
    case 333u: goto L_08B32FB8;
    case 334u: goto L_08B32FD8;
    case 335u: goto L_08B33000;
    case 336u: goto L_08B33018;
    case 337u: goto L_08B33030;
    case 338u: goto L_08B330CC;
    case 339u: goto L_08B330D8;
    case 340u: goto L_08B330E8;
    case 341u: goto L_08B33120;
    case 342u: goto L_08B33144;
    case 343u: goto L_08B331E4;
    case 344u: goto L_08B331EC;
    case 345u: goto L_08B33200;
    case 346u: goto L_08B33204;
    case 347u: goto L_08B33210;
    case 348u: goto L_08B332C8;
    case 349u: goto L_08B332F8;
    case 350u: goto L_08B33304;
    case 351u: goto L_08B33314;
    case 352u: goto L_08B33318;
    case 353u: goto L_08B33410;
    case 354u: goto L_08B33418;
    case 355u: goto L_08B33430;
    case 356u: goto L_08B3344C;
    case 357u: goto L_08B33520;
    case 358u: goto L_08B33580;
    case 359u: goto L_08B335AC;
    case 360u: goto L_08B33608;
    case 361u: goto L_08B33624;
    case 362u: goto L_08B33634;
    case 363u: goto L_08B33650;
    case 364u: goto L_08B33668;
    case 365u: goto L_08B33698;
    case 366u: goto L_08B336D8;
    case 367u: goto L_08B33718;
    case 368u: goto L_08B33758;
    case 369u: goto L_08B33798;
    case 370u: goto L_08B337BC;
    case 371u: goto L_08B337C4;
    case 372u: goto L_08B337CC;
    case 373u: goto L_08B33940;
    case 374u: goto L_08B33950;
    case 375u: goto L_08B33964;
    case 376u: goto L_08B33968;
    case 377u: goto L_08B3396C;
    case 378u: goto L_08B33994;
    case 379u: goto L_08B339A4;
    case 380u: goto L_08B339AC;
    case 381u: goto L_08B33A0C;
    case 382u: goto L_08B33AA8;
    case 383u: goto L_08B33B08;
    case 384u: goto L_08B33B50;
    case 385u: goto L_08B33BA8;
    case 386u: goto L_08B33BB4;
    case 387u: goto L_08B33BC0;
    case 388u: goto L_08B33BCC;
    case 389u: goto L_08B33BD8;
    case 390u: goto L_08B33BE0;
    case 391u: goto L_08B33BE4;
    case 392u: goto L_08B33BF4;
    case 393u: goto L_08B33C34;
    case 394u: goto L_08B33C44;
    case 395u: goto L_08B33C50;
    case 396u: goto L_08B33C54;
    case 397u: goto L_08B33C58;
    case 398u: goto L_08B33C74;
    case 399u: goto L_08B33C88;
    case 400u: goto L_08B33CA0;
    case 401u: goto L_08B33CB0;
    case 402u: goto L_08B33CB8;
    case 403u: goto L_08B33CC8;
    case 404u: goto L_08B33CD0;
    case 405u: goto L_08B33CDC;
    case 406u: goto L_08B33CE4;
    case 407u: goto L_08B33D08;
    case 408u: goto L_08B33D30;
    case 409u: goto L_08B33D48;
    case 410u: goto L_08B33D74;
    case 411u: goto L_08B33D90;
    case 412u: goto L_08B33D9C;
    case 413u: goto L_08B33DC4;
    case 414u: goto L_08B33DE4;
    case 415u: goto L_08B33DF8;
    case 416u: goto L_08B33E30;
    case 417u: goto L_08B33E68;
    case 418u: goto L_08B33EA0;
    case 419u: goto L_08B33EA4;
    case 420u: goto L_08B33F60;
    case 421u: goto L_08B33F68;
    case 422u: goto L_08B33F70;
    case 423u: goto L_08B33F9C;
    case 424u: goto L_08B33FD0;
    case 425u: goto L_08B33FD8;
    case 426u: goto L_08B33FE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B30000:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B30024;
L_08B30024:
    // nop
    // nop
    goto L_08B3002C;
L_08B3002C:
    // nop
    // nop
    goto L_08B30034;
L_08B30034:
    // nop
    // nop
    // nop
    goto L_08B30040;
L_08B30040:
    rt.unsupported(0x08B30044u, 0x08804378u, "control flow in delay slot"); return;
L_08B3005C:
    // nop
    goto L_08B30060;
L_08B30060:
    rt.unsupported(0x08B30064u, 0x088040FCu, "control flow in delay slot"); return;
L_08B30070:
    rt.unsupported(0x08B30074u, 0x08804378u, "control flow in delay slot"); return;
L_08B30088:
    rt.unsupported(0x08B3008Cu, 0x0880474Cu, "control flow in delay slot"); return;
L_08B30098:
    rt.unsupported(0x08B3009Cu, 0x088045E4u, "control flow in delay slot"); return;
L_08B300B0:
    rt.unsupported(0x08B300B4u, 0x08804AF0u, "control flow in delay slot"); return;
L_08B3011C:
    rt.unsupported(0x08B30120u, 0x08B0C650u, "control flow in delay slot"); return;
L_08B30130:
    rt.unsupported(0x08B30134u, 0x08804FF4u, "control flow in delay slot"); return;
L_08B30180:
    rt.unsupported(0x08B30184u, 0x08806064u, "control flow in delay slot"); return;
L_08B301D4:
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    // nop
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    goto L_08B30218;
L_08B30218:
    // nop
    ctx.gpr[19] = (13107u << 16u);
    // nop
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    // nop
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    // nop
    // nop
    (void)(ctx.hi);
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B30260;
L_08B30260:
    // nop
    goto L_08B30264;
L_08B30264:
    // nop
    // nop
    rt.unsupported(0x08B30270u, 0x40666666u, "unknown not lowered yet"); return;
    ctx.pc = 0x0201DFD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B302B0:
    // nop
    // nop
    // nop
    // nop
    goto L_08B302C0;
L_08B302C0:
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[23] = (ctx.gpr[17] ^ 32820u);
    ctx.gpr[3] = (55050u << 16u);
    goto L_08B302DC;
L_08B302DC:
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // nop
    rt.memory().aot_store_word_right(ctx.gpr[27] + static_cast<std::uint32_t>(24642), ctx.gpr[5]);
    goto L_08B30300;
L_08B30300:
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    // nop
    goto L_08B30310;
L_08B30310:
    // nop
    rt.unsupported(0x08B30318u, 0x0880AB60u, "control flow in delay slot"); return;
L_08B303B8:
    rt.unsupported(0x08B303B8u, 0x40666666u, "unknown not lowered yet"); return;
L_08B303DC:
    (void)(ctx.gpr[5] << 0u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (0u & 31u)));
    (void)(ctx.gpr[7] << 0u);
    rt.unsupported(0x08B303ECu, 0x00000005u, "special? not lowered yet"); return;
L_08B303F0:
    (void)(ctx.gpr[7] >> 0u);
    (void)(ctx.gpr[4] << 0u);
    rt.unsupported(0x08B303FCu, 0x00050009u, "control flow in delay slot"); return;
L_08B30400:
    (void)(ctx.gpr[9] << 0u);
    (void)(0u << (0u & 31u));
    rt.unsupported(0x08B30408u, 0x00090005u, "special? not lowered yet"); return;
L_08B30440:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[24] = (20972u << 16u);
    ctx.gpr[5] = (58196u << 16u);
    ctx.gpr[24] = (20972u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B30458;
L_08B30458:
    ctx.gpr[5] = (58196u << 16u);
    ctx.gpr[5] = (58196u << 16u);
    goto L_08B30460;
L_08B30460:
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    goto L_08B30470;
L_08B30470:
    (void)(ctx.gpr[1] << 0u);
    rt.unsupported(0x08B30474u, 0x00010005u, "special? not lowered yet"); return;
L_08B30488:
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B3048C;
L_08B3048C:
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B304A8;
L_08B304A8:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B304C8;
L_08B304C8:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B304E8;
L_08B304E8:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    goto L_08B30508;
L_08B30508:
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B30528;
L_08B30528:
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B30548;
L_08B30548:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[25] = (39322u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[25] = (39322u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[25] = (39322u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[25] = (39322u << 16u);
    goto L_08B30568;
L_08B30568:
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B30588;
L_08B30588:
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B305A8;
L_08B305A8:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    goto L_08B305C8;
L_08B305C8:
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B305E8;
L_08B305E8:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B30608;
L_08B30608:
    (void)(ctx.gpr[2] << 0u);
    rt.unsupported(0x08B3060Cu, 0x00010001u, "special? not lowered yet"); return;
L_08B30634:
    rt.unsupported(0x08B30634u, 0x00050001u, "special? not lowered yet"); return;
L_08B30638:
    (void)(0u >> (0u & 31u));
    (void)(ctx.gpr[6] << (0u & 31u));
    (void)(0u >> 0u);
    (void)(ctx.gpr[5] >> (0u & 31u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> (0u & 31u)));
    (void)(ctx.gpr[5] << (0u & 31u));
    goto L_08B30650;
L_08B30650:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B30668;
L_08B30668:
    ctx.gpr[21] = (49807u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    // nop
    // nop
    goto L_08B30694;
L_08B30694:
    // nop
    rt.unsupported(0x08B3069Cu, 0x088248CCu, "control flow in delay slot"); return;
L_08B306A8:
    // nop
    // nop
    // nop
    ctx.pc = 0x0209A350u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B306D8:
    // nop
    // nop
    ctx.pc = 0x020B3050u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B306E0:
    // nop
    // nop
    ctx.pc = 0x020B4E20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B306E8:
    // nop
    // nop
    ctx.pc = 0x020CA4E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B306F0:
    // nop
    // nop
    ctx.pc = 0x020CBE00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B306F8:
    // nop
    // nop
    ctx.pc = 0x020B6990u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B30700:
    // nop
    // nop
    ctx.pc = 0x020BDB30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B30708:
    // nop
    // nop
    ctx.pc = 0x020C8E30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B30710:
    // nop
    rt.unsupported(0x08B30718u, 0x40666666u, "unknown not lowered yet"); return;
    ctx.pc = 0x020B01F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B3073C:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B3074Cu, 0x00000005u, "special? not lowered yet"); return;
L_08B30754:
    // nop
    // nop
    goto L_08B3075C;
L_08B3075C:
    // nop
    ctx.pc = 0x02C33E20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B30790:
    (void)(0u >> 0u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    ctx.pc = 0x02C33F00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B30854:
    rt.unsupported(0x08B30854u, 0x00001E1Eu, "special? not lowered yet"); return;
L_08B30858:
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B30888;
L_08B30888:
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    ctx.gpr[19] = (13107u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B308B8;
L_08B308B8:
    // nop
    (void)(0u << 16u);
    (void)(0u << 16u);
    // nop
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    goto L_08B308E8;
L_08B308E8:
    // nop
    rt.unsupported(0x08B308ECu, 0x42700000u, "unknown not lowered yet"); return;
L_08B3097C:
    rt.unsupported(0x08B3097Cu, 0x42C80000u, "unknown not lowered yet"); return;
L_08B309E8:
    rt.unsupported(0x08B309E8u, 0xC2C80000u, "unknown not lowered yet"); return;
L_08B309F8:
    rt.unsupported(0x08B309F8u, 0xC2200000u, "unknown not lowered yet"); return;
L_08B30A10:
    rt.unsupported(0x08B30A10u, 0x40000000u, "unknown not lowered yet"); return;
L_08B30AA4:
    // nop
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[5] = (7864u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[10] = (15729u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    goto L_08B30AC8;
L_08B30AC8:
    // nop
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[5] = (7864u << 16u);
    goto L_08B30AE0;
L_08B30AE0:
    ctx.gpr[21] = (49807u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B30AEC;
L_08B30AEC:
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    rt.unsupported(0x08B30B10u, 0x40666666u, "unknown not lowered yet"); return;
L_08B30B38:
    // nop
    // nop
    goto L_08B30B40;
L_08B30B40:
    // nop
    rt.unsupported(0x08B30B48u, 0x08AFB0ECu, "control flow in delay slot"); return;
L_08B30B9C:
    (void)(0u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B30BC0;
L_08B30BC0:
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    goto L_08B30BE4;
L_08B30BE4:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    goto L_08B30C08;
L_08B30C08:
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    goto L_08B30C20;
L_08B30C20:
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    goto L_08B30C2C;
L_08B30C2C:
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    rt.unsupported(0x08B30C50u, 0x40600000u, "unknown not lowered yet"); return;
L_08B30C60:
    // nop
    rt.unsupported(0x08B30C68u, 0x08AFB16Cu, "control flow in delay slot"); return;
L_08B30CB8:
    rt.unsupported(0x08B30CBCu, 0x08806364u, "control flow in delay slot"); return;
L_08B30CD0:
    rt.unsupported(0x08B30CD4u, 0x089C5428u, "control flow in delay slot"); return;
L_08B30D84:
    // nop
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    (void)(0u << 16u);
    ctx.gpr[18] = (18725u << 16u);
    // nop
    // nop
    goto L_08B30DA4;
L_08B30DA4:
    // nop
    // nop
    goto L_08B30DAC;
L_08B30DAC:
    // nop
    rt.unsupported(0x08B30DB0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B30DDC:
    // nop
    rt.unsupported(0x08B30DE0u, 0x0000001Du, "special? not lowered yet"); return;
L_08B30DF4:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    // nop
    (void)(ctx.hi);
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B30E18;
L_08B30E18:
    { const bool signed_ok = ctx.execute_signed_add(4u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B30E18u, 0x00002020u); return; } }
    // nop
    rt.unsupported(0x08B30E20u, 0x40666666u, "unknown not lowered yet"); return;
L_08B30E98:
    (void)(0u >> 0u);
    rt.unsupported(0x08B30E9Cu, 0x0000161Eu, "special? not lowered yet"); return;
L_08B30F04:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    rt.unsupported(0x08B30F14u, 0x0000007Fu, "special? not lowered yet"); return;
L_08B30F1C:
    rt.unsupported(0x08B30F20u, 0x08C17F80u, "control flow in delay slot"); return;
L_08B30F2C:
    rt.unsupported(0x08B30F30u, 0x08BB0780u, "control flow in delay slot"); return;
L_08B30F48:
    rt.unsupported(0x08B30F4Cu, 0x08BB0780u, "control flow in delay slot"); return;
L_08B30F90:
    rt.unsupported(0x08B30F94u, 0x08BB0780u, "control flow in delay slot"); return;
L_08B31004:
    // nop
    // nop
    // nop
    rt.unsupported(0x08B31014u, 0x08C07780u, "control flow in delay slot"); return;
L_08B31024:
    rt.unsupported(0x08B31028u, 0x46532F30u, "cop1? not lowered yet"); return;
    ctx.pc = 0x0301DE00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B31028:
    rt.unsupported(0x08B31028u, 0x46532F30u, "cop1? not lowered yet"); return;
L_08B31034:
    ctx.gpr[16] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] & 18003u);
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 10u, 0x08B451BCu>(ctx, &aot_mem); return;
    }
    goto L_08B31044;
L_08B31044:
    rt.unsupported(0x08B31044u, 0x46532F30u, "cop1? not lowered yet"); return;
L_08B31050:
    ctx.gpr[16] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] & 18003u);
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 11u, 0x08B451D8u>(ctx, &aot_mem); return;
    }
    goto L_08B31060;
L_08B31060:
    rt.unsupported(0x08B31060u, 0x46532F30u, "cop1? not lowered yet"); return;
L_08B3106C:
    ctx.gpr[16] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] | 18003u);
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 12u, 0x08B451F4u>(ctx, &aot_mem); return;
    }
    goto L_08B3107C;
L_08B3107C:
    rt.unsupported(0x08B3107Cu, 0x46532F30u, "cop1? not lowered yet"); return;
L_08B31088:
    ctx.gpr[16] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] | 18003u);
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 13u, 0x08B45210u>(ctx, &aot_mem); return;
    }
    goto L_08B31098;
L_08B31098:
    rt.unsupported(0x08B31098u, 0x46532F30u, "cop1? not lowered yet"); return;
L_08B310A4:
    ctx.gpr[16] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] ^ 18003u);
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 14u, 0x08B4522Cu>(ctx, &aot_mem); return;
    }
    goto L_08B310B4;
L_08B310B4:
    rt.unsupported(0x08B310B4u, 0x46532F31u, "cop1? not lowered yet"); return;
L_08B310C0:
    ctx.gpr[17] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 23u, 0x08B48D90u>(ctx, &aot_mem); return;
    }
    goto L_08B310D0;
L_08B310D0:
    rt.unsupported(0x08B310D0u, 0x46532F31u, "cop1? not lowered yet"); return;
L_08B310DC:
    ctx.gpr[17] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 24u, 0x08B48DB4u>(ctx, &aot_mem); return;
    }
    goto L_08B310EC;
L_08B310EC:
    rt.unsupported(0x08B310ECu, 0x46532F31u, "cop1? not lowered yet"); return;
L_08B310F8:
    ctx.gpr[17] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 27u, 0x08B48DD8u>(ctx, &aot_mem); return;
    }
    goto L_08B31108;
L_08B31108:
    rt.unsupported(0x08B31108u, 0x46532F31u, "cop1? not lowered yet"); return;
L_08B31114:
    ctx.gpr[17] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 29u, 0x08B48DFCu>(ctx, &aot_mem); return;
    }
    goto L_08B31124;
L_08B31124:
    rt.unsupported(0x08B31124u, 0x46532F31u, "cop1? not lowered yet"); return;
L_08B3112C:
    ctx.gpr[10] = (ctx.hi);
    goto L_08B31130;
L_08B31130:
    ctx.gpr[17] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 31u, 0x08B48E20u>(ctx, &aot_mem); return;
    }
    goto L_08B31140;
L_08B31140:
    rt.unsupported(0x08B31140u, 0x46532F32u, "cop1? not lowered yet"); return;
L_08B3114C:
    ctx.gpr[18] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 30u, 0x08B48E1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B3115C;
L_08B3115C:
    rt.unsupported(0x08B3115Cu, 0x46532F32u, "cop1? not lowered yet"); return;
L_08B31168:
    ctx.gpr[18] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 32u, 0x08B48E40u>(ctx, &aot_mem); return;
    }
    goto L_08B31178;
L_08B31178:
    rt.unsupported(0x08B31178u, 0x46532F32u, "cop1? not lowered yet"); return;
L_08B31184:
    ctx.gpr[18] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 33u, 0x08B48E64u>(ctx, &aot_mem); return;
    }
    goto L_08B31194;
L_08B31194:
    rt.unsupported(0x08B31194u, 0x46532F32u, "cop1? not lowered yet"); return;
L_08B311A0:
    ctx.gpr[18] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 34u, 0x08B48E88u>(ctx, &aot_mem); return;
    }
    goto L_08B311B0;
L_08B311B0:
    rt.unsupported(0x08B311B0u, 0x46532F32u, "cop1? not lowered yet"); return;
L_08B311BC:
    ctx.gpr[18] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 36u, 0x08B48EACu>(ctx, &aot_mem); return;
    }
    goto L_08B311CC;
L_08B311CC:
    rt.unsupported(0x08B311CCu, 0x46532F33u, "cop1? not lowered yet"); return;
L_08B311D8:
    ctx.gpr[19] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 35u, 0x08B48EA8u>(ctx, &aot_mem); return;
    }
    goto L_08B311E8;
L_08B311E8:
    rt.unsupported(0x08B311E8u, 0x46532F33u, "cop1? not lowered yet"); return;
L_08B311F4:
    ctx.gpr[19] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 38u, 0x08B48ECCu>(ctx, &aot_mem); return;
    }
    goto L_08B31204;
L_08B31204:
    rt.unsupported(0x08B31204u, 0x46532F33u, "cop1? not lowered yet"); return;
L_08B31210:
    ctx.gpr[19] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 40u, 0x08B48EF0u>(ctx, &aot_mem); return;
    }
    goto L_08B31220;
L_08B31220:
    rt.unsupported(0x08B31220u, 0x46532F33u, "cop1? not lowered yet"); return;
L_08B3122C:
    ctx.gpr[19] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 42u, 0x08B48F14u>(ctx, &aot_mem); return;
    }
    goto L_08B3123C;
L_08B3123C:
    rt.unsupported(0x08B3123Cu, 0x46532F33u, "cop1? not lowered yet"); return;
L_08B31248:
    ctx.gpr[19] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 44u, 0x08B48F38u>(ctx, &aot_mem); return;
    }
    goto L_08B31258;
L_08B31258:
    rt.unsupported(0x08B31258u, 0x46532F34u, "cop1? not lowered yet"); return;
L_08B31264:
    ctx.gpr[20] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[2] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 43u, 0x08B48F34u>(ctx, &aot_mem); return;
    }
    goto L_08B31274;
L_08B31274:
    rt.unsupported(0x08B31274u, 0x46532F34u, "cop1? not lowered yet"); return;
L_08B31280:
    ctx.gpr[20] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[2] | 18003u);
    goto L_08B31288;
L_08B31288:
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 45u, 0x08B48F58u>(ctx, &aot_mem); return;
    }
    goto L_08B31290;
L_08B31290:
    rt.unsupported(0x08B31290u, 0x46532F34u, "cop1? not lowered yet"); return;
L_08B3129C:
    ctx.gpr[20] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[2] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 47u, 0x08B48F7Cu>(ctx, &aot_mem); return;
    }
    goto L_08B312AC;
L_08B312AC:
    rt.unsupported(0x08B312ACu, 0x46532F34u, "cop1? not lowered yet"); return;
L_08B312B8:
    ctx.gpr[20] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[2] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 48u, 0x08B48FA0u>(ctx, &aot_mem); return;
    }
    goto L_08B312C8;
L_08B312C8:
    rt.unsupported(0x08B312C8u, 0x46532F34u, "cop1? not lowered yet"); return;
L_08B312D4:
    ctx.gpr[20] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[2] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 50u, 0x08B48FC4u>(ctx, &aot_mem); return;
    }
    goto L_08B312E4;
L_08B312E4:
    rt.unsupported(0x08B312E4u, 0x46532F35u, "cop1? not lowered yet"); return;
L_08B312F0:
    ctx.gpr[21] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 49u, 0x08B48FC0u>(ctx, &aot_mem); return;
    }
    goto L_08B31300;
L_08B31300:
    rt.unsupported(0x08B31300u, 0x46532F35u, "cop1? not lowered yet"); return;
L_08B3130C:
    ctx.gpr[21] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 51u, 0x08B48FE4u>(ctx, &aot_mem); return;
    }
    goto L_08B3131C;
L_08B3131C:
    rt.unsupported(0x08B3131Cu, 0x46532F35u, "cop1? not lowered yet"); return;
L_08B31328:
    ctx.gpr[21] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 52u, 0x08B49008u>(ctx, &aot_mem); return;
    }
    goto L_08B31338;
L_08B31338:
    rt.unsupported(0x08B31338u, 0x46532F35u, "cop1? not lowered yet"); return;
L_08B31344:
    ctx.gpr[21] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 53u, 0x08B4902Cu>(ctx, &aot_mem); return;
    }
    goto L_08B31354;
L_08B31354:
    rt.unsupported(0x08B31354u, 0x46532F35u, "cop1? not lowered yet"); return;
L_08B31360:
    ctx.gpr[21] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    goto L_08B31364;
L_08B31364:
    ctx.gpr[24] = (ctx.gpr[10] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 55u, 0x08B49050u>(ctx, &aot_mem); return;
    }
    goto L_08B31370;
L_08B31370:
    rt.unsupported(0x08B31370u, 0x46532F36u, "cop1? not lowered yet"); return;
L_08B31378:
    ctx.gpr[10] = (ctx.hi);
    goto L_08B3137C;
L_08B3137C:
    ctx.gpr[22] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 54u, 0x08B4904Cu>(ctx, &aot_mem); return;
    }
    goto L_08B3138C;
L_08B3138C:
    rt.unsupported(0x08B3138Cu, 0x46532F36u, "cop1? not lowered yet"); return;
L_08B31398:
    ctx.gpr[22] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 56u, 0x08B49070u>(ctx, &aot_mem); return;
    }
    goto L_08B313A8;
L_08B313A8:
    rt.unsupported(0x08B313A8u, 0x46532F36u, "cop1? not lowered yet"); return;
L_08B313B4:
    ctx.gpr[22] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 57u, 0x08B49094u>(ctx, &aot_mem); return;
    }
    goto L_08B313C4;
L_08B313C4:
    rt.unsupported(0x08B313C4u, 0x46532F36u, "cop1? not lowered yet"); return;
L_08B313CC:
    ctx.gpr[10] = (ctx.hi);
    goto L_08B313D0;
L_08B313D0:
    // nop
    goto L_08B313D4;
L_08B313D4:
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    goto L_08B313DC;
L_08B313DC:
    // nop
    goto L_08B313E0;
L_08B313E0:
    // nop
    goto L_08B313E4;
L_08B313E4:
    // nop
    rt.unsupported(0x08B313E8u, 0x40666666u, "unknown not lowered yet"); return;
L_08B313F4:
    // nop
    // nop
    // nop
    // nop
    goto L_08B31404;
L_08B31404:
    (void)(0u << 16u);
    goto L_08B31408;
L_08B31408:
    ctx.gpr[18] = (18725u << 16u);
    // nop
    // nop
    goto L_08B31414;
L_08B31414:
    // nop
    // nop
    goto L_08B3141C;
L_08B3141C:
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    goto L_08B31424;
L_08B31424:
    // nop
    rt.unsupported(0x08B31428u, 0x40666666u, "unknown not lowered yet"); return;
L_08B31434:
    // nop
    // nop
    // nop
    goto L_08B31440;
L_08B31440:
    // nop
    // nop
    rt.unsupported(0x08B31448u, 0x000003E8u, "special? not lowered yet"); return;
L_08B31450:
    // nop
    rt.unsupported(0x08B31458u, 0x0884E360u, "control flow in delay slot"); return;
L_08B31478:
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    rt.unsupported(0x08B31484u, 0x40200000u, "unknown not lowered yet"); return;
L_08B3149C:
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    (void)(0u << 16u);
    goto L_08B314A8;
L_08B314A8:
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    rt.unsupported(0x08B314B0u, 0x00000028u, "special? not lowered yet"); return;
L_08B314D4:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B314E4u, 0x40340000u, "unknown not lowered yet"); return;
L_08B3150C:
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    // nop
    // nop
    goto L_08B3151C;
L_08B3151C:
    // nop
    rt.unsupported(0x08B31520u, 0x40666666u, "unknown not lowered yet"); return;
L_08B31568:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3157C;
L_08B3157C:
    // nop
    // nop
    // nop
    rt.unsupported(0x08B31588u, 0x40666666u, "unknown not lowered yet"); return;
L_08B31598:
    // nop
    // nop
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B315CC;
L_08B315CC:
    // nop
    rt.unsupported(0x08B315D0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B31604:
    // nop
    // nop
    // nop
    goto L_08B31610;
L_08B31610:
    // nop
    // nop
    // nop
    // nop
    goto L_08B31620;
L_08B31620:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31638;
L_08B31638:
    // nop
    goto L_08B3163C;
L_08B3163C:
    // nop
    goto L_08B31640;
L_08B31640:
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    // nop
    rt.unsupported(0x08B31664u, 0x40490000u, "unknown not lowered yet"); return;
L_08B31668:
    // nop
    rt.unsupported(0x08B3166Cu, 0x40390000u, "unknown not lowered yet"); return;
L_08B31670:
    // nop
    goto L_08B31674;
L_08B31674:
    rt.unsupported(0x08B31678u, 0x08868E88u, "control flow in delay slot"); return;
L_08B316A0:
    ctx.gpr[18] = (18725u << 16u);
    goto L_08B316A4;
L_08B316A4:
    // nop
    // nop
    // nop
    // nop
    goto L_08B316B4;
L_08B316B4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.lo = ctx.gpr[2];
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 106u, 0x08B42BD0u>(ctx, &aot_mem); return;
    }
    goto L_08B316BC;
L_08B316BC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B316D4;
L_08B316D4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31700;
L_08B31700:
    // nop
    // nop
    // nop
    goto L_08B3170C;
L_08B3170C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31734;
L_08B31734:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31760;
L_08B31760:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31788;
L_08B31788:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B317C8u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B317DC:
    ctx.gpr[1] = (ctx.gpr[16] << 16u);
    rt.unsupported(0x08B317E0u, 0x0003003Cu, "special? not lowered yet"); return;
L_08B318C0:
    // nop
    // nop
    // nop
    goto L_08B318CC;
L_08B318CC:
    // nop
    // nop
    // nop
    // nop
    // nop
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[9] >> 9u);
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 108u, 0x08B42DFCu>(ctx, &aot_mem); return;
    }
    goto L_08B318E8;
L_08B318E8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B319B0;
L_08B319B0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B319E8;
L_08B319E8:
    // nop
    // nop
    goto L_08B319F0;
L_08B319F0:
    // nop
    rt.unsupported(0x08B319F4u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B31A08:
    (void)(ctx.gpr[16] << 12u);
    rt.unsupported(0x08B31A0Cu, 0x00020028u, "special? not lowered yet"); return;
L_08B31A10:
    rt.unsupported(0x08B31A10u, 0x45460008u, "cop1? not lowered yet"); return;
L_08B31A1C:
    rt.unsupported(0x08B31A1Cu, 0x003700F0u, "special? not lowered yet"); return;
L_08B31A2C:
    (void)(ctx.gpr[16] << 12u);
    (void)(std::rotr(ctx.gpr[2], static_cast<int>(0u & 31u)));
    rt.unsupported(0x08B31A34u, 0x45460027u, "cop1? not lowered yet"); return;
L_08B31A40:
    rt.unsupported(0x08B31A40u, 0x005500F0u, "special? not lowered yet"); return;
L_08B31A70:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31A88;
L_08B31A88:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31A9C;
L_08B31A9C:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31AB0;
L_08B31AB0:
    // nop
    // nop
    goto L_08B31AB8;
L_08B31AB8:
    // nop
    // nop
    // nop
    goto L_08B31AC4;
L_08B31AC4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31AE8;
L_08B31AE8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B31B10u, 0x00445541u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 113u, 0x08B43028u>(ctx, &aot_mem); return;
    }
    goto L_08B31B14;
L_08B31B14:
    rt.unsupported(0x08B31B14u, 0x4546000Eu, "cop1? not lowered yet"); return;
L_08B31B20:
    rt.unsupported(0x08B31B20u, 0x002800F0u, "special? not lowered yet"); return;
L_08B31B30:
    (void)(ctx.gpr[16] << 16u);
    rt.unsupported(0x08B31B34u, 0x0002003Cu, "special? not lowered yet"); return;
L_08B31B44:
    rt.unsupported(0x08B31B44u, 0x005000F0u, "special? not lowered yet"); return;
L_08B31B54:
    (void)(ctx.gpr[16] << 16u);
    (void)(0u & ctx.gpr[2]);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31BA8;
L_08B31BA8:
    // nop
    goto L_08B31BAC;
L_08B31BAC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31C18;
L_08B31C18:
    // nop
    // nop
    rt.unsupported(0x08B31C20u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B31C34:
    (void)(ctx.gpr[16] << 20u);
    rt.unsupported(0x08B31C38u, 0x0002003Cu, "special? not lowered yet"); return;
L_08B31C48:
    rt.unsupported(0x08B31C48u, 0x005000F0u, "special? not lowered yet"); return;
L_08B31C50:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[8] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 117u, 0x08B4316Cu>(ctx, &aot_mem); return;
    }
    goto L_08B31C58;
L_08B31C58:
    (void)(ctx.gpr[16] << 20u);
    (void)(0u & ctx.gpr[2]);
    rt.unsupported(0x08B31C60u, 0x45460023u, "cop1? not lowered yet"); return;
L_08B31C6C:
    rt.unsupported(0x08B31C6Cu, 0x007800F0u, "special? not lowered yet"); return;
L_08B31C98:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31CF8;
L_08B31CF8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B31D3Cu, 0x004E414Cu, "control flow in delay slot"); return;
L_08B31D40:
    rt.unsupported(0x08B31D40u, 0x45460012u, "cop1? not lowered yet"); return;
L_08B31D50:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[5] >> (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 119u, 0x08B43270u>(ctx, &aot_mem); return;
    }
    goto L_08B31D5C;
L_08B31D5C:
    (void)(ctx.gpr[16] << 24u);
    (void)(ctx.hi);
    rt.unsupported(0x08B31D64u, 0x45460014u, "cop1? not lowered yet"); return;
L_08B31D74:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 0u));
    rt.unsupported(0x08B31D7Cu, 0x00415449u, "control flow in delay slot"); return;
L_08B31D80:
    (void)(ctx.gpr[16] << 24u);
    rt.unsupported(0x08B31D84u, 0x00030078u, "special? not lowered yet"); return;
L_08B31D94:
    rt.unsupported(0x08B31D94u, 0x008C00F0u, "special? not lowered yet"); return;
L_08B31DA0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31DD0;
L_08B31DD0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31DF4;
L_08B31DF4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31E1C;
L_08B31E1C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31E38;
L_08B31E38:
    // nop
    // nop
    goto L_08B31E40;
L_08B31E40:
    // nop
    // nop
    // nop
    rt.unsupported(0x08B31E4Cu, 0x45460000u, "cop1? not lowered yet"); return;
L_08B31E68:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31E9C;
L_08B31E9C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31EB8;
L_08B31EB8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31F0C;
L_08B31F0C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31F80;
L_08B31F80:
    // nop
    // nop
    goto L_08B31F88;
L_08B31F88:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3200C;
L_08B3200C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B32078u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B3208C:
    // nop
    // nop
    rt.unsupported(0x08B32094u, 0x45460003u, "cop1? not lowered yet"); return;
L_08B320B0:
    ctx.gpr[1] = (ctx.gpr[16] << 4u);
    rt.unsupported(0x08B320B4u, 0x000300BEu, "special? not lowered yet"); return;
L_08B320E8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32128;
L_08B32128:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B32194u, 0x0041474Cu, "control flow in delay slot"); return;
L_08B32198:
    rt.unsupported(0x08B32198u, 0x45460001u, "cop1? not lowered yet"); return;
L_08B321A4:
    // nop
    (void)(ctx.gpr[3] << 0u);
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B321B0u, 0x00004F4Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 124u, 0x08B436C8u>(ctx, &aot_mem); return;
    }
    goto L_08B321B4;
L_08B321B4:
    (void)(ctx.gpr[16] << 4u);
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    rt.unsupported(0x08B321BCu, 0x45460002u, "cop1? not lowered yet"); return;
L_08B321D0:
    // nop
    // nop
    // nop
    goto L_08B321DC;
L_08B321DC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B321F4;
L_08B321F4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B322A4u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B322B8:
    // nop
    // nop
    rt.unsupported(0x08B322C0u, 0x45460004u, "cop1? not lowered yet"); return;
L_08B322D0:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    goto L_08B322D4;
L_08B322D4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B323A8;
L_08B323A8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B323E4;
L_08B323E4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B324C0;
L_08B324C0:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B324D0u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B324D4:
    rt.unsupported(0x08B324D4u, 0x45525F53u, "cop1? not lowered yet"); return;
L_08B324E4:
    // nop
    // nop
    rt.unsupported(0x08B324ECu, 0x45460003u, "cop1? not lowered yet"); return;
L_08B32508:
    (void)(ctx.gpr[16] << 4u);
    rt.unsupported(0x08B3250Cu, 0x000300BEu, "special? not lowered yet"); return;
L_08B325AC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B325ECu, 0x0000504Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 131u, 0x08B43B04u>(ctx, &aot_mem); return;
    }
    goto L_08B325F0;
L_08B325F0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32674;
L_08B32674:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B326FCu, 0x45460000u, "cop1? not lowered yet"); return;
L_08B32708:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32740;
L_08B32740:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32770;
L_08B32770:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32788;
L_08B32788:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B327F8;
L_08B327F8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B32818u, 0x0000504Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 133u, 0x08B43D30u>(ctx, &aot_mem); return;
    }
    goto L_08B3281C;
L_08B3281C:
    // nop
    goto L_08B32820;
L_08B32820:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B328DC;
L_08B328DC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3291C;
L_08B3291C:
    // nop
    // nop
    // nop
    rt.unsupported(0x08B32928u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B32934:
    rt.unsupported(0x08B32938u, 0x00494649u, "control flow in delay slot"); return;
L_08B3293C:
    // nop
    // nop
    rt.unsupported(0x08B32944u, 0x45460004u, "cop1? not lowered yet"); return;
L_08B32954:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B329B4;
L_08B329B4:
    // nop
    goto L_08B329B8;
L_08B329B8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B329D8;
L_08B329D8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32A38;
L_08B32A38:
    // nop
    // nop
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B32A44u, 0x0000504Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 135u, 0x08B43F5Cu>(ctx, &aot_mem); return;
    }
    goto L_08B32A48;
L_08B32A48:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32B04;
L_08B32B04:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B32B54u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B32B60:
    // nop
    // nop
    // nop
    // nop
    goto L_08B32B70;
L_08B32B70:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32B8C;
L_08B32B8C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32BA4;
L_08B32BA4:
    // nop
    // nop
    // nop
    goto L_08B32BB0;
L_08B32BB0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B32C70u, 0x0000504Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 2u, 0x08B44188u>(ctx, &aot_mem); return;
    }
    goto L_08B32C74;
L_08B32C74:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32D3C;
L_08B32D3C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32D68;
L_08B32D68:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B32D80u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B32D8C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32DAC;
L_08B32DAC:
    // nop
    // nop
    // nop
    // nop
    goto L_08B32DBC;
L_08B32DBC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32E34;
L_08B32E34:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32E60;
L_08B32E60:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B32E9Cu, 0x0000504Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 3u, 0x08B443B4u>(ctx, &aot_mem); return;
    }
    goto L_08B32EA0;
L_08B32EA0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32EC8;
L_08B32EC8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32EEC;
L_08B32EEC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32F08;
L_08B32F08:
    // nop
    // nop
    // nop
    goto L_08B32F14;
L_08B32F14:
    // nop
    // nop
    // nop
    // nop
    goto L_08B32F24;
L_08B32F24:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32F3C;
L_08B32F3C:
    // nop
    goto L_08B32F40;
L_08B32F40:
    // nop
    // nop
    // nop
    goto L_08B32F4C;
L_08B32F4C:
    // nop
    // nop
    // nop
    goto L_08B32F58;
L_08B32F58:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B32FACu, 0x45460000u, "cop1? not lowered yet"); return;
L_08B32FB8:
    rt.unsupported(0x08B32FB8u, 0x4C525653u, "unknown not lowered yet"); return;
L_08B32FD8:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33000;
L_08B33000:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33018;
L_08B33018:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33030;
L_08B33030:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B330C8u, 0x0000504Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 4u, 0x08B445E0u>(ctx, &aot_mem); return;
    }
    goto L_08B330CC;
L_08B330CC:
    rt.unsupported(0x08B330CCu, 0x454E0001u, "cop1? not lowered yet"); return;
L_08B330D8:
    // nop
    (void)(ctx.gpr[4] << 0u);
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 5u, 0x08B445FCu>(ctx, &aot_mem); return;
    }
    goto L_08B330E8;
L_08B330E8:
    ctx.gpr[1] = (ctx.gpr[16] << 24u);
    rt.unsupported(0x08B330ECu, 0x000300B4u, "special? not lowered yet"); return;
L_08B33120:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33144;
L_08B33144:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B331D8u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B331E4:
    if (ctx.gpr[18] != ctx.gpr[19]) {
    ctx.gpr[10] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 29u, 0x08B46F20u>(ctx, &aot_mem); return;
    }
    goto L_08B331EC;
L_08B331EC:
    // nop
    // nop
    rt.unsupported(0x08B331F4u, 0x45460004u, "cop1? not lowered yet"); return;
L_08B33200:
    rt.unsupported(0x08B33200u, 0x00B400F0u, "special? not lowered yet"); return;
L_08B33204:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // nop
    // nop
    goto L_08B33210;
L_08B33210:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B332C8;
L_08B332C8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B332F4u, 0x0000504Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 6u, 0x08B4480Cu>(ctx, &aot_mem); return;
    }
    goto L_08B332F8;
L_08B332F8:
    rt.unsupported(0x08B332F8u, 0x4C430001u, "unknown not lowered yet"); return;
L_08B33304:
    // nop
    (void)(ctx.gpr[4] << 0u);
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 7u, 0x08B44828u>(ctx, &aot_mem); return;
    }
    goto L_08B33314;
L_08B33314:
    ctx.gpr[1] = (ctx.gpr[16] << 24u);
    goto L_08B33318;
L_08B33318:
    rt.unsupported(0x08B33318u, 0x000300B4u, "special? not lowered yet"); return;
L_08B33410:
    if (ctx.gpr[2] != ctx.gpr[4]) {
    rt.unsupported(0x08B33414u, 0x004D4145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 127u, 0x08B4391Cu>(ctx, &aot_mem); return;
    }
    goto L_08B33418;
L_08B33418:
    // nop
    // nop
    rt.unsupported(0x08B33420u, 0x45460004u, "cop1? not lowered yet"); return;
L_08B33430:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3344C;
L_08B3344C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33520;
L_08B33520:
    rt.unsupported(0x08B33524u, 0x0886A544u, "control flow in delay slot"); return;
L_08B33580:
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    ctx.gpr[18] = (18725u << 16u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B335A8u, 0x00005248u, "control flow in delay slot"); return;
L_08B335AC:
    // nop
    rt.unsupported(0x08B335B0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B33608:
    rt.unsupported(0x08B3360Cu, 0x088729BCu, "control flow in delay slot"); return;
L_08B33624:
    rt.unsupported(0x08B33628u, 0x08872DC0u, "control flow in delay slot"); return;
L_08B33634:
    // nop
    rt.unsupported(0x08B3363Cu, 0x08AFA3F4u, "control flow in delay slot"); return;
L_08B33650:
    // nop
    // nop
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    // nop
    goto L_08B33668;
L_08B33668:
    (void)(ctx.hi);
    (void)(ctx.hi);
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[1] = (18350u << 16u);
    rt.unsupported(0x08B33688u, 0x457A0000u, "cop1? not lowered yet"); return;
L_08B33698:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    // nop
    // nop
    // nop
    goto L_08B336D8;
L_08B336D8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33718;
L_08B33718:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33758;
L_08B33758:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33798;
L_08B33798:
    // nop
    rt.unsupported(0x08B337A0u, 0x08873E10u, "control flow in delay slot"); return;
L_08B337BC:
    // nop
    // nop
    goto L_08B337C4;
L_08B337C4:
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    goto L_08B337CC;
L_08B337CC:
    rt.unsupported(0x08B337D0u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02C3CA80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33940:
    rt.unsupported(0x08B33944u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02C3D110u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33950:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // nop
    (void)(0u << (0u & 31u));
    ctx.pc = 0x02C3D190u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33964:
    rt.unsupported(0x08B33968u, 0x00000005u, "special? not lowered yet"); return;
    ctx.pc = 0x02C3D1D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33968:
    rt.unsupported(0x08B33968u, 0x00000005u, "special? not lowered yet"); return;
L_08B3396C:
    // nop
    (void)(0u >> (0u & 31u));
    ctx.pc = 0x02C3D210u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33994:
    // nop
    ctx.pc = 0x02C3CF50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B339A4:
    // nop
    // nop
    goto L_08B339AC;
L_08B339AC:
    rt.unsupported(0x08B339B0u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02C3D2E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33A0C:
    rt.unsupported(0x08B33A10u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02C3D480u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33AA8:
    rt.unsupported(0x08B33AACu, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02C3D6C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33B08:
    (void)(0u >> 0u);
    ctx.pc = 0x02C3D800u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33B50:
    rt.unsupported(0x08B33B54u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02C3D6C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33BA8:
    (void)(0u >> 0u);
    rt.unsupported(0x08B33BB0u, 0x08B0F3E4u, "control flow in delay slot"); return;
L_08B33BB4:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    rt.unsupported(0x08B33BBCu, 0x08B0F3F4u, "control flow in delay slot"); return;
L_08B33BC0:
    // nop
    rt.unsupported(0x08B33BC8u, 0x08B0F400u, "control flow in delay slot"); return;
L_08B33BCC:
    rt.unsupported(0x08B33BCCu, 0x00000001u, "special? not lowered yet"); return;
L_08B33BD8:
    (void)(0u << (0u & 31u));
    rt.unsupported(0x08B33BE0u, 0x08B0F414u, "control flow in delay slot"); return;
L_08B33BE0:
    // nop
    ctx.pc = 0x02C3D050u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33BE4:
    // nop
    rt.unsupported(0x08B33BE8u, 0x00000601u, "special? not lowered yet"); return;
L_08B33BF4:
    rt.unsupported(0x08B33BF4u, 0x00000601u, "special? not lowered yet"); return;
L_08B33C34:
    (void)(0u << (0u & 31u));
    (void)(0u >> (0u & 31u));
    rt.unsupported(0x08B33C3Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B33C44:
    // nop
    // nop
    // nop
    goto L_08B33C50;
L_08B33C50:
    // nop
    goto L_08B33C54;
L_08B33C54:
    rt.unsupported(0x08B33C58u, 0x08B33940u, "control flow in delay slot"); return;
L_08B33C58:
    rt.unsupported(0x08B33C5Cu, 0x08B339ACu, "control flow in delay slot"); return;
L_08B33C74:
    // vflush: architectural no-op that retains VFPU prefixes
    rt.unsupported(0x08B33C78u, 0x00000005u, "special? not lowered yet"); return;
L_08B33C88:
    // nop
    rt.unsupported(0x08B33C90u, 0x08AFDE28u, "control flow in delay slot"); return;
L_08B33CA0:
    // nop
    // nop
    // nop
    // nop
    goto L_08B33CB0;
L_08B33CB0:
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    goto L_08B33CB8;
L_08B33CB8:
    // nop
    // nop
    rt.unsupported(0x08B33CC0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B33CC8:
    // nop
    // nop
    goto L_08B33CD0;
L_08B33CD0:
    // nop
    // nop
    // nop
    goto L_08B33CDC;
L_08B33CDC:
    // nop
    rt.unsupported(0x08B33CE4u, 0x088788A4u, "control flow in delay slot"); return;
L_08B33CE4:
    rt.unsupported(0x08B33CE8u, 0x40666666u, "unknown not lowered yet"); return;
    ctx.pc = 0x021E2290u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33D08:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    // nop
    rt.unsupported(0x08B33D10u, 0x40666666u, "unknown not lowered yet"); return;
L_08B33D30:
    rt.unsupported(0x08B33D30u, 0x00000015u, "special? not lowered yet"); return;
L_08B33D48:
    rt.unsupported(0x08B33D48u, 0x40666666u, "unknown not lowered yet"); return;
L_08B33D74:
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    // nop
    jump_target = 0u;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B33D90:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    (void)(ctx.gpr[9] << (ctx.gpr[2] & 31u));
    (void)(ctx.gpr[1] << 0u);
    goto L_08B33D9C;
L_08B33D9C:
    if (0u == 0u) (void)(0u);
    (void)(ctx.gpr[22] >> 1u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[1]) >> 0u));
    rt.unsupported(0x08B33DA8u, 0x00030077u, "special? not lowered yet"); return;
L_08B33DC4:
    // nop
    ctx.gpr[19] = (ctx.gpr[25] & 13107u);
    ctx.gpr[19] = (13107u << 16u);
    rt.unsupported(0x08B33DD0u, 0x00000BB8u, "special? not lowered yet"); return;
L_08B33DE4:
    // nop
    (void)(0u & 0u);
    // nop
    rt.unsupported(0x08B33DF0u, 0x00000005u, "special? not lowered yet"); return;
L_08B33DF8:
    jump_target = 0u;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B33E30:
    { const bool signed_ok = ctx.execute_signed_add(1u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B33E30u, 0x00000FA0u); return; } }
    // nop
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    // nop
    rt.unsupported(0x08B33E40u, 0x0000044Cu, "syscall not lowered yet"); return;
L_08B33E68:
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    ctx.gpr[5] = (7864u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    rt.unsupported(0x08B33E9Cu, 0x40000000u, "unknown not lowered yet"); return;
L_08B33EA0:
    // nop
    goto L_08B33EA4;
L_08B33EA4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
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
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    rt.memory().aot_store_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(4719), ctx.gpr[3]);
    rt.unsupported(0x08B33F14u, 0x42C80000u, "unknown not lowered yet"); return;
L_08B33F60:
    // nop
    rt.unsupported(0x08B33F64u, 0x400C0000u, "unknown not lowered yet"); return;
L_08B33F68:
    // nop
    (void)(0u << 16u);
    goto L_08B33F70;
L_08B33F70:
    ctx.gpr[25] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(-26214), ctx.gpr[25]));
    ctx.gpr[9] = (39321u << 16u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[29] = (32191u << 16u);
    rt.unsupported(0x08B33F80u, 0x47AE147Bu, "cop1? not lowered yet"); return;
L_08B33F9C:
    // nop
    rt.unsupported(0x08B33FA4u, 0x08806498u, "control flow in delay slot"); return;
L_08B33FD0:
    // nop
    // nop
    ctx.pc = 0x022A8130u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33FD8:
    // nop
    // nop
    ctx.pc = 0x022A8720u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33FE0:
    // nop
    rt.unsupported(0x08B33FE8u, 0x40666666u, "unknown not lowered yet"); return;
    ctx.pc = 0x022A9AA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
}

void recomp_unit_0203(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0203_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_203(Runtime &runtime) {
    runtime.register_generated_unit(203u, 0x08B30000u, 16384u, &recomp_unit_0203, &recomp_unit_0203_entry);
    runtime.register_function(0x08B30000u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30024u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3002Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30034u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30040u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3005Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30060u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30070u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30088u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30098u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B300B0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3011Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30130u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30180u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B301D4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30218u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30260u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30264u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B302B0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B302C0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B302DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30300u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30310u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B303B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B303DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B303F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30400u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30440u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30458u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30460u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30470u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30488u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3048Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B304A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B304C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B304E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30508u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30528u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30548u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30568u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30588u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B305A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B305C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B305E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30608u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30634u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30638u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30650u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30668u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30694u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B306A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B306D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B306E0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B306E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B306F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B306F8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30700u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30708u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30710u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3073Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30754u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3075Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30790u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30854u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30858u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30888u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B308B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B308E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3097Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B309E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B309F8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30A10u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30AA4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30AC8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30AE0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30AECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30B38u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30B40u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30B9Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30BC0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30BE4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30C08u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30C20u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30C2Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30C60u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30CB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30CD0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30D84u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30DA4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30DACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30DDCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30DF4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30E18u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30E98u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F04u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F1Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F2Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F48u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F90u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31004u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31024u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31028u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31034u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31044u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31050u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31060u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3106Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3107Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31088u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31098u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310B4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310C0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310D0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310ECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310F8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31108u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31114u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31124u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3112Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31130u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31140u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3114Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3115Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31168u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31178u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31184u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31194u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B311A0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B311B0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B311BCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B311CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B311D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B311E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B311F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31204u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31210u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31220u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3122Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3123Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31248u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31258u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31264u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31274u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31280u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31288u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31290u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3129Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B312ACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B312B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B312C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B312D4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B312E4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B312F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31300u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3130Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3131Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31328u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31338u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31344u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31354u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31360u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31364u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31370u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31378u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3137Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3138Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31398u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B313A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B313B4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B313C4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B313CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B313D0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B313D4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B313DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B313E0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B313E4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B313F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31404u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31408u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31414u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3141Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31424u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31434u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31440u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31450u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31478u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3149Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B314A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B314D4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3150Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3151Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31568u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3157Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31598u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B315CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31604u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31610u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31620u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31638u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3163Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31640u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31668u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31670u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31674u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B316A0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B316A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B316B4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B316BCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B316D4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31700u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3170Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31734u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31760u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31788u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B317DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B318C0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B318CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B318E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B319B0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B319E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B319F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A08u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A10u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A1Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A2Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A40u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A70u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A88u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A9Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31AB0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31AB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31AC4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31AE8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31B14u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31B20u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31B30u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31B44u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31B54u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31BA8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31BACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C18u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C34u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C48u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C50u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C58u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C6Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C98u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31CF8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D40u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D50u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D5Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D74u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D80u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D94u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31DA0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31DD0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31DF4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E1Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E38u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E40u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E68u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E9Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31EB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31F0Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31F80u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31F88u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3200Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3208Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B320B0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B320E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32128u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32198u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B321A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B321B4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B321D0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B321DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B321F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B322B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B322D0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B322D4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B323A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B323E4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B324C0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B324D4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B324E4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32508u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B325ACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B325F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32674u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32708u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32740u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32770u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32788u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B327F8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3281Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32820u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B328DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3291Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32934u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3293Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32954u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B329B4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B329B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B329D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32A38u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32A48u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32B04u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32B60u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32B70u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32B8Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32BA4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32BB0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32C74u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32D3Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32D68u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32D8Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32DACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32DBCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32E34u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32E60u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32EA0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32EC8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32EECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F08u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F14u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F24u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F3Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F40u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F4Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F58u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32FB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32FD8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33000u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33018u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33030u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B330CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B330D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B330E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33120u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33144u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B331E4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B331ECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33200u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33204u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33210u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B332C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B332F8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33304u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33314u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33318u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33410u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33418u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33430u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3344Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33520u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33580u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B335ACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33608u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33624u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33634u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33650u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33668u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33698u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B336D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33718u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33758u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33798u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B337BCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B337C4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B337CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33940u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33950u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33964u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33968u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3396Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33994u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B339A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B339ACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33A0Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33AA8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33B08u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33B50u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33BA8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33BB4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33BC0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33BCCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33BD8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33BE0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33BE4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33BF4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C34u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C44u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C50u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C54u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C58u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C74u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C88u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CA0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CB0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CC8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CD0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CDCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CE4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33D08u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33D30u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33D48u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33D74u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33D90u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33D9Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33DC4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33DE4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33DF8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33E30u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33E68u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33EA0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33EA4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F60u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F68u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F70u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F9Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33FD0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33FD8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33FE0u, &recomp_unit_0203, "recomp_unit_0203");
}
} // namespace psprecomp
