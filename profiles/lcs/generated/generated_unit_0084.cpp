#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0084[4071] = {
    1, 0, 2, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 12, 0, 13, 14, 0, 0, 0, 0, 0, 15, 0, 0, 16, 17, 0,
    18, 0, 0, 19, 20, 0, 21, 22, 0, 0, 0, 0, 0, 23, 0, 0, 24, 25, 0, 26, 0, 0, 27, 28, 0, 29, 30, 0, 31, 0, 0, 32,
    0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0,
    0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 0, 48, 0, 49,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 52, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0,
    0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 88,
    0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 102, 0,
    0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0,
    0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 0, 145, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 150,
    0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0,
    157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 163,
    0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 168,
    0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 173, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 186,
    0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0,
    193, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0,
    0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 217, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 229, 0,
    230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 233, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 241, 0, 242, 0, 243,
    0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0,
    0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 255, 0, 256, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 270, 271, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 278, 0, 279, 0, 0, 0, 0, 0, 280, 0,
    0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 284, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0,
    0, 289, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 300,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0,
    306, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0,
    314, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0,
    0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0,
    0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 343, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0,
    0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 353, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 381, 382, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 387, 0, 0, 388, 0, 389, 0, 0, 0,
    0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 392, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 397,
    0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0,
    0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 408, 0, 409, 0, 0, 410, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0,
    0, 413, 414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 424, 0, 425,
    0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 428, 0, 0, 0, 429, 0, 0, 0,
    430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 433, 434, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 437, 0, 438, 0, 0, 439, 0, 0, 0, 0, 440, 0, 441, 0, 442, 0, 0,
    0, 0, 443, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0,
    449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 457, 0, 0, 458, 0, 459,
    0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462,
    0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 466, 0, 467, 0, 0, 468, 0, 469, 0, 0, 0, 470, 0,
    471, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 474, 475, 0, 0, 0, 0, 476, 0, 0, 477, 0, 478, 0, 0, 479, 0,
    0, 0, 0, 0, 480, 0, 0, 481, 0, 482, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 485, 0, 486, 487, 0, 0, 0, 0, 488, 0, 0,
    0, 489, 0, 490, 0, 491, 0, 0, 0, 0, 492, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 503, 0, 504, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 511, 512, 0, 0, 0,
    0, 513, 0, 0, 514, 0, 515, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0,
    0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0,
    0, 523, 0, 524, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 528, 0, 529, 0, 0, 0, 0, 530, 531, 0, 532, 0, 0, 0, 533, 0,
    0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0,
    0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 543, 0, 0,
    0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 548, 0, 549, 0, 550, 0, 0, 551, 0, 0, 0,
    0, 552, 0, 0, 553, 554, 555, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 558, 559, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0,
    562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 565, 566, 0, 0, 567, 0, 0, 568, 0,
    569, 0, 570, 0, 0, 571, 0, 572, 0, 573, 0, 0, 574, 0, 575, 0, 576, 0, 0, 577, 0, 578, 0, 579, 0, 0, 580, 0, 581, 0, 582, 0,
    0, 583, 0, 584, 0, 585, 0, 0, 586, 0, 587, 0, 588, 0, 0, 589, 0, 590, 0, 591, 0, 0, 592, 0, 593, 0, 594, 0, 0, 595, 0, 596,
    0, 597, 0, 0, 598, 0, 599, 0, 600, 0, 0, 601, 0, 602, 0, 603, 0, 0, 604, 0, 605, 0, 606, 0, 0, 607, 0, 608, 0, 609, 0, 0,
    610, 0, 611, 0, 612, 0, 0, 613, 0, 614, 0, 615, 0, 0, 616, 0, 617, 0, 0, 618, 0, 0, 619, 0, 0, 620, 0, 621, 0, 622, 0, 623,
    0, 624, 0, 0, 0, 0, 0, 625, 626, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 630,
    0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 639, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 642,
    0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646,
    0, 0, 0, 647, 0, 0, 648,
};
void recomp_unit_0084_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08954000u;
        entry_id = (entry_delta < 16284u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0084[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08954000;
    case 2u: goto L_08954008;
    case 3u: goto L_08954014;
    case 4u: goto L_0895401C;
    case 5u: goto L_08954024;
    case 6u: goto L_0895407C;
    case 7u: goto L_08954120;
    case 8u: goto L_08954128;
    case 9u: goto L_08954130;
    case 10u: goto L_08954138;
    case 11u: goto L_08954140;
    case 12u: goto L_08954144;
    case 13u: goto L_0895414C;
    case 14u: goto L_08954150;
    case 15u: goto L_08954168;
    case 16u: goto L_08954174;
    case 17u: goto L_08954178;
    case 18u: goto L_08954180;
    case 19u: goto L_0895418C;
    case 20u: goto L_08954190;
    case 21u: goto L_08954198;
    case 22u: goto L_0895419C;
    case 23u: goto L_089541B4;
    case 24u: goto L_089541C0;
    case 25u: goto L_089541C4;
    case 26u: goto L_089541CC;
    case 27u: goto L_089541D8;
    case 28u: goto L_089541DC;
    case 29u: goto L_089541E4;
    case 30u: goto L_089541E8;
    case 31u: goto L_089541F0;
    case 32u: goto L_089541FC;
    case 33u: goto L_08954208;
    case 34u: goto L_08954224;
    case 35u: goto L_08954230;
    case 36u: goto L_08954260;
    case 37u: goto L_08954268;
    case 38u: goto L_08954270;
    case 39u: goto L_08954278;
    case 40u: goto L_08954288;
    case 41u: goto L_08954294;
    case 42u: goto L_0895429C;
    case 43u: goto L_089542B4;
    case 44u: goto L_089542BC;
    case 45u: goto L_089542D4;
    case 46u: goto L_089542DC;
    case 47u: goto L_089542E4;
    case 48u: goto L_089542F4;
    case 49u: goto L_089542FC;
    case 50u: goto L_08954344;
    case 51u: goto L_089543A0;
    case 52u: goto L_089543A4;
    case 53u: goto L_089543AC;
    case 54u: goto L_089543B8;
    case 55u: goto L_089543C0;
    case 56u: goto L_089543DC;
    case 57u: goto L_08954464;
    case 58u: goto L_0895446C;
    case 59u: goto L_08954474;
    case 60u: goto L_0895449C;
    case 61u: goto L_089544C8;
    case 62u: goto L_089544D4;
    case 63u: goto L_089544E8;
    case 64u: goto L_089544F0;
    case 65u: goto L_08954504;
    case 66u: goto L_08954510;
    case 67u: goto L_08954518;
    case 68u: goto L_08954530;
    case 69u: goto L_08954548;
    case 70u: goto L_08954550;
    case 71u: goto L_08954598;
    case 72u: goto L_089545AC;
    case 73u: goto L_089545B4;
    case 74u: goto L_089545C8;
    case 75u: goto L_0895462C;
    case 76u: goto L_08954650;
    case 77u: goto L_08954670;
    case 78u: goto L_08954678;
    case 79u: goto L_0895468C;
    case 80u: goto L_089546BC;
    case 81u: goto L_089546D0;
    case 82u: goto L_0895471C;
    case 83u: goto L_089547A0;
    case 84u: goto L_089547B4;
    case 85u: goto L_089547C4;
    case 86u: goto L_08954868;
    case 87u: goto L_08954874;
    case 88u: goto L_0895487C;
    case 89u: goto L_08954888;
    case 90u: goto L_089548AC;
    case 91u: goto L_089548B8;
    case 92u: goto L_089548C4;
    case 93u: goto L_089548D0;
    case 94u: goto L_089548D8;
    case 95u: goto L_089548E0;
    case 96u: goto L_0895492C;
    case 97u: goto L_08954940;
    case 98u: goto L_08954948;
    case 99u: goto L_08954960;
    case 100u: goto L_089549E4;
    case 101u: goto L_089549F4;
    case 102u: goto L_089549F8;
    case 103u: goto L_08954A18;
    case 104u: goto L_08954A28;
    case 105u: goto L_08954A2C;
    case 106u: goto L_08954A4C;
    case 107u: goto L_08954A5C;
    case 108u: goto L_08954A60;
    case 109u: goto L_08954B3C;
    case 110u: goto L_08954B44;
    case 111u: goto L_08954B84;
    case 112u: goto L_08954B98;
    case 113u: goto L_08954BA0;
    case 114u: goto L_08954BB4;
    case 115u: goto L_08954C18;
    case 116u: goto L_08954C2C;
    case 117u: goto L_08954C38;
    case 118u: goto L_08954C4C;
    case 119u: goto L_08954C80;
    case 120u: goto L_08954D00;
    case 121u: goto L_08954D14;
    case 122u: goto L_08954D20;
    case 123u: goto L_08954D80;
    case 124u: goto L_08954DB8;
    case 125u: goto L_08954DC4;
    case 126u: goto L_08954DD4;
    case 127u: goto L_08954DDC;
    case 128u: goto L_08954DE4;
    case 129u: goto L_08954E18;
    case 130u: goto L_08954E68;
    case 131u: goto L_08954E70;
    case 132u: goto L_08954E78;
    case 133u: goto L_08954E94;
    case 134u: goto L_08954EA0;
    case 135u: goto L_08954EAC;
    case 136u: goto L_08954EB4;
    case 137u: goto L_08954EBC;
    case 138u: goto L_08954ED8;
    case 139u: goto L_08954EF0;
    case 140u: goto L_08954F14;
    case 141u: goto L_08954F44;
    case 142u: goto L_08954F50;
    case 143u: goto L_08954F58;
    case 144u: goto L_08954F60;
    case 145u: goto L_08954F78;
    case 146u: goto L_08954F90;
    case 147u: goto L_08954FB4;
    case 148u: goto L_08954FE4;
    case 149u: goto L_08954FF4;
    case 150u: goto L_08954FFC;
    case 151u: goto L_08955004;
    case 152u: goto L_08955020;
    case 153u: goto L_08955038;
    case 154u: goto L_08955060;
    case 155u: goto L_0895506C;
    case 156u: goto L_08955078;
    case 157u: goto L_08955080;
    case 158u: goto L_08955088;
    case 159u: goto L_089550A0;
    case 160u: goto L_089550B8;
    case 161u: goto L_089550E0;
    case 162u: goto L_089550EC;
    case 163u: goto L_089550FC;
    case 164u: goto L_08955104;
    case 165u: goto L_08955160;
    case 166u: goto L_08955168;
    case 167u: goto L_08955174;
    case 168u: goto L_0895517C;
    case 169u: goto L_08955184;
    case 170u: goto L_089551A0;
    case 171u: goto L_089551B8;
    case 172u: goto L_089551DC;
    case 173u: goto L_0895520C;
    case 174u: goto L_08955218;
    case 175u: goto L_08955220;
    case 176u: goto L_08955228;
    case 177u: goto L_08955244;
    case 178u: goto L_08955250;
    case 179u: goto L_08955258;
    case 180u: goto L_08955260;
    case 181u: goto L_08955278;
    case 182u: goto L_08955290;
    case 183u: goto L_089552B4;
    case 184u: goto L_089552E4;
    case 185u: goto L_089552F4;
    case 186u: goto L_089552FC;
    case 187u: goto L_08955304;
    case 188u: goto L_08955320;
    case 189u: goto L_08955338;
    case 190u: goto L_08955360;
    case 191u: goto L_0895536C;
    case 192u: goto L_08955378;
    case 193u: goto L_08955380;
    case 194u: goto L_08955388;
    case 195u: goto L_089553A4;
    case 196u: goto L_089553B0;
    case 197u: goto L_089553B8;
    case 198u: goto L_089553C0;
    case 199u: goto L_089553D8;
    case 200u: goto L_089553F0;
    case 201u: goto L_08955418;
    case 202u: goto L_08955424;
    case 203u: goto L_08955434;
    case 204u: goto L_0895543C;
    case 205u: goto L_08955448;
    case 206u: goto L_08955458;
    case 207u: goto L_089554B8;
    case 208u: goto L_089554C0;
    case 209u: goto L_089554D0;
    case 210u: goto L_089554EC;
    case 211u: goto L_089554F8;
    case 212u: goto L_08955508;
    case 213u: goto L_08955530;
    case 214u: goto L_08955620;
    case 215u: goto L_08955628;
    case 216u: goto L_08955644;
    case 217u: goto L_08955688;
    case 218u: goto L_0895568C;
    case 219u: goto L_089556BC;
    case 220u: goto L_089556C4;
    case 221u: goto L_089556CC;
    case 222u: goto L_089556D4;
    case 223u: goto L_089556DC;
    case 224u: goto L_089556F8;
    case 225u: goto L_08955710;
    case 226u: goto L_08955734;
    case 227u: goto L_08955764;
    case 228u: goto L_08955770;
    case 229u: goto L_08955778;
    case 230u: goto L_08955780;
    case 231u: goto L_0895579C;
    case 232u: goto L_089557A8;
    case 233u: goto L_089557B0;
    case 234u: goto L_089557B8;
    case 235u: goto L_089557D0;
    case 236u: goto L_089557E8;
    case 237u: goto L_08955800;
    case 238u: goto L_08955824;
    case 239u: goto L_08955854;
    case 240u: goto L_08955864;
    case 241u: goto L_0895586C;
    case 242u: goto L_08955874;
    case 243u: goto L_0895587C;
    case 244u: goto L_08955884;
    case 245u: goto L_0895588C;
    case 246u: goto L_089558A8;
    case 247u: goto L_089558B4;
    case 248u: goto L_089558BC;
    case 249u: goto L_089558C4;
    case 250u: goto L_089558E0;
    case 251u: goto L_089558F8;
    case 252u: goto L_0895591C;
    case 253u: goto L_0895594C;
    case 254u: goto L_08955958;
    case 255u: goto L_08955960;
    case 256u: goto L_08955968;
    case 257u: goto L_08955980;
    case 258u: goto L_08955998;
    case 259u: goto L_089559B0;
    case 260u: goto L_089559D4;
    case 261u: goto L_08955A04;
    case 262u: goto L_08955A14;
    case 263u: goto L_08955A1C;
    case 264u: goto L_08955A30;
    case 265u: goto L_08955A38;
    case 266u: goto L_08955A88;
    case 267u: goto L_08955AAC;
    case 268u: goto L_08955AB8;
    case 269u: goto L_08955AC8;
    case 270u: goto L_08955AD0;
    case 271u: goto L_08955AD4;
    case 272u: goto L_08955AF0;
    case 273u: goto L_08955AF8;
    case 274u: goto L_08955B10;
    case 275u: goto L_08955B38;
    case 276u: goto L_08955B44;
    case 277u: goto L_08955B50;
    case 278u: goto L_08955B58;
    case 279u: goto L_08955B60;
    case 280u: goto L_08955B78;
    case 281u: goto L_08955B9C;
    case 282u: goto L_08955BCC;
    case 283u: goto L_08955BD8;
    case 284u: goto L_08955BE0;
    case 285u: goto L_08955BF0;
    case 286u: goto L_08955C50;
    case 287u: goto L_08955C58;
    case 288u: goto L_08955C68;
    case 289u: goto L_08955C84;
    case 290u: goto L_08955C90;
    case 291u: goto L_08955CA0;
    case 292u: goto L_08955CC8;
    case 293u: goto L_08955DA8;
    case 294u: goto L_08955DB8;
    case 295u: goto L_08955DE4;
    case 296u: goto L_08955DF4;
    case 297u: goto L_08955E34;
    case 298u: goto L_08955E58;
    case 299u: goto L_08955E70;
    case 300u: goto L_08955E7C;
    case 301u: goto L_08955ECC;
    case 302u: goto L_08955F24;
    case 303u: goto L_08955F30;
    case 304u: goto L_08955F60;
    case 305u: goto L_08955F74;
    case 306u: goto L_08955F80;
    case 307u: goto L_08955F8C;
    case 308u: goto L_08955F98;
    case 309u: goto L_08955FAC;
    case 310u: goto L_08955FB4;
    case 311u: goto L_08955FE0;
    case 312u: goto L_08955FEC;
    case 313u: goto L_08955FF8;
    case 314u: goto L_08956000;
    case 315u: goto L_08956018;
    case 316u: goto L_08956020;
    case 317u: goto L_08956070;
    case 318u: goto L_08956098;
    case 319u: goto L_089560A8;
    case 320u: goto L_08956220;
    case 321u: goto L_08956230;
    case 322u: goto L_0895623C;
    case 323u: goto L_08956244;
    case 324u: goto L_0895628C;
    case 325u: goto L_089562F8;
    case 326u: goto L_08956304;
    case 327u: goto L_0895631C;
    case 328u: goto L_08956330;
    case 329u: goto L_08956344;
    case 330u: goto L_089563BC;
    case 331u: goto L_089563D4;
    case 332u: goto L_089563FC;
    case 333u: goto L_0895644C;
    case 334u: goto L_08956474;
    case 335u: goto L_08956484;
    case 336u: goto L_089564AC;
    case 337u: goto L_089564B8;
    case 338u: goto L_089564C4;
    case 339u: goto L_08956514;
    case 340u: goto L_08956524;
    case 341u: goto L_08956610;
    case 342u: goto L_08956620;
    case 343u: goto L_0895662C;
    case 344u: goto L_08956630;
    case 345u: goto L_0895664C;
    case 346u: goto L_08956658;
    case 347u: goto L_089566E8;
    case 348u: goto L_089566F8;
    case 349u: goto L_08956714;
    case 350u: goto L_08956720;
    case 351u: goto L_089567A8;
    case 352u: goto L_089567BC;
    case 353u: goto L_089567C0;
    case 354u: goto L_089567D4;
    case 355u: goto L_089567E0;
    case 356u: goto L_08956810;
    case 357u: goto L_0895683C;
    case 358u: goto L_08956854;
    case 359u: goto L_0895686C;
    case 360u: goto L_089568C4;
    case 361u: goto L_089568D8;
    case 362u: goto L_089568EC;
    case 363u: goto L_08956934;
    case 364u: goto L_08956960;
    case 365u: goto L_0895698C;
    case 366u: goto L_089569B8;
    case 367u: goto L_089569E4;
    case 368u: goto L_08956A10;
    case 369u: goto L_08956A3C;
    case 370u: goto L_08956A68;
    case 371u: goto L_08956A74;
    case 372u: goto L_08956A90;
    case 373u: goto L_08956AB0;
    case 374u: goto L_08956AF8;
    case 375u: goto L_08956B10;
    case 376u: goto L_08956B24;
    case 377u: goto L_08956B3C;
    case 378u: goto L_08956B54;
    case 379u: goto L_08956BAC;
    case 380u: goto L_08956BB8;
    case 381u: goto L_08956BC0;
    case 382u: goto L_08956BC4;
    case 383u: goto L_08956BD0;
    case 384u: goto L_08956C10;
    case 385u: goto L_08956C3C;
    case 386u: goto L_08956C58;
    case 387u: goto L_08956C5C;
    case 388u: goto L_08956C68;
    case 389u: goto L_08956C70;
    case 390u: goto L_08956C90;
    case 391u: goto L_08956CA4;
    case 392u: goto L_08956CA8;
    case 393u: goto L_08956CB4;
    case 394u: goto L_08956CBC;
    case 395u: goto L_08956CE4;
    case 396u: goto L_08956CF4;
    case 397u: goto L_08956CFC;
    case 398u: goto L_08956D10;
    case 399u: goto L_08956D1C;
    case 400u: goto L_08956D2C;
    case 401u: goto L_08956D38;
    case 402u: goto L_08956D44;
    case 403u: goto L_08956D58;
    case 404u: goto L_08956D74;
    case 405u: goto L_08956D88;
    case 406u: goto L_08956DA8;
    case 407u: goto L_08956DB0;
    case 408u: goto L_08956DC0;
    case 409u: goto L_08956DC8;
    case 410u: goto L_08956DD4;
    case 411u: goto L_08956DE4;
    case 412u: goto L_08956DF0;
    case 413u: goto L_08956E04;
    case 414u: goto L_08956E08;
    case 415u: goto L_08956E10;
    case 416u: goto L_08956E3C;
    case 417u: goto L_08956E4C;
    case 418u: goto L_08956E54;
    case 419u: goto L_08956E78;
    case 420u: goto L_08956F0C;
    case 421u: goto L_08956F38;
    case 422u: goto L_08956F5C;
    case 423u: goto L_08956F68;
    case 424u: goto L_08956F74;
    case 425u: goto L_08956F7C;
    case 426u: goto L_08956F8C;
    case 427u: goto L_08956FDC;
    case 428u: goto L_08956FE0;
    case 429u: goto L_08956FF0;
    case 430u: goto L_08957000;
    case 431u: goto L_08957024;
    case 432u: goto L_08957034;
    case 433u: goto L_0895708C;
    case 434u: goto L_08957090;
    case 435u: goto L_089570A0;
    case 436u: goto L_089570B4;
    case 437u: goto L_089570BC;
    case 438u: goto L_089570C4;
    case 439u: goto L_089570D0;
    case 440u: goto L_089570E4;
    case 441u: goto L_089570EC;
    case 442u: goto L_089570F4;
    case 443u: goto L_08957108;
    case 444u: goto L_0895711C;
    case 445u: goto L_08957124;
    case 446u: goto L_08957148;
    case 447u: goto L_08957150;
    case 448u: goto L_08957174;
    case 449u: goto L_08957180;
    case 450u: goto L_08957194;
    case 451u: goto L_089571AC;
    case 452u: goto L_089571C0;
    case 453u: goto L_089571F4;
    case 454u: goto L_08957228;
    case 455u: goto L_0895725C;
    case 456u: goto L_08957264;
    case 457u: goto L_08957268;
    case 458u: goto L_08957274;
    case 459u: goto L_0895727C;
    case 460u: goto L_089572A0;
    case 461u: goto L_089572A8;
    case 462u: goto L_089572FC;
    case 463u: goto L_08957310;
    case 464u: goto L_0895732C;
    case 465u: goto L_08957338;
    case 466u: goto L_0895734C;
    case 467u: goto L_08957354;
    case 468u: goto L_08957360;
    case 469u: goto L_08957368;
    case 470u: goto L_08957378;
    case 471u: goto L_08957380;
    case 472u: goto L_08957388;
    case 473u: goto L_0895739C;
    case 474u: goto L_089573C0;
    case 475u: goto L_089573C4;
    case 476u: goto L_089573D8;
    case 477u: goto L_089573E4;
    case 478u: goto L_089573EC;
    case 479u: goto L_089573F8;
    case 480u: goto L_08957410;
    case 481u: goto L_0895741C;
    case 482u: goto L_08957424;
    case 483u: goto L_08957438;
    case 484u: goto L_08957440;
    case 485u: goto L_08957454;
    case 486u: goto L_0895745C;
    case 487u: goto L_08957460;
    case 488u: goto L_08957474;
    case 489u: goto L_08957484;
    case 490u: goto L_0895748C;
    case 491u: goto L_08957494;
    case 492u: goto L_089574A8;
    case 493u: goto L_089574AC;
    case 494u: goto L_089574B4;
    case 495u: goto L_089574DC;
    case 496u: goto L_08957520;
    case 497u: goto L_08957528;
    case 498u: goto L_08957594;
    case 499u: goto L_089575A0;
    case 500u: goto L_089575B8;
    case 501u: goto L_089575C8;
    case 502u: goto L_089575D4;
    case 503u: goto L_08957618;
    case 504u: goto L_08957620;
    case 505u: goto L_08957624;
    case 506u: goto L_08957638;
    case 507u: goto L_08957660;
    case 508u: goto L_08957674;
    case 509u: goto L_089576AC;
    case 510u: goto L_089576E0;
    case 511u: goto L_089576EC;
    case 512u: goto L_089576F0;
    case 513u: goto L_08957704;
    case 514u: goto L_08957710;
    case 515u: goto L_08957718;
    case 516u: goto L_08957724;
    case 517u: goto L_08957744;
    case 518u: goto L_08957770;
    case 519u: goto L_0895778C;
    case 520u: goto L_089577A8;
    case 521u: goto L_089577C4;
    case 522u: goto L_089577F0;
    case 523u: goto L_08957804;
    case 524u: goto L_0895780C;
    case 525u: goto L_08957810;
    case 526u: goto L_0895782C;
    case 527u: goto L_08957838;
    case 528u: goto L_08957840;
    case 529u: goto L_08957848;
    case 530u: goto L_0895785C;
    case 531u: goto L_08957860;
    case 532u: goto L_08957868;
    case 533u: goto L_08957878;
    case 534u: goto L_08957884;
    case 535u: goto L_089578A8;
    case 536u: goto L_089578B8;
    case 537u: goto L_089578D8;
    case 538u: goto L_089578F4;
    case 539u: goto L_08957914;
    case 540u: goto L_08957940;
    case 541u: goto L_08957960;
    case 542u: goto L_08957968;
    case 543u: goto L_08957974;
    case 544u: goto L_08957988;
    case 545u: goto L_08957998;
    case 546u: goto L_089579B4;
    case 547u: goto L_089579CC;
    case 548u: goto L_089579D4;
    case 549u: goto L_089579DC;
    case 550u: goto L_089579E4;
    case 551u: goto L_089579F0;
    case 552u: goto L_08957A04;
    case 553u: goto L_08957A10;
    case 554u: goto L_08957A14;
    case 555u: goto L_08957A18;
    case 556u: goto L_08957A20;
    case 557u: goto L_08957A34;
    case 558u: goto L_08957A50;
    case 559u: goto L_08957A54;
    case 560u: goto L_08957A6C;
    case 561u: goto L_08957A78;
    case 562u: goto L_08957A80;
    case 563u: goto L_08957A90;
    case 564u: goto L_08957AD0;
    case 565u: goto L_08957ADC;
    case 566u: goto L_08957AE0;
    case 567u: goto L_08957AEC;
    case 568u: goto L_08957AF8;
    case 569u: goto L_08957B00;
    case 570u: goto L_08957B08;
    case 571u: goto L_08957B14;
    case 572u: goto L_08957B1C;
    case 573u: goto L_08957B24;
    case 574u: goto L_08957B30;
    case 575u: goto L_08957B38;
    case 576u: goto L_08957B40;
    case 577u: goto L_08957B4C;
    case 578u: goto L_08957B54;
    case 579u: goto L_08957B5C;
    case 580u: goto L_08957B68;
    case 581u: goto L_08957B70;
    case 582u: goto L_08957B78;
    case 583u: goto L_08957B84;
    case 584u: goto L_08957B8C;
    case 585u: goto L_08957B94;
    case 586u: goto L_08957BA0;
    case 587u: goto L_08957BA8;
    case 588u: goto L_08957BB0;
    case 589u: goto L_08957BBC;
    case 590u: goto L_08957BC4;
    case 591u: goto L_08957BCC;
    case 592u: goto L_08957BD8;
    case 593u: goto L_08957BE0;
    case 594u: goto L_08957BE8;
    case 595u: goto L_08957BF4;
    case 596u: goto L_08957BFC;
    case 597u: goto L_08957C04;
    case 598u: goto L_08957C10;
    case 599u: goto L_08957C18;
    case 600u: goto L_08957C20;
    case 601u: goto L_08957C2C;
    case 602u: goto L_08957C34;
    case 603u: goto L_08957C3C;
    case 604u: goto L_08957C48;
    case 605u: goto L_08957C50;
    case 606u: goto L_08957C58;
    case 607u: goto L_08957C64;
    case 608u: goto L_08957C6C;
    case 609u: goto L_08957C74;
    case 610u: goto L_08957C80;
    case 611u: goto L_08957C88;
    case 612u: goto L_08957C90;
    case 613u: goto L_08957C9C;
    case 614u: goto L_08957CA4;
    case 615u: goto L_08957CAC;
    case 616u: goto L_08957CB8;
    case 617u: goto L_08957CC0;
    case 618u: goto L_08957CCC;
    case 619u: goto L_08957CD8;
    case 620u: goto L_08957CE4;
    case 621u: goto L_08957CEC;
    case 622u: goto L_08957CF4;
    case 623u: goto L_08957CFC;
    case 624u: goto L_08957D04;
    case 625u: goto L_08957D1C;
    case 626u: goto L_08957D20;
    case 627u: goto L_08957D28;
    case 628u: goto L_08957D58;
    case 629u: goto L_08957D74;
    case 630u: goto L_08957D7C;
    case 631u: goto L_08957D88;
    case 632u: goto L_08957DA8;
    case 633u: goto L_08957DD4;
    case 634u: goto L_08957DF8;
    case 635u: goto L_08957E24;
    case 636u: goto L_08957E68;
    case 637u: goto L_08957E90;
    case 638u: goto L_08957EA8;
    case 639u: goto L_08957EAC;
    case 640u: goto L_08957EB8;
    case 641u: goto L_08957EF8;
    case 642u: goto L_08957EFC;
    case 643u: goto L_08957F10;
    case 644u: goto L_08957F24;
    case 645u: goto L_08957F48;
    case 646u: goto L_08957F7C;
    case 647u: goto L_08957F8C;
    case 648u: goto L_08957F98;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08954000:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089542FC;
      }
      goto L_08954008;
    }
