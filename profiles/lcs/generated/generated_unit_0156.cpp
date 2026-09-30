#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0156[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0,
    7, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 0,
    0, 17, 0, 18, 0, 0, 0, 19, 20, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 0,
    29, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0,
    0, 0, 36, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 47, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 52, 53, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 0,
    0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0,
    110, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 123, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 160, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 181,
    0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0,
    0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198,
    0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206,
    0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0,
    0, 231, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 238,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0,
    244, 0, 245, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 252, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 269, 0, 0, 270, 0, 271, 0, 0, 272, 0, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 275, 0, 276, 0, 277, 0, 0, 0, 278, 0, 279, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0,
    0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291,
    0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0,
    0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0,
    311, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0,
    317, 0, 0, 0, 318, 0, 319, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 323, 0, 0, 0, 0, 324, 0, 325, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0,
    0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0,
    0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0,
    0, 342, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 347, 0, 348, 0, 0, 0, 349, 0, 0,
    0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 356, 0,
    0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361,
    0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0,
    367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0,
    0, 373, 0, 374, 0, 375, 0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381,
    0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0,
    0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0,
    395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 442, 0,
    0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 447, 0, 0, 448, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0,
    456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 459, 0, 460, 0, 461, 0, 462, 0, 0, 463, 0, 464, 0, 0, 465, 0, 466, 0, 0, 467, 0, 0, 468, 0, 469, 470, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0,
    0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 479, 0, 480, 0, 0, 481, 0,
    482, 0, 0, 483, 0, 484, 0, 0, 485, 0, 0, 486, 0, 487, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 489, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 494, 0, 0, 495, 0, 496, 0, 0, 497, 0, 0, 498, 0, 499, 500, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 0,
    504, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 508, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0,
    0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0,
    0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 0,
    0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0,
    531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 0, 538, 0,
    0, 0, 539, 0, 0, 0, 0, 540, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 544, 0, 545, 0, 546, 0, 0, 0, 0,
    0, 0, 547, 0, 0, 0, 0, 548, 0, 549, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0,
    0, 0, 0, 562, 0, 0, 563, 564, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0,
    568, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 575,
    0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 582, 0, 0, 0,
    583, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0,
    0, 0, 0, 588, 0, 589, 0, 0, 590, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592,
};
void recomp_unit_0156_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A74000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0156[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A74000;
    case 2u: goto L_08A74024;
    case 3u: goto L_08A74040;
    case 4u: goto L_08A74050;
    case 5u: goto L_08A74060;
    case 6u: goto L_08A74074;
    case 7u: goto L_08A74080;
    case 8u: goto L_08A7408C;
    case 9u: goto L_08A74094;
    case 10u: goto L_08A740AC;
    case 11u: goto L_08A740B8;
    case 12u: goto L_08A740C8;
    case 13u: goto L_08A740D0;
    case 14u: goto L_08A740E0;
    case 15u: goto L_08A740E8;
    case 16u: goto L_08A740F4;
    case 17u: goto L_08A74104;
    case 18u: goto L_08A7410C;
    case 19u: goto L_08A7411C;
    case 20u: goto L_08A74120;
    case 21u: goto L_08A7412C;
    case 22u: goto L_08A7413C;
    case 23u: goto L_08A74144;
    case 24u: goto L_08A74154;
    case 25u: goto L_08A7415C;
    case 26u: goto L_08A74164;
    case 27u: goto L_08A7416C;
    case 28u: goto L_08A74174;
    case 29u: goto L_08A74180;
    case 30u: goto L_08A74194;
    case 31u: goto L_08A741A4;
    case 32u: goto L_08A741C0;
    case 33u: goto L_08A741D0;
    case 34u: goto L_08A741E8;
    case 35u: goto L_08A741F0;
    case 36u: goto L_08A74208;
    case 37u: goto L_08A74214;
    case 38u: goto L_08A7421C;
    case 39u: goto L_08A74260;
    case 40u: goto L_08A74268;
    case 41u: goto L_08A74278;
    case 42u: goto L_08A74294;
    case 43u: goto L_08A742A4;
    case 44u: goto L_08A742AC;
    case 45u: goto L_08A742B4;
    case 46u: goto L_08A742BC;
    case 47u: goto L_08A742C8;
    case 48u: goto L_08A742CC;
    case 49u: goto L_08A74340;
    case 50u: goto L_08A74348;
    case 51u: goto L_08A74358;
    case 52u: goto L_08A74360;
    case 53u: goto L_08A74364;
    case 54u: goto L_08A743A0;
    case 55u: goto L_08A74410;
    case 56u: goto L_08A7442C;
    case 57u: goto L_08A74458;
    case 58u: goto L_08A74464;
    case 59u: goto L_08A7446C;
    case 60u: goto L_08A74484;
    case 61u: goto L_08A7448C;
    case 62u: goto L_08A74494;
    case 63u: goto L_08A744DC;
    case 64u: goto L_08A744F0;
    case 65u: goto L_08A744FC;
    case 66u: goto L_08A7450C;
    case 67u: goto L_08A74524;
    case 68u: goto L_08A74558;
    case 69u: goto L_08A7456C;
    case 70u: goto L_08A745B4;
    case 71u: goto L_08A745BC;
    case 72u: goto L_08A745F0;
    case 73u: goto L_08A74604;
    case 74u: goto L_08A74664;
    case 75u: goto L_08A74698;
    case 76u: goto L_08A746AC;
    case 77u: goto L_08A74708;
    case 78u: goto L_08A74728;
    case 79u: goto L_08A74790;
    case 80u: goto L_08A747C4;
    case 81u: goto L_08A747D8;
    case 82u: goto L_08A74820;
    case 83u: goto L_08A74854;
    case 84u: goto L_08A74868;
    case 85u: goto L_08A748C4;
    case 86u: goto L_08A748F8;
    case 87u: goto L_08A74954;
    case 88u: goto L_08A74988;
    case 89u: goto L_08A749E8;
    case 90u: goto L_08A74A1C;
    case 91u: goto L_08A74A30;
    case 92u: goto L_08A74A8C;
    case 93u: goto L_08A74AC0;
    case 94u: goto L_08A74B20;
    case 95u: goto L_08A74B54;
    case 96u: goto L_08A74B68;
    case 97u: goto L_08A74BC4;
    case 98u: goto L_08A74C04;
    case 99u: goto L_08A74C18;
    case 100u: goto L_08A74C28;
    case 101u: goto L_08A74C34;
    case 102u: goto L_08A74C98;
    case 103u: goto L_08A74CCC;
    case 104u: goto L_08A74CE0;
    case 105u: goto L_08A74D40;
    case 106u: goto L_08A74D74;
    case 107u: goto L_08A74D88;
    case 108u: goto L_08A74DE8;
    case 109u: goto L_08A74DF4;
    case 110u: goto L_08A74E00;
    case 111u: goto L_08A74E08;
    case 112u: goto L_08A74E14;
    case 113u: goto L_08A74E38;
    case 114u: goto L_08A74E5C;
    case 115u: goto L_08A74EA8;
    case 116u: goto L_08A74EB4;
    case 117u: goto L_08A74EBC;
    case 118u: goto L_08A74EC8;
    case 119u: goto L_08A74EEC;
    case 120u: goto L_08A74F4C;
    case 121u: goto L_08A74F58;
    case 122u: goto L_08A74F60;
    case 123u: goto L_08A74F6C;
    case 124u: goto L_08A74F90;
    case 125u: goto L_08A74FF4;
    case 126u: goto L_08A75010;
    case 127u: goto L_08A7501C;
    case 128u: goto L_08A7502C;
    case 129u: goto L_08A7503C;
    case 130u: goto L_08A75054;
    case 131u: goto L_08A75088;
    case 132u: goto L_08A75098;
    case 133u: goto L_08A750BC;
    case 134u: goto L_08A750C8;
    case 135u: goto L_08A750F8;
    case 136u: goto L_08A7514C;
    case 137u: goto L_08A751A0;
    case 138u: goto L_08A751D4;
    case 139u: goto L_08A751FC;
    case 140u: goto L_08A75230;
    case 141u: goto L_08A75258;
    case 142u: goto L_08A75264;
    case 143u: goto L_08A7527C;
    case 144u: goto L_08A7528C;
    case 145u: goto L_08A7529C;
    case 146u: goto L_08A752A8;
    case 147u: goto L_08A752C0;
    case 148u: goto L_08A752D0;
    case 149u: goto L_08A752E0;
    case 150u: goto L_08A752EC;
    case 151u: goto L_08A75310;
    case 152u: goto L_08A75344;
    case 153u: goto L_08A75354;
    case 154u: goto L_08A75364;
    case 155u: goto L_08A75390;
    case 156u: goto L_08A753A8;
    case 157u: goto L_08A753B8;
    case 158u: goto L_08A753D8;
    case 159u: goto L_08A753EC;
    case 160u: goto L_08A753F4;
    case 161u: goto L_08A75410;
    case 162u: goto L_08A75420;
    case 163u: goto L_08A7543C;
    case 164u: goto L_08A75450;
    case 165u: goto L_08A75458;
    case 166u: goto L_08A75468;
    case 167u: goto L_08A75488;
    case 168u: goto L_08A7549C;
    case 169u: goto L_08A754A4;
    case 170u: goto L_08A754C0;
    case 171u: goto L_08A754D4;
    case 172u: goto L_08A754E0;
    case 173u: goto L_08A754E8;
    case 174u: goto L_08A754F8;
    case 175u: goto L_08A75518;
    case 176u: goto L_08A7552C;
    case 177u: goto L_08A75534;
    case 178u: goto L_08A75544;
    case 179u: goto L_08A75560;
    case 180u: goto L_08A75574;
    case 181u: goto L_08A7557C;
    case 182u: goto L_08A75594;
    case 183u: goto L_08A755A8;
    case 184u: goto L_08A755C4;
    case 185u: goto L_08A755E4;
    case 186u: goto L_08A755F4;
    case 187u: goto L_08A75608;
    case 188u: goto L_08A75614;
    case 189u: goto L_08A75620;
    case 190u: goto L_08A75648;
    case 191u: goto L_08A75650;
    case 192u: goto L_08A75658;
    case 193u: goto L_08A75660;
    case 194u: goto L_08A75690;
    case 195u: goto L_08A756AC;
    case 196u: goto L_08A756B0;
    case 197u: goto L_08A756DC;
    case 198u: goto L_08A756FC;
    case 199u: goto L_08A75708;
    case 200u: goto L_08A7571C;
    case 201u: goto L_08A75728;
    case 202u: goto L_08A7573C;
    case 203u: goto L_08A75754;
    case 204u: goto L_08A75760;
    case 205u: goto L_08A75770;
    case 206u: goto L_08A7577C;
    case 207u: goto L_08A7578C;
    case 208u: goto L_08A757A0;
    case 209u: goto L_08A757B4;
    case 210u: goto L_08A757D0;
    case 211u: goto L_08A757E4;
    case 212u: goto L_08A757F8;
    case 213u: goto L_08A75810;
    case 214u: goto L_08A7582C;
    case 215u: goto L_08A7584C;
    case 216u: goto L_08A75860;
    case 217u: goto L_08A75870;
    case 218u: goto L_08A758D4;
    case 219u: goto L_08A7591C;
    case 220u: goto L_08A75964;
    case 221u: goto L_08A759AC;
    case 222u: goto L_08A759F4;
    case 223u: goto L_08A75A3C;
    case 224u: goto L_08A75A84;
    case 225u: goto L_08A75ACC;
    case 226u: goto L_08A75B14;
    case 227u: goto L_08A75B5C;
    case 228u: goto L_08A75BA4;
    case 229u: goto L_08A75BE8;
    case 230u: goto L_08A75BF8;
    case 231u: goto L_08A75C04;
    case 232u: goto L_08A75C14;
    case 233u: goto L_08A75C20;
    case 234u: goto L_08A75C30;
    case 235u: goto L_08A75C44;
    case 236u: goto L_08A75C60;
    case 237u: goto L_08A75C74;
    case 238u: goto L_08A75C7C;
    case 239u: goto L_08A75C80;
    case 240u: goto L_08A75CCC;
    case 241u: goto L_08A75CD4;
    case 242u: goto L_08A75CE0;
    case 243u: goto L_08A75CEC;
    case 244u: goto L_08A75D00;
    case 245u: goto L_08A75D08;
    case 246u: goto L_08A75D1C;
    case 247u: goto L_08A75D24;
    case 248u: goto L_08A75D38;
    case 249u: goto L_08A75D48;
    case 250u: goto L_08A75D58;
    case 251u: goto L_08A75D80;
    case 252u: goto L_08A75D90;
    case 253u: goto L_08A75D98;
    case 254u: goto L_08A75DA4;
    case 255u: goto L_08A75DB0;
    case 256u: goto L_08A75DF0;
    case 257u: goto L_08A75E08;
    case 258u: goto L_08A75E18;
    case 259u: goto L_08A75E38;
    case 260u: goto L_08A75E40;
    case 261u: goto L_08A75E4C;
    case 262u: goto L_08A75E8C;
    case 263u: goto L_08A75F08;
    case 264u: goto L_08A75F7C;
    case 265u: goto L_08A75FA4;
    case 266u: goto L_08A75FB0;
    case 267u: goto L_08A75FB8;
    case 268u: goto L_08A75FC8;
    case 269u: goto L_08A75FD0;
    case 270u: goto L_08A75FDC;
    case 271u: goto L_08A75FE4;
    case 272u: goto L_08A75FF0;
    case 273u: goto L_08A76008;
    case 274u: goto L_08A76020;
    case 275u: goto L_08A76028;
    case 276u: goto L_08A76030;
    case 277u: goto L_08A76038;
    case 278u: goto L_08A76048;
    case 279u: goto L_08A76050;
    case 280u: goto L_08A76054;
    case 281u: goto L_08A76080;
    case 282u: goto L_08A76098;
    case 283u: goto L_08A760A8;
    case 284u: goto L_08A760D0;
    case 285u: goto L_08A760E8;
    case 286u: goto L_08A760F0;
    case 287u: goto L_08A76104;
    case 288u: goto L_08A76118;
    case 289u: goto L_08A7614C;
    case 290u: goto L_08A76164;
    case 291u: goto L_08A7617C;
    case 292u: goto L_08A76194;
    case 293u: goto L_08A7619C;
    case 294u: goto L_08A761BC;
    case 295u: goto L_08A761FC;
    case 296u: goto L_08A76274;
    case 297u: goto L_08A762A0;
    case 298u: goto L_08A762DC;
    case 299u: goto L_08A762F4;
    case 300u: goto L_08A76330;
    case 301u: goto L_08A76350;
    case 302u: goto L_08A76360;
    case 303u: goto L_08A76374;
    case 304u: goto L_08A76384;
    case 305u: goto L_08A76394;
    case 306u: goto L_08A763A4;
    case 307u: goto L_08A763E8;
    case 308u: goto L_08A763FC;
    case 309u: goto L_08A76464;
    case 310u: goto L_08A76478;
    case 311u: goto L_08A76480;
    case 312u: goto L_08A76484;
    case 313u: goto L_08A764B0;
    case 314u: goto L_08A764C0;
    case 315u: goto L_08A764D8;
    case 316u: goto L_08A764F4;
    case 317u: goto L_08A76500;
    case 318u: goto L_08A76510;
    case 319u: goto L_08A76518;
    case 320u: goto L_08A7651C;
    case 321u: goto L_08A76534;
    case 322u: goto L_08A7654C;
    case 323u: goto L_08A76584;
    case 324u: goto L_08A76598;
    case 325u: goto L_08A765A0;
    case 326u: goto L_08A765A4;
    case 327u: goto L_08A765BC;
    case 328u: goto L_08A765E8;
    case 329u: goto L_08A765F0;
    case 330u: goto L_08A7660C;
    case 331u: goto L_08A76624;
    case 332u: goto L_08A76634;
    case 333u: goto L_08A76654;
    case 334u: goto L_08A76668;
    case 335u: goto L_08A76670;
    case 336u: goto L_08A7668C;
    case 337u: goto L_08A7669C;
    case 338u: goto L_08A766B8;
    case 339u: goto L_08A766CC;
    case 340u: goto L_08A766D4;
    case 341u: goto L_08A766E4;
    case 342u: goto L_08A76704;
    case 343u: goto L_08A76718;
    case 344u: goto L_08A76720;
    case 345u: goto L_08A7673C;
    case 346u: goto L_08A76750;
    case 347u: goto L_08A7675C;
    case 348u: goto L_08A76764;
    case 349u: goto L_08A76774;
    case 350u: goto L_08A76794;
    case 351u: goto L_08A767A8;
    case 352u: goto L_08A767B0;
    case 353u: goto L_08A767C0;
    case 354u: goto L_08A767DC;
    case 355u: goto L_08A767F0;
    case 356u: goto L_08A767F8;
    case 357u: goto L_08A76814;
    case 358u: goto L_08A76830;
    case 359u: goto L_08A7684C;
    case 360u: goto L_08A76870;
    case 361u: goto L_08A7687C;
    case 362u: goto L_08A768A0;
    case 363u: goto L_08A768AC;
    case 364u: goto L_08A768B4;
    case 365u: goto L_08A768BC;
    case 366u: goto L_08A768E8;
    case 367u: goto L_08A76900;
    case 368u: goto L_08A76928;
    case 369u: goto L_08A76944;
    case 370u: goto L_08A76950;
    case 371u: goto L_08A7695C;
    case 372u: goto L_08A7696C;
    case 373u: goto L_08A76984;
    case 374u: goto L_08A7698C;
    case 375u: goto L_08A76994;
    case 376u: goto L_08A769A0;
    case 377u: goto L_08A769AC;
    case 378u: goto L_08A769B8;
    case 379u: goto L_08A769C0;
    case 380u: goto L_08A769E4;
    case 381u: goto L_08A769FC;
    case 382u: goto L_08A76A10;
    case 383u: goto L_08A76A24;
    case 384u: goto L_08A76A38;
    case 385u: goto L_08A76A4C;
    case 386u: goto L_08A76A60;
    case 387u: goto L_08A76A6C;
    case 388u: goto L_08A76A78;
    case 389u: goto L_08A76A84;
    case 390u: goto L_08A76AC8;
    case 391u: goto L_08A76AF0;
    case 392u: goto L_08A76B04;
    case 393u: goto L_08A76B4C;
    case 394u: goto L_08A76B78;
    case 395u: goto L_08A76B80;
    case 396u: goto L_08A76B98;
    case 397u: goto L_08A76BB0;
    case 398u: goto L_08A76BDC;
    case 399u: goto L_08A76BF0;
    case 400u: goto L_08A76C20;
    case 401u: goto L_08A76C28;
    case 402u: goto L_08A76C54;
    case 403u: goto L_08A76C68;
    case 404u: goto L_08A76CB0;
    case 405u: goto L_08A76CDC;
    case 406u: goto L_08A76CF0;
    case 407u: goto L_08A76D38;
    case 408u: goto L_08A76D58;
    case 409u: goto L_08A76DB8;
    case 410u: goto L_08A76DE4;
    case 411u: goto L_08A76DF8;
    case 412u: goto L_08A76E28;
    case 413u: goto L_08A76E54;
    case 414u: goto L_08A76E68;
    case 415u: goto L_08A76EAC;
    case 416u: goto L_08A76ED4;
    case 417u: goto L_08A76F18;
    case 418u: goto L_08A76F40;
    case 419u: goto L_08A76F88;
    case 420u: goto L_08A76FB0;
    case 421u: goto L_08A76FC4;
    case 422u: goto L_08A77008;
    case 423u: goto L_08A77030;
    case 424u: goto L_08A77078;
    case 425u: goto L_08A770A4;
    case 426u: goto L_08A770B8;
    case 427u: goto L_08A770FC;
    case 428u: goto L_08A7712C;
    case 429u: goto L_08A77140;
    case 430u: goto L_08A77150;
    case 431u: goto L_08A7715C;
    case 432u: goto L_08A771A4;
    case 433u: goto L_08A771D0;
    case 434u: goto L_08A771E4;
    case 435u: goto L_08A7722C;
    case 436u: goto L_08A77258;
    case 437u: goto L_08A7726C;
    case 438u: goto L_08A772B4;
    case 439u: goto L_08A772BC;
    case 440u: goto L_08A772DC;
    case 441u: goto L_08A772E8;
    case 442u: goto L_08A772F8;
    case 443u: goto L_08A77308;
    case 444u: goto L_08A77320;
    case 445u: goto L_08A7734C;
    case 446u: goto L_08A7735C;
    case 447u: goto L_08A77364;
    case 448u: goto L_08A77370;
    case 449u: goto L_08A773B0;
    case 450u: goto L_08A773DC;
    case 451u: goto L_08A77408;
    case 452u: goto L_08A77434;
    case 453u: goto L_08A77440;
    case 454u: goto L_08A7746C;
    case 455u: goto L_08A77478;
    case 456u: goto L_08A77480;
    case 457u: goto L_08A774AC;
    case 458u: goto L_08A774C0;
    case 459u: goto L_08A77510;
    case 460u: goto L_08A77518;
    case 461u: goto L_08A77520;
    case 462u: goto L_08A77528;
    case 463u: goto L_08A77534;
    case 464u: goto L_08A7753C;
    case 465u: goto L_08A77548;
    case 466u: goto L_08A77550;
    case 467u: goto L_08A7755C;
    case 468u: goto L_08A77568;
    case 469u: goto L_08A77570;
    case 470u: goto L_08A77574;
    case 471u: goto L_08A775A0;
    case 472u: goto L_08A775AC;
    case 473u: goto L_08A775BC;
    case 474u: goto L_08A775C4;
    case 475u: goto L_08A775EC;
    case 476u: goto L_08A77610;
    case 477u: goto L_08A77654;
    case 478u: goto L_08A7765C;
    case 479u: goto L_08A77664;
    case 480u: goto L_08A7766C;
    case 481u: goto L_08A77678;
    case 482u: goto L_08A77680;
    case 483u: goto L_08A7768C;
    case 484u: goto L_08A77694;
    case 485u: goto L_08A776A0;
    case 486u: goto L_08A776AC;
    case 487u: goto L_08A776B4;
    case 488u: goto L_08A776B8;
    case 489u: goto L_08A77710;
    case 490u: goto L_08A77718;
    case 491u: goto L_08A77720;
    case 492u: goto L_08A77728;
    case 493u: goto L_08A77734;
    case 494u: goto L_08A7773C;
    case 495u: goto L_08A77748;
    case 496u: goto L_08A77750;
    case 497u: goto L_08A7775C;
    case 498u: goto L_08A77768;
    case 499u: goto L_08A77770;
    case 500u: goto L_08A77774;
    case 501u: goto L_08A777CC;
    case 502u: goto L_08A777E8;
    case 503u: goto L_08A777F4;
    case 504u: goto L_08A77800;
    case 505u: goto L_08A7780C;
    case 506u: goto L_08A77820;
    case 507u: goto L_08A77838;
    case 508u: goto L_08A77844;
    case 509u: goto L_08A77854;
    case 510u: goto L_08A77860;
    case 511u: goto L_08A77870;
    case 512u: goto L_08A77884;
    case 513u: goto L_08A77898;
    case 514u: goto L_08A778B4;
    case 515u: goto L_08A778C8;
    case 516u: goto L_08A778DC;
    case 517u: goto L_08A778F4;
    case 518u: goto L_08A77910;
    case 519u: goto L_08A77930;
    case 520u: goto L_08A77944;
    case 521u: goto L_08A77954;
    case 522u: goto L_08A779A8;
    case 523u: goto L_08A779C0;
    case 524u: goto L_08A779D8;
    case 525u: goto L_08A779F0;
    case 526u: goto L_08A77A08;
    case 527u: goto L_08A77A20;
    case 528u: goto L_08A77A38;
    case 529u: goto L_08A77A50;
    case 530u: goto L_08A77A68;
    case 531u: goto L_08A77A80;
    case 532u: goto L_08A77A98;
    case 533u: goto L_08A77AB0;
    case 534u: goto L_08A77AC4;
    case 535u: goto L_08A77AD4;
    case 536u: goto L_08A77AE0;
    case 537u: goto L_08A77AEC;
    case 538u: goto L_08A77AF8;
    case 539u: goto L_08A77B08;
    case 540u: goto L_08A77B1C;
    case 541u: goto L_08A77B24;
    case 542u: goto L_08A77B38;
    case 543u: goto L_08A77B54;
    case 544u: goto L_08A77B5C;
    case 545u: goto L_08A77B64;
    case 546u: goto L_08A77B6C;
    case 547u: goto L_08A77B88;
    case 548u: goto L_08A77B9C;
    case 549u: goto L_08A77BA4;
    case 550u: goto L_08A77BA8;
    case 551u: goto L_08A77C04;
    case 552u: goto L_08A77C1C;
    case 553u: goto L_08A77C4C;
    case 554u: goto L_08A77C9C;
    case 555u: goto L_08A77CA4;
    case 556u: goto L_08A77CCC;
    case 557u: goto L_08A77D28;
    case 558u: goto L_08A77D44;
    case 559u: goto L_08A77D54;
    case 560u: goto L_08A77D64;
    case 561u: goto L_08A77D74;
    case 562u: goto L_08A77D8C;
    case 563u: goto L_08A77D98;
    case 564u: goto L_08A77D9C;
    case 565u: goto L_08A77DC0;
    case 566u: goto L_08A77DD4;
    case 567u: goto L_08A77DF4;
    case 568u: goto L_08A77E00;
    case 569u: goto L_08A77E1C;
    case 570u: goto L_08A77E30;
    case 571u: goto L_08A77E48;
    case 572u: goto L_08A77E50;
    case 573u: goto L_08A77E60;
    case 574u: goto L_08A77E68;
    case 575u: goto L_08A77E7C;
    case 576u: goto L_08A77E88;
    case 577u: goto L_08A77E9C;
    case 578u: goto L_08A77EAC;
    case 579u: goto L_08A77EB8;
    case 580u: goto L_08A77EDC;
    case 581u: goto L_08A77EE8;
    case 582u: goto L_08A77EF0;
    case 583u: goto L_08A77F00;
    case 584u: goto L_08A77F0C;
    case 585u: goto L_08A77F4C;
    case 586u: goto L_08A77F60;
    case 587u: goto L_08A77F70;
    case 588u: goto L_08A77F8C;
    case 589u: goto L_08A77F94;
    case 590u: goto L_08A77FA0;
    case 591u: goto L_08A77FA4;
    case 592u: goto L_08A77FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A74000:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(588)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(948))))));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A74024;
    }
    goto L_08A74024;
