#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0093[4093] = {
    1, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 9,
    0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0,
    18, 0, 0, 19, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 25, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0,
    0, 0, 51, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0,
    56, 0, 0, 0, 57, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0,
    78, 0, 79, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 107,
    0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0,
    0, 0, 0, 117, 0, 118, 0, 0, 0, 119, 0, 0, 120, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0,
    151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 200,
    201, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 208, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 214, 0, 0, 0,
    215, 0, 0, 0, 216, 0, 0, 0, 217, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0,
    230, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 235,
    0, 0, 236, 0, 237, 0, 0, 238, 0, 239, 0, 240, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0,
    0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0, 0,
    0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 259, 0, 0, 260, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0,
    263, 0, 0, 264, 0, 265, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 269, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0,
    274, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 293, 0,
    294, 0, 0, 295, 0, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 305, 0, 306, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 311, 0, 0,
    0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0,
    0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0,
    324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0,
    332, 0, 0, 333, 0, 334, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339,
    0, 0, 340, 0, 0, 341, 0, 342, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0,
    0, 353, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357,
    0, 358, 0, 359, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0,
    0, 0, 0, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0,
    0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0,
    0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 389, 0, 0,
    390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0,
    400, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 406, 0,
    407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0,
    0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 420, 0, 0, 0, 421, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427,
    0, 428, 0, 0, 0, 0, 429, 0, 430, 0, 431, 0, 0, 0, 0, 432, 0, 433, 0, 434, 0, 0, 0, 0, 435, 0, 436, 0, 437, 0, 0, 0,
    0, 438, 0, 439, 0, 440, 0, 0, 0, 0, 441, 0, 442, 0, 443, 0, 0, 0, 0, 444, 0, 445, 0, 446, 0, 0, 0, 0, 447, 0, 448, 449,
    0, 450, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0,
    457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 461, 462, 0, 463, 0, 0, 0, 0, 0, 464, 0, 465, 466,
    0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 476, 477, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0,
    0, 480, 0, 0, 0, 0, 0, 481, 0, 482, 0, 483, 0, 0, 484, 0, 0, 0, 485, 0, 486, 0, 0, 0, 487, 0, 488, 489, 0, 490, 0, 0,
    0, 491, 0, 0, 0, 0, 0, 492, 0, 493, 0, 494, 0, 0, 495, 0, 0, 0, 496, 0, 497, 498, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0,
    0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0,
    506, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 516, 0, 0, 0,
    0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 519, 0, 520, 0, 0, 0, 521, 0, 522, 0, 523, 0, 524, 0, 525, 0, 526, 0, 0, 527, 0, 528,
    0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532,
    0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 535, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 539, 0, 0,
    0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 543, 0, 544, 0, 0, 0, 545, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0,
    0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0,
    0, 0, 0, 0, 0, 0, 562, 0, 0, 563, 564, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 568, 0, 0,
    0, 569, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572,
    573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0,
    580, 0, 581, 0, 0, 582, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 585, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 589,
    0, 590, 0, 591, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 0, 596, 0, 597, 0, 598,
    0, 0, 599, 0, 0, 0, 600, 0, 601, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 605, 0, 606, 0, 0, 607, 0, 608, 0,
    0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 613,
    0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 618, 0, 619, 0, 620,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 622, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 624, 625,
    0, 626, 0, 0, 0, 0, 0, 627, 0, 0, 628, 0, 0, 0, 0, 629, 0, 0, 630, 0, 631, 0, 0, 632, 0, 633, 0, 0, 0, 0, 634, 0,
    635, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 639,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 641, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 0, 645, 0, 646, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0,
    0, 0, 0, 0, 655, 0, 0, 656, 0, 657, 658, 0, 0, 0, 659, 0, 0, 660, 0, 661, 662, 0, 0, 0, 0, 0, 663, 0, 664,
};
void recomp_unit_0093_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08978000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0093[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08978000;
    case 2u: goto L_08978008;
    case 3u: goto L_08978010;
    case 4u: goto L_0897801C;
    case 5u: goto L_0897803C;
    case 6u: goto L_08978058;
    case 7u: goto L_08978060;
    case 8u: goto L_08978074;
    case 9u: goto L_0897807C;
    case 10u: goto L_08978094;
    case 11u: goto L_089780F0;
    case 12u: goto L_08978104;
    case 13u: goto L_08978114;
    case 14u: goto L_08978128;
    case 15u: goto L_08978140;
    case 16u: goto L_08978154;
    case 17u: goto L_08978174;
    case 18u: goto L_08978180;
    case 19u: goto L_0897818C;
    case 20u: goto L_08978194;
    case 21u: goto L_089781A0;
    case 22u: goto L_089781C0;
    case 23u: goto L_089781DC;
    case 24u: goto L_089781E4;
    case 25u: goto L_089781E8;
    case 26u: goto L_089781FC;
    case 27u: goto L_0897821C;
    case 28u: goto L_08978238;
    case 29u: goto L_08978258;
    case 30u: goto L_08978268;
    case 31u: goto L_0897827C;
    case 32u: goto L_08978294;
    case 33u: goto L_089782EC;
    case 34u: goto L_08978340;
    case 35u: goto L_08978360;
    case 36u: goto L_08978368;
    case 37u: goto L_08978378;
    case 38u: goto L_08978390;
    case 39u: goto L_089783C4;
    case 40u: goto L_08978458;
    case 41u: goto L_08978478;
    case 42u: goto L_089784A0;
    case 43u: goto L_089784D0;
    case 44u: goto L_089784F8;
    case 45u: goto L_08978514;
    case 46u: goto L_08978520;
    case 47u: goto L_08978534;
    case 48u: goto L_08978550;
    case 49u: goto L_08978568;
    case 50u: goto L_08978570;
    case 51u: goto L_08978588;
    case 52u: goto L_0897858C;
    case 53u: goto L_089785A0;
    case 54u: goto L_089785E0;
    case 55u: goto L_089785EC;
    case 56u: goto L_08978600;
    case 57u: goto L_08978610;
    case 58u: goto L_08978614;
    case 59u: goto L_08978628;
    case 60u: goto L_0897863C;
    case 61u: goto L_08978644;
    case 62u: goto L_08978654;
    case 63u: goto L_08978674;
    case 64u: goto L_089786A8;
    case 65u: goto L_089786C8;
    case 66u: goto L_089786D0;
    case 67u: goto L_089786F0;
    case 68u: goto L_08978708;
    case 69u: goto L_08978784;
    case 70u: goto L_08978790;
    case 71u: goto L_089787B0;
    case 72u: goto L_089787C4;
    case 73u: goto L_089787E8;
    case 74u: goto L_08978808;
    case 75u: goto L_0897881C;
    case 76u: goto L_089788E8;
    case 77u: goto L_089788F8;
    case 78u: goto L_08978900;
    case 79u: goto L_08978908;
    case 80u: goto L_0897890C;
    case 81u: goto L_08978928;
    case 82u: goto L_08978940;
    case 83u: goto L_08978980;
    case 84u: goto L_089789E0;
    case 85u: goto L_089789EC;
    case 86u: goto L_08978A48;
    case 87u: goto L_08978A4C;
    case 88u: goto L_08978A7C;
    case 89u: goto L_08978A8C;
    case 90u: goto L_08978A98;
    case 91u: goto L_08978AA8;
    case 92u: goto L_08978AE4;
    case 93u: goto L_08978B0C;
    case 94u: goto L_08978B68;
    case 95u: goto L_08978B94;
    case 96u: goto L_08978BA4;
    case 97u: goto L_08978BEC;
    case 98u: goto L_08978C90;
    case 99u: goto L_08978C98;
    case 100u: goto L_08978D48;
    case 101u: goto L_08978D9C;
    case 102u: goto L_08978DB0;
    case 103u: goto L_08978DC4;
    case 104u: goto L_08978DCC;
    case 105u: goto L_08978DE0;
    case 106u: goto L_08978DE8;
    case 107u: goto L_08978DFC;
    case 108u: goto L_08978E04;
    case 109u: goto L_08978E14;
    case 110u: goto L_08978E20;
    case 111u: goto L_08978E28;
    case 112u: goto L_08978E40;
    case 113u: goto L_08978E54;
    case 114u: goto L_08978E5C;
    case 115u: goto L_08978E70;
    case 116u: goto L_08978E78;
    case 117u: goto L_08978E8C;
    case 118u: goto L_08978E94;
    case 119u: goto L_08978EA4;
    case 120u: goto L_08978EB0;
    case 121u: goto L_08978EB4;
    case 122u: goto L_08978ED4;
    case 123u: goto L_08978EE4;
    case 124u: goto L_08978EF0;
    case 125u: goto L_08978F38;
    case 126u: goto L_08978F64;
    case 127u: goto L_08978F90;
    case 128u: goto L_08978F98;
    case 129u: goto L_08978FA0;
    case 130u: goto L_08978FB8;
    case 131u: goto L_08978FC8;
    case 132u: goto L_08978FF4;
    case 133u: goto L_08979000;
    case 134u: goto L_08979008;
    case 135u: goto L_08979048;
    case 136u: goto L_08979068;
    case 137u: goto L_08979078;
    case 138u: goto L_08979084;
    case 139u: goto L_089790A8;
    case 140u: goto L_089790B0;
    case 141u: goto L_089790D8;
    case 142u: goto L_089790FC;
    case 143u: goto L_08979104;
    case 144u: goto L_0897919C;
    case 145u: goto L_089791C8;
    case 146u: goto L_08979208;
    case 147u: goto L_0897922C;
    case 148u: goto L_08979234;
    case 149u: goto L_089792E0;
    case 150u: goto L_089792F8;
    case 151u: goto L_08979300;
    case 152u: goto L_08979318;
    case 153u: goto L_08979344;
    case 154u: goto L_0897935C;
    case 155u: goto L_08979364;
    case 156u: goto L_0897937C;
    case 157u: goto L_08979394;
    case 158u: goto L_089793AC;
    case 159u: goto L_089794B0;
    case 160u: goto L_089794C0;
    case 161u: goto L_089794C8;
    case 162u: goto L_089794D8;
    case 163u: goto L_089794F4;
    case 164u: goto L_08979520;
    case 165u: goto L_08979530;
    case 166u: goto L_08979534;
    case 167u: goto L_08979544;
    case 168u: goto L_089795C0;
    case 169u: goto L_089795D8;
    case 170u: goto L_089795E0;
    case 171u: goto L_089795E8;
    case 172u: goto L_08979630;
    case 173u: goto L_08979650;
    case 174u: goto L_08979660;
    case 175u: goto L_08979670;
    case 176u: goto L_089796A4;
    case 177u: goto L_089796AC;
    case 178u: goto L_089796B4;
    case 179u: goto L_089796C0;
    case 180u: goto L_089796E4;
    case 181u: goto L_089796EC;
    case 182u: goto L_089797A8;
    case 183u: goto L_089797CC;
    case 184u: goto L_089797DC;
    case 185u: goto L_0897981C;
    case 186u: goto L_08979864;
    case 187u: goto L_08979888;
    case 188u: goto L_08979924;
    case 189u: goto L_08979934;
    case 190u: goto L_08979944;
    case 191u: goto L_08979954;
    case 192u: goto L_08979964;
    case 193u: goto L_0897996C;
    case 194u: goto L_08979A7C;
    case 195u: goto L_08979A94;
    case 196u: goto L_08979A9C;
    case 197u: goto L_08979AA4;
    case 198u: goto L_08979AEC;
    case 199u: goto L_08979AF4;
    case 200u: goto L_08979AFC;
    case 201u: goto L_08979B00;
    case 202u: goto L_08979B08;
    case 203u: goto L_08979B1C;
    case 204u: goto L_08979B2C;
    case 205u: goto L_08979B34;
    case 206u: goto L_08979B44;
    case 207u: goto L_08979B58;
    case 208u: goto L_08979B5C;
    case 209u: goto L_08979B98;
    case 210u: goto L_08979BA8;
    case 211u: goto L_08979BC4;
    case 212u: goto L_08979BDC;
    case 213u: goto L_08979BE4;
    case 214u: goto L_08979BF0;
    case 215u: goto L_08979C00;
    case 216u: goto L_08979C10;
    case 217u: goto L_08979C20;
    case 218u: goto L_08979C24;
    case 219u: goto L_08979C6C;
    case 220u: goto L_08979D00;
    case 221u: goto L_08979D2C;
    case 222u: goto L_08979D4C;
    case 223u: goto L_08979D58;
    case 224u: goto L_08979D70;
    case 225u: goto L_08979D88;
    case 226u: goto L_08979D94;
    case 227u: goto L_08979DB8;
    case 228u: goto L_08979DBC;
    case 229u: goto L_08979DE4;
    case 230u: goto L_08979E00;
    case 231u: goto L_08979E04;
    case 232u: goto L_08979E2C;
    case 233u: goto L_08979E58;
    case 234u: goto L_08979E68;
    case 235u: goto L_08979E7C;
    case 236u: goto L_08979E88;
    case 237u: goto L_08979E90;
    case 238u: goto L_08979E9C;
    case 239u: goto L_08979EA4;
    case 240u: goto L_08979EAC;
    case 241u: goto L_08979EB0;
    case 242u: goto L_08979EC0;
    case 243u: goto L_08979F04;
    case 244u: goto L_08979F40;
    case 245u: goto L_08979F58;
    case 246u: goto L_08979F78;
    case 247u: goto L_08979F8C;
    case 248u: goto L_08979FA4;
    case 249u: goto L_08979FB8;
    case 250u: goto L_08979FC4;
    case 251u: goto L_08979FD8;
    case 252u: goto L_08979FE0;
    case 253u: goto L_08979FF0;
    case 254u: goto L_0897A004;
    case 255u: goto L_0897A00C;
    case 256u: goto L_0897A01C;
    case 257u: goto L_0897A030;
    case 258u: goto L_0897A038;
    case 259u: goto L_0897A048;
    case 260u: goto L_0897A054;
    case 261u: goto L_0897A05C;
    case 262u: goto L_0897A06C;
    case 263u: goto L_0897A080;
    case 264u: goto L_0897A08C;
    case 265u: goto L_0897A094;
    case 266u: goto L_0897A0A0;
    case 267u: goto L_0897A0A8;
    case 268u: goto L_0897A0B0;
    case 269u: goto L_0897A0C0;
    case 270u: goto L_0897A0C8;
    case 271u: goto L_0897A0D8;
    case 272u: goto L_0897A0EC;
    case 273u: goto L_0897A0F8;
    case 274u: goto L_0897A100;
    case 275u: goto L_0897A114;
    case 276u: goto L_0897A11C;
    case 277u: goto L_0897A130;
    case 278u: goto L_0897A138;
    case 279u: goto L_0897A14C;
    case 280u: goto L_0897A154;
    case 281u: goto L_0897A190;
    case 282u: goto L_0897A19C;
    case 283u: goto L_0897A1A8;
    case 284u: goto L_0897A1B0;
    case 285u: goto L_0897A1B8;
    case 286u: goto L_0897A1C0;
    case 287u: goto L_0897A1C8;
    case 288u: goto L_0897A1D0;
    case 289u: goto L_0897A1D8;
    case 290u: goto L_0897A1E0;
    case 291u: goto L_0897A1E8;
    case 292u: goto L_0897A1F0;
    case 293u: goto L_0897A1F8;
    case 294u: goto L_0897A200;
    case 295u: goto L_0897A20C;
    case 296u: goto L_0897A218;
    case 297u: goto L_0897A220;
    case 298u: goto L_0897A228;
    case 299u: goto L_0897A230;
    case 300u: goto L_0897A238;
    case 301u: goto L_0897A240;
    case 302u: goto L_0897A248;
    case 303u: goto L_0897A250;
    case 304u: goto L_0897A258;
    case 305u: goto L_0897A25C;
    case 306u: goto L_0897A264;
    case 307u: goto L_0897A2BC;
    case 308u: goto L_0897A2C8;
    case 309u: goto L_0897A2DC;
    case 310u: goto L_0897A2EC;
    case 311u: goto L_0897A2F4;
    case 312u: goto L_0897A308;
    case 313u: goto L_0897A328;
    case 314u: goto L_0897A338;
    case 315u: goto L_0897A350;
    case 316u: goto L_0897A360;
    case 317u: goto L_0897A374;
    case 318u: goto L_0897A38C;
    case 319u: goto L_0897A3AC;
    case 320u: goto L_0897A3B4;
    case 321u: goto L_0897A3C4;
    case 322u: goto L_0897A3DC;
    case 323u: goto L_0897A3EC;
    case 324u: goto L_0897A400;
    case 325u: goto L_0897A410;
    case 326u: goto L_0897A428;
    case 327u: goto L_0897A438;
    case 328u: goto L_0897A43C;
    case 329u: goto L_0897A454;
    case 330u: goto L_0897A464;
    case 331u: goto L_0897A470;
    case 332u: goto L_0897A480;
    case 333u: goto L_0897A48C;
    case 334u: goto L_0897A494;
    case 335u: goto L_0897A498;
    case 336u: goto L_0897A4A0;
    case 337u: goto L_0897A4DC;
    case 338u: goto L_0897A4EC;
    case 339u: goto L_0897A4FC;
    case 340u: goto L_0897A508;
    case 341u: goto L_0897A514;
    case 342u: goto L_0897A51C;
    case 343u: goto L_0897A520;
    case 344u: goto L_0897A528;
    case 345u: goto L_0897A588;
    case 346u: goto L_0897A5A0;
    case 347u: goto L_0897A5AC;
    case 348u: goto L_0897A624;
    case 349u: goto L_0897A69C;
    case 350u: goto L_0897A6D4;
    case 351u: goto L_0897A6EC;
    case 352u: goto L_0897A6F8;
    case 353u: goto L_0897A704;
    case 354u: goto L_0897A718;
    case 355u: goto L_0897A720;
    case 356u: goto L_0897A768;
    case 357u: goto L_0897A77C;
    case 358u: goto L_0897A784;
    case 359u: goto L_0897A78C;
    case 360u: goto L_0897A790;
    case 361u: goto L_0897A7AC;
    case 362u: goto L_0897A7D4;
    case 363u: goto L_0897A7E4;
    case 364u: goto L_0897A7F4;
    case 365u: goto L_0897A810;
    case 366u: goto L_0897A818;
    case 367u: goto L_0897A820;
    case 368u: goto L_0897A828;
    case 369u: goto L_0897A830;
    case 370u: goto L_0897A838;
    case 371u: goto L_0897A86C;
    case 372u: goto L_0897A884;
    case 373u: goto L_0897A890;
    case 374u: goto L_0897A89C;
    case 375u: goto L_0897A8A8;
    case 376u: goto L_0897A8B4;
    case 377u: goto L_0897A8C0;
    case 378u: goto L_0897A8C8;
    case 379u: goto L_0897A8D4;
    case 380u: goto L_0897A8EC;
    case 381u: goto L_0897A904;
    case 382u: goto L_0897A918;
    case 383u: goto L_0897A930;
    case 384u: goto L_0897A93C;
    case 385u: goto L_0897A948;
    case 386u: goto L_0897A954;
    case 387u: goto L_0897A960;
    case 388u: goto L_0897A96C;
    case 389u: goto L_0897A974;
    case 390u: goto L_0897A980;
    case 391u: goto L_0897A9A0;
    case 392u: goto L_0897A9BC;
    case 393u: goto L_0897A9D0;
    case 394u: goto L_0897A9EC;
    case 395u: goto L_0897AA24;
    case 396u: goto L_0897AA38;
    case 397u: goto L_0897AA3C;
    case 398u: goto L_0897AA70;
    case 399u: goto L_0897AA78;
    case 400u: goto L_0897AA80;
    case 401u: goto L_0897AA88;
    case 402u: goto L_0897AA94;
    case 403u: goto L_0897AAAC;
    case 404u: goto L_0897AAD8;
    case 405u: goto L_0897AAF0;
    case 406u: goto L_0897AAF8;
    case 407u: goto L_0897AB00;
    case 408u: goto L_0897AB18;
    case 409u: goto L_0897AB2C;
    case 410u: goto L_0897AB38;
    case 411u: goto L_0897AB5C;
    case 412u: goto L_0897AB78;
    case 413u: goto L_0897AB98;
    case 414u: goto L_0897ABB4;
    case 415u: goto L_0897ABBC;
    case 416u: goto L_0897ABD8;
    case 417u: goto L_0897ABF8;
    case 418u: goto L_0897AC24;
    case 419u: goto L_0897AC30;
    case 420u: goto L_0897AC84;
    case 421u: goto L_0897AC94;
    case 422u: goto L_0897AC9C;
    case 423u: goto L_0897ACAC;
    case 424u: goto L_0897ACC4;
    case 425u: goto L_0897ACD4;
    case 426u: goto L_0897ACE4;
    case 427u: goto L_0897ACFC;
    case 428u: goto L_0897AD04;
    case 429u: goto L_0897AD18;
    case 430u: goto L_0897AD20;
    case 431u: goto L_0897AD28;
    case 432u: goto L_0897AD3C;
    case 433u: goto L_0897AD44;
    case 434u: goto L_0897AD4C;
    case 435u: goto L_0897AD60;
    case 436u: goto L_0897AD68;
    case 437u: goto L_0897AD70;
    case 438u: goto L_0897AD84;
    case 439u: goto L_0897AD8C;
    case 440u: goto L_0897AD94;
    case 441u: goto L_0897ADA8;
    case 442u: goto L_0897ADB0;
    case 443u: goto L_0897ADB8;
    case 444u: goto L_0897ADCC;
    case 445u: goto L_0897ADD4;
    case 446u: goto L_0897ADDC;
    case 447u: goto L_0897ADF0;
    case 448u: goto L_0897ADF8;
    case 449u: goto L_0897ADFC;
    case 450u: goto L_0897AE04;
    case 451u: goto L_0897AE14;
    case 452u: goto L_0897AE24;
    case 453u: goto L_0897AE3C;
    case 454u: goto L_0897AE44;
    case 455u: goto L_0897AE58;
    case 456u: goto L_0897AE6C;
    case 457u: goto L_0897AE80;
    case 458u: goto L_0897AE94;
    case 459u: goto L_0897AEA8;
    case 460u: goto L_0897AEBC;
    case 461u: goto L_0897AECC;
    case 462u: goto L_0897AED0;
    case 463u: goto L_0897AED8;
    case 464u: goto L_0897AEF0;
    case 465u: goto L_0897AEF8;
    case 466u: goto L_0897AEFC;
    case 467u: goto L_0897AF04;
    case 468u: goto L_0897AF14;
    case 469u: goto L_0897AF2C;
    case 470u: goto L_0897AF34;
    case 471u: goto L_0897AF3C;
    case 472u: goto L_0897AF58;
    case 473u: goto L_0897AFB0;
    case 474u: goto L_0897AFBC;
    case 475u: goto L_0897AFC8;
    case 476u: goto L_0897AFD0;
    case 477u: goto L_0897AFD4;
    case 478u: goto L_0897AFEC;
    case 479u: goto L_0897AFF4;
    case 480u: goto L_0897B004;
    case 481u: goto L_0897B01C;
    case 482u: goto L_0897B024;
    case 483u: goto L_0897B02C;
    case 484u: goto L_0897B038;
    case 485u: goto L_0897B048;
    case 486u: goto L_0897B050;
    case 487u: goto L_0897B060;
    case 488u: goto L_0897B068;
    case 489u: goto L_0897B06C;
    case 490u: goto L_0897B074;
    case 491u: goto L_0897B084;
    case 492u: goto L_0897B09C;
    case 493u: goto L_0897B0A4;
    case 494u: goto L_0897B0AC;
    case 495u: goto L_0897B0B8;
    case 496u: goto L_0897B0C8;
    case 497u: goto L_0897B0D0;
    case 498u: goto L_0897B0D4;
    case 499u: goto L_0897B0DC;
    case 500u: goto L_0897B0F0;
    case 501u: goto L_0897B108;
    case 502u: goto L_0897B110;
    case 503u: goto L_0897B13C;
    case 504u: goto L_0897B148;
    case 505u: goto L_0897B16C;
    case 506u: goto L_0897B180;
    case 507u: goto L_0897B184;
    case 508u: goto L_0897B19C;
    case 509u: goto L_0897B1B0;
    case 510u: goto L_0897B1C8;
    case 511u: goto L_0897B208;
    case 512u: goto L_0897B218;
    case 513u: goto L_0897B228;
    case 514u: goto L_0897B258;
    case 515u: goto L_0897B268;
    case 516u: goto L_0897B270;
    case 517u: goto L_0897B294;
    case 518u: goto L_0897B2A4;
    case 519u: goto L_0897B2A8;
    case 520u: goto L_0897B2B0;
    case 521u: goto L_0897B2C0;
    case 522u: goto L_0897B2C8;
    case 523u: goto L_0897B2D0;
    case 524u: goto L_0897B2D8;
    case 525u: goto L_0897B2E0;
    case 526u: goto L_0897B2E8;
    case 527u: goto L_0897B2F4;
    case 528u: goto L_0897B2FC;
    case 529u: goto L_0897B31C;
    case 530u: goto L_0897B33C;
    case 531u: goto L_0897B35C;
    case 532u: goto L_0897B37C;
    case 533u: goto L_0897B38C;
    case 534u: goto L_0897B3B0;
    case 535u: goto L_0897B3BC;
    case 536u: goto L_0897B3C0;
    case 537u: goto L_0897B3D0;
    case 538u: goto L_0897B3E8;
    case 539u: goto L_0897B3F4;
    case 540u: goto L_0897B404;
    case 541u: goto L_0897B41C;
    case 542u: goto L_0897B428;
    case 543u: goto L_0897B438;
    case 544u: goto L_0897B440;
    case 545u: goto L_0897B450;
    case 546u: goto L_0897B458;
    case 547u: goto L_0897B468;
    case 548u: goto L_0897B474;
    case 549u: goto L_0897B4C8;
    case 550u: goto L_0897B4E4;
    case 551u: goto L_0897B4EC;
    case 552u: goto L_0897B570;
    case 553u: goto L_0897B5D0;
    case 554u: goto L_0897B5E4;
    case 555u: goto L_0897B5F4;
    case 556u: goto L_0897B608;
    case 557u: goto L_0897B62C;
    case 558u: goto L_0897B638;
    case 559u: goto L_0897B648;
    case 560u: goto L_0897B670;
    case 561u: goto L_0897B678;
    case 562u: goto L_0897B698;
    case 563u: goto L_0897B6A4;
    case 564u: goto L_0897B6A8;
    case 565u: goto L_0897B6BC;
    case 566u: goto L_0897B6C4;
    case 567u: goto L_0897B6DC;
    case 568u: goto L_0897B6F4;
    case 569u: goto L_0897B704;
    case 570u: goto L_0897B70C;
    case 571u: goto L_0897B714;
    case 572u: goto L_0897B77C;
    case 573u: goto L_0897B780;
    case 574u: goto L_0897B790;
    case 575u: goto L_0897B7B0;
    case 576u: goto L_0897B7C4;
    case 577u: goto L_0897B7D8;
    case 578u: goto L_0897B7E8;
    case 579u: goto L_0897B7F8;
    case 580u: goto L_0897B800;
    case 581u: goto L_0897B808;
    case 582u: goto L_0897B814;
    case 583u: goto L_0897B820;
    case 584u: goto L_0897B828;
    case 585u: goto L_0897B840;
    case 586u: goto L_0897B848;
    case 587u: goto L_0897B850;
    case 588u: goto L_0897B86C;
    case 589u: goto L_0897B87C;
    case 590u: goto L_0897B884;
    case 591u: goto L_0897B88C;
    case 592u: goto L_0897B894;
    case 593u: goto L_0897B8AC;
    case 594u: goto L_0897B8C4;
    case 595u: goto L_0897B8CC;
    case 596u: goto L_0897B8EC;
    case 597u: goto L_0897B8F4;
    case 598u: goto L_0897B8FC;
    case 599u: goto L_0897B908;
    case 600u: goto L_0897B918;
    case 601u: goto L_0897B920;
    case 602u: goto L_0897B928;
    case 603u: goto L_0897B930;
    case 604u: goto L_0897B954;
    case 605u: goto L_0897B95C;
    case 606u: goto L_0897B964;
    case 607u: goto L_0897B970;
    case 608u: goto L_0897B978;
    case 609u: goto L_0897B994;
    case 610u: goto L_0897B9B4;
    case 611u: goto L_0897B9D0;
    case 612u: goto L_0897B9F8;
    case 613u: goto L_0897B9FC;
    case 614u: goto L_0897BA14;
    case 615u: goto L_0897BA20;
    case 616u: goto L_0897BA34;
    case 617u: goto L_0897BA60;
    case 618u: goto L_0897BA6C;
    case 619u: goto L_0897BA74;
    case 620u: goto L_0897BA7C;
    case 621u: goto L_0897BAC4;
    case 622u: goto L_0897BACC;
    case 623u: goto L_0897BAD8;
    case 624u: goto L_0897BAF8;
    case 625u: goto L_0897BAFC;
    case 626u: goto L_0897BB04;
    case 627u: goto L_0897BB1C;
    case 628u: goto L_0897BB28;
    case 629u: goto L_0897BB3C;
    case 630u: goto L_0897BB48;
    case 631u: goto L_0897BB50;
    case 632u: goto L_0897BB5C;
    case 633u: goto L_0897BB64;
    case 634u: goto L_0897BB78;
    case 635u: goto L_0897BB80;
    case 636u: goto L_0897BB94;
    case 637u: goto L_0897BC68;
    case 638u: goto L_0897BC70;
    case 639u: goto L_0897BC7C;
    case 640u: goto L_0897BDE4;
    case 641u: goto L_0897BDEC;
    case 642u: goto L_0897BE14;
    case 643u: goto L_0897BE44;
    case 644u: goto L_0897BE60;
    case 645u: goto L_0897BE6C;
    case 646u: goto L_0897BE74;
    case 647u: goto L_0897BEB0;
    case 648u: goto L_0897BEBC;
    case 649u: goto L_0897BED0;
    case 650u: goto L_0897BED8;
    case 651u: goto L_0897BF40;
    case 652u: goto L_0897BF48;
    case 653u: goto L_0897BF54;
    case 654u: goto L_0897BF74;
    case 655u: goto L_0897BF90;
    case 656u: goto L_0897BF9C;
    case 657u: goto L_0897BFA4;
    case 658u: goto L_0897BFA8;
    case 659u: goto L_0897BFB8;
    case 660u: goto L_0897BFC4;
    case 661u: goto L_0897BFCC;
    case 662u: goto L_0897BFD0;
    case 663u: goto L_0897BFE8;
    case 664u: goto L_0897BFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08978000:
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
        goto L_08978010;
    }
    goto L_08978008;