L_08954008:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954130;
      }
      goto L_08954014;
    }
L_08954014:
    ctx.gpr[31] = (0x0895401Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0895401Cu) goto L_0895401C;
    return;
L_0895401C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954128;
      }
      goto L_08954024;
    }
L_08954024:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0895407Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 290u, 0x089D6198u>(ctx, &aot_mem) && ctx.pc == 0x0895407Cu) goto L_0895407C;
    return;
L_0895407C:
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    ctx.gpr[4] = (15383u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23157u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[26];
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[22] & 1u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
        goto L_08954138;
    }
    goto L_08954120;
L_08954120:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08954144;
      }
      goto L_08954128;
    }
L_08954128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089542FC;
      }
      goto L_08954130;
    }
L_08954130:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089542FC;
      }
      goto L_08954138;
    }
L_08954138:
    if (ctx.gpr[22] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
        goto L_08954150;
    }
    goto L_08954140;
L_08954140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    goto L_08954144;
L_08954144:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
        goto L_08954178;
    }
    goto L_0895414C;
L_0895414C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    goto L_08954150;
L_08954150:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
        goto L_08954178;
    }
    goto L_08954168;
L_08954168:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954270;
      }
      goto L_08954174;
    }
L_08954174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    goto L_08954178;
L_08954178:
    if (ctx.gpr[16] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
        goto L_08954190;
    }
    goto L_08954180;
