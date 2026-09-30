#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0015[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 27, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 49, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 57, 0,
    58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 69, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 76, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0,
    85, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 106, 107, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115,
    0, 0, 0, 116, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123,
    0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0,
    0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 141, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 155, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0,
    0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0,
    169, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0,
    188, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 198, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 204, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207,
    0, 0, 0, 208, 0, 209, 0, 210, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227,
    0, 228, 0, 229, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 238, 0, 239, 240,
    0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 0, 245, 0, 246, 0, 247, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0,
    0, 0, 0, 253, 0, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 261, 0, 262, 0,
    0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 274, 0,
    275, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 286, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0, 0, 296, 0, 0, 0, 0, 297, 0, 298, 0, 299, 0, 300, 0, 301,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 303, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 311, 312, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0,
    0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0,
    0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 333, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336,
    0, 337, 0, 338, 0, 339, 0, 340, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0,
    0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0,
    0, 0, 350, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0,
    0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363,
    0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0,
    0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    381, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 384, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0,
    0, 0, 388, 0, 389, 0, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 397, 0, 0, 0,
    0, 0, 0, 398, 0, 399, 0, 0, 400, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 409, 0, 410, 0, 0, 411, 0,
    412, 0, 0, 413, 0, 414, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0,
    425, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 429, 0, 430, 0, 0, 0, 0,
    431, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441,
    0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0,
    455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0,
    468, 469, 0, 470, 0, 0, 0, 471, 0, 472, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0, 478, 0, 0,
    479, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 483, 0, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 489, 0, 0, 490, 0, 491,
    0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 497, 0, 498, 0, 499, 500, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 505,
    0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 508, 0, 0, 509, 0, 510, 0, 0, 0, 511, 0, 512, 0, 513, 514, 0, 0, 0, 0, 0, 515, 0,
    516, 0, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522, 0, 0, 0, 523, 0, 524, 0, 525, 0, 526, 0, 527, 0, 0, 0, 0, 528, 0,
    529, 0, 530, 0, 531, 532, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0,
    0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 539, 0, 0, 540, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 545, 0, 0, 0, 546, 0, 547, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0,
    551, 0, 552, 0, 0, 0, 553, 0, 554, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 559,
    0, 560, 0, 0, 561, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 565, 0,
    0, 566, 0, 0, 0, 0, 567, 0, 0, 568, 0, 569, 0, 0, 570, 0, 0, 0, 571, 0, 572, 0, 573, 0, 574, 0, 0, 575, 0, 0, 0, 576,
    0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0,
    0, 0, 580, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0,
    0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0,
    0, 0, 590, 0, 0, 0, 591, 0, 592, 0, 593, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 597,
    0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 609,
    0, 610, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 613, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0,
    0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 623, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 625, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0,
    634, 0, 635, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0, 0, 0,
    0, 641, 0, 642, 0, 643, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 648, 0, 649, 0, 0,
    650, 0, 651, 0, 652, 0, 653, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656,
    0, 0, 0, 657, 0, 0, 658, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 663,
};
void recomp_unit_0015_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08840000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0015[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08840000;
    case 2u: goto L_08840020;
    case 3u: goto L_0884003C;
    case 4u: goto L_08840050;
    case 5u: goto L_08840078;
    case 6u: goto L_08840090;
    case 7u: goto L_088400A8;
    case 8u: goto L_08840110;
    case 9u: goto L_08840130;
    case 10u: goto L_088401C4;
    case 11u: goto L_088401D4;
    case 12u: goto L_088401E0;
    case 13u: goto L_088401E8;
    case 14u: goto L_08840214;
    case 15u: goto L_08840224;
    case 16u: goto L_0884022C;
    case 17u: goto L_08840234;
    case 18u: goto L_0884023C;
    case 19u: goto L_088402DC;
    case 20u: goto L_088402F8;
    case 21u: goto L_0884030C;
    case 22u: goto L_08840334;
    case 23u: goto L_0884034C;
    case 24u: goto L_08840364;
    case 25u: goto L_088403CC;
    case 26u: goto L_088403E4;
    case 27u: goto L_088403EC;
    case 28u: goto L_088403F0;
    case 29u: goto L_08840418;
    case 30u: goto L_08840428;
    case 31u: goto L_08840438;
    case 32u: goto L_08840444;
    case 33u: goto L_0884044C;
    case 34u: goto L_08840458;
    case 35u: goto L_08840460;
    case 36u: goto L_0884048C;
    case 37u: goto L_0884049C;
    case 38u: goto L_088404A4;
    case 39u: goto L_088404AC;
    case 40u: goto L_088404B4;
    case 41u: goto L_08840554;
    case 42u: goto L_08840570;
    case 43u: goto L_08840584;
    case 44u: goto L_088405AC;
    case 45u: goto L_088405C4;
    case 46u: goto L_088405DC;
    case 47u: goto L_08840644;
    case 48u: goto L_0884065C;
    case 49u: goto L_08840664;
    case 50u: goto L_08840668;
    case 51u: goto L_08840690;
    case 52u: goto L_088406A0;
    case 53u: goto L_088406AC;
    case 54u: goto L_088406B4;
    case 55u: goto L_088406E0;
    case 56u: goto L_088406F0;
    case 57u: goto L_088406F8;
    case 58u: goto L_08840700;
    case 59u: goto L_08840708;
    case 60u: goto L_088407F8;
    case 61u: goto L_0884080C;
    case 62u: goto L_08840824;
    case 63u: goto L_08840850;
    case 64u: goto L_08840884;
    case 65u: goto L_088408A8;
    case 66u: goto L_088408C0;
    case 67u: goto L_08840928;
    case 68u: goto L_08840944;
    case 69u: goto L_0884094C;
    case 70u: goto L_08840950;
    case 71u: goto L_08840978;
    case 72u: goto L_0884098C;
    case 73u: goto L_088409D0;
    case 74u: goto L_088409E0;
    case 75u: goto L_088409EC;
    case 76u: goto L_088409F4;
    case 77u: goto L_08840A20;
    case 78u: goto L_08840A30;
    case 79u: goto L_08840A38;
    case 80u: goto L_08840A40;
    case 81u: goto L_08840A48;
    case 82u: goto L_08840AE4;
    case 83u: goto L_08840AF0;
    case 84u: goto L_08840AF8;
    case 85u: goto L_08840B00;
    case 86u: goto L_08840B08;
    case 87u: goto L_08840B20;
    case 88u: goto L_08840B3C;
    case 89u: goto L_08840B54;
    case 90u: goto L_08840B70;
    case 91u: goto L_08840B88;
    case 92u: goto L_08840BA4;
    case 93u: goto L_08840BC0;
    case 94u: goto L_08840BE4;
    case 95u: goto L_08840BF4;
    case 96u: goto L_08840C0C;
    case 97u: goto L_08840C24;
    case 98u: goto L_08840C54;
    case 99u: goto L_08840C70;
    case 100u: goto L_08840C84;
    case 101u: goto L_08840CAC;
    case 102u: goto L_08840CC4;
    case 103u: goto L_08840CDC;
    case 104u: goto L_08840D44;
    case 105u: goto L_08840D5C;
    case 106u: goto L_08840D64;
    case 107u: goto L_08840D68;
    case 108u: goto L_08840D90;
    case 109u: goto L_08840DA4;
    case 110u: goto L_08840DB8;
    case 111u: goto L_08840E2C;
    case 112u: goto L_08840E3C;
    case 113u: goto L_08840E48;
    case 114u: goto L_08840E50;
    case 115u: goto L_08840E7C;
    case 116u: goto L_08840E8C;
    case 117u: goto L_08840E94;
    case 118u: goto L_08840E9C;
    case 119u: goto L_08840EA4;
    case 120u: goto L_08840F3C;
    case 121u: goto L_08840F48;
    case 122u: goto L_08840F60;
    case 123u: goto L_08840F7C;
    case 124u: goto L_08840F84;
    case 125u: goto L_08840F8C;
    case 126u: goto L_08840FA8;
    case 127u: goto L_08840FCC;
    case 128u: goto L_08840FDC;
    case 129u: goto L_08840FF8;
    case 130u: goto L_0884101C;
    case 131u: goto L_08841028;
    case 132u: goto L_08841058;
    case 133u: goto L_08841074;
    case 134u: goto L_08841088;
    case 135u: goto L_088410B0;
    case 136u: goto L_088410C8;
    case 137u: goto L_088410E0;
    case 138u: goto L_08841148;
    case 139u: goto L_08841160;
    case 140u: goto L_08841168;
    case 141u: goto L_0884116C;
    case 142u: goto L_08841194;
    case 143u: goto L_088411A4;
    case 144u: goto L_088411B4;
    case 145u: goto L_088411C0;
    case 146u: goto L_088411CC;
    case 147u: goto L_088411D4;
    case 148u: goto L_088411DC;
    case 149u: goto L_088411E8;
    case 150u: goto L_088411F0;
    case 151u: goto L_08841228;
    case 152u: goto L_088412BC;
    case 153u: goto L_0884130C;
    case 154u: goto L_08841320;
    case 155u: goto L_08841330;
    case 156u: goto L_08841334;
    case 157u: goto L_08841354;
    case 158u: goto L_08841360;
    case 159u: goto L_08841370;
    case 160u: goto L_088413A0;
    case 161u: goto L_088413E0;
    case 162u: goto L_088413E8;
    case 163u: goto L_088413F0;
    case 164u: goto L_088413F8;
    case 165u: goto L_0884140C;
    case 166u: goto L_08841444;
    case 167u: goto L_08841468;
    case 168u: goto L_08841478;
    case 169u: goto L_08841480;
    case 170u: goto L_08841498;
    case 171u: goto L_088414A4;
    case 172u: goto L_088414AC;
    case 173u: goto L_088414C4;
    case 174u: goto L_088414FC;
    case 175u: goto L_0884153C;
    case 176u: goto L_08841554;
    case 177u: goto L_0884158C;
    case 178u: goto L_088415CC;
    case 179u: goto L_08841614;
    case 180u: goto L_088416A8;
    case 181u: goto L_088416D0;
    case 182u: goto L_088416E4;
    case 183u: goto L_0884177C;
    case 184u: goto L_088417A8;
    case 185u: goto L_088417C4;
    case 186u: goto L_088417EC;
    case 187u: goto L_088417F8;
    case 188u: goto L_08841800;
    case 189u: goto L_08841814;
    case 190u: goto L_08841820;
    case 191u: goto L_08841830;
    case 192u: goto L_08841838;
    case 193u: goto L_08841840;
    case 194u: goto L_0884184C;
    case 195u: goto L_088418A0;
    case 196u: goto L_088418AC;
    case 197u: goto L_088418B8;
    case 198u: goto L_088418C0;
    case 199u: goto L_088418C4;
    case 200u: goto L_088418E4;
    case 201u: goto L_0884192C;
    case 202u: goto L_0884193C;
    case 203u: goto L_08841944;
    case 204u: goto L_0884194C;
    case 205u: goto L_08841950;
    case 206u: goto L_08841960;
    case 207u: goto L_0884197C;
    case 208u: goto L_0884198C;
    case 209u: goto L_08841994;
    case 210u: goto L_0884199C;
    case 211u: goto L_088419A0;
    case 212u: goto L_088419C0;
    case 213u: goto L_088419D4;
    case 214u: goto L_08841A00;
    case 215u: goto L_08841A34;
    case 216u: goto L_08841A84;
    case 217u: goto L_08841AC4;
    case 218u: goto L_08841AE4;
    case 219u: goto L_08841AEC;
    case 220u: goto L_08841AF4;
    case 221u: goto L_08841B00;
    case 222u: goto L_08841B1C;
    case 223u: goto L_08841B2C;
    case 224u: goto L_08841B30;
    case 225u: goto L_08841B48;
    case 226u: goto L_08841B70;
    case 227u: goto L_08841B7C;
    case 228u: goto L_08841B84;
    case 229u: goto L_08841B8C;
    case 230u: goto L_08841B98;
    case 231u: goto L_08841BA8;
    case 232u: goto L_08841BB0;
    case 233u: goto L_08841BB8;
    case 234u: goto L_08841BC0;
    case 235u: goto L_08841BCC;
    case 236u: goto L_08841BDC;
    case 237u: goto L_08841BE8;
    case 238u: goto L_08841BF0;
    case 239u: goto L_08841BF8;
    case 240u: goto L_08841BFC;
    case 241u: goto L_08841C04;
    case 242u: goto L_08841C20;
    case 243u: goto L_08841C34;
    case 244u: goto L_08841C88;
    case 245u: goto L_08841C94;
    case 246u: goto L_08841C9C;
    case 247u: goto L_08841CA4;
    case 248u: goto L_08841CAC;
    case 249u: goto L_08841CB8;
    case 250u: goto L_08841CC8;
    case 251u: goto L_08841CDC;
    case 252u: goto L_08841CEC;
    case 253u: goto L_08841D0C;
    case 254u: goto L_08841D1C;
    case 255u: goto L_08841D24;
    case 256u: goto L_08841D34;
    case 257u: goto L_08841D3C;
    case 258u: goto L_08841D44;
    case 259u: goto L_08841D60;
    case 260u: goto L_08841D68;
    case 261u: goto L_08841D70;
    case 262u: goto L_08841D78;
    case 263u: goto L_08841D84;
    case 264u: goto L_08841D9C;
    case 265u: goto L_08841DA8;
    case 266u: goto L_08841DD0;
    case 267u: goto L_08841DE8;
    case 268u: goto L_08841DF4;
    case 269u: goto L_08841E0C;
    case 270u: goto L_08841E24;
    case 271u: goto L_08841E30;
    case 272u: goto L_08841E50;
    case 273u: goto L_08841E74;
    case 274u: goto L_08841E78;
    case 275u: goto L_08841E80;
    case 276u: goto L_08841E84;
    case 277u: goto L_08841F08;
    case 278u: goto L_08841F10;
    case 279u: goto L_08841F24;
    case 280u: goto L_08841F2C;
    case 281u: goto L_08841F38;
    case 282u: goto L_08841F78;
    case 283u: goto L_08841FD4;
    case 284u: goto L_08841FDC;
    case 285u: goto L_08841FE4;
    case 286u: goto L_08841FF0;
    case 287u: goto L_08842014;
    case 288u: goto L_08842028;
    case 289u: goto L_08842030;
    case 290u: goto L_08842054;
    case 291u: goto L_08842068;
    case 292u: goto L_08842084;
    case 293u: goto L_088420AC;
    case 294u: goto L_088420B4;
    case 295u: goto L_088420BC;
    case 296u: goto L_088420C8;
    case 297u: goto L_088420DC;
    case 298u: goto L_088420E4;
    case 299u: goto L_088420EC;
    case 300u: goto L_088420F4;
    case 301u: goto L_088420FC;
    case 302u: goto L_08842140;
    case 303u: goto L_08842210;
    case 304u: goto L_08842218;
    case 305u: goto L_08842220;
    case 306u: goto L_08842284;
    case 307u: goto L_0884229C;
    case 308u: goto L_088422C0;
    case 309u: goto L_088422D4;
    case 310u: goto L_088422DC;
    case 311u: goto L_088422F0;
    case 312u: goto L_088422F4;
    case 313u: goto L_08842300;
    case 314u: goto L_0884231C;
    case 315u: goto L_08842330;
    case 316u: goto L_08842360;
    case 317u: goto L_0884236C;
    case 318u: goto L_08842384;
    case 319u: goto L_0884238C;
    case 320u: goto L_088423A8;
    case 321u: goto L_088423B0;
    case 322u: goto L_088423E0;
    case 323u: goto L_088423E8;
    case 324u: goto L_08842410;
    case 325u: goto L_0884241C;
    case 326u: goto L_08842454;
    case 327u: goto L_08842460;
    case 328u: goto L_08842468;
    case 329u: goto L_0884248C;
    case 330u: goto L_08842494;
    case 331u: goto L_088424B4;
    case 332u: goto L_088424BC;
    case 333u: goto L_088424C8;
    case 334u: goto L_088424D0;
    case 335u: goto L_088424D8;
    case 336u: goto L_088424FC;
    case 337u: goto L_08842504;
    case 338u: goto L_0884250C;
    case 339u: goto L_08842514;
    case 340u: goto L_0884251C;
    case 341u: goto L_08842520;
    case 342u: goto L_08842540;
    case 343u: goto L_08842548;
    case 344u: goto L_0884256C;
    case 345u: goto L_08842574;
    case 346u: goto L_08842594;
    case 347u: goto L_088425A4;
    case 348u: goto L_088425E4;
    case 349u: goto L_088425F8;
    case 350u: goto L_08842608;
    case 351u: goto L_0884260C;
    case 352u: goto L_08842644;
    case 353u: goto L_08842660;
    case 354u: goto L_0884266C;
    case 355u: goto L_088426B0;
    case 356u: goto L_08842744;
    case 357u: goto L_08842768;
    case 358u: goto L_0884278C;
    case 359u: goto L_0884279C;
    case 360u: goto L_088427B4;
    case 361u: goto L_088427CC;
    case 362u: goto L_088427E4;
    case 363u: goto L_088427FC;
    case 364u: goto L_08842814;
    case 365u: goto L_0884282C;
    case 366u: goto L_08842844;
    case 367u: goto L_0884285C;
    case 368u: goto L_08842874;
    case 369u: goto L_0884288C;
    case 370u: goto L_088428A4;
    case 371u: goto L_088428BC;
    case 372u: goto L_088428D4;
    case 373u: goto L_088428EC;
    case 374u: goto L_088428FC;
    case 375u: goto L_08842924;
    case 376u: goto L_08842938;
    case 377u: goto L_0884295C;
    case 378u: goto L_08842964;
    case 379u: goto L_088429AC;
    case 380u: goto L_088429F0;
    case 381u: goto L_08842A00;
    case 382u: goto L_08842A0C;
    case 383u: goto L_08842A20;
    case 384u: goto L_08842A2C;
    case 385u: goto L_08842A34;
    case 386u: goto L_08842A40;
    case 387u: goto L_08842A70;
    case 388u: goto L_08842A88;
    case 389u: goto L_08842A90;
    case 390u: goto L_08842A9C;
    case 391u: goto L_08842AA4;
    case 392u: goto L_08842AAC;
    case 393u: goto L_08842AB4;
    case 394u: goto L_08842ABC;
    case 395u: goto L_08842AE0;
    case 396u: goto L_08842AE8;
    case 397u: goto L_08842AF0;
    case 398u: goto L_08842B0C;
    case 399u: goto L_08842B14;
    case 400u: goto L_08842B20;
    case 401u: goto L_08842B34;
    case 402u: goto L_08842B3C;
    case 403u: goto L_08842B54;
    case 404u: goto L_08842B60;
    case 405u: goto L_08842B90;
    case 406u: goto L_08842BAC;
    case 407u: goto L_08842BC8;
    case 408u: goto L_08842BD8;
    case 409u: goto L_08842BE4;
    case 410u: goto L_08842BEC;
    case 411u: goto L_08842BF8;
    case 412u: goto L_08842C00;
    case 413u: goto L_08842C0C;
    case 414u: goto L_08842C14;
    case 415u: goto L_08842C20;
    case 416u: goto L_08842C28;
    case 417u: goto L_08842C4C;
    case 418u: goto L_08842C60;
    case 419u: goto L_08842C88;
    case 420u: goto L_08842CA0;
    case 421u: goto L_08842CBC;
    case 422u: goto L_08842CC4;
    case 423u: goto L_08842CCC;
    case 424u: goto L_08842CF4;
    case 425u: goto L_08842D00;
    case 426u: goto L_08842D08;
    case 427u: goto L_08842D3C;
    case 428u: goto L_08842D5C;
    case 429u: goto L_08842D64;
    case 430u: goto L_08842D6C;
    case 431u: goto L_08842D80;
    case 432u: goto L_08842D88;
    case 433u: goto L_08842DA0;
    case 434u: goto L_08842DD0;
    case 435u: goto L_08842DE8;
    case 436u: goto L_08842E18;
    case 437u: goto L_08842E30;
    case 438u: goto L_08842E60;
    case 439u: goto L_08842E78;
    case 440u: goto L_08842EAC;
    case 441u: goto L_08842EFC;
    case 442u: goto L_08842F14;
    case 443u: goto L_08842F44;
    case 444u: goto L_08842F4C;
    case 445u: goto L_08842F64;
    case 446u: goto L_08842F7C;
    case 447u: goto L_08842FAC;
    case 448u: goto L_08842FB0;
    case 449u: goto L_08842FC8;
    case 450u: goto L_08842FE0;
    case 451u: goto L_08843014;
    case 452u: goto L_0884302C;
    case 453u: goto L_08843044;
    case 454u: goto L_08843078;
    case 455u: goto L_08843080;
    case 456u: goto L_08843098;
    case 457u: goto L_088430C8;
    case 458u: goto L_088430E0;
    case 459u: goto L_0884310C;
    case 460u: goto L_08843124;
    case 461u: goto L_08843154;
    case 462u: goto L_0884316C;
    case 463u: goto L_0884319C;
    case 464u: goto L_088431A8;
    case 465u: goto L_088431C4;
    case 466u: goto L_0884323C;
    case 467u: goto L_08843268;
    case 468u: goto L_08843280;
    case 469u: goto L_08843284;
    case 470u: goto L_0884328C;
    case 471u: goto L_0884329C;
    case 472u: goto L_088432A4;
    case 473u: goto L_088432AC;
    case 474u: goto L_088432BC;
    case 475u: goto L_088432C8;
    case 476u: goto L_088432E4;
    case 477u: goto L_088432EC;
    case 478u: goto L_088432F4;
    case 479u: goto L_08843300;
    case 480u: goto L_08843308;
    case 481u: goto L_08843324;
    case 482u: goto L_0884332C;
    case 483u: goto L_08843334;
    case 484u: goto L_08843340;
    case 485u: goto L_08843348;
    case 486u: goto L_08843350;
    case 487u: goto L_08843358;
    case 488u: goto L_08843360;
    case 489u: goto L_08843368;
    case 490u: goto L_08843374;
    case 491u: goto L_0884337C;
    case 492u: goto L_08843388;
    case 493u: goto L_088433A8;
    case 494u: goto L_088433C8;
    case 495u: goto L_088433D4;
    case 496u: goto L_088433DC;
    case 497u: goto L_08843408;
    case 498u: goto L_08843410;
    case 499u: goto L_08843418;
    case 500u: goto L_0884341C;
    case 501u: goto L_08843428;
    case 502u: goto L_08843444;
    case 503u: goto L_0884345C;
    case 504u: goto L_08843470;
    case 505u: goto L_0884347C;
    case 506u: goto L_08843484;
    case 507u: goto L_0884349C;
    case 508u: goto L_088434A8;
    case 509u: goto L_088434B4;
    case 510u: goto L_088434BC;
    case 511u: goto L_088434CC;
    case 512u: goto L_088434D4;
    case 513u: goto L_088434DC;
    case 514u: goto L_088434E0;
    case 515u: goto L_088434F8;
    case 516u: goto L_08843500;
    case 517u: goto L_0884350C;
    case 518u: goto L_08843514;
    case 519u: goto L_0884351C;
    case 520u: goto L_08843524;
    case 521u: goto L_0884352C;
    case 522u: goto L_08843534;
    case 523u: goto L_08843544;
    case 524u: goto L_0884354C;
    case 525u: goto L_08843554;
    case 526u: goto L_0884355C;
    case 527u: goto L_08843564;
    case 528u: goto L_08843578;
    case 529u: goto L_08843580;
    case 530u: goto L_08843588;
    case 531u: goto L_08843590;
    case 532u: goto L_08843594;
    case 533u: goto L_088435A0;
    case 534u: goto L_088435F8;
    case 535u: goto L_08843614;
    case 536u: goto L_08843624;
    case 537u: goto L_0884362C;
    case 538u: goto L_08843650;
    case 539u: goto L_08843688;
    case 540u: goto L_08843694;
    case 541u: goto L_088436A0;
    case 542u: goto L_088436B4;
    case 543u: goto L_088436C4;
    case 544u: goto L_088436DC;
    case 545u: goto L_088436E0;
    case 546u: goto L_088436F0;
    case 547u: goto L_088436F8;
    case 548u: goto L_08843728;
    case 549u: goto L_08843730;
    case 550u: goto L_08843760;
    case 551u: goto L_08843780;
    case 552u: goto L_08843788;
    case 553u: goto L_08843798;
    case 554u: goto L_088437A0;
    case 555u: goto L_088437C0;
    case 556u: goto L_088437D0;
    case 557u: goto L_088437D8;
    case 558u: goto L_088437EC;
    case 559u: goto L_088437FC;
    case 560u: goto L_08843804;
    case 561u: goto L_08843810;
    case 562u: goto L_08843818;
    case 563u: goto L_0884384C;
    case 564u: goto L_08843868;
    case 565u: goto L_08843878;
    case 566u: goto L_08843884;
    case 567u: goto L_08843898;
    case 568u: goto L_088438A4;
    case 569u: goto L_088438AC;
    case 570u: goto L_088438B8;
    case 571u: goto L_088438C8;
    case 572u: goto L_088438D0;
    case 573u: goto L_088438D8;
    case 574u: goto L_088438E0;
    case 575u: goto L_088438EC;
    case 576u: goto L_088438FC;
    case 577u: goto L_08843910;
    case 578u: goto L_08843968;
    case 579u: goto L_08843978;
    case 580u: goto L_08843988;
    case 581u: goto L_0884399C;
    case 582u: goto L_088439A4;
    case 583u: goto L_088439F0;
    case 584u: goto L_088439F8;
    case 585u: goto L_08843A18;
    case 586u: goto L_08843A20;
    case 587u: goto L_08843A28;
    case 588u: goto L_08843A5C;
    case 589u: goto L_08843A70;
    case 590u: goto L_08843A88;
    case 591u: goto L_08843A98;
    case 592u: goto L_08843AA0;
    case 593u: goto L_08843AA8;
    case 594u: goto L_08843ABC;
    case 595u: goto L_08843AC4;
    case 596u: goto L_08843AD8;
    case 597u: goto L_08843AFC;
    case 598u: goto L_08843B08;
    case 599u: goto L_08843B10;
    case 600u: goto L_08843B30;
    case 601u: goto L_08843B3C;
    case 602u: goto L_08843B50;
    case 603u: goto L_08843B60;
    case 604u: goto L_08843B8C;
    case 605u: goto L_08843BA0;
    case 606u: goto L_08843BB4;
    case 607u: goto L_08843BD8;
    case 608u: goto L_08843BEC;
    case 609u: goto L_08843BFC;
    case 610u: goto L_08843C04;
    case 611u: goto L_08843C0C;
    case 612u: goto L_08843C3C;
    case 613u: goto L_08843C48;
    case 614u: goto L_08843C50;
    case 615u: goto L_08843C64;
    case 616u: goto L_08843C78;
    case 617u: goto L_08843C88;
    case 618u: goto L_08843CA0;
    case 619u: goto L_08843CB4;
    case 620u: goto L_08843CC4;
    case 621u: goto L_08843CE0;
    case 622u: goto L_08843CEC;
    case 623u: goto L_08843CF4;
    case 624u: goto L_08843D2C;
    case 625u: goto L_08843D44;
    case 626u: goto L_08843D4C;
    case 627u: goto L_08843D58;
    case 628u: goto L_08843D64;
    case 629u: goto L_08843D90;
    case 630u: goto L_08843DC0;
    case 631u: goto L_08843DD0;
    case 632u: goto L_08843DF0;
    case 633u: goto L_08843DF8;
    case 634u: goto L_08843E00;
    case 635u: goto L_08843E08;
    case 636u: goto L_08843E18;
    case 637u: goto L_08843E40;
    case 638u: goto L_08843E48;
    case 639u: goto L_08843E64;
    case 640u: goto L_08843E70;
    case 641u: goto L_08843E84;
    case 642u: goto L_08843E8C;
    case 643u: goto L_08843E94;
    case 644u: goto L_08843E9C;
    case 645u: goto L_08843EB0;
    case 646u: goto L_08843ED0;
    case 647u: goto L_08843ED8;
    case 648u: goto L_08843EEC;
    case 649u: goto L_08843EF4;
    case 650u: goto L_08843F00;
    case 651u: goto L_08843F08;
    case 652u: goto L_08843F10;
    case 653u: goto L_08843F18;
    case 654u: goto L_08843F20;
    case 655u: goto L_08843F28;
    case 656u: goto L_08843F7C;
    case 657u: goto L_08843F8C;
    case 658u: goto L_08843F98;
    case 659u: goto L_08843FB4;
    case 660u: goto L_08843FC4;
    case 661u: goto L_08843FD0;
    case 662u: goto L_08843FEC;
    case 663u: goto L_08843FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08840000:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 45 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088401D4;
      }
      goto L_08840020;
    }