L_08978008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08978058;
      }
      goto L_08978010;
    }
L_08978010:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 512 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-26612)));
        goto L_0897803C;
    }
    goto L_0897801C;
L_0897801C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08978058;
      }
      goto L_0897803C;
    }
L_0897803C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-10240));
    goto L_08978058;
L_08978058:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
        goto L_089781E8;
    }
    goto L_08978060;
L_08978060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897807C;
      }
      goto L_08978074;
    }
L_08978074:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0897807C;
L_0897807C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978174;
      }
      goto L_08978094;
    }
L_08978094:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 16383u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978154;
      }
      goto L_089780F0;
    }
L_089780F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08978114;
      }
      goto L_08978104;
    }
L_08978104:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08978114u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 508u, 0x089765D0u>(ctx, &aot_mem) && ctx.pc == 0x08978114u) goto L_08978114;
    return;
L_08978114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08978140;
      }
      goto L_08978128;
    }
L_08978128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08978140;
L_08978140:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08978154u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 549u, 0x08976800u>(ctx, &aot_mem) && ctx.pc == 0x08978154u) goto L_08978154;
    return;
L_08978154:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978094;
      }
      goto L_08978174;
    }
L_08978174:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08978180u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 508u, 0x089765D0u>(ctx, &aot_mem) && ctx.pc == 0x08978180u) goto L_08978180;
    return;