L_08954180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[22] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
        goto L_0895419C;
    }
    goto L_0895418C;
L_0895418C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    goto L_08954190;
L_08954190:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(260)));
        goto L_089541C4;
    }
    goto L_08954198;
L_08954198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    goto L_0895419C;
L_0895419C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(260)));
        goto L_089541C4;
    }
    goto L_089541B4;
L_089541B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954270;
      }
      goto L_089541C0;
    }
L_089541C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(260)));
    goto L_089541C4;
L_089541C4:
    if (ctx.gpr[16] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
        goto L_089541DC;
    }
    goto L_089541CC;
L_089541CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(264)));
    if (ctx.gpr[22] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(256)));
        goto L_089541E8;
    }
    goto L_089541D8;
L_089541D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    goto L_089541DC;
L_089541DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089541FC;
      }
      goto L_089541E4;
    }
L_089541E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(256)));
    goto L_089541E8;
L_089541E8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089541FC;
      }
      goto L_089541F0;
    }
L_089541F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(278)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954270;
      }
      goto L_089541FC;
    }
L_089541FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954268;
      }
      goto L_08954208;
    }
L_08954208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(500), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(256), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08954224u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 392u, 0x089521B4u>(ctx, &aot_mem) && ctx.pc == 0x08954224u) goto L_08954224;
    return;
L_08954224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954278;
      }
      goto L_08954230;
    }
L_08954230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(260), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(264), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08954260u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 195u, 0x08951468u>(ctx, &aot_mem) && ctx.pc == 0x08954260u) goto L_08954260;
    return;
L_08954260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089542E4;
      }
      goto L_08954268;
    }
L_08954268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089542FC;
      }
      goto L_08954270;
    }
L_08954270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089542FC;
      }
      goto L_08954278;
    }
L_08954278:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(260), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(264), ctx.gpr[22]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08954294;
      }
      goto L_08954288;
    }
L_08954288:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[22] << 3u);
      if (branch_taken) {
          goto L_0895429C;
      }
      goto L_08954294;
    }
L_08954294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089542DC;
      }
      goto L_0895429C;
    }
L_0895429C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[5]);
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_089542BC;
    }
    goto L_089542B4;
L_089542B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089542DC;
      }
      goto L_089542BC;
    }
L_089542BC:
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089542DC;
      }
      goto L_089542D4;
    }
L_089542D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089542DC;
      }
      goto L_089542DC;
    }
L_089542DC:
    ctx.gpr[31] = (0x089542E4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 195u, 0x08951468u>(ctx, &aot_mem) && ctx.pc == 0x089542E4u) goto L_089542E4;
    return;
L_089542E4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(278), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089542F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 340u, 0x08951D50u>(ctx, &aot_mem) && ctx.pc == 0x089542F4u) goto L_089542F4;
    return;
L_089542F4:
    ctx.gpr[31] = (0x089542FCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 443u, 0x08952694u>(ctx, &aot_mem) && ctx.pc == 0x089542FCu) goto L_089542FC;
    return;
L_089542FC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08954344:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-672));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[31]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(297)));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089543B8;
      }
      goto L_089543A0;
    }
L_089543A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089543A4;
L_089543A4:
    ctx.gpr[31] = (0x089543ACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 127u, 0x089D53ACu>(ctx, &aot_mem) && ctx.pc == 0x089543ACu) goto L_089543AC;
    return;
L_089543AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(297)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089543A4;
      }
      goto L_089543B8;
    }
L_089543B8:
    ctx.gpr[31] = (0x089543C0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 443u, 0x08952694u>(ctx, &aot_mem) && ctx.pc == 0x089543C0u) goto L_089543C0;
    return;
L_089543C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895446C;
      }
      goto L_089543DC;
    }
L_089543DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.gpr[11] = (2269u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-2528));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[11]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (50426u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17112u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[10] = (0u | 3u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-464));
    ctx.gpr[5] = (0u & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08954474;
      }
      goto L_08954464;
    }
L_08954464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089544D4;
      }
      goto L_0895446C;
    }
L_0895446C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956244;
      }
      goto L_08954474;
    }
L_08954474:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (15104u << 16u);
      if (branch_taken) {
          goto L_089544C8;
      }
      goto L_0895449C;
    }
L_0895449C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[3] = (ctx.gpr[3] << 8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[3] = (ctx.gpr[3] >> 8u);
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895449C;
      }
      goto L_089544C8;
    }
L_089544C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089544D4;
L_089544D4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08954504;
      }
      goto L_089544E8;
    }
L_089544E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08954548;
      }
      goto L_089544F0;
    }
L_089544F0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08954550;
      }
      goto L_08954504;
    }
L_08954504:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08954530;
      }
      goto L_08954510;
    }
L_08954510:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954548;
      }
      goto L_08954518;
    }
L_08954518:
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[6] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08954550;
      }
      goto L_08954530;
    }
L_08954530:
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08954550;
      }
      goto L_08954548;
    }
L_08954548:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[4]);
    goto L_08954550;
L_08954550:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_089545AC;
      }
      goto L_08954598;
    }