L_08840020:
    ctx.gpr[4] = (48819u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.gpr[31] = (0x0884003Cu);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0884003Cu) goto L_0884003C;
    return;
L_0884003C:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x08840050u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08840050u) goto L_08840050;
    return;
L_08840050:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x08840078u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08840078u) goto L_08840078;
    return;
L_08840078:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08840090u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08840090u) goto L_08840090;
    return;
L_08840090:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3592)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088400A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088400A8u) goto L_088400A8;
    return;
L_088400A8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3604)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3600)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3568)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3568), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[18] = (ctx.gpr[6] & 3u);
    ctx.gpr[31] = (0x08840110u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08840110u) goto L_08840110;
    return;
L_08840110:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08840130u);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08840130u) goto L_08840130;
    return;
L_08840130:
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[26];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(465)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(466)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[26] + ctx.fpr[13];
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(464), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(465), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[11] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(466), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 62u);
    ctx.gpr[31] = (0x088401C4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x088401C4u) goto L_088401C4;
    return;
L_088401C4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 45 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08840020;
      }
      goto L_088401D4;
    }
L_088401D4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[31] = (0x088401E0u);
    ctx.gpr[4] = (0u | 81u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 603u, 0x0896ED08u>(ctx, &aot_mem) && ctx.pc == 0x088401E0u) goto L_088401E0;
    return;