L_08978180:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
        goto L_08978194;
    }
    goto L_0897818C;
L_0897818C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089781DC;
      }
      goto L_08978194;
    }
L_08978194:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 512 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-26612)));
        goto L_089781C0;
    }
    goto L_089781A0;
L_089781A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_089781DC;
      }
      goto L_089781C0;
    }
L_089781C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-10240));
    goto L_089781DC;
L_089781DC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978060;
      }
      goto L_089781E4;
    }
L_089781E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    goto L_089781E8;
L_089781E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 780u, 0x08977FE4u>(ctx, &aot_mem); return;
      }
      goto L_089781FC;
    }
L_089781FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_08978238;
    }
    goto L_0897821C;
L_0897821C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_08978238;
L_08978238:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    goto L_08978258;
L_08978258:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978368;
      }
      goto L_08978268;
    }
L_08978268:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08978368;
      }
      goto L_0897827C;
    }
L_0897827C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978360;
      }
      goto L_08978294;
    }
L_08978294:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 16383u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[11] = (ctx.gpr[9] << 4u);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08978340;
      }
      goto L_089782EC;
    }
L_089782EC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 16383u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 29030u);
    goto L_08978340;
L_08978340:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978294;
      }
      goto L_08978360;
    }
L_08978360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_08978258;
      }
      goto L_08978368;
    }
L_08978368:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978390;
      }
      goto L_08978378;
    }
L_08978378:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08978378;
      }
      goto L_08978390;
    }
L_08978390:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089783C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-416));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[31]);
    ctx.gpr[23] = (ctx.gpr[6] & 255u);
    ctx.gpr[19] = (ctx.gpr[10] & 255u);
    ctx.gpr[18] = (ctx.gpr[11] & 255u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[30] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[7]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[8]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[30]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (19646u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48160u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08978458u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 132u, 0x089FD348u>(ctx, &aot_mem) && ctx.pc == 0x08978458u) goto L_08978458;
    return;
L_08978458:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08978478u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 356u, 0x08975554u>(ctx, &aot_mem) && ctx.pc == 0x08978478u) goto L_08978478;
    return;
L_08978478:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[31]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08978808;
      }
      goto L_089784A0;
    }
L_089784A0:
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[23] << 2u);
    ctx.gpr[13] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[24] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[23] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[31] + ctx.gpr[31]);
    ctx.gpr[23] = (ctx.gpr[31] + ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] << 2u);
    goto L_089784D0;
L_089784D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[25] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[25]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1200));
      if (branch_taken) {
          goto L_089787E8;
      }
      goto L_089784F8;
    }
L_089784F8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[25])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[14] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[15] = (ctx.gpr[14] + ctx.gpr[15]);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[30]);
    goto L_08978514;
L_08978514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(10292)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089787C4;
      }
      goto L_08978520;
    }
L_08978520:
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(10300)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_089787C4;
      }
      goto L_08978534;
    }
L_08978534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(10292)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[10] << 4u);
    ctx.gpr[4] = (ctx.gpr[10] << 2u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08978568;
      }
      goto L_08978550;
    }
L_08978550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089787B0;
      }
      goto L_08978568;
    }
L_08978568:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0897858C;
    }
    goto L_08978570;
L_08978570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089787B0;
      }
      goto L_08978588;
    }
L_08978588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0897858C;
L_0897858C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089787B0;
      }
      goto L_089785A0;
    }
L_089785A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[13] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[13] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[24] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_089785EC;
    }
    goto L_089785E0;
L_089785E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_089785EC;
      }
      goto L_089785EC;
    }
L_089785EC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
        goto L_08978610;
    }
    goto L_08978600;
L_08978600:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08978614;
      }
      goto L_08978610;
    }
L_08978610:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08978614;
L_08978614:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
        goto L_0897863C;
    }
    goto L_08978628;
L_08978628:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08978644;
      }
      goto L_0897863C;
    }
L_0897863C:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08978644;
L_08978644:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089787B0;
      }
      goto L_08978654;
    }
L_08978654:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089787B0;
      }
      goto L_08978674;
    }
L_08978674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 16383u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[3] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_089786C8;
      }
      goto L_089786A8;
    }
L_089786A8:
    ctx.gpr[2] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[3] + ctx.gpr[2]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + ctx.gpr[2]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[2] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978790;
      }
      goto L_089786C8;
    }
L_089786C8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[3] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_089786F0;
      }
      goto L_089786D0;
    }
L_089786D0:
    ctx.gpr[2] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[3] + ctx.gpr[2]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + ctx.gpr[2]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[2] = (ctx.gpr[2] & 64u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978790;
      }
      goto L_089786F0;
    }
L_089786F0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08978790;
      }
      goto L_08978708;
    }
L_08978708:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[4] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[3] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
      if (branch_taken) {
          goto L_08978790;
      }
      goto L_08978784;
    }
L_08978784:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[10] | 0u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    goto L_08978790;
L_08978790:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978674;
      }
      goto L_089787B0;
    }
L_089787B0:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(10300)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08978534;
      }
      goto L_089787C4;
    }
L_089787C4:
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(1));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1200));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[25]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(1200));
      if (branch_taken) {
          goto L_08978514;
      }
      goto L_089787E8;
    }
L_089787E8:
    ctx.gpr[31] = (ctx.gpr[31] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[31]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089784D0;
      }
      goto L_08978808;
    }
L_08978808:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
      if (branch_taken) {
          goto L_08978928;
      }
      goto L_0897881C;
    }
L_0897881C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[21] << 4u);
    ctx.gpr[7] = (ctx.gpr[21] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08978900;
      }
      goto L_089788E8;
    }
L_089788E8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[26])) && ctx.fpr[13] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978900;
      }
      goto L_089788F8;
    }
L_089788F8:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
      if (branch_taken) {
          goto L_0897890C;
      }
      goto L_08978900;
    }
L_08978900:
    ctx.gpr[31] = (0x08978908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08978908u) goto L_08978908;
    return;
L_08978908:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    goto L_0897890C;
L_0897890C:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[26] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978940;
      }
      goto L_08978928;
    }
L_08978928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08978940;
L_08978940:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978980:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[17] = (ctx.gpr[9] & 255u);
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08978A48;
      }
      goto L_089789E0;
    }