L_08954598:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7060)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(940)));
        goto L_089545B4;
    }
    goto L_089545AC;
L_089545AC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(940)));
    goto L_089545B4;
L_089545B4:
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_089545C8;
    }
    goto L_089545C8;
L_089545C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089548AC;
      }
      goto L_0895462C;
    }
L_0895462C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[4]);
    goto L_08954650;
L_08954650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    goto L_08954670;
L_08954670:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08954888;
      }
      goto L_08954678;
    }
L_08954678:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954888;
      }
      goto L_0895468C;
    }
L_0895468C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895487C;
      }
      goto L_089546BC;
    }
L_089546BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x089546D0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 481u, 0x08A05DFCu>(ctx, &aot_mem) && ctx.pc == 0x089546D0u) goto L_089546D0;
    return;
L_089546D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(304));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[19]);
    ctx.gpr[31] = (0x0895471Cu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 755u, 0x0894FE28u>(ctx, &aot_mem) && ctx.pc == 0x0895471Cu) goto L_0895471C;
    return;
L_0895471C:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x089547A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x089547A0u) goto L_089547A0;
    return;
L_089547A0:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089547B4u);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 380u, 0x08A7EDC8u>(ctx, &aot_mem) && ctx.pc == 0x089547B4u) goto L_089547B4;
    return;
L_089547B4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[31] = (0x089547C4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 761u, 0x0894FEACu>(ctx, &aot_mem) && ctx.pc == 0x089547C4u) goto L_089547C4;
    return;
L_089547C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895487C;
      }
      goto L_08954868;
    }
L_08954868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895487C;
      }
      goto L_08954874;
    }
L_08954874:
    ctx.gpr[31] = (0x0895487Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0895487Cu) goto L_0895487C;
    return;
L_0895487C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
      if (branch_taken) {
          goto L_08954670;
      }
      goto L_08954888;
    }
L_08954888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08954650;
      }
      goto L_089548AC;
    }
L_089548AC:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x089548B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089548B8u) goto L_089548B8;
    return;
L_089548B8:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089548C4u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089548C4u) goto L_089548C4;
    return;
L_089548C4:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x089548D0u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089548D0u) goto L_089548D0;
    return;
L_089548D0:
    ctx.gpr[31] = (0x089548D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 473u, 0x088CF8D8u>(ctx, &aot_mem) && ctx.pc == 0x089548D8u) goto L_089548D8;
    return;
L_089548D8:
    ctx.gpr[31] = (0x089548E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 479u, 0x088CF948u>(ctx, &aot_mem) && ctx.pc == 0x089548E0u) goto L_089548E0;
    return;
L_089548E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-32));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[26];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[11]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08954940;
      }
      goto L_0895492C;
    }
L_0895492C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7060)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[2] = (2227u << 16u);
      if (branch_taken) {
          goto L_08954948;
      }
      goto L_08954940;
    }
L_08954940:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[2] = (2227u << 16u);
    goto L_08954948;
L_08954948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(940)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_08954960;
    }
    goto L_08954960;
L_08954960:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[3] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(22912)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11016)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_089549F8;
      }
      goto L_089549E4;
    }
L_089549E4:
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 255u);
        goto L_089549F4;
    }
    goto L_089549F4;
L_089549F4:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    goto L_089549F8;
L_089549F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(22912)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11008)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08954A2C;
      }
      goto L_08954A18;
    }
L_08954A18:
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 255u);
        goto L_08954A28;
    }
    goto L_08954A28;
L_08954A28:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    goto L_08954A2C;
L_08954A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(22912)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11012)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08954A60;
      }
      goto L_08954A4C;
    }
L_08954A4C:
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 255u);
        goto L_08954A5C;
    }
    goto L_08954A5C;
L_08954A5C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08954A60;
L_08954A60:
    ctx.gpr[4] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[8] << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[9]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6556), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[6] = (5888u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (23808u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6556)));
    ctx.gpr[7] = (23552u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6864)));
    ctx.gpr[7] = (21504u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (51200u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (51457u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (39680u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954B44;
      }
      goto L_08954B3C;
    }
L_08954B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11108)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[4]);
    goto L_08954B44;
L_08954B44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[26];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[11]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08954B98;
      }
      goto L_08954B84;
    }
L_08954B84:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7060)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(940)));
        goto L_08954BA0;
    }
    goto L_08954B98;
L_08954B98:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(940)));
    goto L_08954BA0;
L_08954BA0:
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
        goto L_08954BB4;
    }
    goto L_08954BB4;
L_08954BB4:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-880));
    ctx.gpr[31] = (0x08954C18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 481u, 0x08A05DFCu>(ctx, &aot_mem) && ctx.pc == 0x08954C18u) goto L_08954C18;
    return;
L_08954C18:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08954C2Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 754u, 0x0894FE08u>(ctx, &aot_mem) && ctx.pc == 0x08954C2Cu) goto L_08954C2C;
    return;
L_08954C2C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08954C38u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 756u, 0x0894FE50u>(ctx, &aot_mem) && ctx.pc == 0x08954C38u) goto L_08954C38;
    return;
L_08954C38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08954C4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08954C4Cu) goto L_08954C4C;
    return;
L_08954C4C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[4] = (15360u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 61u);
    ctx.gpr[31] = (0x08954C80u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 761u, 0x0894FEACu>(ctx, &aot_mem) && ctx.pc == 0x08954C80u) goto L_08954C80;
    return;
L_08954C80:
    ctx.gpr[4] = (2816u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (15u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[7] = (2048u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08955A38;
      }
      goto L_08954D00;
    }
L_08954D00:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954D20;
      }
      goto L_08954D14;
    }
L_08954D14:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08954D20;
L_08954D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<40u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<41u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<42u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<43u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[21] = (0u | 255u);
      if (branch_taken) {
          goto L_08955530;
      }
      goto L_08954D80;
    }
L_08954D80:
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (2228u << 16u);
    ctx.gpr[7] = (2560u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-29412));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[4]);
    goto L_08954DB8;
L_08954DB8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08954DDC;
      }
      goto L_08954DC4;
    }
L_08954DC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08954DD4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 175u, 0x08950FE8u>(ctx, &aot_mem) && ctx.pc == 0x08954DD4u) goto L_08954DD4;
    return;
L_08954DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954DE4;
      }
      goto L_08954DDC;
    }
L_08954DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<27u, 4u>(vfpu_value); }
    goto L_08954DE4;
L_08954DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955160;
      }
      goto L_08954E18;
    }
L_08954E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[6] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08955104;
      }
      goto L_08954E68;
    }
L_08954E68:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08954EA0;
      }
      goto L_08954E70;
    }
L_08954E70:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08954E94;
      }
      goto L_08954E78;
    }
L_08954E78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954EA0;
      }
      goto L_08954E94;
    }
L_08954E94:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954E68;
      }
      goto L_08954EA0;
    }
L_08954EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954FF4;
      }
      goto L_08954EAC;
    }
L_08954EAC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08954F50;
      }
      goto L_08954EB4;
    }
L_08954EB4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08954ED8;
      }
      goto L_08954EBC;
    }
L_08954EBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08954F50;
      }
      goto L_08954ED8;
    }
L_08954ED8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954F44;
      }
      goto L_08954EF0;
    }
L_08954EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 13u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08954F44;
      }
      goto L_08954F14;
    }
L_08954F14:
    // vflush: architectural no-op that retains VFPU prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[4]);
    goto L_08954F44;
L_08954F44:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954EAC;
      }
      goto L_08954F50;
    }
L_08954F50:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089550FC;
      }
      goto L_08954F58;
    }
L_08954F58:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089550FC;
      }
      goto L_08954F60;
    }
L_08954F60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089550FC;
      }
      goto L_08954F78;
    }
L_08954F78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08954FE4;
      }
      goto L_08954F90;
    }
L_08954F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 13u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08954FE4;
      }
      goto L_08954FB4;
    }
L_08954FB4:
    // vflush: architectural no-op that retains VFPU prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[4]);
    goto L_08954FE4;
L_08954FE4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954F50;
      }
      goto L_08954FF4;
    }
L_08954FF4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08955078;
      }
      goto L_08954FFC;
    }
L_08954FFC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08955020;
      }
      goto L_08955004;
    }
L_08955004:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955078;
      }
      goto L_08955020;
    }
L_08955020:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895506C;
      }
      goto L_08955038;
    }
L_08955038:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<76u>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<117u, 1u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_0895506C;
      }
      goto L_08955060;
    }
L_08955060:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0895506Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 154u, 0x08950CF4u>(ctx, &aot_mem) && ctx.pc == 0x0895506Cu) goto L_0895506C;
    return;
L_0895506C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08954FF4;
      }
      goto L_08955078;
    }
L_08955078:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089550FC;
      }
      goto L_08955080;
    }
L_08955080:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089550FC;
      }
      goto L_08955088;
    }
L_08955088:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089550FC;
      }
      goto L_089550A0;
    }
L_089550A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089550EC;
      }
      goto L_089550B8;
    }
L_089550B8:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<76u>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<117u, 1u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_089550EC;
      }
      goto L_089550E0;
    }
L_089550E0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089550ECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 154u, 0x08950CF4u>(ctx, &aot_mem) && ctx.pc == 0x089550ECu) goto L_089550EC;
    return;
L_089550EC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955078;
      }
      goto L_089550FC;
    }
L_089550FC:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08954E68;
      }
      goto L_08955104;
    }
L_08955104:
    ctx.gpr[4] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(820)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[6] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2560u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0895543C;
      }
      goto L_08955160;
    }
L_08955160:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0895543C;
      }
      goto L_08955168;
    }
L_08955168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089552F4;
      }
      goto L_08955174;
    }
L_08955174:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08955218;
      }
      goto L_0895517C;
    }
L_0895517C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089551A0;
      }
      goto L_08955184;
    }
L_08955184:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955218;
      }
      goto L_089551A0;
    }
L_089551A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895520C;
      }
      goto L_089551B8;
    }
L_089551B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 13u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_0895520C;
      }
      goto L_089551DC;
    }
L_089551DC:
    // vflush: architectural no-op that retains VFPU prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[4]);
    goto L_0895520C;
L_0895520C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955174;
      }
      goto L_08955218;
    }
L_08955218:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08955250;
      }
      goto L_08955220;
    }
L_08955220:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08955244;
      }
      goto L_08955228;
    }
L_08955228:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955250;
      }
      goto L_08955244;
    }
L_08955244:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955218;
      }
      goto L_08955250;
    }
L_08955250:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08955434;
      }
      goto L_08955258;
    }
L_08955258:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08955434;
      }
      goto L_08955260;
    }
L_08955260:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08955434;
      }
      goto L_08955278;
    }
L_08955278:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089552E4;
      }
      goto L_08955290;
    }
L_08955290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 13u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_089552E4;
      }
      goto L_089552B4;
    }
L_089552B4:
    // vflush: architectural no-op that retains VFPU prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[4]);
    goto L_089552E4;
L_089552E4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955250;
      }
      goto L_089552F4;
    }
L_089552F4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08955378;
      }
      goto L_089552FC;
    }
L_089552FC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08955320;
      }
      goto L_08955304;
    }
L_08955304:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955378;
      }
      goto L_08955320;
    }
L_08955320:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895536C;
      }
      goto L_08955338;
    }
L_08955338:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<76u>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<117u, 1u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_0895536C;
      }
      goto L_08955360;
    }
L_08955360:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0895536Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 154u, 0x08950CF4u>(ctx, &aot_mem) && ctx.pc == 0x0895536Cu) goto L_0895536C;
    return;
L_0895536C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089552F4;
      }
      goto L_08955378;
    }
L_08955378:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089553B0;
      }
      goto L_08955380;
    }
L_08955380:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089553A4;
      }
      goto L_08955388;
    }
L_08955388:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089553B0;
      }
      goto L_089553A4;
    }
L_089553A4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955378;
      }
      goto L_089553B0;
    }