L_088401E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088411F0;
      }
      goto L_088401E8;
    }
L_088401E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08840224;
      }
      goto L_08840214;
    }
L_08840214:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0884022C;
      }
      goto L_08840224;
    }
L_08840224:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0884022C;
L_0884022C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884023C;
      }
      goto L_08840234;
    }
L_08840234:
    ctx.gpr[31] = (0x0884023Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 157u, 0x08A0D3C0u>(ctx, &aot_mem) && ctx.pc == 0x0884023Cu) goto L_0884023C;
    return;
L_0884023C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (65532u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 18u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 200u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(468), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(469), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(470), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(471), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(473), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(474), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(475), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (14673u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08840428;
      }
      goto L_088402DC;
    }
L_088402DC:
    ctx.gpr[4] = (48819u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.gpr[31] = (0x088402F8u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x088402F8u) goto L_088402F8;
    return;
L_088402F8:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x0884030Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0884030Cu) goto L_0884030C;
    return;
L_0884030C:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x08840334u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08840334u) goto L_08840334;
    return;
L_08840334:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x0884034Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0884034Cu) goto L_0884034C;
    return;
L_0884034C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3592)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08840364u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08840364u) goto L_08840364;
    return;
L_08840364:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3604)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3600)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3568)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(3568), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] & 3u);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x088403CCu);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x088403CCu) goto L_088403CC;
    return;
L_088403CC:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3568)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_088403EC;
      }
      goto L_088403E4;
    }
L_088403E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(468));
      if (branch_taken) {
          goto L_088403F0;
      }
      goto L_088403EC;
    }
L_088403EC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(472));
    goto L_088403F0;
L_088403F0:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[4] = (0u | 62u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08840418u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08840418u) goto L_08840418;
    return;
L_08840418:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088402DC;
      }
      goto L_08840428;
    }
L_08840428:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    ctx.gpr[5] = (0u | 120u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884044C;
      }
      goto L_08840438;
    }
L_08840438:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[31] = (0x08840444u);
    ctx.gpr[4] = (0u | 85u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 603u, 0x0896ED08u>(ctx, &aot_mem) && ctx.pc == 0x08840444u) goto L_08840444;
    return;
L_08840444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08840458;
      }
      goto L_0884044C;
    }
L_0884044C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[31] = (0x08840458u);
    ctx.gpr[4] = (0u | 84u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 603u, 0x0896ED08u>(ctx, &aot_mem) && ctx.pc == 0x08840458u) goto L_08840458;
    return;
L_08840458:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088411F0;
      }
      goto L_08840460;
    }
L_08840460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0884049C;
      }
      goto L_0884048C;
    }
L_0884048C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088404A4;
      }
      goto L_0884049C;
    }
L_0884049C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088404A4;
L_088404A4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088404B4;
      }
      goto L_088404AC;
    }
L_088404AC:
    ctx.gpr[31] = (0x088404B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 157u, 0x08A0D3C0u>(ctx, &aot_mem) && ctx.pc == 0x088404B4u) goto L_088404B4;
    return;
L_088404B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (65532u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 18u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 200u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(512), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(513), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(514), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(515), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(517), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(518), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(519), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (14673u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088406A0;
      }
      goto L_08840554;
    }
L_08840554:
    ctx.gpr[4] = (48819u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.gpr[31] = (0x08840570u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08840570u) goto L_08840570;
    return;
L_08840570:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x08840584u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08840584u) goto L_08840584;
    return;
L_08840584:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x088405ACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x088405ACu) goto L_088405AC;
    return;
L_088405AC:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x088405C4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088405C4u) goto L_088405C4;
    return;
L_088405C4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3592)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088405DCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088405DCu) goto L_088405DC;
    return;
L_088405DC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3604)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3600)));
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3568)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3568), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] & 3u);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08840644u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08840644u) goto L_08840644;
    return;
L_08840644:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3568)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08840664;
      }
      goto L_0884065C;
    }
L_0884065C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
      if (branch_taken) {
          goto L_08840668;
      }
      goto L_08840664;
    }
L_08840664:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(516));
    goto L_08840668;
L_08840668:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[4] = (0u | 62u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08840690u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08840690u) goto L_08840690;
    return;
L_08840690:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08840554;
      }
      goto L_088406A0;
    }
L_088406A0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[31] = (0x088406ACu);
    ctx.gpr[4] = (0u | 83u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 603u, 0x0896ED08u>(ctx, &aot_mem) && ctx.pc == 0x088406ACu) goto L_088406AC;
    return;
L_088406AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088411F0;
      }
      goto L_088406B4;
    }
L_088406B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088406F0;
      }
      goto L_088406E0;
    }
L_088406E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088406F8;
      }
      goto L_088406F0;
    }
L_088406F0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088406F8;
L_088406F8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08840708;
      }
      goto L_08840700;
    }
L_08840700:
    ctx.gpr[31] = (0x08840708u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 157u, 0x08A0D3C0u>(ctx, &aot_mem) && ctx.pc == 0x08840708u) goto L_08840708;
    return;
L_08840708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (65532u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 18u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 57u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(576), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 77u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(577), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 41u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(578), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(579), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 148u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(580), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 125u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(581), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 115u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(582), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(583), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (14673u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088409E0;
      }
      goto L_088407F8;
    }
L_088407F8:
    ctx.gpr[4] = (48768u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16000u << 16u);
    ctx.gpr[31] = (0x0884080Cu);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0884080Cu) goto L_0884080C;
    return;
L_0884080C:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08840824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08840824u) goto L_08840824;
    return;
L_08840824:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x08840850u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08840850u) goto L_08840850;
    return;
L_08840850:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[31] = (0x08840884u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08840884u) goto L_08840884;
    return;
L_08840884:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088408A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088408A8u) goto L_088408A8;
    return;
L_088408A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3596)));
    ctx.gpr[31] = (0x088408C0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3592)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088408C0u) goto L_088408C0;
    return;
L_088408C0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3604)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3600)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3568)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3568), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[4] & 255u);
    ctx.gpr[18] = (ctx.gpr[18] & 3u);
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08840928u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08840928u) goto L_08840928;
    return;
L_08840928:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3568)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884094C;
      }
      goto L_08840944;
    }
L_08840944:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
      if (branch_taken) {
          goto L_08840950;
      }
      goto L_0884094C;
    }
L_0884094C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(580));
    goto L_08840950;
L_08840950:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[4] = (0u | 62u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08840978u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08840978u) goto L_08840978;
    return;
L_08840978:
    ctx.gpr[4] = (0u | 7u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088409D0;
      }
      goto L_0884098C;
    }
L_0884098C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(640), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(641), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(642), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (16025u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(643), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[2] | 39322u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088409D0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x088409D0u) goto L_088409D0;
    return;
L_088409D0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088407F8;
      }
      goto L_088409E0;
    }
L_088409E0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[31] = (0x088409ECu);
    ctx.gpr[4] = (0u | 82u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 603u, 0x0896ED08u>(ctx, &aot_mem) && ctx.pc == 0x088409ECu) goto L_088409EC;
    return;
L_088409EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088411F0;
      }
      goto L_088409F4;
    }
L_088409F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08840A30;
      }
      goto L_08840A20;
    }