L_08A74024:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[22] = (0u | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    goto L_08A74040;
L_08A74040:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[24];
        goto L_08A74060;
    }
    goto L_08A74050;
L_08A74050:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A74074;
      }
      goto L_08A74060;
    }
L_08A74060:
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[6]);
    goto L_08A74074;
L_08A74074:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A7408C;
      }
      goto L_08A74080;
    }
L_08A74080:
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[16] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] >> 3u);
    goto L_08A7408C;
L_08A7408C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74154;
      }
      goto L_08A74094;
    }
L_08A74094:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11460)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11464)));
      if (branch_taken) {
          goto L_08A740E8;
      }
      goto L_08A740AC;
    }
L_08A740AC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A740D0;
      }
      goto L_08A740B8;
    }
L_08A740B8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[7] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_08A740C8;
    }
    goto L_08A740C8;
L_08A740C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A74120;
      }
      goto L_08A740D0;
    }
L_08A740D0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[7] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_08A740E0;
    }
    goto L_08A740E0;
L_08A740E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A74120;
      }
      goto L_08A740E8;
    }
L_08A740E8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7410C;
      }
      goto L_08A740F4;
    }
L_08A740F4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-100));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_08A74104;
    }
    goto L_08A74104;
L_08A74104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A74120;
      }
      goto L_08A7410C;
    }