L_089553B0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08955434;
      }
      goto L_089553B8;
    }
L_089553B8:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08955434;
      }
      goto L_089553C0;
    }
L_089553C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08955434;
      }
      goto L_089553D8;
    }
L_089553D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955424;
      }
      goto L_089553F0;
    }
L_089553F0:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<76u>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<117u, 1u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08955424;
      }
      goto L_08955418;
    }
L_08955418:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955424u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 154u, 0x08950CF4u>(ctx, &aot_mem) && ctx.pc == 0x08955424u) goto L_08955424;
    return;
L_08955424:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089553B0;
      }
      goto L_08955434;
    }
L_08955434:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08955168;
      }
      goto L_0895543C;
    }
L_0895543C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089554C0;
      }
      goto L_08955448;
    }
L_08955448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11092))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_089554B8;
      }
      goto L_08955458;
    }
L_08955458:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(7492));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(7496))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08955458;
      }
      goto L_089554B8;
    }
L_089554B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089554F8;
      }
      goto L_089554C0;
    }
L_089554C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11092))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089554F8;
      }
      goto L_089554D0;
    }
L_089554D0:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[18] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(7492));
    ctx.gpr[31] = (0x089554ECu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 430u, 0x08952490u>(ctx, &aot_mem) && ctx.pc == 0x089554ECu) goto L_089554EC;
    return;
L_089554EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(7496))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089554D0;
      }
      goto L_089554F8;
    }
L_089554F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955508u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 185u, 0x08951254u>(ctx, &aot_mem) && ctx.pc == 0x08955508u) goto L_08955508;
    return;
L_08955508:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08954DB8;
      }
      goto L_08955530;
    }
L_08955530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[5] = (7424u << 16u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (57088u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (57600u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (59136u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (18176u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (50944u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (56319u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4102));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955628;
      }
      goto L_08955620;
    }
L_08955620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08955644;
      }
      goto L_08955628;
    }
L_08955628:
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (0u | 255u);
        goto L_08955644;
    }
    goto L_08955644;
L_08955644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<27u, 4u>(vfpu_value); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_08955A30;
      }
      goto L_08955688;
    }
L_08955688:
    ctx.gpr[8] = (ctx.gpr[10] << 2u);
    goto L_0895568C;
L_0895568C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895586C;
      }
      goto L_089556BC;
    }
L_089556BC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_089556CC;
      }
      goto L_089556C4;
    }
L_089556C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08955A1C;
      }
      goto L_089556CC;
    }
L_089556CC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08955770;
      }
      goto L_089556D4;
    }
L_089556D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089556F8;
      }
      goto L_089556DC;
    }
L_089556DC:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32767u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] & 32767u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955770;
      }
      goto L_089556F8;
    }
L_089556F8:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32768u);
    ctx.gpr[2] = (ctx.gpr[2] >> 15u);
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955764;
      }
      goto L_08955710;
    }
L_08955710:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 13u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08955764;
      }
      goto L_08955734;
    }
L_08955734:
    // vflush: architectural no-op that retains VFPU prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[2]);
    goto L_08955764;
L_08955764:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089556CC;
      }
      goto L_08955770;
    }
L_08955770:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089557A8;
      }
      goto L_08955778;
    }
L_08955778:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0895579C;
      }
      goto L_08955780;
    }
L_08955780:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32767u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] & 32767u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089557A8;
      }
      goto L_0895579C;
    }
L_0895579C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955770;
      }
      goto L_089557A8;
    }
L_089557A8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08955864;
      }
      goto L_089557B0;
    }
L_089557B0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08955864;
      }
      goto L_089557B8;
    }
L_089557B8:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32767u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] & 32767u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08955864;
      }
      goto L_089557D0;
    }
L_089557D0:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32768u);
    ctx.gpr[2] = (ctx.gpr[2] >> 15u);
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955854;
      }
      goto L_089557E8;
    }
L_089557E8:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32768u);
    ctx.gpr[2] = (ctx.gpr[2] >> 15u);
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955854;
      }
      goto L_08955800;
    }
L_08955800:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 13u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08955854;
      }
      goto L_08955824;
    }
L_08955824:
    // vflush: architectural no-op that retains VFPU prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[2]);
    goto L_08955854;
L_08955854:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089557A8;
      }
      goto L_08955864;
    }
L_08955864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089556BC;
      }
      goto L_0895586C;
    }
L_0895586C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0895587C;
      }
      goto L_08955874;
    }
L_08955874:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08955A1C;
      }
      goto L_0895587C;
    }
L_0895587C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_089558B4;
      }
      goto L_08955884;
    }
L_08955884:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089558A8;
      }
      goto L_0895588C;
    }
L_0895588C:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32767u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] & 32767u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089558B4;
      }
      goto L_089558A8;
    }
L_089558A8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895587C;
      }
      goto L_089558B4;
    }
L_089558B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08955958;
      }
      goto L_089558BC;
    }
L_089558BC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_089558E0;
      }
      goto L_089558C4;
    }
L_089558C4:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32767u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] & 32767u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955958;
      }
      goto L_089558E0;
    }
L_089558E0:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32768u);
    ctx.gpr[2] = (ctx.gpr[2] >> 15u);
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895594C;
      }
      goto L_089558F8;
    }
L_089558F8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 13u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_0895594C;
      }
      goto L_0895591C;
    }
L_0895591C:
    // vflush: architectural no-op that retains VFPU prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[2]);
    goto L_0895594C;
L_0895594C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089558B4;
      }
      goto L_08955958;
    }
L_08955958:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08955A14;
      }
      goto L_08955960;
    }
L_08955960:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08955A14;
      }
      goto L_08955968;
    }
L_08955968:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32767u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] & 32767u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08955A14;
      }
      goto L_08955980;
    }
L_08955980:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32768u);
    ctx.gpr[2] = (ctx.gpr[2] >> 15u);
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955A04;
      }
      goto L_08955998;
    }
L_08955998:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32768u);
    ctx.gpr[2] = (ctx.gpr[2] >> 15u);
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955A04;
      }
      goto L_089559B0;
    }
L_089559B0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 13u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08955A04;
      }
      goto L_089559D4;
    }
L_089559D4:
    // vflush: architectural no-op that retains VFPU prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[2]);
    goto L_08955A04;
L_08955A04:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955958;
      }
      goto L_08955A14;
    }
L_08955A14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895586C;
      }
      goto L_08955A1C;
    }
L_08955A1C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895568C;
      }
      goto L_08955A30;
    }
L_08955A30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955DA8;
      }
      goto L_08955A38;
    }
L_08955A38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<40u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<41u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<42u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<43u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (0u | 6u);
      if (branch_taken) {
          goto L_08955CC8;
      }
      goto L_08955A88;
    }
L_08955A88:
    ctx.gpr[18] = (0u | 255u);
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[22] = (2228u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-29412));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[4]);
    goto L_08955AAC;
L_08955AAC:
    ctx.gpr[30] = (static_cast<std::int32_t>(ctx.gpr[19]) < 6 ? 1u : 0u);
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
        goto L_08955AD0;
    }
    goto L_08955AB8;
L_08955AB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955AC8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 175u, 0x08950FE8u>(ctx, &aot_mem) && ctx.pc == 0x08955AC8u) goto L_08955AC8;
    return;
L_08955AC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955AD4;
      }
      goto L_08955AD0;
    }
L_08955AD0:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<27u, 4u>(vfpu_value); }
    goto L_08955AD4;
L_08955AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955B58;
      }
      goto L_08955AF0;
    }
L_08955AF0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08955BD8;
      }
      goto L_08955AF8;
    }
L_08955AF8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955B44;
      }
      goto L_08955B10;
    }
L_08955B10:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<76u>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<117u, 1u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08955B44;
      }
      goto L_08955B38;
    }
L_08955B38:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955B44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 154u, 0x08950CF4u>(ctx, &aot_mem) && ctx.pc == 0x08955B44u) goto L_08955B44;
    return;
L_08955B44:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08955AF8;
      }
      goto L_08955B50;
    }
L_08955B50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955BD8;
      }
      goto L_08955B58;
    }
L_08955B58:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08955BD8;
      }
      goto L_08955B60;
    }
L_08955B60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955BCC;
      }
      goto L_08955B78;
    }
L_08955B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 13u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08955BCC;
      }
      goto L_08955B9C;
    }
L_08955B9C:
    // vflush: architectural no-op that retains VFPU prefixes
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 13u, 13u, 3u>();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<12u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[4]);
    goto L_08955BCC;
L_08955BCC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08955B60;
      }
      goto L_08955BD8;
    }
L_08955BD8:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08955C58;
      }
      goto L_08955BE0;
    }
L_08955BE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11092))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08955C50;
      }
      goto L_08955BF0;
    }
L_08955BF0:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(7492));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(11112), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(7496))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08955BF0;
      }
      goto L_08955C50;
    }
L_08955C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955C90;
      }
      goto L_08955C58;
    }
L_08955C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(11092))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08955C90;
      }
      goto L_08955C68;
    }
L_08955C68:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(7492));
    ctx.gpr[31] = (0x08955C84u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 430u, 0x08952490u>(ctx, &aot_mem) && ctx.pc == 0x08955C84u) goto L_08955C84;
    return;
L_08955C84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(7496))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08955C68;
      }
      goto L_08955C90;
    }
L_08955C90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955CA0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 185u, 0x08951254u>(ctx, &aot_mem) && ctx.pc == 0x08955CA0u) goto L_08955CA0;
    return;
L_08955CA0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08955AAC;
      }
      goto L_08955CC8;
    }
L_08955CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[5] = (7424u << 16u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (57088u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (57600u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (59136u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (18176u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (50944u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (56319u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4102));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08955DA8;
L_08955DA8:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089560A8;
      }
      goto L_08955DB8;
    }
L_08955DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11108)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29408)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29408)));
        goto L_08955DE4;
    }
    goto L_08955DE4;
L_08955DE4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29408), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11108)));
    ctx.gpr[31] = (0x08955DF4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 477u, 0x08B01F18u>(ctx, &aot_mem) && ctx.pc == 0x08955DF4u) goto L_08955DF4;
    return;
L_08955DF4:
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<40u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<41u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<42u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<43u, 4u>(vfpu_value); }
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (256u << 16u);
      if (branch_taken) {
          goto L_089560A8;
      }
      goto L_08955E34;
    }
L_08955E34:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2560u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[23] = (0u | 6u);
    ctx.gpr[30] = (56319u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[4]);
    goto L_08955E58;
L_08955E58:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[10] = (4096u << 16u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[22];
    ctx.gpr[11] = (15u << 16u);
      if (branch_taken) {
          goto L_08955F24;
      }
      goto L_08955E70;
    }
L_08955E70:
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08955ECC;
      }
      goto L_08955E7C;
    }
L_08955E7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[10]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08955F24;
      }
      goto L_08955ECC;
    }
L_08955ECC:
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(820)));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[10]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (2560u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    goto L_08955F24;
L_08955F24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08955F74;
      }
      goto L_08955F30;
    }
L_08955F30:
    ctx.gpr[4] = (23808u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08955F74;
      }
      goto L_08955F60;
    }
L_08955F60:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 240u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 240u);
        goto L_08955F74;
    }
    goto L_08955F74;
L_08955F74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08955FAC;
      }
      goto L_08955F80;
    }
L_08955F80:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08955F98;
      }
      goto L_08955F8C;
    }
L_08955F8C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955F98u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 185u, 0x08951254u>(ctx, &aot_mem) && ctx.pc == 0x08955F98u) goto L_08955F98;
    return;
L_08955F98:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08955FACu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 175u, 0x08950FE8u>(ctx, &aot_mem) && ctx.pc == 0x08955FACu) goto L_08955FAC;
    return;
L_08955FAC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08955FE0;
      }
      goto L_08955FB4;
    }
L_08955FB4:
    ctx.gpr[4] = (56319u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (ctx.gpr[19] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08955FE0;
L_08955FE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956000;
      }
      goto L_08955FEC;
    }