L_08840A20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08840A38;
      }
      goto L_08840A30;
    }
L_08840A30:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08840A38;
L_08840A38:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08840A48;
      }
      goto L_08840A40;
    }
L_08840A40:
    ctx.gpr[31] = (0x08840A48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 157u, 0x08A0D3C0u>(ctx, &aot_mem) && ctx.pc == 0x08840A48u) goto L_08840A48;
    return;
L_08840A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (65532u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 18u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(673), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(674), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(675), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(676), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(677), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(678), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(679), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-91));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-91));
      if (branch_taken) {
          goto L_08840C24;
      }
      goto L_08840AE4;
    }
L_08840AE4:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08840B3C;
      }
      goto L_08840AF0;
    }
L_08840AF0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08840B70;
      }
      goto L_08840AF8;
    }
L_08840AF8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08840BA4;
      }
      goto L_08840B00;
    }
L_08840B00:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08840BF4;
      }
      goto L_08840B08;
    }
L_08840B08:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[5] = (0u | 192u);
    ctx.gpr[6] = (0u | 62u);
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[31] = (0x08840B20u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08840B20u) goto L_08840B20;
    return;
L_08840B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(676));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08840C24;
      }
      goto L_08840B3C;
    }
L_08840B3C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[5] = (0u | 163u);
    ctx.gpr[6] = (0u | 54u);
    ctx.gpr[7] = (0u | 33u);
    ctx.gpr[31] = (0x08840B54u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08840B54u) goto L_08840B54;
    return;
L_08840B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(676));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08840C24;
      }
      goto L_08840B70;
    }
L_08840B70:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[6] = (0u | 49u);
    ctx.gpr[7] = (0u | 36u);
    ctx.gpr[31] = (0x08840B88u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08840B88u) goto L_08840B88;
    return;
L_08840B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(676));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08840C24;
      }
      goto L_08840BA4;
    }
L_08840BA4:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 192u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[7] = (0u | 190u);
    ctx.gpr[31] = (0x08840BC0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08840BC0u) goto L_08840BC0;
    return;
L_08840BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 87u);
    ctx.gpr[7] = (0u | 133u);
    ctx.gpr[31] = (0x08840BE4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08840BE4u) goto L_08840BE4;
    return;
L_08840BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(676));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08840C24;
      }
      goto L_08840BF4;
    }
L_08840BF4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[5] = (0u | 208u);
    ctx.gpr[6] = (0u | 148u);
    ctx.gpr[7] = (0u | 27u);
    ctx.gpr[31] = (0x08840C0Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08840C0Cu) goto L_08840C0C;
    return;
L_08840C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(676));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08840C24;
L_08840C24:
    ctx.gpr[4] = (14673u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08840E3C;
      }
      goto L_08840C54;
    }
L_08840C54:
    ctx.gpr[4] = (48819u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.gpr[31] = (0x08840C70u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08840C70u) goto L_08840C70;
    return;
L_08840C70:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x08840C84u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08840C84u) goto L_08840C84;
    return;
L_08840C84:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x08840CACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08840CACu) goto L_08840CAC;
    return;
L_08840CAC:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08840CC4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08840CC4u) goto L_08840CC4;
    return;
L_08840CC4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3592)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08840CDCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08840CDCu) goto L_08840CDC;
    return;
L_08840CDC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3604)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3600)));
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3568)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3568), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] & 3u);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08840D44u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08840D44u) goto L_08840D44;
    return;
L_08840D44:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3568)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08840D64;
      }
      goto L_08840D5C;
    }
L_08840D5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
      if (branch_taken) {
          goto L_08840D68;
      }
      goto L_08840D64;
    }
L_08840D64:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(676));
    goto L_08840D68;
L_08840D68:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[4] = (0u | 62u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08840D90u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08840D90u) goto L_08840D90;
    return;
L_08840D90:
    ctx.gpr[4] = (0u | 7u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08840E2C;
      }
      goto L_08840DA4;
    }
L_08840DA4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3572));
    ctx.gpr[31] = (0x08840DB8u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08840DB8u) goto L_08840DB8;
    return;
L_08840DB8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3568)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(752));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08840E2Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08840E2Cu) goto L_08840E2C;
    return;
L_08840E2C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08840C54;
      }
      goto L_08840E3C;
    }
L_08840E3C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[31] = (0x08840E48u);
    ctx.gpr[4] = (0u | 83u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 603u, 0x0896ED08u>(ctx, &aot_mem) && ctx.pc == 0x08840E48u) goto L_08840E48;
    return;
L_08840E48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088411F0;
      }
      goto L_08840E50;
    }
L_08840E50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08840E8C;
      }
      goto L_08840E7C;
    }
L_08840E7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08840E94;
      }
      goto L_08840E8C;
    }
L_08840E8C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08840E94;
L_08840E94:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08840EA4;
      }
      goto L_08840E9C;
    }
L_08840E9C:
    ctx.gpr[31] = (0x08840EA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 157u, 0x08A0D3C0u>(ctx, &aot_mem) && ctx.pc == 0x08840EA4u) goto L_08840EA4;
    return;
L_08840EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (65532u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 18u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(784), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(788), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(792), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(784), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(788), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(792), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(800), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(801), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(802), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(803), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(804), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(805), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(806), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(807), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 131 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 132 ? 1u : 0u);
      if (branch_taken) {
          goto L_08840F7C;
      }
      goto L_08840F3C;
    }
L_08840F3C:
    ctx.gpr[5] = (0u | 100u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08841028;
      }
      goto L_08840F48;
    }
L_08840F48:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08840F60u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08840F60u) goto L_08840F60;
    return;
L_08840F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(804));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08841028;
      }
      goto L_08840F7C;
    }
L_08840F7C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 133 ? 1u : 0u);
      if (branch_taken) {
          goto L_08840FDC;
      }
      goto L_08840F84;
    }
L_08840F84:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841028;
      }
      goto L_08840F8C;
    }
L_08840F8C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 82u);
    ctx.gpr[6] = (0u | 146u);
    ctx.gpr[7] = (0u | 74u);
    ctx.gpr[31] = (0x08840FA8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08840FA8u) goto L_08840FA8;
    return;
L_08840FA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 206u);
    ctx.gpr[6] = (0u | 207u);
    ctx.gpr[7] = (0u | 206u);
    ctx.gpr[31] = (0x08840FCCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08840FCCu) goto L_08840FCC;
    return;
L_08840FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(804));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08841028;
      }
      goto L_08840FDC;
    }
L_08840FDC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 143u);
    ctx.gpr[6] = (0u | 138u);
    ctx.gpr[7] = (0u | 140u);
    ctx.gpr[31] = (0x08840FF8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08840FF8u) goto L_08840FF8;
    return;
L_08840FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 115u);
    ctx.gpr[6] = (0u | 117u);
    ctx.gpr[7] = (0u | 123u);
    ctx.gpr[31] = (0x0884101Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0884101Cu) goto L_0884101C;
    return;
L_0884101C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(804));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08841028;
L_08841028:
    ctx.gpr[4] = (14673u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088411A4;
      }
      goto L_08841058;
    }
L_08841058:
    ctx.gpr[4] = (48819u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.gpr[31] = (0x08841074u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08841074u) goto L_08841074;
    return;
L_08841074:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x08841088u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08841088u) goto L_08841088;
    return;
L_08841088:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x088410B0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x088410B0u) goto L_088410B0;
    return;
L_088410B0:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x088410C8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(840), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088410C8u) goto L_088410C8;
    return;
L_088410C8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3592)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088410E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088410E0u) goto L_088410E0;
    return;
L_088410E0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3604)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3600)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3568)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(3568), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] & 3u);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08841148u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08841148u) goto L_08841148;
    return;
L_08841148:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3568)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08841168;
      }
      goto L_08841160;
    }
L_08841160:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
      if (branch_taken) {
          goto L_0884116C;
      }
      goto L_08841168;
    }
L_08841168:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(804));
    goto L_0884116C;
L_0884116C:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (0u | 62u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08841194u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08841194u) goto L_08841194;
    return;
L_08841194:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08841058;
      }
      goto L_088411A4;
    }
L_088411A4:
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 101 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 131u);
      if (branch_taken) {
          goto L_088411D4;
      }
      goto L_088411B4;
    }
L_088411B4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088411E8;
      }
      goto L_088411C0;
    }
L_088411C0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[31] = (0x088411CCu);
    ctx.gpr[4] = (0u | 82u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 603u, 0x0896ED08u>(ctx, &aot_mem) && ctx.pc == 0x088411CCu) goto L_088411CC;
    return;
L_088411CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088411E8;
      }
      goto L_088411D4;
    }
L_088411D4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088411E8;
      }
      goto L_088411DC;
    }
L_088411DC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[31] = (0x088411E8u);
    ctx.gpr[4] = (0u | 83u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 603u, 0x0896ED08u>(ctx, &aot_mem) && ctx.pc == 0x088411E8u) goto L_088411E8;
    return;
L_088411E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088411F0;
      }
      goto L_088411F0;
    }
L_088411F0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841228:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3508)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3504)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3532)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[3] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(3512), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(3520), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(3516), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3524), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(3528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(3536), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088412BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 1760u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884130Cu);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x0884130Cu) goto L_0884130C;
    return;
L_0884130C:
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-497));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(13216));
      if (branch_taken) {
          goto L_08841334;
      }
      goto L_08841320;
    }
L_08841320:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08841330u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x08841330u) goto L_08841330;
    return;
L_08841330:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08841334;
L_08841334:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08841354u);
    ctx.fpr[14] = ctx.fpr[22] + ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08841354u) goto L_08841354;
    return;
L_08841354:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08841360u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FC04u>(ctx, &aot_mem) && ctx.pc == 0x08841360u) goto L_08841360;
    return;
L_08841360:
    ctx.fpr[28] = ctx.fpr[28] + ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08841370u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 485u, 0x08A05F10u>(ctx, &aot_mem) && ctx.pc == 0x08841370u) goto L_08841370;
    return;
L_08841370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] | 192u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088413A0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x089ED510u>(ctx, &aot_mem) && ctx.pc == 0x088413A0u) goto L_088413A0;
    return;
L_088413A0:
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088413E0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x088413E0u) goto L_088413E0;
    return;
L_088413E0:
    ctx.gpr[31] = (0x088413E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x088413E8u) goto L_088413E8;
    return;
L_088413E8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[18] = (2230u << 16u);
        goto L_0884140C;
    }
    goto L_088413F0;
L_088413F0:
    ctx.gpr[31] = (0x088413F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x088413F8u) goto L_088413F8;
    return;
L_088413F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] | 208u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[18] = (2230u << 16u);
    goto L_0884140C;
L_0884140C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08841444u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08841444u) goto L_08841444;
    return;
L_08841444:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08841468u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x08841468u) goto L_08841468;
    return;
L_08841468:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08841480;
      }
      goto L_08841478;
    }
L_08841478:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088414AC;
      }
      goto L_08841480;
    }
L_08841480:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08841498u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 345u, 0x088EE3F4u>(ctx, &aot_mem) && ctx.pc == 0x08841498u) goto L_08841498;
    return;
L_08841498:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088414A4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 479u, 0x088EEF8Cu>(ctx, &aot_mem) && ctx.pc == 0x088414A4u) goto L_088414A4;
    return;
L_088414A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088414C4;
      }
      goto L_088414AC;
    }
L_088414AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x088414C4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 345u, 0x088EE3F4u>(ctx, &aot_mem) && ctx.pc == 0x088414C4u) goto L_088414C4;
    return;
L_088414C4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088414FC:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] << 7u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[8] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[9] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088415CC;
      }
      goto L_0884153C;
    }
L_0884153C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[10] = (0u | 5u);
    ctx.gpr[9] = (ctx.gpr[9] & 496u);
    ctx.gpr[9] = (ctx.gpr[9] >> 4u);
    if (ctx.gpr[9] == ctx.gpr[10]) {
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
        goto L_0884158C;
    }
    goto L_08841554;
L_08841554:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[9] = (ctx.gpr[9] & ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] | 64u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[9] = (ctx.gpr[5] << 7u);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[9] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0884158C;
L_0884158C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-17176)));
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-17184)));
    ctx.gpr[3] = (ctx.gpr[5] << 7u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-17176), ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[3] + ctx.gpr[3]);
    ctx.gpr[9] = (ctx.gpr[3] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[10] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[9] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-17184), ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_088415CC;