L_08A7410C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_08A7411C;
    }
    goto L_08A7411C;
L_08A7411C:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A74120;
L_08A74120:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74144;
      }
      goto L_08A7412C;
    }
L_08A7412C:
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
        goto L_08A7413C;
    }
    goto L_08A7413C;
L_08A7413C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74154;
      }
      goto L_08A74144;
    }
L_08A74144:
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
        goto L_08A74154;
    }
    goto L_08A74154;
L_08A74154:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A74260;
      }
      goto L_08A7415C;
    }
L_08A7415C:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A74194;
      }
      goto L_08A74164;
    }
L_08A74164:
    ctx.gpr[31] = (0x08A7416Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EFC0u>(ctx, &aot_mem) && ctx.pc == 0x08A7416Cu) goto L_08A7416C;
    return;
L_08A7416C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A74194;
      }
      goto L_08A74174;
    }
L_08A74174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74260;
      }
      goto L_08A74180;
    }
L_08A74180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74260;
      }
      goto L_08A74194;
    }
L_08A74194:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A741A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A741A4u) goto L_08A741A4;
    return;
L_08A741A4:
    ctx.gpr[6] = (17184u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A741C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A741C0u) goto L_08A741C0;
    return;
L_08A741C0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A74260;
      }
      goto L_08A741D0;
    }
L_08A741D0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A741F0;
      }
      goto L_08A741E8;
    }
L_08A741E8:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A741F0;
L_08A741F0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[4] = (0u | 40u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74214;
      }
      goto L_08A74208;
    }
L_08A74208:
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7421C;
      }
      goto L_08A74214;
    }
L_08A74214:
    ctx.gpr[4] = (0u | 14u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A7421C;
L_08A7421C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A74260u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A74260u) goto L_08A74260;
    return;
L_08A74260:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A74340;
      }
      goto L_08A74268;
    }
L_08A74268:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A74278u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A74278u) goto L_08A74278;
    return;
L_08A74278:
    ctx.gpr[6] = (17184u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A74294u);
    ctx.gpr[5] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A74294u) goto L_08A74294;
    return;
L_08A74294:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A74340;
      }
      goto L_08A742A4;
    }
L_08A742A4:
    if (ctx.gpr[22] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
        goto L_08A742CC;
    }
    goto L_08A742AC;
L_08A742AC:
    ctx.gpr[31] = (0x08A742B4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EFC0u>(ctx, &aot_mem) && ctx.pc == 0x08A742B4u) goto L_08A742B4;
    return;
L_08A742B4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
        goto L_08A742CC;
    }
    goto L_08A742BC;
L_08A742BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74340;
      }
      goto L_08A742C8;
    }
L_08A742C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    goto L_08A742CC;
L_08A742CC:
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (0u | 6000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 39u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 173u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6000));
    ctx.gpr[31] = (0x08A74340u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A74340u) goto L_08A74340;
    return;
L_08A74340:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74358;
      }
      goto L_08A74348;
    }
L_08A74348:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11464), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(11460), ctx.gpr[16]);
    goto L_08A74358;
L_08A74358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A74364;
      }
      goto L_08A74360;
    }
L_08A74360:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A74364;
L_08A74364:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A743A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[19] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A75CE0;
      }
      goto L_08A74410;
    }
L_08A74410:
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[23] = (0u | 41u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[21] = (0u | 42u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-25200));
    goto L_08A7442C;
L_08A7442C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[18] = (ctx.gpr[20] + ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 186 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 187 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A74484;
      }
      goto L_08A74458;
    }
L_08A74458:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 33 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 57 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A75CCC;
      }
      goto L_08A74464;
    }
L_08A74464:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-33));
      if (branch_taken) {
          goto L_08A75CCC;
      }
      goto L_08A7446C;
    }
L_08A7446C:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26696)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A74484:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 188 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A759AC;
      }
      goto L_08A7448C;
    }
L_08A7448C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75CCC;
      }
      goto L_08A74494;
    }
L_08A74494:
    ctx.gpr[5] = (0u | 172u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 18000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75BE8;
      }
      goto L_08A744DC;
    }
L_08A744DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A744FC;
      }
      goto L_08A744F0;
    }
L_08A744F0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_08A75CD4;
      }
      goto L_08A744FC;
    }
L_08A744FC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74DE8;
      }
      goto L_08A7450C;
    }
L_08A7450C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26600)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A74524:
    ctx.gpr[4] = (0u | 252u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74558u);
    ctx.gpr[5] = (0u | 252u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A74558u) goto L_08A74558;
    return;
L_08A74558:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x08A7456Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7456Cu) goto L_08A7456C;
    return;
L_08A7456C:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (18017u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A745B4;
L_08A745B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75CE0;
      }
      goto L_08A745BC;
    }
L_08A745BC:
    ctx.gpr[4] = (0u | 99u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A745F0u);
    ctx.gpr[5] = (0u | 99u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A745F0u) goto L_08A745F0;
    return;
L_08A745F0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x08A74604u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A74604u) goto L_08A74604;
    return;
L_08A74604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(105));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A74664;
    }
L_08A74664:
    ctx.gpr[4] = (0u | 266u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74698u);
    ctx.gpr[5] = (0u | 266u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A74698u) goto L_08A74698;
    return;
L_08A74698:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x08A746ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A746ACu) goto L_08A746AC;
    return;
L_08A746AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(95));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A74708;
    }
L_08A74708:
    ctx.gpr[4] = (0u | 174u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74728u);
    ctx.gpr[5] = (0u | 174u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A74728u) goto L_08A74728;
    return;
L_08A74728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17761u << 16u);
    ctx.gpr[21] = (0u | 105u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A74790;
    }
L_08A74790:
    ctx.gpr[4] = (0u | 216u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A747C4u);
    ctx.gpr[5] = (0u | 216u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A747C4u) goto L_08A747C4;
    return;
L_08A747C4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x08A747D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A747D8u) goto L_08A747D8;
    return;
L_08A747D8:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (18017u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A74820;
    }
L_08A74820:
    ctx.gpr[4] = (0u | 225u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74854u);
    ctx.gpr[5] = (0u | 225u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A74854u) goto L_08A74854;
    return;