L_089789E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08978A4C;
      }
      goto L_089789EC;
    }
L_089789EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[11]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16964u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978AE4;
      }
      goto L_08978A48;
    }
L_08978A48:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08978A4C;
L_08978A4C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[11]);
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08978A7Cu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 369u, 0x0897572Cu>(ctx, &aot_mem) && ctx.pc == 0x08978A7Cu) goto L_08978A7C;
    return;
L_08978A7C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08978AA8;
      }
      goto L_08978A8C;
    }
L_08978A8C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08978A98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24948));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 345u, 0x0897549Cu>(ctx, &aot_mem) && ctx.pc == 0x08978A98u) goto L_08978A98;
    return;
L_08978A98:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978EF0;
      }
      goto L_08978AA8;
    }
L_08978AA8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16201u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.gpr[4] = (51572u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9200u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08978B0C;
      }
      goto L_08978AE4;
    }
L_08978AE4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16201u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.gpr[4] = (51572u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9200u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08978B0C;
L_08978B0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[20]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[30]));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[30]));
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
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08978ED4;
      }
      goto L_08978B68;
    }
L_08978B68:
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 4u);
    goto L_08978B94;
L_08978B94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978BEC;
      }
      goto L_08978BA4;
    }
L_08978BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 16383u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978EB4;
      }
      goto L_08978BEC;
    }
L_08978BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 16383u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08978C90u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 328u, 0x088C5AA4u>(ctx, &aot_mem) && ctx.pc == 0x08978C90u) goto L_08978C90;
    return;
L_08978C90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08978EB4;
      }
      goto L_08978C98;
    }
L_08978C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 16383u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[16] = std::sqrt(ctx.fpr[16]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978EB4;
      }
      goto L_08978D48;
    }
L_08978D48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 16383u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978E28;
      }
      goto L_08978D9C;
    }
L_08978D9C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
        goto L_08978DB0;
    }
    goto L_08978DB0;
L_08978DB0:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08978DCC;
      }
      goto L_08978DC4;
    }
L_08978DC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08978EB4;
      }
      goto L_08978DCC;
    }
L_08978DCC:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978DE8;
      }
      goto L_08978DE0;
    }
L_08978DE0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08978EB4;
      }
      goto L_08978DE8;
    }
L_08978DE8:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978E04;
      }
      goto L_08978DFC;
    }
L_08978DFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08978EB4;
      }
      goto L_08978E04;
    }
L_08978E04:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08978E20;
      }
      goto L_08978E14;
    }
L_08978E14:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08978EB4;
      }
      goto L_08978E20;
    }
L_08978E20:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08978EB4;
      }
      goto L_08978E28;
    }
L_08978E28:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
        goto L_08978E40;
    }
    goto L_08978E40;
L_08978E40:
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_08978E5C;
      }
      goto L_08978E54;
    }
L_08978E54:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08978EB4;
      }
      goto L_08978E5C;
    }
L_08978E5C:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978E78;
      }
      goto L_08978E70;
    }
L_08978E70:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08978EB4;
      }
      goto L_08978E78;
    }
L_08978E78:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08978E94;
      }
      goto L_08978E8C;
    }
L_08978E8C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08978EB4;
      }
      goto L_08978E94;
    }
L_08978E94:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_08978EB0;
      }
      goto L_08978EA4;
    }
L_08978EA4:
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08978EB4;
      }
      goto L_08978EB0;
    }
L_08978EB0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08978EB4;
L_08978EB4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978B94;
      }
      goto L_08978ED4;
    }
L_08978ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08978EF0;
      }
      goto L_08978EE4;
    }
L_08978EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_08978EF0;
L_08978EF0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08978F38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[31]);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[11] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[11] & 255u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
      if (branch_taken) {
          goto L_08978F98;
      }
      goto L_08978F64;
    }
L_08978F64:
    ctx.gpr[11] = (17036u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[18] = ctx.fpr[16] + ctx.fpr[18];
    ctx.gpr[11] = (16345u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] | 39322u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[19]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
        goto L_08978FA0;
    }
    goto L_08978F90;
L_08978F90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08978FA0;
      }
      goto L_08978F98;
    }
L_08978F98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08979534;
      }
      goto L_08978FA0;
    }
L_08978FA0:
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[11] = (ctx.gpr[11] & 63u);
    ctx.gpr[2] = (0u | 63u);
    if (ctx.gpr[11] == ctx.gpr[2]) {
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
        goto L_08979008;
    }
    goto L_08978FB8;
L_08978FB8:
    ctx.gpr[11] = (2228u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-26608)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979000;
      }
      goto L_08978FC8;
    }
L_08978FC8:
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[2] = (0u | 100u);
    ctx.gpr[3] = (2228u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26608)));
    ctx.gpr[3] = (ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979078;
      }
      goto L_08978FF4;
    }
L_08978FF4:
    ctx.gpr[2] = (2228u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26608)));
      if (branch_taken) {
          goto L_08979078;
      }
      goto L_08979000;
    }
L_08979000:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08979534;
      }
      goto L_08979008;
    }
L_08979008:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (17307u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (2231u << 16u);
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7604));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 250u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08979048u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 425u, 0x08975CA4u>(ctx, &aot_mem) && ctx.pc == 0x08979048u) goto L_08979048;
    return;
L_08979048:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26608), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[6] = (2199u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32096));
    ctx.gpr[31] = (0x08979068u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 627u, 0x08B02D9Cu>(ctx, &aot_mem) && ctx.pc == 0x08979068u) goto L_08979068;
    return;
L_08979068:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26604), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08979534;
      }
      goto L_08979078;
    }
L_08979078:
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979530;
      }
      goto L_08979084;
    }
L_08979084:
    ctx.gpr[3] = (2228u << 16u);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26604)));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26604), ctx.gpr[12]);
    ctx.gpr[3] = (2228u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26608)));
    ctx.gpr[3] = (ctx.gpr[12] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089790B0;
      }
      goto L_089790A8;
    }
L_089790A8:
    ctx.gpr[3] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26604), 0u);
    goto L_089790B0;
L_089790B0:
    ctx.gpr[3] = (2228u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26604)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[3]);
    ctx.gpr[12] = (2231u << 16u);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-7604));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08979520;
      }
      goto L_089790D8;
    }
L_089790D8:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[13] << 4u);
    ctx.gpr[14] = (ctx.gpr[13] << 2u);
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[14]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[3] = (ctx.gpr[3] & 32u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979104;
      }
      goto L_089790FC;
    }
L_089790FC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979520;
      }
      goto L_08979104;
    }
L_08979104:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[13] << 4u);
    ctx.gpr[14] = (ctx.gpr[13] << 2u);
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[14]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[3] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[3];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[3]);
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[3]);
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[12] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[12]);
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979520;
      }
      goto L_0897919C;
    }
L_0897919C:
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[13] << 4u);
    ctx.gpr[15] = (ctx.gpr[13] << 2u);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[15]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[14]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[3] = (ctx.gpr[3] & 15u);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979520;
      }
      goto L_089791C8;
    }
L_089791C8:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[13] << 4u);
    ctx.gpr[15] = (ctx.gpr[13] << 2u);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[15]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[14]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[3]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (ctx.gpr[14] + ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[3] & 16383u);
    ctx.gpr[3] = (ctx.gpr[3] << 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089794F4;
      }
      goto L_08979208;
    }
L_08979208:
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[15] = (ctx.gpr[3] << 4u);
    ctx.gpr[24] = (ctx.gpr[3] << 2u);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[24]);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[15]);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[14] = (ctx.gpr[14] & 32u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979234;
      }
      goto L_0897922C;
    }
L_0897922C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089794F4;
      }
      goto L_08979234;
    }
L_08979234:
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[15] = (ctx.gpr[3] << 4u);
    ctx.gpr[24] = (ctx.gpr[3] << 2u);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[24]);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[15]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[14] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[1];
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.gpr[14] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[14]);
    ctx.gpr[14] = (std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[14]);
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[14] = (std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[15] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[15]);
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[3];
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[15] = (ctx.gpr[13] << 4u);
    ctx.gpr[24] = (ctx.gpr[13] << 2u);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[24]);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[15]);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[14] = (ctx.gpr[14] & 1u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_089792F8;
      }
      goto L_089792E0;
    }
L_089792E0:
    ctx.gpr[14] = (16320u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[14]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[0] - ctx.fpr[3];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[3] = ctx.fpr[2] - ctx.fpr[3];
      if (branch_taken) {
          goto L_08979300;
      }
      goto L_089792F8;
    }
L_089792F8:
    ctx.fpr[4] = ctx.fpr[0] - ctx.fpr[18];
    ctx.fpr[3] = ctx.fpr[2] - ctx.fpr[18];
    goto L_08979300;
L_08979300:
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[5] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[5]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089794F4;
      }
      goto L_08979318;
    }
L_08979318:
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.fpr[2] = std::sqrt(ctx.fpr[2]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[15] = (ctx.gpr[13] << 4u);
    ctx.gpr[24] = (ctx.gpr[13] << 2u);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[24]);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[15]);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[14] = (ctx.gpr[14] & 1u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897935C;
      }
      goto L_08979344;
    }
L_08979344:
    ctx.gpr[14] = (16320u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[14]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[0] - ctx.fpr[3];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[3] = ctx.fpr[2] - ctx.fpr[3];
      if (branch_taken) {
          goto L_08979364;
      }
      goto L_0897935C;
    }
L_0897935C:
    ctx.fpr[4] = ctx.fpr[0] - ctx.fpr[16];
    ctx.fpr[3] = ctx.fpr[2] - ctx.fpr[16];
    goto L_08979364;
L_08979364:
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[2] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[4]) ^ 0x80000000u);
        goto L_0897937C;
    }
    goto L_0897937C;
L_0897937C:
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[5] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[5]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[4]) ^ 0x80000000u);
        goto L_08979394;
    }
    goto L_08979394;
L_08979394:
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[5] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[4] < ctx.fpr[5]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]) ^ 0x80000000u);
        goto L_089793AC;
    }
    goto L_089793AC;
L_089793AC:
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[4];
    ctx.fpr[2] = ctx.fpr[1] / ctx.fpr[2];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[15] = (ctx.gpr[13] << 4u);
    ctx.gpr[24] = (ctx.gpr[13] << 2u);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[24]);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[15]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[14] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[14] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[15] = (16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[15]);
    ctx.fpr[2] = ctx.fpr[1] - ctx.fpr[2];
    ctx.gpr[15] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[15]);
    { const std::uint32_t vfpu_address = ctx.gpr[14] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[14] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[14] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (ctx.gpr[3] << 4u);
    ctx.gpr[25] = (ctx.gpr[3] << 2u);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[24]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[15] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[15] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[24]);
    { const std::uint32_t vfpu_address = ctx.gpr[15] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[15] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[15] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[14] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[15] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[14] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[14] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[14] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[14] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[14] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[13];
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[12];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[4];
    ctx.fpr[3] = std::sqrt(ctx.fpr[3]);
    ctx.fpr[2] = ctx.fpr[2] / ctx.fpr[3];
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[3];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[1];
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_089794C0;
      }
      goto L_089794B0;
    }
L_089794B0:
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089794D8;
      }
      goto L_089794C0;
    }
L_089794C0:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_089794F4;
      }
      goto L_089794C8;
    }
L_089794C8:
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089794F4;
      }
      goto L_089794D8;
    }
L_089794D8:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08979534;
      }
      goto L_089794F4;
    }
L_089794F4:
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[13] << 4u);
    ctx.gpr[15] = (ctx.gpr[13] << 2u);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[15]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[14]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[3] = (ctx.gpr[3] & 15u);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089791C8;
      }
      goto L_08979520;
    }
L_08979520:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979084;
      }
      goto L_08979530;
    }
L_08979530:
    ctx.gpr[2] = (0u | 0u);
    goto L_08979534;
L_08979534:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-432));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[31]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[7]);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[9]);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_089795E0;
      }
      goto L_089795C0;
    }
L_089795C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[5] = (0u | 63u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089795E8;
      }
      goto L_089795D8;
    }
L_089795D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979660;
      }
      goto L_089795E0;
    }
L_089795E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08979C24;
      }
      goto L_089795E8;
    }
L_089795E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (17194u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7104));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 240u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08979630u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 425u, 0x08975CA4u>(ctx, &aot_mem) && ctx.pc == 0x08979630u) goto L_08979630;
    return;
L_08979630:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26600), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[6] = (2199u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32096));
    ctx.gpr[31] = (0x08979650u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 627u, 0x08B02D9Cu>(ctx, &aot_mem) && ctx.pc == 0x08979650u) goto L_08979650;
    return;
L_08979650:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26596), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08979C24;
      }
      goto L_08979660;
    }
L_08979660:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089796AC;
      }
      goto L_08979670;
    }
L_08979670:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[30] = (0u | 150u);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26600)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[30] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_089796B4;
      }
      goto L_089796A4;
    }