L_088415CC:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[9] = (ctx.gpr[9] & ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[9] = (ctx.gpr[5] << 7u);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[9] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(244), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(241), static_cast<std::uint8_t>(ctx.gpr[8]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(242), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841614:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3620)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3616)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3644)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[3] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(3624), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(3632), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(3628), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3636), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(3640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(3648), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088416A8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(9688));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(9688), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088416D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088416E4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 192u, 0x0883CF88u>(ctx, &aot_mem) && ctx.pc == 0x088416E4u) goto L_088416E4;
    return;
L_088416E4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (15363u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20340));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[5] = (16255u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 65368u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16192u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (65532u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (4u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0884177Cu);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(430)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884177Cu) goto L_0884177C;
    return;
L_0884177C:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3248)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3248), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088417A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08841800;
      }
      goto L_088417C4;
    }
L_088417C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20340));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3248)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3248), ctx.gpr[6]);
    ctx.gpr[31] = (0x088417ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 211u, 0x0883D22Cu>(ctx, &aot_mem) && ctx.pc == 0x088417ECu) goto L_088417EC;
    return;
L_088417EC:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841800;
      }
      goto L_088417F8;
    }
L_088417F8:
    ctx.gpr[31] = (0x08841800u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 242u, 0x0883D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08841800u) goto L_08841800;
    return;
L_08841800:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841814:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841820:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08841840;
      }
      goto L_08841830;
    }
L_08841830:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841840;
      }
      goto L_08841838;
    }
L_08841838:
    ctx.gpr[31] = (0x08841840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08841840u) goto L_08841840;
    return;
L_08841840:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884184C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(568), ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    goto L_088418A0;
L_088418A0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x088418ACu);
    ctx.gpr[4] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088418ACu) goto L_088418AC;
    return;
L_088418AC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088418C4;
      }
      goto L_088418B8;
    }
L_088418B8:
    ctx.gpr[31] = (0x088418C0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_088416D0;
L_088418C0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_088418C4;
L_088418C4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(520), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088418A0;
      }
      goto L_088418E4;
    }
L_088418E4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08841944;
      }
      goto L_0884192C;
    }
L_0884192C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08841944;
      }
      goto L_0884193C;
    }
L_0884193C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[22];
      if (branch_taken) {
          goto L_08841950;
      }
      goto L_08841944;
    }
L_08841944:
    ctx.gpr[31] = (0x0884194Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0884194Cu) goto L_0884194C;
    return;
L_0884194C:
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[22];
    goto L_08841950;
L_08841950:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_08841960;
L_08841960:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(520)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08841994;
      }
      goto L_0884197C;
    }
L_0884197C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08841994;
      }
      goto L_0884198C;
    }
L_0884198C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088419A0;
      }
      goto L_08841994;
    }
L_08841994:
    ctx.gpr[31] = (0x0884199Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0884199Cu) goto L_0884199C;
    return;
L_0884199C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088419A0;
L_088419A0:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088419C0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x088419C0u) goto L_088419C0;
    return;
L_088419C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088419D4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x088419D4u) goto L_088419D4;
    return;
L_088419D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(520)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08841960;
      }
      goto L_08841A00;
    }
L_08841A00:
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (16358u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (17204u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08841A34;
L_08841A34:
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[15];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08841A34;
      }
      goto L_08841A84;
    }
L_08841A84:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(572), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841AC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08841B30;
      }
      goto L_08841AE4;
    }
L_08841AE4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08841AEC;
L_08841AEC:
    ctx.gpr[31] = (0x08841AF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08841AF4u) goto L_08841AF4;
    return;
L_08841AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841B1C;
      }
      goto L_08841B00;
    }
L_08841B00:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08841B1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08841B1Cu) goto L_08841B1C;
    return;
L_08841B1C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08841AEC;
      }
      goto L_08841B2C;
    }
L_08841B2C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08841B30;
L_08841B30:
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
L_08841B48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 24 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08841BB8;
      }
      goto L_08841B70;
    }
L_08841B70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08841BB0;
      }
      goto L_08841B7C;
    }
L_08841B7C:
    ctx.gpr[31] = (0x08841B84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08841B84u) goto L_08841B84;
    return;
L_08841B84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841BB0;
      }
      goto L_08841B8C;
    }
L_08841B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08841B98u);
    ctx.gpr[5] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08841B98u) goto L_08841B98;
    return;
L_08841B98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841BC0;
      }
      goto L_08841BA8;
    }
L_08841BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841C20;
      }
      goto L_08841BB0;
    }
L_08841BB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841C20;
      }
      goto L_08841BB8;
    }
L_08841BB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841C20;
      }
      goto L_08841BC0;
    }
L_08841BC0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08841BCCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0884184C;
L_08841BCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08841C04;
      }
      goto L_08841BDC;
    }
L_08841BDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841BFC;
      }
      goto L_08841BE8;
    }
L_08841BE8:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08841BFC;
    }
    goto L_08841BF0;
L_08841BF0:
    ctx.gpr[31] = (0x08841BF8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08841BF8u) goto L_08841BF8;
    return;
L_08841BF8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08841BFC;
L_08841BFC:
    ctx.gpr[31] = (0x08841C04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08841C04u) goto L_08841C04;
    return;
L_08841C04:
    ctx.gpr[4] = (0u | 63u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08841C20u);
    ctx.gpr[6] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08841C20u) goto L_08841C20;
    return;
L_08841C20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841C34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(572)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088420F4;
      }
      goto L_08841C88;
    }
L_08841C88:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08841D70;
      }
      goto L_08841C94;
    }
L_08841C94:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088420BC;
      }
      goto L_08841C9C;
    }
L_08841C9C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08841D44;
      }
      goto L_08841CA4;
    }
L_08841CA4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088420EC;
      }
      goto L_08841CAC;
    }
L_08841CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(568)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841D3C;
      }
      goto L_08841CB8;
    }
L_08841CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(568)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08841D3C;
      }
      goto L_08841CC8;
    }
L_08841CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(568)));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08841D3C;
      }
      goto L_08841CDC;
    }
L_08841CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(568)));
    ctx.gpr[5] = (0u | 61u);
    ctx.gpr[31] = (0x08841CECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08841CECu) goto L_08841CEC;
    return;
L_08841CEC:
    ctx.gpr[4] = (16071u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 44564u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08841D3C;
      }
      goto L_08841D0C;
    }
L_08841D0C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(572), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08841D1C;
L_08841D1C:
    ctx.gpr[31] = (0x08841D24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08841D24u) goto L_08841D24;
    return;
L_08841D24:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08841D1C;
      }
      goto L_08841D34;
    }
L_08841D34:
    ctx.gpr[31] = (0x08841D3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(568)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x08841D3Cu) goto L_08841D3C;
    return;
L_08841D3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088420F4;
      }
      goto L_08841D44;
    }
L_08841D44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(2500));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08841D68;
      }
      goto L_08841D60;
    }
L_08841D60:
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(572), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08841D68;
L_08841D68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841D78;
      }
      goto L_08841D70;
    }
L_08841D70:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (2230u << 16u);
    goto L_08841D78;
L_08841D78:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(572)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08841DA8;
      }
      goto L_08841D84;
    }
L_08841D84:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2500));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841DA8;
      }
      goto L_08841D9C;
    }
L_08841D9C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(572), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088420B4;
      }
      goto L_08841DA8;
    }
L_08841DA8:
    ctx.gpr[7] = (17692u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(572)));
    ctx.gpr[7] = (16457u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4059u);
    ctx.gpr[8] = (17008u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_08841E0C;
      }
      goto L_08841DD0;
    }
L_08841DD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08841DF4;
      }
      goto L_08841DE8;
    }
L_08841DE8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[15];
    goto L_08841DF4;
L_08841DF4:
    ctx.fpr[12] = ctx.fpr[30] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[30]));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08841E50;
      }
      goto L_08841E0C;
    }
L_08841E0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08841E30;
      }
      goto L_08841E24;
    }
L_08841E24:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[15];
    goto L_08841E30;
L_08841E30:
    ctx.fpr[12] = ctx.fpr[30] / ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[30]));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_08841E50;
L_08841E50:
    ctx.gpr[5] = (17204u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[30] = ctx.fpr[30] / ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 60 ? 1u : 0u);
    ctx.fpr[14] = ctx.fpr[13] + ctx.fpr[30];
    ctx.fpr[30] = ctx.fpr[13] - ctx.fpr[30];
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08841E78;
      }
      goto L_08841E74;
    }
L_08841E74:
    ctx.gpr[4] = (0u | 59u);
    goto L_08841E78;
L_08841E78:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08841E84;
      }
      goto L_08841E80;
    }
L_08841E80:
    ctx.gpr[4] = (0u | 0u);
    goto L_08841E84;
L_08841E84:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08841F08u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x08841F08u) goto L_08841F08;
    return;
L_08841F08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (15897u << 16u);
      if (branch_taken) {
          goto L_08841F24;
      }
      goto L_08841F10;
    }
L_08841F10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08841F24;
L_08841F24:
    ctx.gpr[31] = (0x08841F2Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08841F2Cu) goto L_08841F2C;
    return;
L_08841F2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08841F38u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08841F38u) goto L_08841F38;
    return;
L_08841F38:
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_08841F78;
L_08841F78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08841FD4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x08841FD4u) goto L_08841FD4;
    return;
L_08841FD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841FE4;
      }
      goto L_08841FDC;
    }
L_08841FDC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08841FE4;
L_08841FE4:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842030;
      }
      goto L_08841FF0;
    }
L_08841FF0:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(520)));
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08842014u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08842014u) goto L_08842014;
    return;
L_08842014:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (0x08842028u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08842028u) goto L_08842028;
    return;
L_08842028:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(520)));
      if (branch_taken) {
          goto L_08842084;
      }
      goto L_08842030;
    }
L_08842030:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(520)));
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08842054u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08842054u) goto L_08842054;
    return;
L_08842054:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (0x08842068u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08842068u) goto L_08842068;
    return;
L_08842068:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(520)));
    goto L_08842084;
L_08842084:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08841F78;
      }
      goto L_088420AC;
    }
L_088420AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_088420B4;
L_088420B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088420F4;
      }
      goto L_088420BC;
    }
L_088420BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(568)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088420E4;
      }
      goto L_088420C8;
    }
L_088420C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(568)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088420E4;
      }
      goto L_088420DC;
    }
L_088420DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(568)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2088), static_cast<std::uint8_t>(0u));
    goto L_088420E4;
L_088420E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088420F4;
      }
      goto L_088420EC;
    }
L_088420EC:
    ctx.gpr[31] = (0x088420F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08841AC4;
L_088420F4:
    ctx.gpr[31] = (0x088420FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08842140;
L_088420FC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08842140:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-592));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(564)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08842218;
      }
      goto L_08842210;
    }
L_08842210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884266C;
      }
      goto L_08842218;
    }
L_08842218:
    ctx.gpr[31] = (0x08842220u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 78u, 0x08A305B8u>(ctx, &aot_mem) && ctx.pc == 0x08842220u) goto L_08842220;
    return;
L_08842220:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 15u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08842284u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0EF8u>(ctx, &aot_mem) && ctx.pc == 0x08842284u) goto L_08842284;
    return;
L_08842284:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(160))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15897u << 16u);
      if (branch_taken) {
          goto L_08842660;
      }
      goto L_0884229C;
    }
L_0884229C:
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    goto L_088422C0;
L_088422C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088422DC;
      }
      goto L_088422D4;
    }
L_088422D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
      if (branch_taken) {
          goto L_088422F4;
      }
      goto L_088422DC;
    }
L_088422DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088422F4;
      }
      goto L_088422F0;
    }
L_088422F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    goto L_088422F4;
L_088422F4:
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842644;
      }
      goto L_08842300;
    }
L_08842300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08842330;
      }
      goto L_0884231C;
    }
L_0884231C:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08842330;
L_08842330:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[6]);
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1248));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1024));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[5]);
    goto L_08842360;
L_08842360:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
      if (branch_taken) {
          goto L_08842384;
      }
      goto L_0884236C;
    }
L_0884236C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1392)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088423A8;
      }
      goto L_08842384;
    }
L_08842384:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08842608;
      }
      goto L_0884238C;
    }
L_0884238C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1168)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
        goto L_0884260C;
    }
    goto L_088423A8;
L_088423A8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088423E0;
      }
      goto L_088423B0;
    }
L_088423B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842410;
      }
      goto L_088423E0;
    }
L_088423E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842410;
      }
      goto L_088423E8;
    }
L_088423E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_08842410;
L_08842410:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[23] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    goto L_0884241C;
L_0884241C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(520)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088425F8;
      }
      goto L_08842454;
    }