L_08A74854:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x08A74868u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A74868u) goto L_08A74868;
    return;
L_08A74868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(113));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A748C4;
    }
L_08A748C4:
    ctx.gpr[4] = (0u | 291u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A748F8u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A748F8u) goto L_08A748F8;
    return;
L_08A748F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(17000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(85));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A74954;
    }
L_08A74954:
    ctx.gpr[4] = (0u | 291u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A74988u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A74988u) goto L_08A74988;
    return;
L_08A74988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 34000u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(85));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A749E8;
    }
L_08A749E8:
    ctx.gpr[4] = (0u | 269u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74A1Cu);
    ctx.gpr[5] = (0u | 269u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A74A1Cu) goto L_08A74A1C;
    return;
L_08A74A1C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x08A74A30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A74A30u) goto L_08A74A30;
    return;
L_08A74A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(105));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A74A8C;
    }
L_08A74A8C:
    ctx.gpr[4] = (0u | 269u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A74AC0u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A74AC0u) goto L_08A74AC0;
    return;
L_08A74AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 43150u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(105));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A74B20;
    }
L_08A74B20:
    ctx.gpr[4] = (0u | 305u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74B54u);
    ctx.gpr[5] = (0u | 305u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A74B54u) goto L_08A74B54;
    return;
L_08A74B54:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x08A74B68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A74B68u) goto L_08A74B68;
    return;
L_08A74B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(113));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A74BC4;
    }
L_08A74BC4:
    ctx.gpr[4] = (0u | 281u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A74C18;
      }
      goto L_08A74C04;
    }
L_08A74C04:
    ctx.gpr[4] = (0u | 25472u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[21] = (0u | 25472u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 796u);
      if (branch_taken) {
          goto L_08A74C28;
      }
      goto L_08A74C18;
    }
L_08A74C18:
    ctx.gpr[4] = (0u | 20182u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[21] = (0u | 20182u);
    ctx.gpr[4] = (0u | 630u);
    goto L_08A74C28;
L_08A74C28:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A74C34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A74C34u) goto L_08A74C34;
    return;
L_08A74C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(115));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A74C98;
    }
L_08A74C98:
    ctx.gpr[4] = (0u | 284u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74CCCu);
    ctx.gpr[5] = (0u | 284u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A74CCCu) goto L_08A74CCC;
    return;
L_08A74CCC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x08A74CE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A74CE0u) goto L_08A74CE0;
    return;
L_08A74CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(115));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A74D40;
    }
L_08A74D40:
    ctx.gpr[4] = (0u | 275u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74D74u);
    ctx.gpr[5] = (0u | 275u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A74D74u) goto L_08A74D74;
    return;
L_08A74D74:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x08A74D88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A74D88u) goto L_08A74D88;
    return;
L_08A74D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(115));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A74DE8;
    }
L_08A74DE8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_08A75CD4;
      }
      goto L_08A74DF4;
    }
L_08A74DF4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74E00u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A74E00u) goto L_08A74E00;
    return;
L_08A74E00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A74E38;
      }
      goto L_08A74E08;
    }
L_08A74E08:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74E14u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 296u, 0x088B5D04u>(ctx, &aot_mem) && ctx.pc == 0x08A74E14u) goto L_08A74E14;
    return;
L_08A74E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_08A75CD4;
      }
      goto L_08A74E38;
    }
L_08A74E38:
    ctx.gpr[4] = (0u | 5560u);
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 68u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A74E5Cu);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A74E5Cu) goto L_08A74E5C;
    return;
L_08A74E5C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(22000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A74EA8;
    }
L_08A74EA8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74EB4u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A74EB4u) goto L_08A74EB4;
    return;
L_08A74EB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 5560u);
      if (branch_taken) {
          goto L_08A74EEC;
      }
      goto L_08A74EBC;
    }
L_08A74EBC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74EC8u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 296u, 0x088B5D04u>(ctx, &aot_mem) && ctx.pc == 0x08A74EC8u) goto L_08A74EC8;
    return;
L_08A74EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_08A75CD4;
      }
      goto L_08A74EEC;
    }
L_08A74EEC:
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 68u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 27000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A74F4C;
    }
L_08A74F4C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74F58u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A74F58u) goto L_08A74F58;
    return;
L_08A74F58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 5559u);
      if (branch_taken) {
          goto L_08A74F90;
      }
      goto L_08A74F60;
    }
L_08A74F60:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74F6Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 296u, 0x088B5D04u>(ctx, &aot_mem) && ctx.pc == 0x08A74F6Cu) goto L_08A74F6C;
    return;
L_08A74F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_08A75CD4;
      }
      goto L_08A74F90;
    }
L_08A74F90:
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 27000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (17692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.gpr[21] = (0u | 100u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A74FF4;
    }
L_08A74FF4:
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(5972)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
        goto L_08A7501C;
    }
    goto L_08A75010;
L_08A75010:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A7502C;
      }
      goto L_08A7501C;
    }
L_08A7501C:
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_08A7502C;
L_08A7502C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75258;
      }
      goto L_08A7503C;
    }
L_08A7503C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26520)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A75054:
    ctx.gpr[4] = (0u | 240u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[21] = (0u | 75u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A75088u);
    ctx.gpr[5] = (0u | 240u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A75088u) goto L_08A75088;
    return;
L_08A75088:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A75098u);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A75098u) goto L_08A75098;
    return;
L_08A75098:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.gpr[4] = (17505u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[18] = (0u | 5u);
    goto L_08A750BC;
L_08A750BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A750C8u);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A750C8u) goto L_08A750C8;
    return;
L_08A750C8:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[16]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A750F8;
    }
L_08A750F8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (0u | 39243u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 75u);
    ctx.gpr[4] = (17505u << 16u);
    ctx.gpr[19] = (0u | 39243u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 5u);
      if (branch_taken) {
          goto L_08A750BC;
      }
      goto L_08A7514C;
    }
L_08A7514C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (0u | 30290u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 75u);
    ctx.gpr[4] = (17505u << 16u);
    ctx.gpr[19] = (0u | 30290u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 5u);
      if (branch_taken) {
          goto L_08A750BC;
      }
      goto L_08A751A0;
    }
L_08A751A0:
    ctx.gpr[4] = (0u | 267u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[21] = (0u | 75u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A751D4u);
    ctx.gpr[5] = (0u | 267u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A751D4u) goto L_08A751D4;
    return;
L_08A751D4:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (17505u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 5u);
      if (branch_taken) {
          goto L_08A750BC;
      }
      goto L_08A751FC;
    }
L_08A751FC:
    ctx.gpr[4] = (0u | 263u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[21] = (0u | 75u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A75230u);
    ctx.gpr[5] = (0u | 263u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A75230u) goto L_08A75230;
    return;
L_08A75230:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (17505u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 5u);
      if (branch_taken) {
          goto L_08A750BC;
      }
      goto L_08A75258;
    }
L_08A75258:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_08A75CD4;
      }
      goto L_08A75264;
    }
L_08A75264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A7529C;
    }
    goto L_08A7527C;
L_08A7527C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7528Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A7528Cu) goto L_08A7528C;
    return;
L_08A7528C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A7529C;
L_08A7529C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A752EC;
      }
      goto L_08A752A8;
    }
L_08A752A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A752E0;
    }
    goto L_08A752C0;
L_08A752C0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A752D0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A752D0u) goto L_08A752D0;
    return;
L_08A752D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A752E0;
L_08A752E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    if (ctx.gpr[4] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
        goto L_08A75310;
    }
    goto L_08A752EC;
L_08A752EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_08A75CD4;
      }
      goto L_08A75310;
    }
L_08A75310:
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (17352u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[22] = (0u | 5u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A75364;
      }
      goto L_08A75344;
    }
L_08A75344:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[31] = (0x08A75354u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A75354u) goto L_08A75354;
    return;
L_08A75354:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A75364;
L_08A75364:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(342)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(5962)));
      if (branch_taken) {
          goto L_08A7557C;
      }
      goto L_08A75390;
    }
L_08A75390:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26440)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A753A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[5] = (0u | 61u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
        goto L_08A753D8;
    }
    goto L_08A753B8;
L_08A753B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21928)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 61u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5633));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A753EC;
      }
      goto L_08A753D8;
    }
L_08A753D8:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A753EC;
L_08A753EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75594;
      }
      goto L_08A753F4;
    }
L_08A753F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(139));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A75594;
      }
      goto L_08A75410;
    }
L_08A75410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[5] = (0u | 66u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
        goto L_08A7543C;
    }
    goto L_08A75420;
L_08A75420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[5] = (0u | 66u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5657));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A75450;
      }
      goto L_08A7543C;
    }
L_08A7543C:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A75450;
L_08A75450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75594;
      }
      goto L_08A75458;
    }
L_08A75458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[5] = (0u | 62u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
        goto L_08A75488;
    }
    goto L_08A75468;
L_08A75468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21940)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 62u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5638));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7549C;
      }
      goto L_08A75488;
    }
L_08A75488:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A7549C;
L_08A7549C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75594;
      }
      goto L_08A754A4;
    }
L_08A754A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[6] = (0u | 63u);
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A754D4;
      }
      goto L_08A754C0;
    }
L_08A754C0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5643));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 63u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A754E0;
      }
      goto L_08A754D4;
    }
L_08A754D4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08A754E0;
L_08A754E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75594;
      }
      goto L_08A754E8;
    }
L_08A754E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
        goto L_08A75518;
    }
    goto L_08A754F8;
L_08A754F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 64u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5648));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7552C;
      }
      goto L_08A75518;
    }
L_08A75518:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A7552C;
L_08A7552C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75594;
      }
      goto L_08A75534;
    }
L_08A75534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[5] = (0u | 65u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
        goto L_08A75560;
    }
    goto L_08A75544;
L_08A75544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 65u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5653));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A75574;
      }
      goto L_08A75560;
    }
L_08A75560:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A75574;
L_08A75574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75594;
      }
      goto L_08A7557C;
    }
L_08A7557C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A75594;
L_08A75594:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A755A8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A755A8u) goto L_08A755A8;
    return;
L_08A755A8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 17u);
    { const std::uint32_t dividend = ctx.gpr[16]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x08A755C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A755C4u) goto L_08A755C4;
    return;
L_08A755C4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(344)));
        goto L_08A75608;
    }
    goto L_08A755E4;
L_08A755E4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(19));
    ctx.gpr[31] = (0x08A755F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A755F4u) goto L_08A755F4;
    return;
L_08A755F4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(344)));
    goto L_08A75608;
L_08A75608:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A75648;
      }
      goto L_08A75614;
    }
L_08A75614:
    ctx.gpr[4] = (0u | 2u);
    if (ctx.gpr[18] != ctx.gpr[4]) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
        goto L_08A756B0;
    }
    goto L_08A75620;
L_08A75620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 2u));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A756AC;
      }
      goto L_08A75648;
    }
L_08A75648:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A75660;
      }
      goto L_08A75650;
    }
L_08A75650:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
        goto L_08A75690;
    }
    goto L_08A75658;
L_08A75658:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
      if (branch_taken) {
          goto L_08A756B0;
      }
      goto L_08A75660;
    }
L_08A75660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 1u));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A756AC;
      }
      goto L_08A75690;
    }
L_08A75690:
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A756AC;
L_08A756AC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    goto L_08A756B0;
L_08A756B0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A756DC;
    }
L_08A756DC:
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[4] = (0u | 3u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75708;
      }
      goto L_08A756FC;
    }