L_089796A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26600)));
      if (branch_taken) {
          goto L_089796B4;
      }
      goto L_089796AC;
    }
L_089796AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08979C24;
      }
      goto L_089796B4;
    }
L_089796B4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979C20;
      }
      goto L_089796C0;
    }
L_089796C0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26596)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26596), ctx.gpr[5]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26600)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089796EC;
      }
      goto L_089796E4;
    }
L_089796E4:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26596), 0u);
    goto L_089796EC;
L_089796EC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26596)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7104));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[22] = std::sqrt(ctx.fpr[22]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979C10;
      }
      goto L_089797A8;
    }
L_089797A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[22] = (ctx.gpr[22] & 15u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979C10;
      }
      goto L_089797CC;
    }
L_089797CC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979C10;
      }
      goto L_089797DC;
    }
L_089797DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979C00;
      }
      goto L_0897981C;
    }
L_0897981C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 16383u);
    ctx.gpr[21] = (ctx.gpr[5] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979C00;
      }
      goto L_08979864;
    }
L_08979864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[21] << 4u);
    ctx.gpr[6] = (ctx.gpr[21] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979C00;
      }
      goto L_08979888;
    }
L_08979888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[21] << 4u);
    ctx.gpr[6] = (ctx.gpr[21] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979934;
      }
      goto L_08979924;
    }
L_08979924:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979C00;
      }
      goto L_08979934;
    }
L_08979934:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979954;
      }
      goto L_08979944;
    }
L_08979944:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979C00;
      }
      goto L_08979954;
    }
L_08979954:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979C00;
      }
      goto L_08979964;
    }
L_08979964:
    ctx.gpr[31] = (0x0897996Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0897996Cu) goto L_0897996C;
    return;
L_0897996C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (15232u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[20] << 4u);
    ctx.gpr[7] = (ctx.gpr[20] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[21] << 4u);
    ctx.gpr[8] = (ctx.gpr[21] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08979AA4;
      }
      goto L_08979A7C;
    }
L_08979A7C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (16384u << 16u);
    ctx.gpr[31] = (0x08979A94u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 556u, 0x088EF5A0u>(ctx, &aot_mem) && ctx.pc == 0x08979A94u) goto L_08979A94;
    return;
L_08979A94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979B00;
      }
      goto L_08979A9C;
    }
L_08979A9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08979B00;
      }
      goto L_08979AA4;
    }
L_08979AA4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
          goto L_08979AF4;
      }
      goto L_08979AEC;
    }
L_08979AEC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08979AF4;
L_08979AF4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979B00;
      }
      goto L_08979AFC;
    }
L_08979AFC:
    ctx.gpr[16] = (0u | 1u);
    goto L_08979B00;
L_08979B00:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979B2C;
      }
      goto L_08979B08;
    }
L_08979B08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979B2C;
      }
      goto L_08979B1C;
    }
L_08979B1C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
        goto L_08979B5C;
    }
    goto L_08979B2C;
L_08979B2C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979BF0;
      }
      goto L_08979B34;
    }
L_08979B34:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979BF0;
      }
      goto L_08979B44;
    }
L_08979B44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979BF0;
      }
      goto L_08979B58;
    }
L_08979B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    goto L_08979B5C;
L_08979B5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[31] = (0x08979B98u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08979B98u) goto L_08979B98;
    return;
L_08979B98:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979BF0;
      }
      goto L_08979BA8;
    }
L_08979BA8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
        goto L_08979BC4;
    }
    goto L_08979BC4;
L_08979BC4:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
        goto L_08979BE4;
    }
    goto L_08979BDC;
L_08979BDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08979C24;
      }
      goto L_08979BE4;
    }
L_08979BE4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08979C24;
      }
      goto L_08979BF0;
    }
L_08979BF0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979964;
      }
      goto L_08979C00;
    }
L_08979C00:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089797DC;
      }
      goto L_08979C10;
    }
L_08979C10:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089796C0;
      }
      goto L_08979C20;
    }
L_08979C20:
    ctx.gpr[2] = (0u | 0u);
    goto L_08979C24;
L_08979C24:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979C6C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26644)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26640), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26648)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26636), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26632), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26628), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26620)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2228u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979D00:
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
L_08979D2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08979EAC;
      }
      goto L_08979D4C;
    }
L_08979D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08979EAC;
      }
      goto L_08979D58;
    }
L_08979D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08979D70u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08979D70u) goto L_08979D70;
    return;
L_08979D70:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_08979D94;
      }
      goto L_08979D88;
    }
L_08979D88:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08979D94;
L_08979D94:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (49097u << 16u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979DE4;
      }
      goto L_08979DB8;
    }
L_08979DB8:
    ctx.gpr[4] = (16457u << 16u);
    goto L_08979DBC;
L_08979DBC:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16457u << 16u);
      if (branch_taken) {
          goto L_08979DBC;
      }
      goto L_08979DE4;
    }
L_08979DE4:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979E2C;
      }
      goto L_08979E00;
    }
L_08979E00:
    ctx.gpr[4] = (16457u << 16u);
    goto L_08979E04;
L_08979E04:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16457u << 16u);
      if (branch_taken) {
          goto L_08979E04;
      }
      goto L_08979E2C;
    }
L_08979E2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (15205u << 16u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] | 24642u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08979E58;
    }
    goto L_08979E58;
L_08979E58:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979EA4;
      }
      goto L_08979E68;
    }
L_08979E68:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979E90;
      }
      goto L_08979E7C;
    }
L_08979E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x08979E88u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 495u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x08979E88u) goto L_08979E88;
    return;
L_08979E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08979E9C;
      }
      goto L_08979E90;
    }
L_08979E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x08979E9Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 495u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x08979E9Cu) goto L_08979E9C;
    return;
L_08979E9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08979EB0;
      }
      goto L_08979EA4;
    }
L_08979EA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08979EB0;
      }
      goto L_08979EAC;
    }
L_08979EAC:
    ctx.gpr[2] = (0u | 1u);
    goto L_08979EB0;
L_08979EB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08979EC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897A154;
      }
      goto L_08979F04;
    }
L_08979F04:
    ctx.gpr[4] = (15395u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (2226u << 16u);
    ctx.gpr[4] = (17274u << 16u);
    ctx.gpr[20] = (2226u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2226u << 16u);
    ctx.gpr[30] = (0u | 80u);
    ctx.gpr[23] = (ctx.gpr[17] + static_cast<std::uint32_t>(108));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-24888));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-24880));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-24872));
    goto L_08979F40;
L_08979F40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0897A14C;
      }
      goto L_08979F58;
    }
L_08979F58:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A14C;
      }
      goto L_08979F78;
    }
L_08979F78:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A14C;
      }
      goto L_08979F8C;
    }
L_08979F8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A14C;
      }
      goto L_08979FA4;
    }
L_08979FA4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A14C;
      }
      goto L_08979FB8;
    }
L_08979FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A14C;
      }
      goto L_08979FC4;
    }
L_08979FC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08979FE0;
      }
      goto L_08979FD8;
    }
L_08979FD8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08979FE0;
      }
      goto L_08979FE0;
    }
L_08979FE0:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A14C;
      }
      goto L_08979FF0;
    }
L_08979FF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A00C;
      }
      goto L_0897A004;
    }
L_0897A004:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_0897A00C;
      }
      goto L_0897A00C;
    }
L_0897A00C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A14C;
      }
      goto L_0897A01C;
    }
L_0897A01C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A038;
      }
      goto L_0897A030;
    }
L_0897A030:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_0897A038;
      }
      goto L_0897A038;
    }
L_0897A038:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A14C;
      }
      goto L_0897A048;
    }
L_0897A048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_0897A05C;
      }
      goto L_0897A054;
    }
L_0897A054:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897A14C;
      }
      goto L_0897A05C;
    }
L_0897A05C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0897A14C;
      }
      goto L_0897A06C;
    }
L_0897A06C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A14C;
      }
      goto L_0897A080;
    }
L_0897A080:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x0897A08Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0897A190;
L_0897A08C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A0C8;
      }
      goto L_0897A094;
    }
L_0897A094:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A0B0;
      }
      goto L_0897A0A0;
    }
L_0897A0A0:
    ctx.gpr[31] = (0x0897A0A8u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    goto L_0897ACC4;
L_0897A0A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A0C8;
      }
      goto L_0897A0B0;
    }
L_0897A0B0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897A0C0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0897A0C0u) goto L_0897A0C0;
    return;
L_0897A0C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_0897A14C;
      }
      goto L_0897A0C8;
    }
L_0897A0C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[5] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A14C;
      }
      goto L_0897A0D8;
    }
L_0897A0D8:
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(598), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A138;
      }
      goto L_0897A0EC;
    }
L_0897A0EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x0897A0F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0897A190;
L_0897A0F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A11C;
      }
      goto L_0897A100;
    }
L_0897A100:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[31] = (0x0897A114u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x0897A114u) goto L_0897A114;
    return;
L_0897A114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A14C;
      }
      goto L_0897A11C;
    }
L_0897A11C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[31] = (0x0897A130u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x0897A130u) goto L_0897A130;
    return;
L_0897A130:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A14C;
      }
      goto L_0897A138;
    }
L_0897A138:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[31] = (0x0897A14Cu);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x0897A14Cu) goto L_0897A14C;
    return;
L_0897A14C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08979F40;
      }
      goto L_0897A154;
    }
L_0897A154:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A190:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(119)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A200;
      }
      goto L_0897A19C;
    }
L_0897A19C:
    ctx.gpr[4] = (0u | 138u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 139u);
      if (branch_taken) {
          goto L_0897A1F0;
      }
      goto L_0897A1A8;
    }
L_0897A1A8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 159u);
      if (branch_taken) {
          goto L_0897A1F0;
      }
      goto L_0897A1B0;
    }
L_0897A1B0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 161u);
      if (branch_taken) {
          goto L_0897A1F0;
      }
      goto L_0897A1B8;
    }
L_0897A1B8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 164u);
      if (branch_taken) {
          goto L_0897A1F0;
      }
      goto L_0897A1C0;
    }
L_0897A1C0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 165u);
      if (branch_taken) {
          goto L_0897A1F0;
      }
      goto L_0897A1C8;
    }
L_0897A1C8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 158u);
      if (branch_taken) {
          goto L_0897A1F0;
      }
      goto L_0897A1D0;
    }
L_0897A1D0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 179u);
      if (branch_taken) {
          goto L_0897A1F0;
      }
      goto L_0897A1D8;
    }
L_0897A1D8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 134u);
      if (branch_taken) {
          goto L_0897A1F0;
      }
      goto L_0897A1E0;
    }
L_0897A1E0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 162u);
      if (branch_taken) {
          goto L_0897A1F0;
      }
      goto L_0897A1E8;
    }
L_0897A1E8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897A1F8;
      }
      goto L_0897A1F0;
    }
L_0897A1F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897A25C;
      }
      goto L_0897A1F8;
    }
L_0897A1F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0897A25C;
      }
      goto L_0897A200;
    }
L_0897A200:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A258;
      }
      goto L_0897A20C;
    }
L_0897A20C:
    ctx.gpr[4] = (0u | 138u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 147u);
      if (branch_taken) {
          goto L_0897A248;
      }
      goto L_0897A218;
    }
L_0897A218:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 158u);
      if (branch_taken) {
          goto L_0897A248;
      }
      goto L_0897A220;
    }
L_0897A220:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 148u);
      if (branch_taken) {
          goto L_0897A248;
      }
      goto L_0897A228;
    }
L_0897A228:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 162u);
      if (branch_taken) {
          goto L_0897A248;
      }
      goto L_0897A230;
    }
L_0897A230:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 163u);
      if (branch_taken) {
          goto L_0897A248;
      }
      goto L_0897A238;
    }
L_0897A238:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 157u);
      if (branch_taken) {
          goto L_0897A248;
      }
      goto L_0897A240;
    }
L_0897A240:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897A250;
      }
      goto L_0897A248;
    }
L_0897A248:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0897A25C;
      }
      goto L_0897A250;
    }
L_0897A250:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897A25C;
      }
      goto L_0897A258;
    }
L_0897A258:
    ctx.gpr[2] = (0u | 1u);
    goto L_0897A25C;
L_0897A25C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A264:
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 3670u);
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (49225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 3670u);
    ctx.fpr[1] = ctx.fpr[12] - ctx.fpr[3];
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (15820u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (15733u << 16u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[6]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] | 49807u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897A2DC;
      }
      goto L_0897A2BC;
    }
L_0897A2BC:
    ctx.gpr[5] = (16585u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 3670u);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_0897A2C8;
L_0897A2C8:
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[4];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[6]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A2C8;
      }
      goto L_0897A2DC;
    }
L_0897A2DC:
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[5]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (16585u << 16u);
      if (branch_taken) {
          goto L_0897A308;
      }
      goto L_0897A2EC;
    }