L_08842454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088424BC;
      }
      goto L_08842460;
    }
L_08842460:
    if (ctx.gpr[23] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
        goto L_08842494;
    }
    goto L_08842468;
L_08842468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(296));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x0884248Cu);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884248Cu) goto L_0884248C;
    return;
L_0884248C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842594;
      }
      goto L_08842494;
    }
L_08842494:
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(296));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x088424B4u);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088424B4u) goto L_088424B4;
    return;
L_088424B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842594;
      }
      goto L_088424BC;
    }
L_088424BC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08842504;
      }
      goto L_088424C8;
    }
L_088424C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_08842594;
      }
      goto L_088424D0;
    }
L_088424D0:
    if (static_cast<std::int32_t>(ctx.gpr[20]) > 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
        goto L_08842520;
    }
    goto L_088424D8;
L_088424D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(296));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x088424FCu);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088424FCu) goto L_088424FC;
    return;
L_088424FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842594;
      }
      goto L_08842504;
    }
L_08842504:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08842548;
      }
      goto L_0884250C;
    }
L_0884250C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
        goto L_08842574;
    }
    goto L_08842514;
L_08842514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842594;
      }
      goto L_0884251C;
    }
L_0884251C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    goto L_08842520;
L_08842520:
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(296));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08842540u);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08842540u) goto L_08842540;
    return;
L_08842540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842594;
      }
      goto L_08842548;
    }
L_08842548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(296));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x0884256Cu);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884256Cu) goto L_0884256C;
    return;
L_0884256C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842594;
      }
      goto L_08842574;
    }
L_08842574:
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(296));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08842594u);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08842594u) goto L_08842594;
    return;
L_08842594:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088425A4;
L_088425A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 68u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088425E4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088425E4u) goto L_088425E4;
    return;
L_088425E4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088425A4;
      }
      goto L_088425F8;
    }
L_088425F8:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884241C;
      }
      goto L_08842608;
    }
L_08842608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    goto L_0884260C;
L_0884260C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08842360;
      }
      goto L_08842644;
    }
L_08842644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(160))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088422C0;
      }
      goto L_08842660;
    }
L_08842660:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[31] = (0x0884266Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 586u, 0x08A2EAB4u>(ctx, &aot_mem) && ctx.pc == 0x0884266Cu) goto L_0884266C;
    return;
L_0884266C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088426B0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3660)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3656)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3684)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[3] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(3664), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(3672), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(3668), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3676), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(3680), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(3688), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08842744:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3756)));
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3752)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(9704));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    goto L_08842768;
L_08842768:
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842768;
      }
      goto L_0884278C;
    }
L_0884278C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884279Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8896));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x0884279Cu) goto L_0884279C;
    return;
L_0884279C:
    ctx.gpr[4] = (0u | 3955u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088427B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8888));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088427B4u) goto L_088427B4;
    return;
L_088427B4:
    ctx.gpr[4] = (0u | 3956u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088427CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8880));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088427CCu) goto L_088427CC;
    return;
L_088427CC:
    ctx.gpr[4] = (0u | 3957u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x088427E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8872));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088427E4u) goto L_088427E4;
    return;
L_088427E4:
    ctx.gpr[4] = (0u | 3931u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x088427FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8864));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088427FCu) goto L_088427FC;
    return;
L_088427FC:
    ctx.gpr[4] = (0u | 3959u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08842814u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8856));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08842814u) goto L_08842814;
    return;
L_08842814:
    ctx.gpr[4] = (0u | 3958u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x0884282Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8848));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x0884282Cu) goto L_0884282C;
    return;
L_0884282C:
    ctx.gpr[4] = (0u | 3925u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08842844u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8840));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08842844u) goto L_08842844;
    return;
L_08842844:
    ctx.gpr[4] = (0u | 3945u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x0884285Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8832));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x0884285Cu) goto L_0884285C;
    return;
L_0884285C:
    ctx.gpr[4] = (0u | 3954u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x08842874u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8824));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08842874u) goto L_08842874;
    return;
L_08842874:
    ctx.gpr[4] = (0u | 3927u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x0884288Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8816));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x0884288Cu) goto L_0884288C;
    return;
L_0884288C:
    ctx.gpr[4] = (0u | 3926u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x088428A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8808));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088428A4u) goto L_088428A4;
    return;
L_088428A4:
    ctx.gpr[4] = (0u | 3937u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x088428BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8800));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088428BCu) goto L_088428BC;
    return;
L_088428BC:
    ctx.gpr[4] = (0u | 3915u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x088428D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8792));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088428D4u) goto L_088428D4;
    return;
L_088428D4:
    ctx.gpr[4] = (0u | 3916u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088428EC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(19468), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(19469), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(19470), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 0u);
    goto L_088428FC;
L_088428FC:
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(19472), 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088428FC;
      }
      goto L_08842924;
    }
L_08842924:
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3728), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10280));
    goto L_08842938;
L_08842938:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842938;
      }
      goto L_0884295C;
    }
L_0884295C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08842964:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19224)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 243u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 243u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088429ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x088429ACu) goto L_088429AC;
    return;
L_088429AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 25u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 63u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088429F0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x088429F0u) goto L_088429F0;
    return;
L_088429F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08842A00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842A2C;
      }
      goto L_08842A0C;
    }
L_08842A0C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3736)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08842A2C;
      }
      goto L_08842A20;
    }
L_08842A20:
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(3732), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3736), static_cast<std::uint8_t>(0u));
    goto L_08842A2C;
L_08842A2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08842A34:
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3736)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08842A40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 10u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08842B90;
      }
      goto L_08842A70;
    }
L_08842A70:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2824));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(848)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08842AA4;
      }
      goto L_08842A88;
    }
L_08842A88:
    ctx.gpr[31] = (0x08842A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08842A90u) goto L_08842A90;
    return;
L_08842A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08842AAC;
      }
      goto L_08842A9C;
    }
L_08842A9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842B90;
      }
      goto L_08842AA4;
    }
L_08842AA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842B90;
      }
      goto L_08842AAC;
    }
L_08842AAC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 20 ? 1u : 0u);
      if (branch_taken) {
          goto L_08842ABC;
      }
      goto L_08842AB4;
    }
L_08842AB4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842B90;
      }
      goto L_08842ABC;
    }
L_08842ABC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10280));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842AE8;
      }
      goto L_08842AE0;
    }
L_08842AE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08842AF0;
      }
      goto L_08842AE8;
    }
L_08842AE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842B90;
      }
      goto L_08842AF0;
    }
L_08842AF0:
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19472)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842B14;
      }
      goto L_08842B0C;
    }
L_08842B0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08842B20;
      }
      goto L_08842B14;
    }
L_08842B14:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19472)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08842B3C;
      }
      goto L_08842B20;
    }
L_08842B20:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842AF0;
      }
      goto L_08842B34;
    }
L_08842B34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842B54;
      }
      goto L_08842B3C;
    }
L_08842B3C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(19488));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(19504), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842B90;
      }
      goto L_08842B54;
    }
L_08842B54:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842B90;
      }
      goto L_08842B60;
    }
L_08842B60:
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19472), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(19488));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(19504), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08842B90;
L_08842B90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08842BAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08842C4C;
      }
      goto L_08842BC8;
    }
L_08842BC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[17] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08842C00;
      }
      goto L_08842BD8;
    }
L_08842BD8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08842BE4u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 360u, 0x088B60A0u>(ctx, &aot_mem) && ctx.pc == 0x08842BE4u) goto L_08842BE4;
    return;
L_08842BE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842C20;
      }
      goto L_08842BEC;
    }
L_08842BEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08842BF8u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08842BF8u) goto L_08842BF8;
    return;
L_08842BF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842C20;
      }
      goto L_08842C00;
    }
L_08842C00:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08842C0Cu);
    ctx.gpr[5] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 360u, 0x088B60A0u>(ctx, &aot_mem) && ctx.pc == 0x08842C0Cu) goto L_08842C0C;
    return;
L_08842C0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842C20;
      }
      goto L_08842C14;
    }
L_08842C14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08842C20u);
    ctx.gpr[5] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08842C20u) goto L_08842C20;
    return;
L_08842C20:
    ctx.gpr[31] = (0x08842C28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088428EC;
L_08842C28:
    ctx.gpr[4] = (0u | 5662u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3740), ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3744), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3748), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3749), static_cast<std::uint8_t>(0u));
    goto L_08842C4C;
L_08842C4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08842C60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088431A8;
      }
      goto L_08842C88;
    }
L_08842C88:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2824));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(848)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08842CC4;
      }
      goto L_08842CA0;
    }
L_08842CA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[18] = (0u | 60u);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08842CCC;
      }
      goto L_08842CBC;
    }
L_08842CBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088431A8;
      }
      goto L_08842CC4;
    }
L_08842CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088431A8;
      }
      goto L_08842CCC;
    }
L_08842CCC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[31] = (0x08842CF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(13820)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 382u, 0x08872420u>(ctx, &aot_mem) && ctx.pc == 0x08842CF4u) goto L_08842CF4;
    return;
L_08842CF4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 36 ? 1u : 0u);
      if (branch_taken) {
          goto L_088431A8;
      }
      goto L_08842D00;
    }
L_08842D00:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088431A8;
      }
      goto L_08842D08;
    }
L_08842D08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(9704));
    goto L_08842D3C;
L_08842D3C:
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08842D6C;
      }
      goto L_08842D5C;
    }
L_08842D5C:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08842D6C;
      }
      goto L_08842D64;
    }
L_08842D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08842D80;
      }
      goto L_08842D6C;
    }
L_08842D6C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842D3C;
      }
      goto L_08842D80;
    }
L_08842D80:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088431A8;
      }
      goto L_08842D88;
    }
L_08842D88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842DD0;
      }
      goto L_08842DA0;
    }
L_08842DA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19469)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 248u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19228), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19469), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08842DD0;
L_08842DD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842E18;
      }
      goto L_08842DE8;
    }
L_08842DE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19469)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 250u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19228), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19469), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08842E18;
L_08842E18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842E60;
      }
      goto L_08842E30;
    }
L_08842E30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19469)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 246u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19228), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19469), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08842E60;
L_08842E60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
        goto L_08842EAC;
    }
    goto L_08842E78;
L_08842E78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19469)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 204u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19228), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19469), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    goto L_08842EAC;
L_08842EAC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[13] + ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
      if (branch_taken) {
          goto L_08842F4C;
      }
      goto L_08842EFC;
    }
L_08842EFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842F44;
      }
      goto L_08842F14;
    }
L_08842F14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19469)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 229u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19228), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19469), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08842F44;
L_08842F44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08842FB0;
      }
      goto L_08842F4C;
    }
L_08842F4C:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08842FB0;
      }
      goto L_08842F64;
    }
L_08842F64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08842FAC;
      }
      goto L_08842F7C;
    }
L_08842F7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19469)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 283u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19228), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19469), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08842FAC;
L_08842FAC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08842FB0;
L_08842FB0:
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08843014;
      }
      goto L_08842FC8;
    }
L_08842FC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088430C8;
      }
      goto L_08842FE0;
    }
L_08842FE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19469)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 163u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19228), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19469), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088430C8;
      }
      goto L_08843014;
    }
L_08843014:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08843078;
      }
      goto L_0884302C;
    }
L_0884302C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088430C8;
      }
      goto L_08843044;
    }
L_08843044:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19469)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 310u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19228), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19469), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088430C8;
      }
      goto L_08843078;
    }
L_08843078:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088430C8;
      }
      goto L_08843080;
    }
L_08843080:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088430C8;
      }
      goto L_08843098;
    }
L_08843098:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19469)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19228), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19469), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088430C8;
L_088430C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884310C;
      }
      goto L_088430E0;
    }
L_088430E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19469)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19228), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19469), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0884310C;
L_0884310C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08843154;
      }
      goto L_08843124;
    }
L_08843124:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19469)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 248u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19228), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19469), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08843154;
L_08843154:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884319C;
      }
      goto L_0884316C;
    }
L_0884316C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19469)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 5662u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19468)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(19228), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19469), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0884319C;
L_0884319C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3728), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088431A8;
L_088431A8:
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
L_088431C4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3700)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3696)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[11] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(3704), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(3712), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(3708), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(3716), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(3720), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884323C:
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
L_08843268:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3828)));
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3828), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08843284;
      }
      goto L_08843280;
    }
L_08843280:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3828), 0u);
    goto L_08843284;
L_08843284:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884328C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3824)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088432A4;
      }
      goto L_0884329C;
    }