L_08955FEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08955FF8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 430u, 0x08952490u>(ctx, &aot_mem) && ctx.pc == 0x08955FF8u) goto L_08955FF8;
    return;
L_08955FF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956018;
      }
      goto L_08956000;
    }
L_08956000:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    ctx.gpr[31] = (0x08956018u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 154u, 0x08950CF4u>(ctx, &aot_mem) && ctx.pc == 0x08956018u) goto L_08956018;
    return;
L_08956018:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08956098;
      }
      goto L_08956020;
    }
L_08956020:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (59136u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (ctx.gpr[4] - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08956070u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08956070u) goto L_08956070;
    return;
L_08956070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (59136u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    goto L_08956098;
L_08956098:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11112)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08955E58;
      }
      goto L_089560A8;
    }
L_089560A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[5] = (56319u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4102));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (59136u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[5] = (18176u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (21504u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (23808u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (23808u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (18432u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (18688u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (51456u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(820)));
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[7] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2560u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08956220u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 443u, 0x08952694u>(ctx, &aot_mem) && ctx.pc == 0x08956220u) goto L_08956220;
    return;
L_08956220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956244;
      }
      goto L_08956230;
    }
L_08956230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956244;
      }
      goto L_0895623C;
    }
L_0895623C:
    ctx.gpr[31] = (0x08956244u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08956244u) goto L_08956244;
    return;
L_08956244:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895628C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089562F8;
    }
    goto L_089562F8;
L_089562F8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0895631C;
      }
      goto L_08956304;
    }
L_08956304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08956330;
      }
      goto L_0895631C;
    }
L_0895631C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08956330;
L_08956330:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089563BC;
      }
      goto L_08956344;
    }
L_08956344:
    ctx.gpr[5] = (4608u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(277));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (3840u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] >> 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[7] = (256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089563BC;
L_089563BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[20] = (256u << 16u);
      if (branch_taken) {
          goto L_08956BD0;
      }
      goto L_089563D4;
    }
L_089563D4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (255u << 16u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (0u & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_089563FC;
L_089563FC:
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(7), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(11), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<12u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<44u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<13u>());
    ctx.gpr[9] = (ctx.vfpu_scalar_bits_ct<45u>());
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<77u>());
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<109u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08956474;
      }
      goto L_0895644C;
    }
L_0895644C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (18432u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08956474;
L_08956474:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[13])) && ctx.fpr[22] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089564AC;
      }
      goto L_08956484;
    }
L_08956484:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (18688u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089564AC;
L_089564AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08956854;
      }
      goto L_089564B8;
    }
L_089564B8:
    ctx.gpr[4] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0895683C;
      }
      goto L_089564C4;
    }
L_089564C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7048)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (53248u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (3840u << 16u);
      if (branch_taken) {
          goto L_089567C0;
      }
      goto L_08956514;
    }
L_08956514:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08956524u);
    ctx.gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 380u, 0x08A7EDC8u>(ctx, &aot_mem) && ctx.pc == 0x08956524u) goto L_08956524;
    return;
L_08956524:
    ctx.gpr[4] = (7680u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 112u);
    ctx.gpr[6] = (49664u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (49920u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] & 7u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[5] & 8u);
    ctx.gpr[6] = (ctx.gpr[6] >> 3u);
    ctx.gpr[7] = (50944u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    ctx.gpr[5] = (ctx.gpr[5] >> 7u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (50433u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-253));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[13] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[13] = (ctx.gpr[13] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[2] = (ctx.gpr[4] & 15u);
    ctx.gpr[11] = (ctx.gpr[4] & 240u);
    ctx.gpr[11] = (ctx.gpr[11] >> 4u);
    ctx.gpr[6] = (ctx.gpr[22] << (ctx.gpr[2] & 31u));
    ctx.gpr[12] = (ctx.gpr[10] & ctx.gpr[20]);
    ctx.gpr[3] = (ctx.gpr[10] >> 8u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[3] = (ctx.gpr[3] & ctx.gpr[21]);
      if (branch_taken) {
          goto L_08956620;
      }
      goto L_08956610;
    }
L_08956610:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    goto L_08956620;
L_08956620:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956630;
      }
      goto L_0895662C;
    }
L_0895662C:
    ctx.gpr[6] = (0u | 16u);
    goto L_08956630;
L_08956630:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 112u);
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956714;
      }
      goto L_0895664C;
    }
L_0895664C:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (ctx.gpr[13] != 0u) {
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[6]);
        goto L_08956658;
    }
    goto L_08956658;
L_08956658:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[12]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
    ctx.gpr[5] = (ctx.gpr[8] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[11] << 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[22] << (ctx.gpr[11] & 31u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 17 ? 1u : 0u);
    ctx.gpr[12] = (ctx.gpr[10] & ctx.gpr[20]);
    ctx.gpr[3] = (ctx.gpr[10] >> 8u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] & ctx.gpr[21]);
      if (branch_taken) {
          goto L_089566F8;
      }
      goto L_089566E8;
    }
L_089566E8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    goto L_089566F8;
L_089566F8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 112u);
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895664C;
      }
      goto L_08956714;
    }
L_08956714:
    ctx.gpr[4] = (0u | 32u);
    if (ctx.gpr[13] != 0u) {
    ctx.gpr[4] = (0u | 2u);
        goto L_08956720;
    }
    goto L_08956720;
L_08956720:
    ctx.gpr[5] = (45056u << 16u);
    ctx.gpr[5] = (ctx.gpr[12] | ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (45312u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[3] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (50176u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (51968u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (2816u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x089567A8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x089567A8u) goto L_089567A8;
    return;
L_089567A8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089567BCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x089567BCu) goto L_089567BC;
    return;
L_089567BC:
    ctx.gpr[4] = (3840u << 16u);
    goto L_089567C0;
L_089567C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089567E0;
      }
      goto L_089567D4;
    }
L_089567D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08956810;
      }
      goto L_089567E0;
    }
L_089567E0:
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08956810;
L_08956810:
    ctx.gpr[4] = (2560u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956854;
      }
      goto L_0895683C;
    }
L_0895683C:
    ctx.gpr[4] = (7680u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08956854;
L_08956854:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (1028u << 16u);
      if (branch_taken) {
          goto L_089568C4;
      }
      goto L_0895686C;
    }
L_0895686C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(824)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[5] = (18176u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (7424u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089568C4;
L_089568C4:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[16] = (ctx.gpr[16] & 32767u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08956B24;
      }
      goto L_089568D8;
    }
L_089568D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(23736)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08956A90;
      }
      goto L_089568EC;
    }
L_089568EC:
    ctx.set_vfpu_scalar_bits_ct<13u>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_vfpu_scalar_bits_ct<45u>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_vfpu_scalar_bits_ct<14u>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.execute_vfpu_vx2i(12u, 13u, 2u, 3u);
    ctx.execute_vfpu_vx2i(13u, 14u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<13u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 2u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<52u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 52u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_08956B10;
      }
      goto L_08956934;
    }
L_08956934:
    ctx.execute_vfpu_vcmp_ct<53u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 53u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_08956B10;
      }
      goto L_08956960;
    }
L_08956960:
    ctx.execute_vfpu_vcmp_ct<54u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 54u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_08956B10;
      }
      goto L_0895698C;
    }
L_0895698C:
    ctx.execute_vfpu_vcmp_ct<55u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 55u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_08956B10;
      }
      goto L_089569B8;
    }
L_089569B8:
    ctx.execute_vfpu_vcmp_ct<48u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 48u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08956A68;
      }
      goto L_089569E4;
    }
L_089569E4:
    ctx.execute_vfpu_vcmp_ct<49u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 49u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08956A68;
      }
      goto L_08956A10;
    }
L_08956A10:
    ctx.execute_vfpu_vcmp_ct<50u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 50u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08956A68;
      }
      goto L_08956A3C;
    }
L_08956A3C:
    ctx.execute_vfpu_vcmp_ct<51u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 51u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_08956A90;
      }
      goto L_08956A68;
    }
L_08956A68:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08956A74u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 159u, 0x08A49620u>(ctx, &aot_mem) && ctx.pc == 0x08956A74u) goto L_08956A74;
    return;
L_08956A74:
    ctx.gpr[4] = (39680u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08956B10;
      }
      goto L_08956A90;
    }
L_08956A90:
    ctx.gpr[5] = (4608u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(277));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08956AF8;
      }
      goto L_08956AB0;
    }
L_08956AB0:
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[23] >> 8u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[6] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[23] & ctx.gpr[20]);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08956AF8;
L_08956AF8:
    ctx.gpr[4] = (ctx.gpr[16] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08956B10;
L_08956B10:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08956B3C;
      }
      goto L_08956B24;
    }
L_08956B24:
    ctx.gpr[4] = (ctx.gpr[16] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08956B3C;
L_08956B3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956BAC;
      }
      goto L_08956B54;
    }
L_08956B54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(824)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (18176u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (7424u << 16u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(828), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08956BAC;
L_08956BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956BC0;
      }
      goto L_08956BB8;
    }
L_08956BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08956BC4;
      }
      goto L_08956BC0;
    }
L_08956BC0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
    goto L_08956BC4;
L_08956BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089563FC;
      }
      goto L_08956BD0;
    }
L_08956BD0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956C10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08956C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 443u, 0x08952694u>(ctx, &aot_mem) && ctx.pc == 0x08956C3Cu) goto L_08956C3C;
    return;
L_08956C3C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(704)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08956C68;
      }
      goto L_08956C58;
    }
L_08956C58:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08956C5C;
L_08956C5C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
        goto L_08956C5C;
    }
    goto L_08956C68;
L_08956C68:
    ctx.gpr[31] = (0x08956C70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(288)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 448u, 0x08AC7124u>(ctx, &aot_mem) && ctx.pc == 0x08956C70u) goto L_08956C70;
    return;
L_08956C70:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(704)));
      if (branch_taken) {
          goto L_08956D1C;
      }
      goto L_08956C90;
    }
L_08956C90:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08956D10;
      }
      goto L_08956CA4;
    }
L_08956CA4:
    ctx.gpr[2] = (ctx.gpr[29] | 0u);
    goto L_08956CA8;
L_08956CA8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(708)));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08956CBC;
      }
      goto L_08956CB4;
    }
L_08956CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956CFC;
      }
      goto L_08956CBC;
    }
L_08956CBC:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[11] = (ctx.gpr[5] - ctx.gpr[11]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956CF4;
      }
      goto L_08956CE4;
    }
L_08956CE4:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956CFC;
      }
      goto L_08956CF4;
    }
L_08956CF4:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    goto L_08956CFC;
L_08956CFC:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08956CA8;
      }
      goto L_08956D10;
    }
L_08956D10:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08956C90;
      }
      goto L_08956D1C;
    }
L_08956D1C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2226u << 16u);
      if (branch_taken) {
          goto L_08956D88;
      }
      goto L_08956D2C;
    }
L_08956D2C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-32140));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(500));
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    goto L_08956D38;
L_08956D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956D74;
      }
      goto L_08956D44;
    }
L_08956D44:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08956D58u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 753u, 0x0894FDDCu>(ctx, &aot_mem) && ctx.pc == 0x08956D58u) goto L_08956D58;
    return;
L_08956D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    goto L_08956D74;
L_08956D74:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(704)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08956D38;
      }
      goto L_08956D88;
    }
L_08956D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08956E4C;
      }
      goto L_08956DA8;
    }
L_08956DA8:
    ctx.gpr[21] = (0u | 255u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(500));
    goto L_08956DB0;
L_08956DB0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08956DC8;
      }
      goto L_08956DC0;
    }
L_08956DC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08956E08;
      }
      goto L_08956DC8;
    }
L_08956DC8:
    ctx.gpr[7] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
      if (branch_taken) {
          goto L_08956DF0;
      }
      goto L_08956DD4;
    }