L_0897A2EC:
    ctx.gpr[5] = (ctx.gpr[5] | 3670u);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_0897A2F4;
L_0897A2F4:
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[4];
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[5]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A2F4;
      }
      goto L_0897A308;
    }
L_0897A308:
    ctx.gpr[5] = (15235u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.set_fpu_condition((ctx.fpr[4] < ctx.fpr[17]));
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    if (ctx.fpu_condition()) {
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]) ^ 0x80000000u);
        goto L_0897A328;
    }
    goto L_0897A328;
L_0897A328:
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[4]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A350;
      }
      goto L_0897A338;
    }
L_0897A338:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (0u | 1u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_0897A3C4;
      }
      goto L_0897A350;
    }
L_0897A350:
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A38C;
      }
      goto L_0897A360;
    }
L_0897A360:
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[3] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
      if (branch_taken) {
          goto L_0897A3B4;
      }
      goto L_0897A374;
    }
L_0897A374:
    ctx.gpr[5] = (16585u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 3670u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[3] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897A3B4;
      }
      goto L_0897A38C;
    }
L_0897A38C:
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[2];
    ctx.gpr[5] = (16585u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 3670u);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[4]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
      if (branch_taken) {
          goto L_0897A3B4;
      }
      goto L_0897A3AC;
    }
L_0897A3AC:
    ctx.fpr[12] = ctx.fpr[3] - ctx.fpr[4];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897A3B4;
L_0897A3B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (0u | 0u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    goto L_0897A3C4;
L_0897A3C4:
    ctx.fpr[2] = ctx.fpr[13] - ctx.fpr[19];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[17]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]) ^ 0x80000000u);
        goto L_0897A3DC;
    }
    goto L_0897A3DC;
L_0897A3DC:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A400;
      }
      goto L_0897A3EC;
    }
L_0897A3EC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
      if (branch_taken) {
          goto L_0897A43C;
      }
      goto L_0897A400;
    }
L_0897A400:
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[19] + ctx.fpr[0];
        goto L_0897A428;
    }
    goto L_0897A410;
L_0897A410:
    ctx.fpr[12] = ctx.fpr[19] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
      if (branch_taken) {
          goto L_0897A438;
      }
      goto L_0897A428;
    }
L_0897A428:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    goto L_0897A438;
L_0897A438:
    ctx.gpr[5] = (0u | 0u);
    goto L_0897A43C;
L_0897A43C:
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[17]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
        goto L_0897A454;
    }
    goto L_0897A454;
L_0897A454:
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A470;
      }
      goto L_0897A464;
    }
L_0897A464:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897A498;
      }
      goto L_0897A470;
    }
L_0897A470:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A48C;
      }
      goto L_0897A480;
    }
L_0897A480:
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[18];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897A494;
      }
      goto L_0897A48C;
    }
L_0897A48C:
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897A494;
L_0897A494:
    ctx.gpr[2] = (0u | 0u);
    goto L_0897A498;
L_0897A498:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A4A0:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[17];
    ctx.gpr[5] = (15733u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] | 49807u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
        goto L_0897A4DC;
    }
    goto L_0897A4DC;
L_0897A4DC:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A508;
      }
      goto L_0897A4EC;
    }
L_0897A4EC:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A514;
      }
      goto L_0897A4FC;
    }
L_0897A4FC:
    ctx.fpr[12] = ctx.fpr[17] - ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897A51C;
      }
      goto L_0897A508;
    }
L_0897A508:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0897A520;
      }
      goto L_0897A514;
    }
L_0897A514:
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897A51C;
L_0897A51C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0897A520;
L_0897A520:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A528:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[13];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897A588u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0897A588u) goto L_0897A588;
    return;
L_0897A588:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_0897A5AC;
      }
      goto L_0897A5A0;
    }
L_0897A5A0:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0897A5AC;
L_0897A5AC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[14];
    ctx.fpr[15] = ctx.fpr[22] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A624:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
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
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
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
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A69C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0897A78C;
      }
      goto L_0897A6D4;
    }
L_0897A6D4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897A78C;
      }
      goto L_0897A6EC;
    }
L_0897A6EC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0897A6F8u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x0897A6F8u) goto L_0897A6F8;
    return;
L_0897A6F8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
        goto L_0897A720;
    }
    goto L_0897A704;
L_0897A704:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(320)));
    ctx.gpr[31] = (0x0897A718u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x0897A718u) goto L_0897A718;
    return;
L_0897A718:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    goto L_0897A720;
L_0897A720:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(322))))));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x0897A768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897A624;
L_0897A768:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x0897A77Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897A624;
L_0897A77C:
    ctx.gpr[31] = (0x0897A784u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 2u, 0x0897C024u>(ctx, &aot_mem) && ctx.pc == 0x0897A784u) goto L_0897A784;
    return;
L_0897A784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A790;
      }
      goto L_0897A78C;
    }
L_0897A78C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_0897A790;
L_0897A790:
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
L_0897A7AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897A7D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24864));
    goto L_08979D00;
L_0897A7D4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A820;
      }
      goto L_0897A7E4;
    }
L_0897A7E4:
    ctx.gpr[18] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26540)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A810;
      }
      goto L_0897A7F4;
    }
L_0897A7F4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-26540), 0u);
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536), 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (2228u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (2227u << 16u);
      if (branch_taken) {
          goto L_0897A830;
      }
      goto L_0897A810;
    }
L_0897A810:
    ctx.gpr[31] = (0x0897A818u);
    // nop
    goto L_0897B148;
L_0897A818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A980;
      }
      goto L_0897A820;
    }
L_0897A820:
    ctx.gpr[31] = (0x0897A828u);
    // nop
    goto L_0897B0DC;
L_0897A828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A980;
      }
      goto L_0897A830;
    }
L_0897A830:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    goto L_0897A838;
L_0897A838:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A8D4;
      }
      goto L_0897A86C;
    }
L_0897A86C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0897A8C0;
      }
      goto L_0897A884;
    }
L_0897A884:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(62)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0897A8C0;
      }
      goto L_0897A890;
    }
L_0897A890:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0897A8C0;
      }
      goto L_0897A89C;
    }
L_0897A89C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0897A8C0;
      }
      goto L_0897A8A8;
    }
L_0897A8A8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0897A8C0;
      }
      goto L_0897A8B4;
    }
L_0897A8B4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(70)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897A8C8;
      }
      goto L_0897A8C0;
    }
L_0897A8C0:
    ctx.gpr[31] = (0x0897A8C8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_0897A9A0;
L_0897A8C8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A86C;
      }
      goto L_0897A8D4;
    }
L_0897A8D4:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[4] << 16u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
      if (branch_taken) {
          goto L_0897A838;
      }
      goto L_0897A8EC;
    }
L_0897A8EC:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A830;
      }
      goto L_0897A904;
    }
L_0897A904:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20980)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A980;
      }
      goto L_0897A918;
    }
L_0897A918:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0897A96C;
      }
      goto L_0897A930;
    }
L_0897A930:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(62)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0897A96C;
      }
      goto L_0897A93C;
    }
L_0897A93C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0897A96C;
      }
      goto L_0897A948;
    }
L_0897A948:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0897A96C;
      }
      goto L_0897A954;
    }
L_0897A954:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0897A96C;
      }
      goto L_0897A960;
    }
L_0897A960:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(70)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897A974;
      }
      goto L_0897A96C;
    }
L_0897A96C:
    ctx.gpr[31] = (0x0897A974u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_0897A9A0;
L_0897A974:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A918;
      }
      goto L_0897A980;
    }
L_0897A980:
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
L_0897A9A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897A9BCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 510u, 0x08A0656Cu>(ctx, &aot_mem) && ctx.pc == 0x0897A9BCu) goto L_0897A9BC;
    return;
L_0897A9BC:
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26540)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AA94;
      }
      goto L_0897A9D0;
    }
L_0897A9D0:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14944));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0897A9ECu);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x0897A9ECu) goto L_0897A9EC;
    return;
L_0897A9EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26540)));
    ctx.gpr[5] = (16585u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] | 3670u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0897AA3C;
      }
      goto L_0897AA24;
    }
L_0897AA24:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897AA24;
      }
      goto L_0897AA38;
    }
L_0897AA38:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0897AA3C;
L_0897AA3C:
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897AA78;
      }
      goto L_0897AA70;
    }
L_0897AA70:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(122), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0897AA80;
      }
      goto L_0897AA78;
    }
L_0897AA78:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(122), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0897AA80;
L_0897AA80:
    ctx.gpr[31] = (0x0897AA88u);
    // nop
    goto L_0897A69C;
L_0897AA88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26540)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-26540), ctx.gpr[4]);
    goto L_0897AA94;
L_0897AA94:
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
L_0897AAAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897AAF8;
      }
      goto L_0897AAD8;
    }
L_0897AAD8:
    ctx.gpr[18] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26540)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0897AB00;
      }
      goto L_0897AAF0;
    }
L_0897AAF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ABD8;
      }
      goto L_0897AAF8;
    }
L_0897AAF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ABD8;
      }
      goto L_0897AB00;
    }
L_0897AB00:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[17] = (2277u << 16u);
    ctx.gpr[4] = (17302u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-14944));
    goto L_0897AB18;
L_0897AB18:
    ctx.gpr[5] = (ctx.gpr[19] << 7u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(122)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897ABB4;
      }
      goto L_0897AB2C;
    }
L_0897AB2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(119)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897ABB4;
      }
      goto L_0897AB38;
    }
L_0897AB38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897ABBC;
      }
      goto L_0897AB5C;
    }
L_0897AB5C:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897ABBC;
      }
      goto L_0897AB78;
    }
L_0897AB78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897ABBC;
      }
      goto L_0897AB98;
    }
L_0897AB98:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897ABBC;
      }
      goto L_0897ABB4;
    }
L_0897ABB4:
    ctx.gpr[31] = (0x0897ABBCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_0897B1C8;
L_0897ABBC:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26540)));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897AB18;
      }
      goto L_0897ABD8;
    }
L_0897ABD8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0897ABF8:
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[4] = (18371u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26540)));
    ctx.gpr[4] = (ctx.gpr[4] | 20467u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14944));
      if (branch_taken) {
          goto L_0897ACAC;
      }
      goto L_0897AC24;
    }
L_0897AC24:
    ctx.gpr[9] = (17096u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    goto L_0897AC30;
L_0897AC30:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = ctx.fpr[12] - ctx.fpr[17];
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = ctx.fpr[13] - ctx.fpr[18];
    ctx.fpr[19] = ctx.fpr[13] - ctx.fpr[19];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[18];
    ctx.fpr[15] = std::sqrt(ctx.fpr[15]);
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897AC9C;
      }
      goto L_0897AC84;
    }
L_0897AC84:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897AC9C;
      }
      goto L_0897AC94;
    }
L_0897AC94:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    goto L_0897AC9C;
L_0897AC9C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0897AC30;
      }
      goto L_0897ACAC;
    }
L_0897ACAC:
    ctx.gpr[4] = (ctx.gpr[8] << 7u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[6]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897ACC4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897ACFC;
      }
      goto L_0897ACD4;
    }
L_0897ACD4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-138));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AD18;
      }
      goto L_0897ACE4;
    }
L_0897ACE4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24744)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897ACFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897ADFC;
      }
      goto L_0897AD04;
    }
L_0897AD04:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897AD20;
      }
      goto L_0897AD18;
    }
L_0897AD18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897ADFC;
      }
      goto L_0897AD20;
    }
L_0897AD20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0897ADFC;
      }
      goto L_0897AD28;
    }
L_0897AD28:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897AD44;
      }
      goto L_0897AD3C;
    }
L_0897AD3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AD18;
      }
      goto L_0897AD44;
    }
L_0897AD44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0897ADFC;
      }
      goto L_0897AD4C;
    }
L_0897AD4C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897AD68;
      }
      goto L_0897AD60;
    }
L_0897AD60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AD18;
      }
      goto L_0897AD68;
    }
L_0897AD68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0897ADFC;
      }
      goto L_0897AD70;
    }
L_0897AD70:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897AD8C;
      }
      goto L_0897AD84;
    }
L_0897AD84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AD18;
      }
      goto L_0897AD8C;
    }
L_0897AD8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0897ADFC;
      }
      goto L_0897AD94;
    }
L_0897AD94:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897ADB0;
      }
      goto L_0897ADA8;
    }
L_0897ADA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AD18;
      }
      goto L_0897ADB0;
    }
L_0897ADB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0897ADFC;
      }
      goto L_0897ADB8;
    }
L_0897ADB8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897ADD4;
      }
      goto L_0897ADCC;
    }
L_0897ADCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AD18;
      }
      goto L_0897ADD4;
    }
L_0897ADD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0897ADFC;
      }
      goto L_0897ADDC;
    }
L_0897ADDC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897ADF8;
      }
      goto L_0897ADF0;
    }