L_0884329C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088432A4;
      }
      goto L_088432A4;
    }
L_088432A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088432AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088432BCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 21u, 0x0884415Cu>(ctx, &aot_mem) && ctx.pc == 0x088432BCu) goto L_088432BC;
    return;
L_088432BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088432C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 67 ? 1u : 0u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3812)));
      if (branch_taken) {
          goto L_0884337C;
      }
      goto L_088432E4;
    }
L_088432E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0884337C;
      }
      goto L_088432EC;
    }
L_088432EC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.gpr[7] = (0u | 255u);
      if (branch_taken) {
          goto L_08843300;
      }
      goto L_088432F4;
    }
L_088432F4:
    ctx.gpr[2] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08843348;
      }
      goto L_08843300;
    }
L_08843300:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08843334;
      }
      goto L_08843308;
    }
L_08843308:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6272));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884332C;
      }
      goto L_08843324;
    }
L_08843324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884337C;
      }
      goto L_0884332C;
    }
L_0884332C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884337C;
      }
      goto L_08843334;
    }
L_08843334:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08843340u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8736));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08843340u) goto L_08843340;
    return;
L_08843340:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884337C;
      }
      goto L_08843348;
    }
L_08843348:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08843368;
      }
      goto L_08843350;
    }
L_08843350:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08843360;
      }
      goto L_08843358;
    }
L_08843358:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884337C;
      }
      goto L_08843360;
    }
L_08843360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884337C;
      }
      goto L_08843368;
    }
L_08843368:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08843374u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8736));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08843374u) goto L_08843374;
    return;
L_08843374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884337C;
      }
      goto L_0884337C;
    }
L_0884337C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843388:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3808)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08843418;
      }
      goto L_088433A8;
    }
L_088433A8:
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(3812)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3832)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[9] & ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08843410;
      }
      goto L_088433C8;
    }
L_088433C8:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 314 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5515 ? 1u : 0u);
      if (branch_taken) {
          goto L_08843408;
      }
      goto L_088433D4;
    }
L_088433D4:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843408;
      }
      goto L_088433DC;
    }
L_088433DC:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(3832), ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(3836), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(3812), ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(3816), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3840), ctx.gpr[4]);
    ctx.gpr[31] = (0x08843408u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08843D90;
L_08843408:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0884341C;
      }
      goto L_08843410;
    }
L_08843410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884341C;
      }
      goto L_08843418;
    }
L_08843418:
    ctx.gpr[2] = (0u | 0u);
    goto L_0884341C;
L_0884341C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843428:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6272));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] << 24u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 24u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3808)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08843590;
      }
      goto L_0884345C;
    }
L_0884345C:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3812)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08843588;
      }
      goto L_08843470;
    }
L_08843470:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 67 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843580;
      }
      goto L_0884347C;
    }
L_0884347C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08843580;
      }
      goto L_08843484;
    }
L_08843484:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6272));
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08843578;
      }
      goto L_0884349C;
    }
L_0884349C:
    ctx.gpr[9] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_088434BC;
      }
      goto L_088434A8;
    }
L_088434A8:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 40 ? 1u : 0u);
      if (branch_taken) {
          goto L_088434D4;
      }
      goto L_088434B4;
    }
L_088434B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843500;
      }
      goto L_088434BC;
    }
L_088434BC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x088434CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8696));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x088434CCu) goto L_088434CC;
    return;
L_088434CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08843594;
      }
      goto L_088434D4;
    }
L_088434D4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843500;
      }
      goto L_088434DC;
    }
L_088434DC:
    ctx.gpr[7] = (0u | 4u);
    goto L_088434E0;
L_088434E0:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088434E0;
      }
      goto L_088434F8;
    }
L_088434F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843564;
      }
      goto L_08843500;
    }
L_08843500:
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 61 ? 1u : 0u);
      if (branch_taken) {
          goto L_08843514;
      }
      goto L_0884350C;
    }
L_0884350C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08843524;
      }
      goto L_08843514;
    }
L_08843514:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884352C;
      }
      goto L_0884351C;
    }
L_0884351C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843564;
      }
      goto L_08843524;
    }
L_08843524:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08843594;
      }
      goto L_0884352C;
    }
L_0884352C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843564;
      }
      goto L_08843534;
    }
L_08843534:
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(3856)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08843554;
      }
      goto L_08843544;
    }
L_08843544:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884355C;
      }
      goto L_0884354C;
    }
L_0884354C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843564;
      }
      goto L_08843554;
    }
L_08843554:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08843594;
      }
      goto L_0884355C;
    }
L_0884355C:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08843564;
L_08843564:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(3812), ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3816), ctx.gpr[4]);
    ctx.gpr[31] = (0x08843578u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08843D90;
L_08843578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08843594;
      }
      goto L_08843580;
    }
L_08843580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843594;
      }
      goto L_08843588;
    }
L_08843588:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08843594;
      }
      goto L_08843590;
    }
L_08843590:
    ctx.gpr[2] = (0u | 0u);
    goto L_08843594;
L_08843594:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088435A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3824)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3868));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_088435F8;
L_088435F8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[29] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088435F8;
      }
      goto L_08843614;
    }
L_08843614:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843624:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884362C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[31]);
    ctx.gpr[31] = (0x08843688u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8668));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08843688u) goto L_08843688;
    return;
L_08843688:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088436A0;
      }
      goto L_08843694;
    }
L_08843694:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088436A0u);
    ctx.gpr[5] = (0u | 99u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 102u, 0x088BC5B4u>(ctx, &aot_mem) && ctx.pc == 0x088436A0u) goto L_088436A0;
    return;
L_088436A0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08843818;
      }
      goto L_088436B4;
    }
L_088436B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088437FC;
      }
      goto L_088436C4;
    }
L_088436C4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5080), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088436DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8664));
    goto L_0884323C;
L_088436DC:
    ctx.gpr[17] = (0u | 0u);
    goto L_088436E0;
L_088436E0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088436F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8620));
    goto L_0884323C;
L_088436F0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08843730;
      }
      goto L_088436F8;
    }
L_088436F8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4136));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08843728u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8600));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08843728u) goto L_08843728;
    return;
L_08843728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843760;
      }
      goto L_08843730;
    }
L_08843730:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4136));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08843760u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8584));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08843760u) goto L_08843760;
    return;
L_08843760:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5088));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08843780u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 217u, 0x088B9240u>(ctx, &aot_mem) && ctx.pc == 0x08843780u) goto L_08843780;
    return;
L_08843780:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088437A0;
      }
      goto L_08843788;
    }
L_08843788:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08843798u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8564));
    goto L_0884323C;
L_08843798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088437EC;
      }
      goto L_088437A0;
    }
L_088437A0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8536));
    ctx.gpr[31] = (0x088437C0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8528));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x088437C0u) goto L_088437C0;
    return;
L_088437C0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088437D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8504));
    goto L_0884323C;
L_088437D0:
    ctx.gpr[31] = (0x088437D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 432u, 0x08AC6FE4u>(ctx, &aot_mem) && ctx.pc == 0x088437D8u) goto L_088437D8;
    return;
L_088437D8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5084));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_088437EC;
L_088437EC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088436E0;
      }
      goto L_088437FC;
    }
L_088437FC:
    ctx.gpr[31] = (0x08843804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 340u, 0x08A8A334u>(ctx, &aot_mem) && ctx.pc == 0x08843804u) goto L_08843804;
    return;
L_08843804:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08843810u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5088)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 408u, 0x08A8A7D0u>(ctx, &aot_mem) && ctx.pc == 0x08843810u) goto L_08843810;
    return;
L_08843810:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884384C;
      }
      goto L_08843818;
    }
L_08843818:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4136));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8492));
    ctx.gpr[31] = (0x0884384Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8528));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0884384Cu) goto L_0884384C;
    return;
L_0884384C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7608));
    ctx.gpr[31] = (0x08843868u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8472));
    goto L_0884362C;
L_08843868:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08843878u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8456));
    goto L_0884323C;
L_08843878:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088438D8;
      }
      goto L_08843884;
    }
L_08843884:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088438A4;
      }
      goto L_08843898;
    }
L_08843898:
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5084)));
      if (branch_taken) {
          goto L_088438FC;
      }
      goto L_088438A4;
    }
L_088438A4:
    ctx.gpr[31] = (0x088438ACu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 432u, 0x08AC6FE4u>(ctx, &aot_mem) && ctx.pc == 0x088438ACu) goto L_088438AC;
    return;
L_088438AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088438C8;
      }
      goto L_088438B8;
    }
L_088438B8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088438C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8432));
    goto L_0884323C;
L_088438C8:
    ctx.gpr[31] = (0x088438D0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 93u, 0x088BC534u>(ctx, &aot_mem) && ctx.pc == 0x088438D0u) goto L_088438D0;
    return;
L_088438D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088438FC;
      }
      goto L_088438D8;
    }
L_088438D8:
    ctx.gpr[31] = (0x088438E0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 432u, 0x08AC6FE4u>(ctx, &aot_mem) && ctx.pc == 0x088438E0u) goto L_088438E0;
    return;
L_088438E0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088438FC;
      }
      goto L_088438EC;
    }
L_088438EC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088438FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8384));
    goto L_0884323C;
L_088438FC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08843A28;
      }
      goto L_08843910;
    }
L_08843910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3836)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3824)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3868));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7608));
    ctx.gpr[31] = (0x08843968u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8336));
    goto L_0884362C;
L_08843968:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08843978u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 440u, 0x08AC7074u>(ctx, &aot_mem) && ctx.pc == 0x08843978u) goto L_08843978;
    return;
L_08843978:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3840)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0884399C;
      }
      goto L_08843988;
    }
L_08843988:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3840)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088439A4;
      }
      goto L_0884399C;
    }
L_0884399C:
    ctx.gpr[4] = (0u | 50u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    goto L_088439A4;
L_088439A4:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3836)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(3868));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3824)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088439F0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 456u, 0x08AC71D4u>(ctx, &aot_mem) && ctx.pc == 0x088439F0u) goto L_088439F0;
    return;
L_088439F0:
    ctx.gpr[31] = (0x088439F8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 476u, 0x08AC738Cu>(ctx, &aot_mem) && ctx.pc == 0x088439F8u) goto L_088439F8;
    return;
L_088439F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3824)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08843A18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 79u, 0x08A28A38u>(ctx, &aot_mem) && ctx.pc == 0x08843A18u) goto L_08843A18;
    return;
L_08843A18:
    ctx.gpr[31] = (0x08843A20u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 93u, 0x088BC534u>(ctx, &aot_mem) && ctx.pc == 0x08843A20u) goto L_08843A20;
    return;
L_08843A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843AA8;
      }
      goto L_08843A28;
    }
L_08843A28:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(3868));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7608));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08843A5Cu);
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8292));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 444u, 0x08AC70DCu>(ctx, &aot_mem) && ctx.pc == 0x08843A5Cu) goto L_08843A5C;
    return;
L_08843A5C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08843A70u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_0884362C;
L_08843A70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08843A88u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 444u, 0x08AC70DCu>(ctx, &aot_mem) && ctx.pc == 0x08843A88u) goto L_08843A88;
    return;
L_08843A88:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08843A98u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC716Cu>(ctx, &aot_mem) && ctx.pc == 0x08843A98u) goto L_08843A98;
    return;
L_08843A98:
    ctx.gpr[31] = (0x08843AA0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 79u, 0x08A28A38u>(ctx, &aot_mem) && ctx.pc == 0x08843AA0u) goto L_08843AA0;
    return;
L_08843AA0:
    ctx.gpr[31] = (0x08843AA8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 93u, 0x088BC534u>(ctx, &aot_mem) && ctx.pc == 0x08843AA8u) goto L_08843AA8;
    return;
L_08843AA8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08843AC4;
      }
      goto L_08843ABC;
    }
L_08843ABC:
    ctx.gpr[31] = (0x08843AC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 436u, 0x08AC702Cu>(ctx, &aot_mem) && ctx.pc == 0x08843AC4u) goto L_08843AC4;
    return;
L_08843AC4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08843B10;
      }
      goto L_08843AD8;
    }
L_08843AD8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8256));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3836)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7608));
    ctx.gpr[31] = (0x08843AFCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-439));
    goto L_0884362C;
L_08843AFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3836)));
    ctx.gpr[31] = (0x08843B08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0884323C;
L_08843B08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843B3C;
      }
      goto L_08843B10;
    }
L_08843B10:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8232));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08843B30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7608));
    goto L_0884362C;