L_08A756FC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A7571C;
      }
      goto L_08A75708;
    }
L_08A75708:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_08A7571C;
L_08A7571C:
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[7] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21940)));
        goto L_08A7582C;
    }
    goto L_08A75728;
L_08A75728:
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A757F8;
      }
      goto L_08A7573C;
    }
L_08A7573C:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26312)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A75754:
    ctx.gpr[4] = (0u | 51u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A75770;
      }
      goto L_08A75760;
    }
L_08A75760:
    ctx.gpr[4] = (0u | 213u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 213u);
      if (branch_taken) {
          goto L_08A7577C;
      }
      goto L_08A75770;
    }
L_08A75770:
    ctx.gpr[4] = (0u | 214u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 214u);
    goto L_08A7577C;
L_08A7577C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A7578Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7578Cu) goto L_08A7578C;
    return;
L_08A7578C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] >> 5u);
    ctx.gpr[31] = (0x08A757A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A757A0u) goto L_08A757A0;
    return;
L_08A757A0:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11465)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A75870;
      }
      goto L_08A757B4;
    }
L_08A757B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(197));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A757D0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A757D0u) goto L_08A757D0;
    return;
L_08A757D0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] >> 5u);
    ctx.gpr[31] = (0x08A757E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A757E4u) goto L_08A757E4;
    return;
L_08A757E4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11465)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A75870;
      }
      goto L_08A757F8;
    }
L_08A757F8:
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A75810u);
    ctx.gpr[5] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A75810u) goto L_08A75810;
    return;
L_08A75810:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(22000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11465)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A75870;
      }
      goto L_08A7582C;
    }
L_08A7582C:
    ctx.gpr[5] = (0u | 6u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08A7584Cu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7584Cu) goto L_08A7584C;
    return;
L_08A7584C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] >> 4u);
    ctx.gpr[31] = (0x08A75860u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A75860u) goto L_08A75860;
    return;
L_08A75860:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A75870;
L_08A75870:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A758D4;
    }
L_08A758D4:
    ctx.gpr[5] = (0u | 169u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 18000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75BE8;
      }
      goto L_08A7591C;
    }
L_08A7591C:
    ctx.gpr[5] = (0u | 169u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 16500u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75BE8;
      }
      goto L_08A75964;
    }
L_08A75964:
    ctx.gpr[5] = (0u | 169u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 20000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75BE8;
      }
      goto L_08A759AC;
    }
L_08A759AC:
    ctx.gpr[5] = (0u | 170u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 18000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75BE8;
      }
      goto L_08A759F4;
    }
L_08A759F4:
    ctx.gpr[5] = (0u | 170u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 16500u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75BE8;
      }
      goto L_08A75A3C;
    }
L_08A75A3C:
    ctx.gpr[5] = (0u | 170u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 20000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75BE8;
      }
      goto L_08A75A84;
    }
L_08A75A84:
    ctx.gpr[5] = (0u | 171u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 18000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75BE8;
      }
      goto L_08A75ACC;
    }
L_08A75ACC:
    ctx.gpr[5] = (0u | 171u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 16500u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75BE8;
      }
      goto L_08A75B14;
    }
L_08A75B14:
    ctx.gpr[5] = (0u | 171u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 20000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75BE8;
      }
      goto L_08A75B5C;
    }
L_08A75B5C:
    ctx.gpr[5] = (0u | 172u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 16500u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75BE8;
      }
      goto L_08A75BA4;
    }
L_08A75BA4:
    ctx.gpr[5] = (0u | 172u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 20000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    ctx.gpr[18] = (2229u << 16u);
    goto L_08A75BE8;
L_08A75BE8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
        goto L_08A75C04;
    }
    goto L_08A75BF8;
L_08A75BF8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A75C14;
      }
      goto L_08A75C04;
    }
L_08A75C04:
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08A75C14;
L_08A75C14:
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[6] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21940)));
        goto L_08A75C44;
    }
    goto L_08A75C20;
L_08A75C20:
    ctx.gpr[4] = (ctx.gpr[5] >> 8u);
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
        goto L_08A75C80;
    }
    goto L_08A75C30;
L_08A75C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(197));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A75C7C;
      }
      goto L_08A75C44;
    }
L_08A75C44:
    ctx.gpr[5] = (0u | 6u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08A75C60u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A75C60u) goto L_08A75C60;
    return;
L_08A75C60:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[19] >> 4u);
    ctx.gpr[31] = (0x08A75C74u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A75C74u) goto L_08A75C74;
    return;
L_08A75C74:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A75C7C;
L_08A75C7C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08A75C80;
L_08A75C80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A75CCC;
    }
L_08A75CCC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    goto L_08A75CD4;
L_08A75CD4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7442C;
      }
      goto L_08A75CE0;
    }
L_08A75CE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A75D08;
      }
      goto L_08A75CEC;
    }
L_08A75CEC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A75D08;
      }
      goto L_08A75D00;
    }
L_08A75D00:
    ctx.gpr[6] = (0u | 21u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08A75D08;
L_08A75D08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A75E4C;
      }
      goto L_08A75D1C;
    }
L_08A75D1C:
    ctx.gpr[31] = (0x08A75D24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A75D24u) goto L_08A75D24;
    return;
L_08A75D24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A75D38u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A75D38u) goto L_08A75D38;
    return;
L_08A75D38:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A75E4C;
      }
      goto L_08A75D48;
    }
L_08A75D48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_08A75D98;
      }
      goto L_08A75D58;
    }
L_08A75D58:
    ctx.gpr[4] = (15948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A75D90;
      }
      goto L_08A75D80;
    }
L_08A75D80:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A75D98;
      }
      goto L_08A75D90;
    }
L_08A75D90:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A75D98;
L_08A75D98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A75DA4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A75DA4u) goto L_08A75DA4;
    return;
L_08A75DA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75E4C;
      }
      goto L_08A75DB0;
    }
L_08A75DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75E18;
      }
      goto L_08A75DF0;
    }
L_08A75DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 31u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75E18;
      }
      goto L_08A75E08;
    }
L_08A75E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A75E40;
      }
      goto L_08A75E18;
    }
L_08A75E18:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11465)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A75E40;
      }
      goto L_08A75E38;
    }
L_08A75E38:
    ctx.gpr[5] = (0u | 21u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11465), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A75E40;
L_08A75E40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A75E4Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A75E4Cu) goto L_08A75E4C;
    return;
L_08A75E4C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A75E8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A77FF8;
      }
      goto L_08A75F08;
    }
L_08A75F08:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10640));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[22] = (2233u << 16u);
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (0u | 3u);
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (18017u << 16u);
    ctx.gpr[14] = (0u | 192u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[13] = (0u | 286u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[12] = (0u | 169u);
    ctx.gpr[10] = (0u | 18000u);
    ctx.gpr[9] = (0u | 16500u);
    ctx.gpr[8] = (0u | 20000u);
    ctx.gpr[3] = (0u | 170u);
    ctx.gpr[2] = (0u | 171u);
    ctx.gpr[11] = (0u | 172u);
    ctx.gpr[24] = (0u | 1u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[15] = (32768u << 16u);
    ctx.gpr[20] = (2229u << 16u);
    goto L_08A75F7C;
L_08A75F7C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 186 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A75FE4;
      }
      goto L_08A75FA4;
    }
L_08A75FA4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 62 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 33 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A75FD0;
      }
      goto L_08A75FB0;
    }
L_08A75FB0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-33));
      if (branch_taken) {
          goto L_08A76008;
      }
      goto L_08A75FB8;
    }
L_08A75FB8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A75FC8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 2u, 0x08A78040u>(ctx, &aot_mem) && ctx.pc == 0x08A75FC8u) goto L_08A75FC8;
    return;
L_08A75FC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A75FD0;
    }
L_08A75FD0:
    ctx.gpr[4] = (0u | 163u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A75FB8;
      }
      goto L_08A75FDC;
    }
L_08A75FDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77C04;
      }
      goto L_08A75FE4;
    }
L_08A75FE4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 207 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-186));
      if (branch_taken) {
          goto L_08A75FB8;
      }
      goto L_08A75FF0;
    }
L_08A75FF0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26272)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76008:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26184)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76020:
    ctx.gpr[31] = (0x08A76028u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08A76028u) goto L_08A76028;
    return;
L_08A76028:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A76038;
      }
      goto L_08A76030;
    }
L_08A76030:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A76038;
    }
L_08A76038:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A76054;
    }
    goto L_08A76048;
L_08A76048:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A76050;
    }
L_08A76050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A76054;
L_08A76054:
    ctx.gpr[6] = (ctx.gpr[23] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A760E8;
      }
      goto L_08A76080;
    }
L_08A76080:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (17076u << 16u);
        goto L_08A760A8;
    }
    goto L_08A76098;
L_08A76098:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5972), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (17076u << 16u);
    goto L_08A760A8;
L_08A760A8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-202));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76194;
      }
      goto L_08A760D0;
    }
L_08A760D0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26064)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A760E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A760F0;
    }
L_08A760F0:
    ctx.gpr[4] = (0u | 5571u);
    ctx.gpr[5] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 5571u);
    goto L_08A76104;
L_08A76104:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 71u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A76118u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A76118u) goto L_08A76118;
    return;
L_08A76118:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17249u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A7614C;
    }
L_08A7614C:
    ctx.gpr[4] = (0u | 5583u);
    ctx.gpr[5] = (0u | 23u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5583u);
      if (branch_taken) {
          goto L_08A76104;
      }
      goto L_08A76164;
    }
L_08A76164:
    ctx.gpr[4] = (0u | 5579u);
    ctx.gpr[5] = (0u | 22u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5579u);
      if (branch_taken) {
          goto L_08A76104;
      }
      goto L_08A7617C;
    }
L_08A7617C:
    ctx.gpr[4] = (0u | 5575u);
    ctx.gpr[5] = (0u | 21u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5575u);
      if (branch_taken) {
          goto L_08A76104;
      }
      goto L_08A76194;
    }
L_08A76194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A7619C;
    }
L_08A7619C:
    ctx.gpr[4] = (0u | 219u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 68u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A761BCu);
    ctx.gpr[5] = (0u | 219u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A761BCu) goto L_08A761BC;
    return;
L_08A761BC:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (18095u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 51200u);
    ctx.gpr[18] = (0u | 127u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A761FC;
    }
L_08A761FC:
    ctx.gpr[5] = (17150u << 16u);
    ctx.gpr[6] = (0u | 218u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[6] = (0u | 69u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (0u | 18569u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (18095u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 51200u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A76274;
    }
L_08A76274:
    ctx.gpr[4] = (0u | 220u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (ctx.gpr[24] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A762A0u);
    ctx.gpr[5] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A762A0u) goto L_08A762A0;
    return;
L_08A762A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (18095u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.gpr[4] | 51200u);
    ctx.gpr[18] = (0u | 127u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A762DC;
    }
L_08A762DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[14]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[21] = (ctx.gpr[24] | 0u);
    ctx.gpr[5] = (0u | 192u);
    ctx.gpr[31] = (0x08A762F4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A762F4u) goto L_08A762F4;
    return;
L_08A762F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17948u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.gpr[18] = (0u | 127u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A76330;
    }
L_08A76330:
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A76360;
      }
      goto L_08A76350;
    }
L_08A76350:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76374;
      }
      goto L_08A76360;
    }
L_08A76360:
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[15]);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    goto L_08A76374;
L_08A76374:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_08A76394;
    }
    goto L_08A76384;