L_0897ADF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AD18;
      }
      goto L_0897ADF8;
    }
L_0897ADF8:
    ctx.gpr[2] = (0u | 1u);
    goto L_0897ADFC;
L_0897ADFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AE04:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897AE3C;
      }
      goto L_0897AE14;
    }
L_0897AE14:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-138));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AECC;
      }
      goto L_0897AE24;
    }
L_0897AE24:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24640)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AE3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897AED0;
      }
      goto L_0897AE44;
    }
L_0897AE44:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897AECC;
      }
      goto L_0897AE58;
    }
L_0897AE58:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536)));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897AECC;
      }
      goto L_0897AE6C;
    }
L_0897AE6C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897AECC;
      }
      goto L_0897AE80;
    }
L_0897AE80:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897AECC;
      }
      goto L_0897AE94;
    }
L_0897AE94:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536)));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897AECC;
      }
      goto L_0897AEA8;
    }
L_0897AEA8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536)));
    ctx.gpr[5] = (ctx.gpr[5] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897AECC;
      }
      goto L_0897AEBC;
    }
L_0897AEBC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536)));
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26536), ctx.gpr[5]);
    goto L_0897AECC;
L_0897AECC:
    ctx.gpr[2] = (0u | 0u);
    goto L_0897AED0;
L_0897AED0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AED8:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26536)));
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897AEF8;
      }
      goto L_0897AEF0;
    }
L_0897AEF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0897AEFC;
      }
      goto L_0897AEF8;
    }
L_0897AEF8:
    ctx.gpr[2] = (0u | 0u);
    goto L_0897AEFC;
L_0897AEFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AF04:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897AF34;
      }
      goto L_0897AF14;
    }
L_0897AF14:
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-26540)));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897AF3C;
      }
      goto L_0897AF2C;
    }
L_0897AF2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AFEC;
      }
      goto L_0897AF34;
    }
L_0897AF34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897AFEC;
      }
      goto L_0897AF3C;
    }
L_0897AF3C:
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[7] = (17096u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-14944));
    ctx.gpr[7] = (ctx.gpr[10] << 7u);
    goto L_0897AF58;
L_0897AF58:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[11] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[11] + static_cast<std::uint32_t>(48));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[3] = (ctx.gpr[11] + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[16];
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(48));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[17];
    ctx.fpr[18] = ctx.fpr[13] - ctx.fpr[18];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.fpr[15] = std::sqrt(ctx.fpr[15]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897AFD4;
      }
      goto L_0897AFB0;
    }
L_0897AFB0:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0897AFD4;
      }
      goto L_0897AFBC;
    }
L_0897AFBC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0897AFD0;
      }
      goto L_0897AFC8;
    }
L_0897AFC8:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897AFD4;
      }
      goto L_0897AFD0;
    }
L_0897AFD0:
    ctx.gpr[2] = (0u | 1u);
    goto L_0897AFD4;
L_0897AFD4:
    ctx.gpr[7] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[7] << 16u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[10] << 7u);
      if (branch_taken) {
          goto L_0897AF58;
      }
      goto L_0897AFEC;
    }
L_0897AFEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AFF4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B024;
      }
      goto L_0897B004;
    }
L_0897B004:
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26540)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (2277u << 16u);
      if (branch_taken) {
          goto L_0897B060;
      }
      goto L_0897B01C;
    }
L_0897B01C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14944));
      if (branch_taken) {
          goto L_0897B02C;
      }
      goto L_0897B024;
    }
L_0897B024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897B06C;
      }
      goto L_0897B02C;
    }
L_0897B02C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897B050;
      }
      goto L_0897B038;
    }
L_0897B038:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(117)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0897B050;
      }
      goto L_0897B048;
    }
L_0897B048:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B068;
      }
      goto L_0897B050;
    }
L_0897B050:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0897B02C;
      }
      goto L_0897B060;
    }
L_0897B060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897B06C;
      }
      goto L_0897B068;
    }
L_0897B068:
    ctx.gpr[2] = (0u | 1u);
    goto L_0897B06C;
L_0897B06C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B074:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B0A4;
      }
      goto L_0897B084;
    }
L_0897B084:
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26540)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2277u << 16u);
      if (branch_taken) {
          goto L_0897B0C8;
      }
      goto L_0897B09C;
    }
L_0897B09C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14944));
      if (branch_taken) {
          goto L_0897B0AC;
      }
      goto L_0897B0A4;
    }
L_0897B0A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897B0D4;
      }
      goto L_0897B0AC;
    }
L_0897B0AC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897B0D0;
      }
      goto L_0897B0B8;
    }
L_0897B0B8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0897B0AC;
      }
      goto L_0897B0C8;
    }
L_0897B0C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897B0D4;
      }
      goto L_0897B0D0;
    }
L_0897B0D0:
    ctx.gpr[2] = (0u | 1u);
    goto L_0897B0D4;
L_0897B0D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B0DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0897B0F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24848));
    goto L_08979D00;
L_0897B0F0:
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26540)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2277u << 16u);
      if (branch_taken) {
          goto L_0897B13C;
      }
      goto L_0897B108;
    }
L_0897B108:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14944));
    goto L_0897B110;
L_0897B110:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(117)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0897B110;
      }
      goto L_0897B13C;
    }
L_0897B13C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B148:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0897B16Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24808));
    goto L_08979D00;
L_0897B16C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26540)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2277u << 16u);
      if (branch_taken) {
          goto L_0897B1B0;
      }
      goto L_0897B180;
    }
L_0897B180:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-14944));
    goto L_0897B184;
L_0897B184:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(123)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0897B19Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897A69C;
L_0897B19C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26540)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0897B184;
      }
      goto L_0897B1B0;
    }
L_0897B1B0:
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
L_0897B1C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897B218;
      }
      goto L_0897B208;
    }
L_0897B208:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(117)));
        goto L_0897B2A8;
    }
    goto L_0897B218;
L_0897B218:
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x0897B228u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 555u, 0x088EF598u>(ctx, &aot_mem) && ctx.pc == 0x0897B228u) goto L_0897B228;
    return;
L_0897B228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0897B258;
    }
    goto L_0897B258;
L_0897B258:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(117)));
        goto L_0897B2A8;
    }
    goto L_0897B268;
L_0897B268:
    ctx.gpr[31] = (0x0897B270u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 555u, 0x088EF598u>(ctx, &aot_mem) && ctx.pc == 0x0897B270u) goto L_0897B270;
    return;
L_0897B270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0897B294;
    }
    goto L_0897B294;
L_0897B294:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897B2B0;
      }
      goto L_0897B2A4;
    }
L_0897B2A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(117)));
    goto L_0897B2A8;
L_0897B2A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BDEC;
      }
      goto L_0897B2B0;
    }
L_0897B2B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(117)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BB80;
      }
      goto L_0897B2C0;
    }
L_0897B2C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0897B678;
      }
      goto L_0897B2C8;
    }
L_0897B2C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0897B88C;
      }
      goto L_0897B2D0;
    }
L_0897B2D0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0897B800;
      }
      goto L_0897B2D8;
    }
L_0897B2D8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0897B928;
      }
      goto L_0897B2E0;
    }
L_0897B2E0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0897BB04;
      }
      goto L_0897B2E8;
    }
L_0897B2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B2FC;
      }
      goto L_0897B2F4;
    }
L_0897B2F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0897B670;
      }
      goto L_0897B2FC;
    }
L_0897B2FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897B468;
      }
      goto L_0897B31C;
    }
L_0897B31C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897B468;
      }
      goto L_0897B33C;
    }
L_0897B33C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897B468;
      }
      goto L_0897B35C;
    }
L_0897B35C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897B468;
      }
      goto L_0897B37C;
    }
L_0897B37C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B468;
      }
      goto L_0897B38C;
    }
L_0897B38C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (15395u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897B3BC;
      }
      goto L_0897B3B0;
    }
L_0897B3B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_0897B3C0;
      }
      goto L_0897B3BC;
    }
L_0897B3BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    goto L_0897B3C0;
L_0897B3C0:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897B468;
      }
      goto L_0897B3D0;
    }
L_0897B3D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
        goto L_0897B3F4;
    }
    goto L_0897B3E8;
L_0897B3E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_0897B3F4;
      }
      goto L_0897B3F4;
    }
L_0897B3F4:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897B468;
      }
      goto L_0897B404;
    }
L_0897B404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
        goto L_0897B428;
    }
    goto L_0897B41C;
L_0897B41C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_0897B428;
      }
      goto L_0897B428;
    }
L_0897B428:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897B468;
      }
      goto L_0897B438;
    }
L_0897B438:
    ctx.gpr[31] = (0x0897B440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0897B440u) goto L_0897B440;
    return;
L_0897B440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
        goto L_0897B474;
    }
    goto L_0897B450;
L_0897B450:
    ctx.gpr[31] = (0x0897B458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0897B458u) goto L_0897B458;
    return;
L_0897B458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
        goto L_0897B474;
    }
    goto L_0897B468;
L_0897B468:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0897B670;
      }
      goto L_0897B474;
    }
L_0897B474:
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x0897B4C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897A528;
L_0897B4C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0897B4E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897A264;
L_0897B4E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B670;
      }
      goto L_0897B4EC;
    }
L_0897B4EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[17];
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_0897B670;
      }
      goto L_0897B570;
    }
L_0897B570:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 3u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(119)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_0897B5E4;
      }
      goto L_0897B5D0;
    }
L_0897B5D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_0897B5E4;
L_0897B5E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897B5F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 304u, 0x08A6D4E8u>(ctx, &aot_mem) && ctx.pc == 0x0897B5F4u) goto L_0897B5F4;
    return;
L_0897B5F4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B670;
      }
      goto L_0897B608;
    }
L_0897B608:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (17948u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897B62Cu);
    ctx.gpr[5] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x0897B62Cu) goto L_0897B62C;
    return;
L_0897B62C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0897B670;
      }
      goto L_0897B638;
    }
L_0897B638:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 107u);
    ctx.gpr[31] = (0x0897B648u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x0897B648u) goto L_0897B648;
    return;
L_0897B648:
    ctx.gpr[10] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 107u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    ctx.gpr[11] = (0u | 35u);
    ctx.gpr[31] = (0x0897B670u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 936u, 0x08A9B7A8u>(ctx, &aot_mem) && ctx.pc == 0x0897B670u) goto L_0897B670;
    return;
L_0897B670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BB80;
      }
      goto L_0897B678;
    }
L_0897B678:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(119)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
      if (branch_taken) {
          goto L_0897B6A4;
      }
      goto L_0897B698;
    }
L_0897B698:
    ctx.gpr[4] = (16528u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897B6A8;
      }
      goto L_0897B6A4;
    }
L_0897B6A4:
    ctx.fpr[15] = std::bit_cast<float>(0u);
    goto L_0897B6A8;
L_0897B6A8:
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897B6BCu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_0897A264;
L_0897B6BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B7F8;
      }
      goto L_0897B6C4;
    }
L_0897B6C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B7F8;
      }
      goto L_0897B6DC;
    }
L_0897B6DC:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B704;
      }
      goto L_0897B6F4;
    }
L_0897B6F4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897B714;
      }
      goto L_0897B704;
    }
L_0897B704:
    ctx.gpr[31] = (0x0897B70Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 155u, 0x088C4C18u>(ctx, &aot_mem) && ctx.pc == 0x0897B70Cu) goto L_0897B70C;
    return;
L_0897B70C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0897B714;
L_0897B714:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[16] / ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[17];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0897B7F8;
      }
      goto L_0897B77C;
    }
L_0897B77C:
    ctx.gpr[22] = (2227u << 16u);
    goto L_0897B780;
L_0897B780:
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
      if (branch_taken) {
          goto L_0897B7E8;
      }
      goto L_0897B790;
    }
L_0897B790:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[23] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[23] = (ctx.gpr[4] - ctx.gpr[23]);
    goto L_0897B7B0;
L_0897B7B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[31] = (0x0897B7C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    goto L_08979EC0;
L_0897B7C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[31] = (0x0897B7D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    goto L_08979EC0;
L_0897B7D8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4400));
      if (branch_taken) {
          goto L_0897B7B0;
      }
      goto L_0897B7E8;
    }
L_0897B7E8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B780;
      }
      goto L_0897B7F8;
    }
L_0897B7F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BB80;
      }
      goto L_0897B800;
    }
L_0897B800:
    ctx.gpr[31] = (0x0897B808u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08979D2C;
L_0897B808:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(119)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_0897B820;
      }
      goto L_0897B814;
    }
L_0897B814:
    ctx.gpr[4] = (16608u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897B828;
      }
      goto L_0897B820;
    }
L_0897B820:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0897B828;
L_0897B828:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0897B840u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897A4A0;
L_0897B840:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B850;
      }
      goto L_0897B848;
    }
L_0897B848:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0897B850;
L_0897B850:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(31976), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B87C;
      }
      goto L_0897B86C;
    }