L_08956DD4:
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x08956DE4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 81u, 0x0883C5F8u>(ctx, &aot_mem) && ctx.pc == 0x08956DE4u) goto L_08956DE4;
    return;
L_08956DE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08956E08;
      }
      goto L_08956DF0;
    }
L_08956DF0:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08956E08;
      }
      goto L_08956E04;
    }
L_08956E04:
    ctx.gpr[4] = (0u | 1u);
    goto L_08956E08;
L_08956E08:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956E3C;
      }
      goto L_08956E10;
    }
L_08956E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    goto L_08956E3C;
L_08956E3C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08956DB0;
      }
      goto L_08956E4C;
    }
L_08956E4C:
    ctx.gpr[31] = (0x08956E54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 443u, 0x08952694u>(ctx, &aot_mem) && ctx.pc == 0x08956E54u) goto L_08956E54;
    return;
L_08956E54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956E78:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29460)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29456), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29464)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29452), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29444), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29436)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2228u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08956F0C:
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
L_08956F38:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 204 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08957000;
      }
      goto L_08956F5C;
    }
L_08956F5C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 108 ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08956F8C;
    }
    goto L_08956F68;
L_08956F68:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08956F7C;
      }
      goto L_08956F74;
    }
L_08956F74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(94));
      if (branch_taken) {
          goto L_08956FF0;
      }
      goto L_08956F7C;
    }
L_08956F7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_08956FF0;
      }
      goto L_08956F8C;
    }
L_08956F8C:
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08956FE0;
      }
      goto L_08956FDC;
    }
L_08956FDC:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08956FE0;
L_08956FE0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-108));
    goto L_08956FF0;
L_08956FF0:
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089570B4;
      }
      goto L_08957000;
    }
L_08957000:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 230 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08957034;
      }
      goto L_08957024;
    }
L_08957024:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-204));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089570A0;
      }
      goto L_08957034;
    }
L_08957034:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[11] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(520)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957090;
      }
      goto L_0895708C;
    }
L_0895708C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_08957090;
L_08957090:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-230));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_089570A0;
L_089570A0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[2] = (ctx.gpr[7] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_089570B4;
      }
      goto L_089570B4;
    }
L_089570B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089570BC:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089570C4;
L_089570C4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089570EC;
      }
      goto L_089570D0;
    }
L_089570D0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089570C4;
      }
      goto L_089570E4;
    }
L_089570E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089570EC;
      }
      goto L_089570EC;
    }
L_089570EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089570F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08957108u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0895711C;
L_08957108:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895711C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    goto L_08957124;
L_08957124:
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957124;
      }
      goto L_08957148;
    }
L_08957148:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957150:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08957174u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    goto L_089570BC;
L_08957174:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957194;
      }
      goto L_08957180;
    }
L_08957180:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(400)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08957194;
L_08957194:
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
L_089571AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089571C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089571C0u) goto L_089571C0;
    return;
L_089571C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (49016u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08957264;
      }
      goto L_089571F4;
    }
L_089571F4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15395u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08957264;
      }
      goto L_08957228;
    }
L_08957228:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08957264;
      }
      goto L_0895725C;
    }
L_0895725C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08957268;
      }
      goto L_08957264;
    }
L_08957264:
    ctx.gpr[2] = (0u | 0u);
    goto L_08957268;
L_08957268:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957274:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0895727C;
L_0895727C:
    ctx.gpr[7] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895727C;
      }
      goto L_089572A0;
    }
L_089572A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089572A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08957310;
      }
      goto L_089572FC;
    }
L_089572FC:
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0895732C;
      }
      goto L_08957310;
    }
L_08957310:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[21] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_0895732C;
L_0895732C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (2229u << 16u);
    goto L_08957338;
L_08957338:
    ctx.gpr[18] = (ctx.gpr[20] << 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0895734Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0895734Cu) goto L_0895734C;
    return;
L_0895734C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957380;
      }
      goto L_08957354;
    }
L_08957354:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08957360u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089571AC;
L_08957360:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957378;
      }
      goto L_08957368;
    }
L_08957368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08957388;
      }
      goto L_08957378;
    }
L_08957378:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08957388;
      }
      goto L_08957380;
    }
L_08957380:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    goto L_08957388;
L_08957388:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957338;
      }
      goto L_0895739C;
    }
L_0895739C:
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
L_089573C0:
    ctx.gpr[8] = (0u | 0u);
    goto L_089573C4;
L_089573C4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089573C4;
      }
      goto L_089573D8;
    }
L_089573D8:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_089573E4;
L_089573E4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957410;
      }
      goto L_089573EC;
    }
L_089573EC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_08957410;
      }
      goto L_089573F8;
    }
L_089573F8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[6] = (ctx.gpr[8] << 3u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 6 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089573E4;
      }
      goto L_08957410;
    }
L_08957410:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895741C:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08957424;
L_08957424:
    ctx.gpr[7] = (ctx.gpr[8] << 3u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08957440;
      }
      goto L_08957438;
    }
L_08957438:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    goto L_08957440;
L_08957440:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957424;
      }
      goto L_08957454;
    }
L_08957454:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895745C:
    ctx.gpr[7] = (0u | 0u);
    goto L_08957460;
L_08957460:
    ctx.gpr[6] = (ctx.gpr[7] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08957494;
      }
      goto L_08957474;
    }
L_08957474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895748C;
      }
      goto L_08957484;
    }
L_08957484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089574AC;
      }
      goto L_0895748C;
    }
L_0895748C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089574AC;
      }
      goto L_08957494;
    }
L_08957494:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957460;
      }
      goto L_089574A8;
    }
L_089574A8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089574AC;
L_089574AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089574B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (50588u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (ctx.gpr[7] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089574DC;
L_089574DC:
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089574DC;
      }
      goto L_08957520;
    }
L_08957520:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957528:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (50588u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    goto L_08957594;
L_08957594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08957660;
      }
      goto L_089575A0;
    }
L_089575A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957660;
      }
      goto L_089575B8;
    }
L_089575B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089575C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089575C8u) goto L_089575C8;
    return;
L_089575C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957638;
      }
      goto L_089575D4;
    }
L_089575D4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08957620;
      }
      goto L_08957618;
    }
L_08957618:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[30]));
      if (branch_taken) {
          goto L_08957624;
      }
      goto L_08957620;
    }
L_08957620:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08957624;
L_08957624:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957660;
      }
      goto L_08957638;
    }
L_08957638:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08957660;
L_08957660:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08957594;
      }
      goto L_08957674;
    }
L_08957674:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089576AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089576E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089576E0u) goto L_089576E0;
    return;
L_089576E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957770;
      }
      goto L_089576EC;
    }
L_089576EC:
    ctx.gpr[7] = (0u | 0u);
    goto L_089576F0;
L_089576F0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089576F0;
      }
      goto L_08957704;
    }
L_08957704:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08957710;
L_08957710:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957744;
      }
      goto L_08957718;
    }
L_08957718:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08957744;
      }
      goto L_08957724;
    }
L_08957724:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[5] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 16 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08957710;
      }
      goto L_08957744;
    }
L_08957744:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08957770;
L_08957770:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0895778C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (50588u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (ctx.gpr[7] | 16384u);
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089577A8;
L_089577A8:
    ctx.gpr[7] = (ctx.gpr[8] << 4u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089577F0;
      }
      goto L_089577C4;
    }
L_089577C4:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_089577F0;
L_089577F0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089577A8;
      }
      goto L_08957804;
    }
L_08957804:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895780C:
    ctx.gpr[7] = (0u | 0u);
    goto L_08957810;
L_08957810:
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08957848;
      }
      goto L_0895782C;
    }
L_0895782C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957840;
      }
      goto L_08957838;
    }
L_08957838:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08957860;
      }
      goto L_08957840;
    }
L_08957840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08957860;
      }
      goto L_08957848;
    }
L_08957848:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957810;
      }
      goto L_0895785C;
    }
L_0895785C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08957860;
L_08957860:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957868:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08957878u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08956F38;
L_08957878:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957884:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089578A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32032));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x089578A8u) goto L_089578A8;
    return;
L_089578A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089578B8;
L_089578B8:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089578B8;
      }
      goto L_089578D8;
    }
L_089578D8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(528), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(526), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(527), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    goto L_089578F4;
L_089578F4:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 106 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089578F4;
      }
      goto L_08957914;
    }
L_08957914:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(520), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(536), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(537), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957940:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6552), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(526)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08957968;
      }
      goto L_08957960;
    }
L_08957960:
    ctx.gpr[31] = (0x08957968u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 628u, 0x0887B96Cu>(ctx, &aot_mem) && ctx.pc == 0x08957968u) goto L_08957968;
    return;
L_08957968:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(537)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089579B4;
      }
      goto L_08957974;
    }
L_08957974:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6846)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089579B4;
      }
      goto L_08957988;
    }
L_08957988:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089579B4;
      }
      goto L_08957998;
    }
L_08957998:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_089579B4;
L_089579B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(528)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089579E4;
      }
      goto L_089579CC;
    }
L_089579CC:
    ctx.gpr[31] = (0x089579D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08957A90;
L_089579D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089579CC;
      }
      goto L_089579DC;
    }
L_089579DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A80;
      }
      goto L_089579E4;
    }
L_089579E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(527)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A80;
      }
      goto L_089579F0;
    }
L_089579F0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25184));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08957A14;
      }
      goto L_08957A04;
    }
L_08957A04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08957A18;
      }
      goto L_08957A10;
    }
L_08957A10:
    ctx.gpr[5] = (0u | 1u);
    goto L_08957A14;
L_08957A14:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08957A18;
L_08957A18:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A80;
      }
      goto L_08957A20;
    }
L_08957A20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(528), 0u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2320));
    ctx.gpr[16] = (2269u << 16u);
    goto L_08957A34;
L_08957A34:
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A54;
      }
      goto L_08957A50;
    }
L_08957A50:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), 0u);
    goto L_08957A54;
L_08957A54:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08957A34;
      }
      goto L_08957A6C;
    }
L_08957A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3856)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957A80;
      }
      goto L_08957A78;
    }
L_08957A78:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3856));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_08957A80;
L_08957A80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957A90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = ((ctx.gpr[5] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[5] & 32768u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957ADC;
      }
      goto L_08957AD0;
    }
L_08957AD0:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08957AE0;
      }
      goto L_08957ADC;
    }
L_08957ADC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(0u));
    goto L_08957AE0;
L_08957AE0:
    ctx.gpr[5] = (ctx.gpr[5] & 32767u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08957B08;
      }
      goto L_08957AEC;
    }
L_08957AEC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957B08;
      }
      goto L_08957AF8;
    }
L_08957AF8:
    ctx.gpr[31] = (0x08957B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 233u, 0x08958D50u>(ctx, &aot_mem) && ctx.pc == 0x08957B00u) goto L_08957B00;
    return;
L_08957B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC0;
      }
      goto L_08957B08;
    }
L_08957B08:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957B24;
      }
      goto L_08957B14;
    }
L_08957B14:
    ctx.gpr[31] = (0x08957B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 88u, 0x0895C784u>(ctx, &aot_mem) && ctx.pc == 0x08957B1Cu) goto L_08957B1C;
    return;
L_08957B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC0;
      }
      goto L_08957B24;
    }
L_08957B24:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 305 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957B40;
      }
      goto L_08957B30;
    }
L_08957B30:
    ctx.gpr[31] = (0x08957B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 727u, 0x0895F6D4u>(ctx, &aot_mem) && ctx.pc == 0x08957B38u) goto L_08957B38;
    return;
L_08957B38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC0;
      }
      goto L_08957B40;
    }
L_08957B40:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 405 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957B5C;
      }
      goto L_08957B4C;
    }
L_08957B4C:
    ctx.gpr[31] = (0x08957B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 54u, 0x089DC60Cu>(ctx, &aot_mem) && ctx.pc == 0x08957B54u) goto L_08957B54;
    return;