L_08A76384:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
      if (branch_taken) {
          goto L_08A763A4;
      }
      goto L_08A76394;
    }
L_08A76394:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[15]);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    goto L_08A763A4;
L_08A763A4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(278));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[21] = (ctx.gpr[24] | 0u);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17000));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A763FC;
      }
      goto L_08A763E8;
    }
L_08A763E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08A763FC;
L_08A763FC:
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17352u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(70));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[18] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A76464;
    }
L_08A76464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A76484;
      }
      goto L_08A76478;
    }
L_08A76478:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A76480;
    }
L_08A76480:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08A76484;
L_08A76484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[9] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[7] = (17505u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(325)));
    ctx.gpr[8] = (0u | 19u);
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[7] + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A764F4;
      }
      goto L_08A764B0;
    }
L_08A764B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[6] = (0u | 65u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
        goto L_08A764D8;
    }
    goto L_08A764C0;
L_08A764C0:
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5653));
    ctx.gpr[5] = (0u | 65u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A7651C;
      }
      goto L_08A764D8;
    }
L_08A764D8:
    ctx.gpr[4] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7651C;
      }
      goto L_08A764F4;
    }
L_08A764F4:
    ctx.gpr[4] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A76510;
      }
      goto L_08A76500;
    }
L_08A76500:
    ctx.gpr[4] = (0u | 19u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A76518;
      }
      goto L_08A76510;
    }
L_08A76510:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[9]);
    ctx.gpr[4] = (0u | 20u);
    goto L_08A76518;
L_08A76518:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08A7651C;
L_08A7651C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[31] = (0x08A76534u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A76534u) goto L_08A76534;
    return;
L_08A76534:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const std::uint32_t dividend = ctx.gpr[20]; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x08A7654Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7654Cu) goto L_08A7654C;
    return;
L_08A7654C:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[2]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A76584;
    }
L_08A76584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
        goto L_08A765A4;
    }
    goto L_08A76598;
L_08A76598:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A765A0;
    }
L_08A765A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    goto L_08A765A4;
L_08A765A4:
    ctx.gpr[4] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A765BCu);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A765BCu) goto L_08A765BC;
    return;
L_08A765BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5956)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(5962)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A765F0;
      }
      goto L_08A765E8;
    }
L_08A765E8:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    goto L_08A765F0;
L_08A765F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(325)));
    ctx.gpr[6] = (17352u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (0u | 5u);
      if (branch_taken) {
          goto L_08A767F8;
      }
      goto L_08A7660C;
    }
L_08A7660C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26024)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[6] = (0u | 61u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
        goto L_08A76654;
    }
    goto L_08A76634;
L_08A76634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 61u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5633));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A76668;
      }
      goto L_08A76654;
    }
L_08A76654:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A76668;
L_08A76668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76814;
      }
      goto L_08A76670;
    }
L_08A76670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(139));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A76814;
      }
      goto L_08A7668C;
    }
L_08A7668C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[6] = (0u | 66u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
        goto L_08A766B8;
    }
    goto L_08A7669C;
L_08A7669C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[6] = (0u | 66u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5657));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08A766CC;
      }
      goto L_08A766B8;
    }
L_08A766B8:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A766CC;
L_08A766CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76814;
      }
      goto L_08A766D4;
    }
L_08A766D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[6] = (0u | 62u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
        goto L_08A76704;
    }
    goto L_08A766E4;
L_08A766E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 62u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5638));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A76718;
      }
      goto L_08A76704;
    }
L_08A76704:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A76718;
L_08A76718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76814;
      }
      goto L_08A76720;
    }
L_08A76720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[7] = (0u | 63u);
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A76750;
      }
      goto L_08A7673C;
    }
L_08A7673C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5643));
    ctx.gpr[6] = (0u | 63u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08A7675C;
      }
      goto L_08A76750;
    }
L_08A76750:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08A7675C;
L_08A7675C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76814;
      }
      goto L_08A76764;
    }
L_08A76764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[6] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
        goto L_08A76794;
    }
    goto L_08A76774;
L_08A76774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 64u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5648));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A767A8;
      }
      goto L_08A76794;
    }
L_08A76794:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A767A8;
L_08A767A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76814;
      }
      goto L_08A767B0;
    }
L_08A767B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[6] = (0u | 65u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
        goto L_08A767DC;
    }
    goto L_08A767C0;
L_08A767C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[6] = (0u | 65u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5653));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08A767F0;
      }
      goto L_08A767DC;
    }
L_08A767DC:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A767F0;
L_08A767F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76814;
      }
      goto L_08A767F8;
    }
L_08A767F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[4] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A76814;
L_08A76814:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A76830u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A76830u) goto L_08A76830;
    return;
L_08A76830:
    ctx.gpr[4] = (0u | 17u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const std::uint32_t dividend = ctx.gpr[19]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x08A7684Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7684Cu) goto L_08A7684C;
    return;
L_08A7684C:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[9] = (0u | 10u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08A768A0;
      }
      goto L_08A76870;
    }
L_08A76870:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A76900;
      }
      goto L_08A7687C;
    }
L_08A7687C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A76900;
      }
      goto L_08A768A0;
    }
L_08A768A0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A768BC;
      }
      goto L_08A768AC;
    }
L_08A768AC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08A768E8;
    }
    goto L_08A768B4;
L_08A768B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76900;
      }
      goto L_08A768BC;
    }
L_08A768BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A76900;
      }
      goto L_08A768E8;
    }
L_08A768E8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A76900;
L_08A76900:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A76928;
    }
L_08A76928:
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_08A76950;
    }
    goto L_08A76944;
L_08A76944:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A7695C;
      }
      goto L_08A76950;
    }
L_08A76950:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[15]);
    goto L_08A7695C;
L_08A7695C:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A769B8;
      }
      goto L_08A7696C;
    }
L_08A7696C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25896)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76984:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[13]);
      if (branch_taken) {
          goto L_08A769C0;
      }
      goto L_08A7698C;
    }
L_08A7698C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[13]);
      if (branch_taken) {
          goto L_08A769C0;
      }
      goto L_08A76994;
    }
L_08A76994:
    ctx.gpr[4] = (0u | 304u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A769C0;
      }
      goto L_08A769A0;
    }
L_08A769A0:
    ctx.gpr[4] = (0u | 293u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A769C0;
      }
      goto L_08A769AC;
    }
L_08A769AC:
    ctx.gpr[4] = (0u | 271u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A769C0;
      }
      goto L_08A769B8;
    }
L_08A769B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A769C0;
    }
L_08A769C0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08A76A60;
      }
      goto L_08A769E4;
    }
L_08A769E4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25832)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A769FC:
    ctx.gpr[4] = (0u | 26000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 26000u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1625u);
      if (branch_taken) {
          goto L_08A76A78;
      }
      goto L_08A76A10;
    }
L_08A76A10:
    ctx.gpr[4] = (0u | 13000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 13000u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 812u);
      if (branch_taken) {
          goto L_08A76A78;
      }
      goto L_08A76A24;
    }
L_08A76A24:
    ctx.gpr[4] = (0u | 15600u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 15600u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 975u);
      if (branch_taken) {
          goto L_08A76A78;
      }
      goto L_08A76A38;
    }
L_08A76A38:
    ctx.gpr[4] = (0u | 7904u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 7904u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 494u);
      if (branch_taken) {
          goto L_08A76A78;
      }
      goto L_08A76A4C;
    }
L_08A76A4C:
    ctx.gpr[4] = (0u | 9959u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 9959u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 622u);
      if (branch_taken) {
          goto L_08A76A78;
      }
      goto L_08A76A60;
    }
L_08A76A60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A76A6Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A76A6Cu) goto L_08A76A6C;
    return;
L_08A76A6C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] >> 4u);
    goto L_08A76A78;
L_08A76A78:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A76A84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76A84u) goto L_08A76A84;
    return;
L_08A76A84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[4] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(95));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A76AC8;
    }
L_08A76AC8:
    ctx.gpr[4] = (0u | 176u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A76AF0u);
    ctx.gpr[5] = (0u | 176u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A76AF0u) goto L_08A76AF0;
    return;
L_08A76AF0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 4u);
    ctx.gpr[31] = (0x08A76B04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76B04u) goto L_08A76B04;
    return;
L_08A76B04:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17761u << 16u);
    ctx.gpr[18] = (0u | 85u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A76B4C;
    }
L_08A76B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[8] = (0u | 291u);
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 269u);
      if (branch_taken) {
          goto L_08A76B80;
      }
      goto L_08A76B78;
    }
L_08A76B78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A76B80;
    }
L_08A76B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A772B4;
      }
      goto L_08A76B98;
    }
L_08A76B98:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25800)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76BB0:
    ctx.gpr[4] = (0u | 252u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A76BDCu);
    ctx.gpr[5] = (0u | 252u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A76BDCu) goto L_08A76BDC;
    return;
L_08A76BDC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A76BF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76BF0u) goto L_08A76BF0;
    return;
L_08A76BF0:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[18] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_08A76C20;
L_08A76C20:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A76C28;
    }
L_08A76C28:
    ctx.gpr[4] = (0u | 99u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A76C54u);
    ctx.gpr[5] = (0u | 99u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A76C54u) goto L_08A76C54;
    return;
L_08A76C54:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A76C68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76C68u) goto L_08A76C68;
    return;
L_08A76C68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[4] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(105));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76C20;
      }
      goto L_08A76CB0;
    }
L_08A76CB0:
    ctx.gpr[4] = (0u | 266u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A76CDCu);
    ctx.gpr[5] = (0u | 266u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A76CDCu) goto L_08A76CDC;
    return;
L_08A76CDC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A76CF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76CF0u) goto L_08A76CF0;
    return;
L_08A76CF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[4] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(95));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76C20;
      }
      goto L_08A76D38;
    }
L_08A76D38:
    ctx.gpr[4] = (0u | 174u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A76D58u);
    ctx.gpr[5] = (0u | 174u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A76D58u) goto L_08A76D58;
    return;
L_08A76D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    ctx.gpr[18] = (0u | 105u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08A76C20;
      }
      goto L_08A76DB8;
    }
L_08A76DB8:
    ctx.gpr[4] = (0u | 216u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A76DE4u);
    ctx.gpr[5] = (0u | 216u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A76DE4u) goto L_08A76DE4;
    return;
L_08A76DE4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A76DF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76DF8u) goto L_08A76DF8;
    return;
L_08A76DF8:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A76C20;
      }
      goto L_08A76E28;
    }
L_08A76E28:
    ctx.gpr[4] = (0u | 225u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A76E54u);
    ctx.gpr[5] = (0u | 225u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A76E54u) goto L_08A76E54;
    return;
L_08A76E54:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A76E68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76E68u) goto L_08A76E68;
    return;
L_08A76E68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[4] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(113));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76C20;
      }
      goto L_08A76EAC;
    }
L_08A76EAC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A76ED4u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76ED4u) goto L_08A76ED4;
    return;
L_08A76ED4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[4] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(17000));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(85));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76C20;
      }
      goto L_08A76F18;
    }
L_08A76F18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A76F40u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76F40u) goto L_08A76F40;
    return;
L_08A76F40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[4] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 34000u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(85));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76C20;
      }
      goto L_08A76F88;
    }
L_08A76F88:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A76FB0u);
    ctx.gpr[5] = (0u | 269u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A76FB0u) goto L_08A76FB0;
    return;
L_08A76FB0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A76FC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A76FC4u) goto L_08A76FC4;
    return;