L_08843B30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[31] = (0x08843B3Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0884323C;
L_08843B3C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08843B8C;
      }
      goto L_08843B50;
    }
L_08843B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08843B8C;
      }
      goto L_08843B60;
    }
L_08843B60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3820)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3520));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3820), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08843CEC;
      }
      goto L_08843B8C;
    }
L_08843B8C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08843CA0;
      }
      goto L_08843BA0;
    }
L_08843BA0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3840)));
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08843BD8;
      }
      goto L_08843BB4;
    }
L_08843BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3836)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6200));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08843C88;
      }
      goto L_08843BD8;
    }
L_08843BD8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3840)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08843C88;
      }
      goto L_08843BEC;
    }
L_08843BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3840)));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08843C50;
      }
      goto L_08843BFC;
    }
L_08843BFC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08843C64;
      }
      goto L_08843C04;
    }
L_08843C04:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08843C78;
      }
      goto L_08843C0C;
    }
L_08843C0C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3840)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3832)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7600));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08843C48;
      }
      goto L_08843C3C;
    }
L_08843C3C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08843C48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8216));
    goto L_0884323C;
L_08843C48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843C88;
      }
      goto L_08843C50;
    }
L_08843C50:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3832)));
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3844), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08843C88;
      }
      goto L_08843C64;
    }
L_08843C64:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3832)));
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3848), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08843C88;
      }
      goto L_08843C78;
    }
L_08843C78:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3832)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3852), ctx.gpr[4]);
    goto L_08843C88;
L_08843C88:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3836), ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3832), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08843CEC;
      }
      goto L_08843CA0;
    }
L_08843CA0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08843CEC;
      }
      goto L_08843CB4;
    }
L_08843CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 67 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843CEC;
      }
      goto L_08843CC4;
    }
L_08843CC4:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7608));
    ctx.gpr[31] = (0x08843CE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8188));
    goto L_0884362C;
L_08843CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3856), ctx.gpr[4]);
    goto L_08843CEC;
L_08843CEC:
    ctx.gpr[31] = (0x08843CF4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 93u, 0x088BC534u>(ctx, &aot_mem) && ctx.pc == 0x08843CF4u) goto L_08843CF4;
    return;
L_08843CF4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3812), ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[8] = (2269u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-6272));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(3816), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843D4C;
      }
      goto L_08843D2C;
    }
L_08843D2C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5076), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08843D44u);
    ctx.gpr[5] = (0u | 99u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 103u, 0x088BC5BCu>(ctx, &aot_mem) && ctx.pc == 0x08843D44u) goto L_08843D44;
    return;
L_08843D44:
    ctx.gpr[31] = (0x08843D4Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BBA4u;
    return;
L_08843D4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843D64;
      }
      goto L_08843D58;
    }
L_08843D58:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08843D64u);
    ctx.gpr[5] = (0u | 99u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 103u, 0x088BC5BCu>(ctx, &aot_mem) && ctx.pc == 0x08843D64u) goto L_08843D64;
    return;
L_08843D64:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843D90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08843DD0;
      }
      goto L_08843DC0;
    }
L_08843DC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5076)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08843DF8;
      }
      goto L_08843DD0;
    }
L_08843DD0:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 67 ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-7608));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08843E08;
      }
      goto L_08843DF0;
    }
L_08843DF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843E00;
      }
      goto L_08843DF8;
    }
L_08843DF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 20u, 0x08844134u>(ctx, &aot_mem); return;
      }
      goto L_08843E00;
    }
L_08843E00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08843E40;
      }
      goto L_08843E08;
    }
L_08843E08:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08843E18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8160));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08843E18u) goto L_08843E18;
    return;
L_08843E18:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[7] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3812), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6272));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3816), ctx.gpr[4]);
    goto L_08843E40;
L_08843E40:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08843E70;
      }
      goto L_08843E48;
    }
L_08843E48:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3836)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-439));
    ctx.gpr[31] = (0x08843E64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8128));
    goto L_0884362C;
L_08843E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3816)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 40 ? 1u : 0u);
      if (branch_taken) {
          goto L_08843E8C;
      }
      goto L_08843E70;
    }
L_08843E70:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08843E84u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8092));
    goto L_0884362C;
L_08843E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 40 ? 1u : 0u);
    goto L_08843E8C;
L_08843E8C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 61 ? 1u : 0u);
      if (branch_taken) {
          goto L_08843ED0;
      }
      goto L_08843E94;
    }
L_08843E94:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843ED0;
      }
      goto L_08843E9C;
    }
L_08843E9C:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3820)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 6u, 0x08844070u>(ctx, &aot_mem); return;
      }
      goto L_08843EB0;
    }
L_08843EB0:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3868));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3804)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 6u, 0x08844070u>(ctx, &aot_mem); return;
      }
      goto L_08843ED0;
    }
L_08843ED0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 6u, 0x08844070u>(ctx, &aot_mem); return;
      }
      goto L_08843ED8;
    }
L_08843ED8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3840)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 255u);
      if (branch_taken) {
          goto L_08843F20;
      }
      goto L_08843EEC;
    }
L_08843EEC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[20] = (2227u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 6u, 0x08844070u>(ctx, &aot_mem); return;
      }
      goto L_08843EF4;
    }
L_08843EF4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(3868));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08843F7C;
      }
      goto L_08843F00;
    }
L_08843F00:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08843FB4;
      }
      goto L_08843F08;
    }
L_08843F08:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08843FEC;
      }
      goto L_08843F10;
    }
L_08843F10:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 2u, 0x08844018u>(ctx, &aot_mem); return;
      }
      goto L_08843F18;
    }
L_08843F18:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 4u, 0x08844048u>(ctx, &aot_mem); return;
      }
      goto L_08843F20;
    }
L_08843F20:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 6u, 0x08844070u>(ctx, &aot_mem); return;
      }
      goto L_08843F28;
    }
L_08843F28:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3828)));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] << 11u);
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 1u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24704));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3868));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6168));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 6u, 0x08844070u>(ctx, &aot_mem); return;
      }
      goto L_08843F7C;
    }
L_08843F7C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8072));
    ctx.gpr[31] = (0x08843F8Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_0884323C;
L_08843F8C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08843F98u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_0884362C;
L_08843F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[5] = (2239u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1920));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 6u, 0x08844070u>(ctx, &aot_mem); return;
      }
      goto L_08843FB4;
    }
L_08843FB4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8036));
    ctx.gpr[31] = (0x08843FC4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_0884323C;
L_08843FC4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08843FD0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_0884362C;
L_08843FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16512));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 6u, 0x08844070u>(ctx, &aot_mem); return;
      }
      goto L_08843FEC;
    }
L_08843FEC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08843FFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8000));
    goto L_0884362C;
L_08843FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3816)));
    ctx.pc = 0x08844000u; return;
}

void recomp_unit_0015(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0015_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_15(Runtime &runtime) {
    runtime.register_generated_unit(15u, 0x08840000u, 16384u, &recomp_unit_0015, &recomp_unit_0015_entry);
    runtime.register_function(0x08840000u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840020u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884003Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840050u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840078u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840090u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840110u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840130u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088401C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088401D4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088401E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088401E8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840214u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840224u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884022Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840234u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884023Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088402DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088402F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884030Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840334u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884034Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840364u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088403CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088403E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088403ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088403F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840418u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840428u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840438u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840444u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884044Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840458u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840460u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884048Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884049Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088404A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088404ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088404B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840554u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840570u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840584u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088405ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088405C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088405DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840644u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884065Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840664u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840668u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840690u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088406A0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088406ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088406B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088406E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088406F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088406F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840700u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840708u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088407F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884080Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840824u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840850u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840884u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088408A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088408C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840928u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840944u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884094Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840950u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840978u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884098Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088409D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088409E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088409ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088409F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A30u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A38u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A40u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840AE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840AF0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840AF8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B08u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B54u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B70u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B88u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840BA4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840BC0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840BE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840BF4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C0Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C24u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C54u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C70u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840CACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840CC4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840CDCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D5Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D68u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D90u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840DA4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840DB8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E2Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E50u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E7Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E8Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E94u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E9Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840EA4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F60u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F7Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F8Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840FA8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840FCCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840FDCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840FF8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884101Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841028u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841058u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841074u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841088u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088410B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088410C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088410E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841148u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841160u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841168u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884116Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841194u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088411A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088411B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088411C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088411CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088411D4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088411DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088411E8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088411F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841228u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088412BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884130Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841320u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841330u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841334u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841354u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841360u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841370u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088413A0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088413E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088413E8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088413F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088413F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884140Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841444u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841468u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841478u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841480u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841498u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088414A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088414ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088414C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088414FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884153Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841554u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884158Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088415CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841614u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088416A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088416D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088416E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884177Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088417A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088417C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088417ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088417F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841800u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841814u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841820u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841830u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841838u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841840u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884184Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088418A0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088418ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088418B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088418C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088418C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088418E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884192Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884193Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841944u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884194Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841950u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841960u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884197Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884198Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841994u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884199Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088419A0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088419C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088419D4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A34u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841AC4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841AE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841AECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841AF4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B1Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B2Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B30u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B70u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B7Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B8Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B98u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BA8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BB0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BB8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BC0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BCCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BDCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BE8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BF0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BF8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BFCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C04u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C34u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C88u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C94u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C9Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841CA4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841CACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841CB8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841CC8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841CDCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841CECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D0Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D1Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D24u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D34u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D60u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D68u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D70u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D78u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D9Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841DA8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841DD0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841DE8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841DF4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E0Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E24u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E30u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E50u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E74u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E78u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E80u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841F08u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841F10u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841F24u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841F2Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841F38u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841F78u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841FD4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841FDCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841FE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841FF0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842014u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842028u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842030u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842054u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842068u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842084u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842140u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842210u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842218u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842220u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842284u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884229Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422D4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842300u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884231Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842330u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842360u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884236Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842384u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884238Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423E8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842410u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884241Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842454u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842460u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842468u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884248Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842494u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842504u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884250Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842514u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884251Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842520u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842540u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842548u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884256Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842574u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842594u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088425A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088425E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088425F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842608u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884260Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842644u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842660u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884266Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088426B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842744u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842768u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884278Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884279Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088427B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088427CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088427E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088427FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842814u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884282Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842844u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884285Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842874u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884288Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088428A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088428BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088428D4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088428ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088428FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842924u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842938u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884295Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842964u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088429ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088429F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A0Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A2Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A34u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A40u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A70u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A88u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A90u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A9Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842AA4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842AACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842AB4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842ABCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842AE0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842AE8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842AF0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842B0Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842B14u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842B20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842B34u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842B3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842B54u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842B60u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842B90u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842BACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842BC8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842BD8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842BE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842BECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842BF8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C0Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C14u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C28u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C4Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C60u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C88u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842CA0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842CBCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842CC4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842CCCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842CF4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D08u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D5Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D6Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D80u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D88u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842DA0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842DD0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842DE8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E18u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E30u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E60u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E78u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842EACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842EFCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F14u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F4Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F7Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842FACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842FB0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842FC8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842FE0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843014u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884302Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843044u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843078u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843080u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843098u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088430C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088430E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884310Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843124u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843154u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884316Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884319Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088431A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088431C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884323Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843268u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843280u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843284u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884328Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884329Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843300u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843308u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843324u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884332Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843334u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843340u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843348u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843350u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843358u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843360u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843368u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843374u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884337Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843388u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088433A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088433C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088433D4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088433DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843408u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843410u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843418u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884341Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843428u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843444u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884345Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843470u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884347Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843484u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884349Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434D4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843500u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884350Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843514u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884351Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843524u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884352Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843534u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843544u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884354Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843554u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884355Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843564u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843578u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843580u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843588u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843590u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843594u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088435A0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088435F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843614u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843624u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884362Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843650u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843688u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843694u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436A0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843728u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843730u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843760u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843780u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843788u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843798u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437A0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843804u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843810u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843818u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884384Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843868u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843878u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843884u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843898u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843910u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843968u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843978u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843988u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884399Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088439A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088439F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088439F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A18u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A28u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A5Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A70u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A88u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A98u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843AA0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843AA8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843ABCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843AC4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843AD8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843AFCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B08u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B10u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B30u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B50u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B60u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B8Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BA0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BB4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BD8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BFCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C04u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C0Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C50u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C78u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C88u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CA0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CB4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CC4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CE0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CF4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D2Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D4Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D58u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D90u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843DC0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843DD0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843DF0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843DF8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E08u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E18u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E40u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E70u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E8Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E94u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E9Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843EB0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843ED0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843ED8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843EECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843EF4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F08u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F10u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F18u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F28u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F7Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F8Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F98u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843FB4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843FC4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843FD0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843FECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843FFCu, &recomp_unit_0015, "recomp_unit_0015");
}
} // namespace psprecomp