L_08957B54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC0;
      }
      goto L_08957B5C;
    }
L_08957B5C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 505 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957B78;
      }
      goto L_08957B68;
    }
L_08957B68:
    ctx.gpr[31] = (0x08957B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 574u, 0x089DECA0u>(ctx, &aot_mem) && ctx.pc == 0x08957B70u) goto L_08957B70;
    return;
L_08957B70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC0;
      }
      goto L_08957B78;
    }
L_08957B78:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 605 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957B94;
      }
      goto L_08957B84;
    }
L_08957B84:
    ctx.gpr[31] = (0x08957B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 307u, 0x08A1DFF0u>(ctx, &aot_mem) && ctx.pc == 0x08957B8Cu) goto L_08957B8C;
    return;
L_08957B8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC0;
      }
      goto L_08957B94;
    }
L_08957B94:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 705 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957BB0;
      }
      goto L_08957BA0;
    }
L_08957BA0:
    ctx.gpr[31] = (0x08957BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 72u, 0x08A20518u>(ctx, &aot_mem) && ctx.pc == 0x08957BA8u) goto L_08957BA8;
    return;
L_08957BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC0;
      }
      goto L_08957BB0;
    }
L_08957BB0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 805 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957BCC;
      }
      goto L_08957BBC;
    }
L_08957BBC:
    ctx.gpr[31] = (0x08957BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 421u, 0x08A21E94u>(ctx, &aot_mem) && ctx.pc == 0x08957BC4u) goto L_08957BC4;
    return;
L_08957BC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC0;
      }
      goto L_08957BCC;
    }
L_08957BCC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 905 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957BE8;
      }
      goto L_08957BD8;
    }
L_08957BD8:
    ctx.gpr[31] = (0x08957BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 313u, 0x089E1BD4u>(ctx, &aot_mem) && ctx.pc == 0x08957BE0u) goto L_08957BE0;
    return;
L_08957BE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC0;
      }
      goto L_08957BE8;
    }
L_08957BE8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1005 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957C04;
      }
      goto L_08957BF4;
    }
L_08957BF4:
    ctx.gpr[31] = (0x08957BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 453u, 0x089E6000u>(ctx, &aot_mem) && ctx.pc == 0x08957BFCu) goto L_08957BFC;
    return;
L_08957BFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC0;
      }
      goto L_08957C04;
    }
L_08957C04:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1105 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957C20;
      }
      goto L_08957C10;
    }
L_08957C10:
    ctx.gpr[31] = (0x08957C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 40u, 0x088E423Cu>(ctx, &aot_mem) && ctx.pc == 0x08957C18u) goto L_08957C18;
    return;
L_08957C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC0;
      }
      goto L_08957C20;
    }
L_08957C20:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1205 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957C3C;
      }
      goto L_08957C2C;
    }
L_08957C2C:
    ctx.gpr[31] = (0x08957C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 488u, 0x088E629Cu>(ctx, &aot_mem) && ctx.pc == 0x08957C34u) goto L_08957C34;
    return;
L_08957C34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC0;
      }
      goto L_08957C3C;
    }
L_08957C3C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1305 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957C58;
      }
      goto L_08957C48;
    }
L_08957C48:
    ctx.gpr[31] = (0x08957C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 453u, 0x08991B34u>(ctx, &aot_mem) && ctx.pc == 0x08957C50u) goto L_08957C50;
    return;
L_08957C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC0;
      }
      goto L_08957C58;
    }
L_08957C58:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1405 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957C74;
      }
      goto L_08957C64;
    }
L_08957C64:
    ctx.gpr[31] = (0x08957C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 100u, 0x08994874u>(ctx, &aot_mem) && ctx.pc == 0x08957C6Cu) goto L_08957C6C;
    return;
L_08957C6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC0;
      }
      goto L_08957C74;
    }
L_08957C74:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1497 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957C90;
      }
      goto L_08957C80;
    }
L_08957C80:
    ctx.gpr[31] = (0x08957C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 190u, 0x08A31364u>(ctx, &aot_mem) && ctx.pc == 0x08957C88u) goto L_08957C88;
    return;
L_08957C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC0;
      }
      goto L_08957C90;
    }
L_08957C90:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1600 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CAC;
      }
      goto L_08957C9C;
    }
L_08957C9C:
    ctx.gpr[31] = (0x08957CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 60u, 0x0897C88Cu>(ctx, &aot_mem) && ctx.pc == 0x08957CA4u) goto L_08957CA4;
    return;
L_08957CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC0;
      }
      goto L_08957CAC;
    }
L_08957CAC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1700 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CC0;
      }
      goto L_08957CB8;
    }
L_08957CB8:
    ctx.gpr[31] = (0x08957CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 444u, 0x08862B04u>(ctx, &aot_mem) && ctx.pc == 0x08957CC0u) goto L_08957CC0;
    return;
L_08957CC0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957CCC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08957CE4;
      }
      goto L_08957CD8;
    }
L_08957CD8:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08957CEC;
      }
      goto L_08957CE4;
    }
L_08957CE4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08957CEC;
L_08957CEC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957CFC;
      }
      goto L_08957CF4;
    }
L_08957CF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08957CFC;
L_08957CFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957D04:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08957D20;
      }
      goto L_08957D1C;
    }
L_08957D1C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08957D20;
L_08957D20:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957D28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08957E90;
      }
      goto L_08957D58;
    }
L_08957D58:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31752)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957D74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08957EAC;
      }
      goto L_08957D7C;
    }
L_08957D7C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08957EAC;
      }
      goto L_08957D88;
    }
L_08957D88:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08957EAC;
      }
      goto L_08957DA8;
    }
L_08957DA8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08957EAC;
      }
      goto L_08957DD4;
    }
L_08957DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] << 24u);
      if (branch_taken) {
          goto L_08957EAC;
      }
      goto L_08957DF8;
    }
L_08957DF8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0x0000FF00u) | ((ctx.gpr[8] & 0x000000FFu) << 8u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
      if (branch_taken) {
          goto L_08957EAC;
      }
      goto L_08957E24;
    }
L_08957E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[6] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = ((ctx.gpr[5] & ~0x0000FF00u) | ((ctx.gpr[8] & 0x000000FFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08957EAC;
      }
      goto L_08957E68;
    }
L_08957E68:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08957EAC;
      }
      goto L_08957E90;
    }
L_08957E90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[31] = (0x08957EA8u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08957868;
L_08957EA8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08957EAC;
L_08957EAC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08957EB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2269u << 16u);
      if (branch_taken) {
          goto L_08957F24;
      }
      goto L_08957EF8;
    }
L_08957EF8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    goto L_08957EFC;
L_08957EFC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08957F10u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08957868;
L_08957F10:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08957EFC;
      }
      goto L_08957F24;
    }
L_08957F24:
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
L_08957F48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[5] = (ctx.gpr[8] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 6u, 0x08958064u>(ctx, &aot_mem); return;
      }
      goto L_08957F7C;
    }
L_08957F7C:
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[5] = (ctx.gpr[8] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
      if (branch_taken) {
          goto L_08957F98;
      }
      goto L_08957F8C;
    }
L_08957F8C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08957F98;
L_08957F98:
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[8] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[11] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[11]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[9] = (ctx.gpr[8] >> 24u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[2] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[11] = (ctx.gpr[10] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[2]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.pc = 0x08958000u; return;
}

void recomp_unit_0084(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0084_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_84(Runtime &runtime) {
    runtime.register_generated_unit(84u, 0x08954000u, 16384u, &recomp_unit_0084, &recomp_unit_0084_entry);
    runtime.register_function(0x08954000u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954008u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954014u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895401Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954024u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895407Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954120u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954128u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954130u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954138u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954140u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954144u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895414Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954150u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954168u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954174u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954178u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954180u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895418Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954190u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954198u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895419Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089541FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954208u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954224u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954230u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954260u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954268u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954270u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954278u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954288u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954294u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895429Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089542FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954344u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089543DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954464u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895446Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954474u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895449Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089544F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954504u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954510u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954518u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954530u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954548u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954550u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954598u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089545ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089545B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089545C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895462Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954650u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954670u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954678u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895468Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089546BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089546D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895471Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089547C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954868u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954874u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895487Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954888u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089548E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895492Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954940u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954948u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954960u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089549F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A28u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954A60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B84u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954B98u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954BB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954C80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D00u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954D80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954DB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954DC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954DD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954DDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954DE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954E94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EBCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954ED8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954EF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954F90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08954FFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955004u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955020u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955038u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955060u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895506Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955078u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955080u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955088u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089550FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955104u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955160u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955168u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955174u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895517Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955184u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089551A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089551B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089551DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895520Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955218u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955220u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955228u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955244u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955250u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955258u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955260u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955278u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955290u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089552FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955304u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955320u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955338u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955360u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895536Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955378u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955380u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955388u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553A4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089553F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955418u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955424u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955434u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895543Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955448u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955458u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089554F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955508u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955530u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955620u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955628u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955644u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955688u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895568Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089556BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089556C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089556CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089556D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089556DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089556F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955710u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955734u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955764u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955770u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955778u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955780u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895579Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089557A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089557B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089557B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089557D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089557E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955800u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955824u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955854u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955864u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895586Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955874u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895587Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955884u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895588Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089558F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895591Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895594Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955958u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955960u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955968u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955980u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955998u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559B0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089559D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955A88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AD0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955AF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955B9Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BD8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955BF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C84u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955C90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955CA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955CC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955DA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955DB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955DE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955DF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955E7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955ECCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F60u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955F98u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08955FF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956000u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956018u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956020u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956070u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956098u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089560A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956220u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956230u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895623Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956244u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895628Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089562F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956304u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895631Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956330u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956344u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089563BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089563D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089563FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895644Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956474u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956484u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089564ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089564B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089564C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956514u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956524u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956610u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956620u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895662Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956630u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895664Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956658u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566E8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089566F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956714u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956720u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089567E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956810u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895683Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956854u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895686Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089568ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956934u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956960u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895698Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089569E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956A90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956AB0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956AF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956B54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956BACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956BB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956BC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956BC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956BD0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956C90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CB4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CBCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956CFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D44u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956D88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DB0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DC8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956DF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956E78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F0Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956F8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FDCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08956FF0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957000u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957024u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957034u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895708Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957090u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570BCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570D0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089570F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957108u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895711Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957124u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957148u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957150u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957174u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957180u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957194u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089571F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957228u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895725Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957264u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957268u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957274u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895727Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089572FCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957310u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895732Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957338u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895734Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957354u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957360u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957368u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957378u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957380u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957388u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895739Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573C0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089573F8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957410u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895741Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957424u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957438u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957440u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957454u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895745Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957460u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957474u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957484u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895748Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957494u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089574DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957520u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957528u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957594u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089575A0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089575B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089575C8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089575D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957618u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957620u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957624u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957638u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957660u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957674u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576ACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576E0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576ECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089576F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957704u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957710u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957718u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957724u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957744u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957770u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895778Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577C4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089577F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957804u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895780Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957810u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895782Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957838u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957840u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957848u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x0895785Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957860u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957868u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957878u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957884u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578A8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578B8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578D8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089578F4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957914u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957940u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957960u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957968u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957974u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957988u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957998u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579B4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579CCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579D4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579DCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579E4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x089579F0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A6Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957A90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AD0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957ADCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957AF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B00u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B08u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B14u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B30u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B38u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B40u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B4Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B54u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B5Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B70u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B78u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B84u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957B94u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BA0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BB0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BBCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BC4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BD8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BE0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BE8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957BFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C18u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C2Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C34u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C3Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C50u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C64u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C6Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C80u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957C9Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CA4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CC0u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CCCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CD8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CE4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CECu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CF4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957CFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D04u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D1Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D20u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D28u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D58u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D74u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957D88u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DD4u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957DF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E68u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957E90u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EA8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EACu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EB8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EF8u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957EFCu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F10u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F24u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F48u, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F7Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F8Cu, &recomp_unit_0084, "recomp_unit_0084");
    runtime.register_function(0x08957F98u, &recomp_unit_0084, "recomp_unit_0084");
}
} // namespace psprecomp