L_08A76FC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[4] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(105));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76C20;
      }
      goto L_08A77008;
    }
L_08A77008:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A77030u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77030u) goto L_08A77030;
    return;
L_08A77030:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[4] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 43150u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(105));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76C20;
      }
      goto L_08A77078;
    }
L_08A77078:
    ctx.gpr[4] = (0u | 305u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A770A4u);
    ctx.gpr[5] = (0u | 305u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A770A4u) goto L_08A770A4;
    return;
L_08A770A4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A770B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A770B8u) goto L_08A770B8;
    return;
L_08A770B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[4] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(113));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76C20;
      }
      goto L_08A770FC;
    }
L_08A770FC:
    ctx.gpr[4] = (0u | 281u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08A77140;
      }
      goto L_08A7712C;
    }
L_08A7712C:
    ctx.gpr[4] = (0u | 25472u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 25472u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 796u);
      if (branch_taken) {
          goto L_08A77150;
      }
      goto L_08A77140;
    }
L_08A77140:
    ctx.gpr[4] = (0u | 20182u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 20182u);
    ctx.gpr[4] = (0u | 630u);
    goto L_08A77150;
L_08A77150:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A7715Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7715Cu) goto L_08A7715C;
    return;
L_08A7715C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[4] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(115));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76C20;
      }
      goto L_08A771A4;
    }
L_08A771A4:
    ctx.gpr[4] = (0u | 284u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A771D0u);
    ctx.gpr[5] = (0u | 284u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A771D0u) goto L_08A771D0;
    return;
L_08A771D0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A771E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A771E4u) goto L_08A771E4;
    return;
L_08A771E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[4] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(115));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76C20;
      }
      goto L_08A7722C;
    }
L_08A7722C:
    ctx.gpr[4] = (0u | 275u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A77258u);
    ctx.gpr[5] = (0u | 275u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A77258u) goto L_08A77258;
    return;
L_08A77258:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A7726Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7726Cu) goto L_08A7726C;
    return;
L_08A7726C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[4] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(115));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76C20;
      }
      goto L_08A772B4;
    }
L_08A772B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A772BC;
    }
L_08A772BC:
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (0u | 2u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_08A772E8;
      }
      goto L_08A772DC;
    }
L_08A772DC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A772F8;
      }
      goto L_08A772E8;
    }
L_08A772E8:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[15]);
    goto L_08A772F8;
L_08A772F8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77478;
      }
      goto L_08A77308;
    }
L_08A77308:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25720)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77320:
    ctx.gpr[4] = (0u | 240u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 75u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A7734Cu);
    ctx.gpr[5] = (0u | 240u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7734Cu) goto L_08A7734C;
    return;
L_08A7734C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7735Cu);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7735Cu) goto L_08A7735C;
    return;
L_08A7735C:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    goto L_08A77364;
L_08A77364:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A77370u);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77370u) goto L_08A77370;
    return;
L_08A77370:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (17505u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A773B0;
    }
L_08A773B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 39243u);
    ctx.gpr[18] = (0u | 75u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 39243u);
      if (branch_taken) {
          goto L_08A77364;
      }
      goto L_08A773DC;
    }
L_08A773DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 30290u);
    ctx.gpr[18] = (0u | 75u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 30290u);
      if (branch_taken) {
          goto L_08A77364;
      }
      goto L_08A77408;
    }
L_08A77408:
    ctx.gpr[4] = (0u | 267u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 75u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A77434u);
    ctx.gpr[5] = (0u | 267u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A77434u) goto L_08A77434;
    return;
L_08A77434:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A77364;
      }
      goto L_08A77440;
    }
L_08A77440:
    ctx.gpr[4] = (0u | 263u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 75u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A7746Cu);
    ctx.gpr[5] = (0u | 263u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7746Cu) goto L_08A7746C;
    return;
L_08A7746C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A77364;
      }
      goto L_08A77478;
    }
L_08A77478:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A77480;
    }
L_08A77480:
    ctx.gpr[4] = (0u | 28u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A774ACu);
    ctx.gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A774ACu) goto L_08A774AC;
    return;
L_08A774AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 3u);
    ctx.gpr[31] = (0x08A774C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A774C0u) goto L_08A774C0;
    return;
L_08A774C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[4] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[4] = (16880u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (17505u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(90));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A77510;
    }
L_08A77510:
    ctx.gpr[31] = (0x08A77518u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 337u, 0x08A5E008u>(ctx, &aot_mem) && ctx.pc == 0x08A77518u) goto L_08A77518;
    return;
L_08A77518:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77528;
      }
      goto L_08A77520;
    }
L_08A77520:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A77528;
    }
L_08A77528:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A77534u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77534u) goto L_08A77534;
    return;
L_08A77534:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A77550;
      }
      goto L_08A7753C;
    }
L_08A7753C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A77548u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 296u, 0x088B5D04u>(ctx, &aot_mem) && ctx.pc == 0x08A77548u) goto L_08A77548;
    return;
L_08A77548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A77550;
    }
L_08A77550:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A7755Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7755Cu) goto L_08A7755C;
    return;
L_08A7755C:
    ctx.gpr[4] = (0u | 2u);
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A77574;
    }
    goto L_08A77568;
L_08A77568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A77570;
    }
L_08A77570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A77574;
L_08A77574:
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_08A775AC;
    }
    goto L_08A775A0;
L_08A775A0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A775BC;
      }
      goto L_08A775AC;
    }
L_08A775AC:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A775BC;
L_08A775BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A775EC;
      }
      goto L_08A775C4;
    }
L_08A775C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[9] = (15800u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 20972u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[31] = (0x08A775ECu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 291u, 0x08AB5F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A775ECu) goto L_08A775EC;
    return;
L_08A775EC:
    ctx.gpr[4] = (0u | 5560u);
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 68u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A77610u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77610u) goto L_08A77610;
    return;
L_08A77610:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(22000));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    ctx.gpr[18] = (0u | 100u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A77654;
    }
L_08A77654:
    ctx.gpr[31] = (0x08A7765Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 337u, 0x08A5E008u>(ctx, &aot_mem) && ctx.pc == 0x08A7765Cu) goto L_08A7765C;
    return;
L_08A7765C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7766C;
      }
      goto L_08A77664;
    }
L_08A77664:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A7766C;
    }
L_08A7766C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A77678u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77678u) goto L_08A77678;
    return;
L_08A77678:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A77694;
      }
      goto L_08A77680;
    }
L_08A77680:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A7768Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 296u, 0x088B5D04u>(ctx, &aot_mem) && ctx.pc == 0x08A7768Cu) goto L_08A7768C;
    return;
L_08A7768C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A77694;
    }
L_08A77694:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A776A0u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A776A0u) goto L_08A776A0;
    return;
L_08A776A0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 5560u);
      if (branch_taken) {
          goto L_08A776B8;
      }
      goto L_08A776AC;
    }
L_08A776AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A776B4;
    }
L_08A776B4:
    ctx.gpr[4] = (0u | 5560u);
    goto L_08A776B8;
L_08A776B8:
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 68u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 27000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    ctx.gpr[18] = (0u | 100u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A77710;
    }
L_08A77710:
    ctx.gpr[31] = (0x08A77718u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 337u, 0x08A5E008u>(ctx, &aot_mem) && ctx.pc == 0x08A77718u) goto L_08A77718;
    return;
L_08A77718:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77728;
      }
      goto L_08A77720;
    }
L_08A77720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A77728;
    }
L_08A77728:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A77734u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77734u) goto L_08A77734;
    return;
L_08A77734:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A77750;
      }
      goto L_08A7773C;
    }
L_08A7773C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A77748u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 296u, 0x088B5D04u>(ctx, &aot_mem) && ctx.pc == 0x08A77748u) goto L_08A77748;
    return;
L_08A77748:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A77750;
    }
L_08A77750:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A7775Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7775Cu) goto L_08A7775C;
    return;
L_08A7775C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 5559u);
      if (branch_taken) {
          goto L_08A77774;
      }
      goto L_08A77768;
    }
L_08A77768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A77770;
    }
L_08A77770:
    ctx.gpr[4] = (0u | 5559u);
    goto L_08A77774;
L_08A77774:
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 70u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 27000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (17692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.gpr[18] = (0u | 100u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A777CC;
    }
L_08A777CC:
    ctx.gpr[6] = (ctx.gpr[23] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_08A777F4;
    }
    goto L_08A777E8;
L_08A777E8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A77800;
      }
      goto L_08A777F4;
    }
L_08A777F4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[15]);
    goto L_08A77800;
L_08A77800:
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[6] != ctx.gpr[18]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
        goto L_08A77910;
    }
    goto L_08A7780C;
L_08A7780C:
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A778DC;
      }
      goto L_08A77820;
    }
L_08A77820:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25640)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77838:
    ctx.gpr[4] = (0u | 51u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A77854;
      }
      goto L_08A77844;
    }
L_08A77844:
    ctx.gpr[4] = (0u | 213u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 213u);
      if (branch_taken) {
          goto L_08A77860;
      }
      goto L_08A77854;
    }
L_08A77854:
    ctx.gpr[4] = (0u | 214u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 214u);
    goto L_08A77860;
L_08A77860:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A77870u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A77870u) goto L_08A77870;
    return;
L_08A77870:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A77884u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77884u) goto L_08A77884;
    return;
L_08A77884:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A77954;
      }
      goto L_08A77898;
    }
L_08A77898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(197));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A778B4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A778B4u) goto L_08A778B4;
    return;
L_08A778B4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A778C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A778C8u) goto L_08A778C8;
    return;
L_08A778C8:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A77954;
      }
      goto L_08A778DC;
    }
L_08A778DC:
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A778F4u);
    ctx.gpr[5] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A778F4u) goto L_08A778F4;
    return;
L_08A778F4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(22000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A77954;
      }
      goto L_08A77910;
    }
L_08A77910:
    ctx.gpr[4] = (0u | 6u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08A77930u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A77930u) goto L_08A77930;
    return;
L_08A77930:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 4u);
    ctx.gpr[31] = (0x08A77944u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77944u) goto L_08A77944;
    return;
L_08A77944:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A77954;
L_08A77954:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17505u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[21] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A779A8;
    }
L_08A779A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[12]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77AC4;
      }
      goto L_08A779C0;
    }
L_08A779C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[12]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77AC4;
      }
      goto L_08A779D8;
    }
L_08A779D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[12]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77AC4;
      }
      goto L_08A779F0;
    }
L_08A779F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77AC4;
      }
      goto L_08A77A08;
    }
L_08A77A08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77AC4;
      }
      goto L_08A77A20;
    }
L_08A77A20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77AC4;
      }
      goto L_08A77A38;
    }
L_08A77A38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77AC4;
      }
      goto L_08A77A50;
    }
L_08A77A50:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77AC4;
      }
      goto L_08A77A68;
    }
L_08A77A68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77AC4;
      }
      goto L_08A77A80;
    }
L_08A77A80:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77AC4;
      }
      goto L_08A77A98;
    }
L_08A77A98:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77AC4;
      }
      goto L_08A77AB0;
    }
L_08A77AB0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    goto L_08A77AC4;
L_08A77AC4:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_08A77AE0;
    }
    goto L_08A77AD4;
L_08A77AD4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A77AEC;
      }
      goto L_08A77AE0;
    }
L_08A77AE0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[15]);
    goto L_08A77AEC;