L_0897B86C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B884;
      }
      goto L_0897B87C;
    }
L_0897B87C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    goto L_0897B884;
L_0897B884:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BB80;
      }
      goto L_0897B88C;
    }
L_0897B88C:
    ctx.gpr[31] = (0x0897B894u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08979D2C;
L_0897B894:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(119)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897B8C4;
      }
      goto L_0897B8AC;
    }
L_0897B8AC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
      if (branch_taken) {
          goto L_0897B8CC;
      }
      goto L_0897B8C4;
    }
L_0897B8C4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    goto L_0897B8CC;
L_0897B8CC:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897B8ECu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_0897A264;
L_0897B8EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B8FC;
      }
      goto L_0897B8F4;
    }
L_0897B8F4:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0897B8FC;
L_0897B8FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B918;
      }
      goto L_0897B908;
    }
L_0897B908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B920;
      }
      goto L_0897B918;
    }
L_0897B918:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    goto L_0897B920;
L_0897B920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BB80;
      }
      goto L_0897B928;
    }
L_0897B928:
    ctx.gpr[31] = (0x0897B930u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08979D2C;
L_0897B930:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (16025u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x0897B954u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897A264;
L_0897B954:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BAFC;
      }
      goto L_0897B95C;
    }
L_0897B95C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BAFC;
      }
      goto L_0897B964;
    }
L_0897B964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B9F8;
      }
      goto L_0897B970;
    }
L_0897B970:
    ctx.gpr[31] = (0x0897B978u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0897B978u) goto L_0897B978;
    return;
L_0897B978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x0897B994u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0897B994u) goto L_0897B994;
    return;
L_0897B994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[31] = (0x0897B9B4u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0897B9B4u) goto L_0897B9B4;
    return;
L_0897B9B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x0897B9D0u);
    ctx.fpr[22] = ctx.fpr[13] - ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0897B9D0u) goto L_0897B9D0;
    return;
L_0897B9D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B9FC;
      }
      goto L_0897B9F8;
    }
L_0897B9F8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_0897B9FC;
L_0897B9FC:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897BA20;
      }
      goto L_0897BA14;
    }
L_0897BA14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(121)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BAFC;
      }
      goto L_0897BA20;
    }
L_0897BA20:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BAF8;
      }
      goto L_0897BA34;
    }
L_0897BA34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] | 512u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(118)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(118), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897BAF8;
      }
      goto L_0897BA60;
    }
L_0897BA60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x0897BA6Cu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    goto L_0897AE04;
L_0897BA6C:
    ctx.gpr[31] = (0x0897BA74u);
    // nop
    goto L_0897AED8;
L_0897BA74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0897BAC4;
      }
      goto L_0897BA7C;
    }
L_0897BA7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1500));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-24756));
    ctx.gpr[5] = (0u | 1500u);
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[31] = (0x0897BAC4u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x0897BAC4u) goto L_0897BAC4;
    return;
L_0897BAC4:
    ctx.gpr[31] = (0x0897BACCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x0897BACCu) goto L_0897BACC;
    return;
L_0897BACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BAF8;
      }
      goto L_0897BAD8;
    }
L_0897BAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0897BAF8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897BAF8u) goto L_0897BAF8;
    return;
L_0897BAF8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    goto L_0897BAFC;
L_0897BAFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BB80;
      }
      goto L_0897BB04;
    }
L_0897BB04:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(119)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BB28;
      }
      goto L_0897BB1C;
    }
L_0897BB1C:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0897BB28;
L_0897BB28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(119)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_0897BB48;
      }
      goto L_0897BB3C;
    }
L_0897BB3C:
    ctx.gpr[4] = (16608u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897BB50;
      }
      goto L_0897BB48;
    }
L_0897BB48:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0897BB50;
L_0897BB50:
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    ctx.gpr[31] = (0x0897BB5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897A264;
L_0897BB5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BB78;
      }
      goto L_0897BB64;
    }
L_0897BB64:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    goto L_0897BB78;
L_0897BB78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BB80;
      }
      goto L_0897BB80;
    }
L_0897BB80:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x0897BB94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897A624;
L_0897BB94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (14979u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[15];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[17] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (16250u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 57672u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(117)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0897BED8;
      }
      goto L_0897BC68;
    }
L_0897BC68:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BED8;
      }
      goto L_0897BC70;
    }
L_0897BC70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BDE4;
      }
      goto L_0897BC7C;
    }
L_0897BC7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897BDE4;
L_0897BDE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BED8;
      }
      goto L_0897BDEC;
    }
L_0897BDEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (ctx.gpr[5] >> 11u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0897BE60;
      }
      goto L_0897BE14;
    }
L_0897BE14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15107u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897BEBC;
      }
      goto L_0897BE44;
    }
L_0897BE44:
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] | 3670u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897BEBC;
      }
      goto L_0897BE60;
    }
L_0897BE60:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_0897BEBC;
      }
      goto L_0897BE6C;
    }
L_0897BE6C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BEBC;
      }
      goto L_0897BE74;
    }
L_0897BE74:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15107u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 3670u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0897BEBC;
      }
      goto L_0897BEB0;
    }
L_0897BEB0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897BEBC;
L_0897BEBC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x0897BED0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897A624;
L_0897BED0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0897BED8;
L_0897BED8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0897BF40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0897BF40u) goto L_0897BF40;
    return;
L_0897BF40:
    ctx.gpr[31] = (0x0897BF48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x0897BF48u) goto L_0897BF48;
    return;
L_0897BF48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(119)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BFE8;
      }
      goto L_0897BF54;
    }
L_0897BF54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897BFE8;
      }
      goto L_0897BF74;
    }
L_0897BF74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_0897BFE8;
      }
      goto L_0897BF90;
    }
L_0897BF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20156)));
        goto L_0897BFA8;
    }
    goto L_0897BF9C;
L_0897BF9C:
    ctx.gpr[31] = (0x0897BFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x0897BFA4u) goto L_0897BFA4;
    return;
L_0897BFA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20156)));
    goto L_0897BFA8;
L_0897BFA8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BFE8;
      }
      goto L_0897BFB8;
    }
L_0897BFB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0897BFD0;
    }
    goto L_0897BFC4;
L_0897BFC4:
    ctx.gpr[31] = (0x0897BFCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x0897BFCCu) goto L_0897BFCC;
    return;
L_0897BFCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0897BFD0;
L_0897BFD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2273), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[31] = (0x0897BFE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2192));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x0897BFE8u) goto L_0897BFE8;
    return;
L_0897BFE8:
    ctx.gpr[31] = (0x0897BFF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 2u, 0x0897C024u>(ctx, &aot_mem) && ctx.pc == 0x0897BFF0u) goto L_0897BFF0;
    return;
L_0897BFF0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.pc = 0x0897C000u; return;
}

void recomp_unit_0093(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0093_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_93(Runtime &runtime) {
    runtime.register_generated_unit(93u, 0x08978000u, 16384u, &recomp_unit_0093, &recomp_unit_0093_entry);
    runtime.register_function(0x08978000u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978008u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978010u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897801Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897803Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978058u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978060u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978074u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897807Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978094u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089780F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978104u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978114u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978128u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978140u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978154u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978174u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978180u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897818Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978194u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089781FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897821Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978238u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978258u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978268u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897827Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978294u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089782ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978340u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978360u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978368u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978378u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978390u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089783C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978458u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978478u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089784F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978514u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978520u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978534u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978550u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978568u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978570u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978588u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897858Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089785A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089785E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089785ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978600u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978610u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978614u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978628u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897863Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978644u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978654u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978674u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089786A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089786C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089786D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089786F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978708u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978784u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978790u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089787B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089787C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089787E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978808u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897881Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089788E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089788F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978900u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978908u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897890Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978928u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978940u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978980u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089789E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089789ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A48u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A4Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978A98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978AA8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978AE4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B0Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B68u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978B94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978BA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978BECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978C98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D48u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978D9Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978DB0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978DC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978DCCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978DE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978DE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978DFCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E14u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E40u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E54u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978E94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978EA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978EB0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978EB4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978ED4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978EE4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978EF0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F64u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978F98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FA0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08978FF4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979000u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979008u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979048u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979068u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979078u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979084u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089790FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979104u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897919Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089791C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979208u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897922Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979234u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089792E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089792F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979300u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979318u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979344u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897935Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979364u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897937Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979394u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089793ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089794B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089794C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089794C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089794D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089794F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979520u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979530u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979534u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979544u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089795C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089795D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089795E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089795E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979630u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979650u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979660u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979670u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089796A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089796ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089796B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089796C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089796E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089796ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x089797DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897981Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979864u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979888u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979924u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979934u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979944u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979954u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979964u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897996Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979A9Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979AA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979AECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979AF4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979AFCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B00u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B08u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B1Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B44u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B58u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979B98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979BA8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979BC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979BDCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979BE4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979BF0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979C00u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979C10u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979C20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979C24u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979C6Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D00u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D4Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D58u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979D94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979DB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979DBCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979DE4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E00u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E58u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E68u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979E9Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979EA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979EACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979EB0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979EC0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F40u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F58u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979F8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979FA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979FB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979FC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979FD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979FE0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x08979FF0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A004u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A00Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A01Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A030u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A038u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A048u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A054u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A05Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A06Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A080u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A08Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A094u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A0F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A100u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A114u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A11Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A130u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A138u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A14Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A154u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A190u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A19Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A1F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A200u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A20Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A218u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A220u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A228u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A230u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A238u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A240u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A248u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A250u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A258u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A25Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A264u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A2BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A2C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A2DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A2ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A2F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A308u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A328u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A338u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A350u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A360u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A374u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A38Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A3ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A3B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A3C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A3DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A3ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A400u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A410u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A428u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A438u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A43Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A454u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A464u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A470u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A480u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A48Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A494u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A498u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A4A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A4DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A4ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A4FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A508u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A514u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A51Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A520u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A528u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A588u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A5A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A5ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A624u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A69Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A6D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A6ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A6F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A704u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A718u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A720u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A768u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A77Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A784u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A78Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A790u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A7ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A7D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A7E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A7F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A810u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A818u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A820u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A828u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A830u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A838u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A86Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A884u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A890u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A89Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A8A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A8B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A8C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A8C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A8D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A8ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A904u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A918u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A930u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A93Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A948u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A954u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A960u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A96Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A974u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A980u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A9A0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A9BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A9D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897A9ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA24u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA80u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA88u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AA94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AAACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AAD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AAF0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AAF8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB00u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB38u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AB98u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ABB4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ABBCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ABD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ABF8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC24u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC30u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC84u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AC9Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ACACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ACC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ACD4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ACE4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ACFCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD18u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD44u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD4Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD60u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD68u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD84u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD8Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AD94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADA8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADB0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADCCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADD4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADDCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADF0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADF8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897ADFCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE14u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE24u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE44u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE58u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE6Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE80u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AE94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AEA8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AEBCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AECCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AED0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AED8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AEF0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AEF8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AEFCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF14u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF2Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AF58u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AFB0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AFBCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AFC8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AFD0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AFD4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AFECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897AFF4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B004u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B01Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B024u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B02Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B038u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B048u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B050u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B060u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B068u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B06Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B074u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B084u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B09Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B0A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B0ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B0B8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B0C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B0D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B0D4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B0DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B0F0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B108u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B110u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B13Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B148u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B16Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B180u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B184u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B19Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B1B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B1C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B208u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B218u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B228u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B258u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B268u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B270u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B294u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2E0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B2FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B31Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B33Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B35Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B37Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B38Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B3B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B3BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B3C0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B3D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B3E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B3F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B404u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B41Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B428u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B438u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B440u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B450u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B458u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B468u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B474u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4C8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B4ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B570u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B5D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B5E4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B5F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B608u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B62Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B638u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B648u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B670u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B678u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B698u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B6A4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B6A8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B6BCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B6C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B6DCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B6F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B704u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B70Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B714u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B77Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B780u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B790u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7B0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7D8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7E8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B7F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B800u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B808u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B814u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B820u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B828u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B840u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B848u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B850u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B86Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B87Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B884u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B88Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B894u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B8ACu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B8C4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B8CCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B8ECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B8F4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B8FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B908u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B918u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B920u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B928u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B930u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B954u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B95Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B964u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B970u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B978u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B994u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B9B4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B9D0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B9F8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897B9FCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA14u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA20u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA34u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA60u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA6Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA74u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BA7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BACCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAD8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAF8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BAFCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB04u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB1Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB28u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB3Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB48u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB50u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB5Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB64u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB78u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB80u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BB94u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC68u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC70u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BC7Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BDE4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BDECu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE14u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE44u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE60u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE6Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BE74u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BEB0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BEBCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BED0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BED8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF40u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF48u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF54u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF74u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF90u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BF9Cu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFA4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFA8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFB8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFC4u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFCCu, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFD0u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFE8u, &recomp_unit_0093, "recomp_unit_0093");
    runtime.register_function(0x0897BFF0u, &recomp_unit_0093, "recomp_unit_0093");
}
} // namespace psprecomp