L_08A77AEC:
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[5] != ctx.gpr[18]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
        goto L_08A77B6C;
    }
    goto L_08A77AF8;
L_08A77AF8:
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
        goto L_08A77BA8;
    }
    goto L_08A77B08;
L_08A77B08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_08A77BA4;
      }
      goto L_08A77B1C;
    }
L_08A77B1C:
    if (ctx.gpr[4] == ctx.gpr[6]) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
        goto L_08A77BA8;
    }
    goto L_08A77B24;
L_08A77B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(300)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(197));
      if (branch_taken) {
          goto L_08A77B64;
      }
      goto L_08A77B38;
    }
L_08A77B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77B5C;
      }
      goto L_08A77B54;
    }
L_08A77B54:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A77BA4;
      }
      goto L_08A77B5C;
    }
L_08A77B5C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A77BA4;
      }
      goto L_08A77B64;
    }
L_08A77B64:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A77BA4;
      }
      goto L_08A77B6C;
    }
L_08A77B6C:
    ctx.gpr[4] = (0u | 6u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08A77B88u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A77B88u) goto L_08A77B88;
    return;
L_08A77B88:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 4u);
    ctx.gpr[31] = (0x08A77B9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77B9Cu) goto L_08A77B9C;
    return;
L_08A77B9C:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A77BA4;
L_08A77BA4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08A77BA8;
L_08A77BA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 26u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17505u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[21] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A77C04;
    }
L_08A77C04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11476)));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08A77C9C;
      }
      goto L_08A77C1C;
    }
L_08A77C1C:
    ctx.gpr[6] = (0u | 287u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(11476), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (ctx.gpr[24] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A77C4Cu);
    ctx.gpr[5] = (0u | 1400u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77C4Cu) goto L_08A77C4C;
    return;
L_08A77C4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[4] = (0u | 30u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(20000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(70));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A77C9C;
    }
L_08A77C9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A77FA4;
      }
      goto L_08A77CA4;
    }
L_08A77CA4:
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11480)));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(237));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A77CCCu);
    ctx.gpr[5] = (0u | 6000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77CCCu) goto L_08A77CCC;
    return;
L_08A77CCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[4] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11480)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11480), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11480)));
    ctx.gpr[5] = (17608u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11480), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(55));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A77E48;
      }
      goto L_08A77D28;
    }
L_08A77D28:
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_08A77D54;
    }
    goto L_08A77D44;
L_08A77D44:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] >> 8u);
      if (branch_taken) {
          goto L_08A77D64;
      }
      goto L_08A77D54;
    }
L_08A77D54:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[15]);
    ctx.gpr[17] = (ctx.gpr[17] >> 8u);
    goto L_08A77D64;
L_08A77D64:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77D98;
      }
      goto L_08A77D74;
    }
L_08A77D74:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25600)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77D8C:
    ctx.gpr[4] = (0u | 215u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A77D9C;
      }
      goto L_08A77D98;
    }
L_08A77D98:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[14]);
    goto L_08A77D9C;
L_08A77D9C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[21] = (ctx.gpr[24] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A77DC0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A77DC0u) goto L_08A77DC0;
    return;
L_08A77DC0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 4u);
    ctx.gpr[31] = (0x08A77DD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77DD4u) goto L_08A77DD4;
    return;
L_08A77DD4:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A77E00;
      }
      goto L_08A77DF4;
    }
L_08A77DF4:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[17] != ctx.gpr[4]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
        goto L_08A77E1C;
    }
    goto L_08A77E00;
L_08A77E00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[4] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(35));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A77E30;
      }
      goto L_08A77E1C;
    }
L_08A77E1C:
    ctx.gpr[4] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(70));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    goto L_08A77E30;
L_08A77E30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (17505u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A77E48;
L_08A77E48:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08A77E68;
      }
      goto L_08A77E50;
    }
L_08A77E50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A77E68;
      }
      goto L_08A77E60;
    }
L_08A77E60:
    ctx.gpr[4] = (0u | 21u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A77E68;
L_08A77E68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A77FA4;
    }
    goto L_08A77E7C;
L_08A77E7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A77E88u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A77E88u) goto L_08A77E88;
    return;
L_08A77E88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A77E9Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77E9Cu) goto L_08A77E9C;
    return;
L_08A77E9C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A77FA4;
    }
    goto L_08A77EAC;
L_08A77EAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_08A77EF0;
      }
      goto L_08A77EB8;
    }
L_08A77EB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A77EE8;
      }
      goto L_08A77EDC;
    }
L_08A77EDC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A77EF0;
      }
      goto L_08A77EE8;
    }
L_08A77EE8:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A77EF0;
L_08A77EF0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A77F00u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A77F00u) goto L_08A77F00;
    return;
L_08A77F00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A77FA4;
    }
    goto L_08A77F0C;
L_08A77F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[5] = (0u | 55u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
        goto L_08A77F70;
    }
    goto L_08A77F4C;
L_08A77F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 31u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
        goto L_08A77F70;
    }
    goto L_08A77F60;
L_08A77F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A77F94;
      }
      goto L_08A77F70;
    }
L_08A77F70:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11472)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A77F94;
      }
      goto L_08A77F8C;
    }
L_08A77F8C:
    ctx.gpr[4] = (0u | 21u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11472), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A77F94;
L_08A77F94:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A77FA0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A77FA0u) goto L_08A77FA0;
    return;
L_08A77FA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A77FA4;
L_08A77FA4:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    ctx.gpr[23] = (ctx.gpr[23] & 65535u);
    ctx.gpr[8] = (0u | 20000u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[9] = (0u | 16500u);
    ctx.gpr[10] = (0u | 18000u);
    ctx.gpr[11] = (0u | 172u);
    ctx.gpr[2] = (0u | 171u);
    ctx.gpr[3] = (0u | 170u);
    ctx.gpr[12] = (0u | 169u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[13] = (0u | 286u);
    ctx.gpr[14] = (0u | 192u);
    ctx.gpr[24] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[15] = (32768u << 16u);
      if (branch_taken) {
          goto L_08A75F7C;
      }
      goto L_08A77FF8;
    }
L_08A77FF8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.pc = 0x08A78000u; return;
}

void recomp_unit_0156(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0156_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_156(Runtime &runtime) {
    runtime.register_generated_unit(156u, 0x08A74000u, 16384u, &recomp_unit_0156, &recomp_unit_0156_entry);
    runtime.register_function(0x08A74000u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74024u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74040u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74050u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74060u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74074u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74080u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7408Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74094u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A740ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A740B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A740C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A740D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A740E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A740E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A740F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74104u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7410Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7411Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74120u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7412Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7413Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74144u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74154u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7415Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74164u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7416Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74174u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74180u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74194u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74208u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74214u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7421Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74260u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74268u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74278u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74294u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74340u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74348u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74358u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74360u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74364u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A743A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74410u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7442Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74458u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74464u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7446Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74484u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7448Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74494u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A744DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A744F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A744FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7450Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74524u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74558u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7456Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A745B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A745BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A745F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74604u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74664u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74698u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A746ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74708u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74728u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74790u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A747C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A747D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74820u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74854u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74868u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A748C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A748F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74954u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74988u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A749E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74A1Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74A30u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74A8Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74AC0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74B20u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74B54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74B68u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74BC4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74C04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74C18u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74C28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74C34u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74C98u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74CCCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74CE0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74D40u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74D74u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74D88u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74DE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74DF4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74E00u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74E08u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74E14u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74E38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74E5Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74EA8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74EB4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74EBCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74EC8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74EECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F58u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F6Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F90u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74FF4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75010u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7501Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7502Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7503Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75054u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75088u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75098u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A750BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A750C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A750F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7514Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A751A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A751D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A751FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75230u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75258u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75264u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7527Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7528Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7529Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A752A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A752C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A752D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A752E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A752ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75310u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75344u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75354u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75364u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75390u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A753A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A753B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A753D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A753ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A753F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75410u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75420u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7543Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75450u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75458u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75468u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75488u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7549Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75518u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7552Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75534u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75544u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75560u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75574u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7557Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75594u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A755A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A755C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A755E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A755F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75608u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75614u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75620u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75648u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75650u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75658u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75660u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75690u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75708u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7571Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75728u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7573Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75754u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75760u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75770u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7577Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7578Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A757A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A757B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A757D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A757E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A757F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75810u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7582Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7584Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75860u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75870u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A758D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7591Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75964u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A759ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A759F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75A3Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75A84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75ACCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B14u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B5Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75BA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75BE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75BF8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C14u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C20u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C30u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C44u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C74u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C80u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75CCCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75CD4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75CE0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75CECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D00u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D08u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D1Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D24u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D48u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D58u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D80u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D90u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D98u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75DA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75DB0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75DF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E08u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E18u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E40u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E8Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F08u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FB0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FB8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FC8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FD0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FDCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FE4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76008u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76020u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76028u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76030u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76038u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76048u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76050u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76054u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76080u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76098u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76104u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76118u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7614Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76164u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7617Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76194u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7619Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A761BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A761FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76274u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A762A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A762DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A762F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76330u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76350u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76360u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76374u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76384u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76394u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A763A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A763E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A763FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76464u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76478u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76480u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76484u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A764B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A764C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A764D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A764F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76500u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76510u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76518u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7651Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76534u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7654Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76584u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76598u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A765A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A765A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A765BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A765E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A765F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7660Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76624u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76634u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76654u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76668u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76670u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7668Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7669Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A766B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A766CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A766D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A766E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76704u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76718u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76720u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7673Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76750u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7675Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76764u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76774u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76794u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A767A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A767B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A767C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A767DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A767F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A767F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76814u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76830u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7684Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76870u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7687Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A768A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A768ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A768B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A768BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A768E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76900u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76928u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76944u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76950u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7695Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7696Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76984u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7698Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76994u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A10u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A24u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A6Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A78u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76AC8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76AF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B78u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B80u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B98u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BB0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BDCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C20u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C68u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76CB0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76CDCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76CF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D58u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76DB8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76DE4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76DF8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76E28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76E54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76E68u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76EACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76ED4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F18u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F40u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F88u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76FB0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76FC4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77008u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77030u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77078u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A770A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A770B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A770FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7712Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77140u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77150u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7715Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A771A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A771D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A771E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7722Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77258u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7726Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A772B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A772BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A772DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A772E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A772F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77308u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77320u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7734Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7735Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77364u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77370u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A773B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A773DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77408u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77434u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77440u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7746Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77478u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77480u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A774ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A774C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77510u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77518u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77520u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77528u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77534u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7753Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77548u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77550u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7755Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77568u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77570u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77574u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A775A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A775ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A775BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A775C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A775ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77610u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77654u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7765Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77664u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7766Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77678u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77680u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7768Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77694u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77710u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77718u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77720u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77728u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77734u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7773Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77748u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77750u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7775Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77768u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77770u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77774u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77800u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7780Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77820u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77838u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77844u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77854u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77860u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77870u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77884u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77898u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A778B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A778C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A778DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A778F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77910u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77930u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77944u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77954u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A779A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A779C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A779D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A779F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A08u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A20u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A50u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A68u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A80u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A98u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77AB0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77AC4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77AD4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77AE0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77AECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77AF8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B08u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B1Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B24u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B5Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B64u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B6Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B88u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B9Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77BA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77BA8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C1Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C9Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77CA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77CCCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D44u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D64u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D74u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D8Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D98u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D9Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77DC0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77DD4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77DF4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E00u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E1Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E30u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E48u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E50u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E68u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E88u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E9Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77EACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77EB8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77EDCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77EE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77EF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F00u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F0Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F70u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F8Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F94u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77FA0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77FA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77FF8u, &recomp_unit_0156, "recomp_unit_0156");
}
} // namespace psprecomp
