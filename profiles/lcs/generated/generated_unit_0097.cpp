#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0097[4071] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0,
    0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0,
    0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 63, 64,
    0, 0, 0, 65, 0, 0, 0, 0, 66, 67, 0, 0, 0, 68, 0, 0, 0, 0, 69, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 73, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 96,
    0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0,
    0, 153, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0,
    0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 206, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 210, 0, 211, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 217, 0, 0, 0, 0, 0, 0, 0, 218,
    0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 224,
    0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0,
    231, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238,
    0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251,
    0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 0, 255, 0, 256, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259,
    0, 0, 260, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 272, 0, 273, 0, 0,
    274, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 282, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 287, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0,
    295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 305, 0, 306, 0, 0,
    0, 0, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0,
    0, 0, 0, 318, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322,
    323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330,
    0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 338, 0, 0, 339, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0,
    347, 0, 0, 348, 0, 0, 0, 349, 0, 0, 350, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354,
    0, 0, 355, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 360, 0, 361, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 369, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0,
    0, 374, 0, 0, 375, 0, 376, 377, 0, 378, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 386, 387, 0, 388, 0, 0, 0, 0, 389, 0,
    390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 394, 0,
    395, 0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405,
    0, 406, 0, 407, 0, 0, 0, 0, 0, 408, 0, 409, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 415, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 418, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0,
    0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 431, 0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    434, 0, 0, 0, 435, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0,
    0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 445, 0, 446, 0, 447, 448, 0, 449, 0, 450, 0, 451,
    452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 469,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0,
    0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479,
    0, 0, 0, 480, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 489, 0, 490, 0, 491, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0,
    0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 502, 0, 503, 0,
    504, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 508, 0, 509, 0, 0, 0, 0,
    510, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 514, 0, 515, 0, 516, 517, 0, 518, 0, 519, 0, 520, 521, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 547,
    0, 548, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 554, 0, 555, 0, 556,
    0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 0, 0, 563, 0, 564, 0, 0,
    0, 0, 565, 0, 0, 566, 0, 567, 0, 568, 0, 0, 0, 0, 569, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0,
    0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0,
    0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 583, 584, 0, 0,
    585, 0, 0, 586, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 598, 0, 0, 0, 599, 600,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 605, 0,
    0, 606, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 610, 0, 0, 0, 611, 0, 612, 0, 613, 0, 0, 0, 0,
    0, 0, 614, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 618, 0, 0, 619, 0, 0, 620,
    0, 621, 622, 0, 0, 623, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 633, 0, 634, 0, 0, 0, 635,
    636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0, 0, 641, 0, 0,
    0, 642, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 648, 0, 649, 0, 650,
};
void recomp_unit_0097_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08988000u;
        entry_id = (entry_delta < 16284u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0097[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08988000;
    case 2u: goto L_08988020;
    case 3u: goto L_08988040;
    case 4u: goto L_0898804C;
    case 5u: goto L_08988078;
    case 6u: goto L_089880C0;
    case 7u: goto L_089880D4;
    case 8u: goto L_089880E0;
    case 9u: goto L_089880F8;
    case 10u: goto L_08988104;
    case 11u: goto L_08988118;
    case 12u: goto L_08988130;
    case 13u: goto L_08988138;
    case 14u: goto L_08988140;
    case 15u: goto L_08988160;
    case 16u: goto L_08988168;
    case 17u: goto L_089881CC;
    case 18u: goto L_089881D4;
    case 19u: goto L_089881E0;
    case 20u: goto L_089881E8;
    case 21u: goto L_08988224;
    case 22u: goto L_08988250;
    case 23u: goto L_08988258;
    case 24u: goto L_089882C0;
    case 25u: goto L_089882C8;
    case 26u: goto L_089882D8;
    case 27u: goto L_08988308;
    case 28u: goto L_08988314;
    case 29u: goto L_08988320;
    case 30u: goto L_08988330;
    case 31u: goto L_0898833C;
    case 32u: goto L_08988344;
    case 33u: goto L_0898834C;
    case 34u: goto L_08988384;
    case 35u: goto L_0898839C;
    case 36u: goto L_089883AC;
    case 37u: goto L_089883CC;
    case 38u: goto L_089883DC;
    case 39u: goto L_089883EC;
    case 40u: goto L_089883F4;
    case 41u: goto L_08988404;
    case 42u: goto L_08988414;
    case 43u: goto L_0898846C;
    case 44u: goto L_0898847C;
    case 45u: goto L_089884A0;
    case 46u: goto L_089884CC;
    case 47u: goto L_089884D8;
    case 48u: goto L_08988514;
    case 49u: goto L_0898851C;
    case 50u: goto L_08988524;
    case 51u: goto L_089885A4;
    case 52u: goto L_089885B4;
    case 53u: goto L_089885C8;
    case 54u: goto L_089885F0;
    case 55u: goto L_08988614;
    case 56u: goto L_08988680;
    case 57u: goto L_08988694;
    case 58u: goto L_089886AC;
    case 59u: goto L_089886B8;
    case 60u: goto L_089886CC;
    case 61u: goto L_089886E0;
    case 62u: goto L_089886E8;
    case 63u: goto L_089886F8;
    case 64u: goto L_089886FC;
    case 65u: goto L_0898870C;
    case 66u: goto L_08988720;
    case 67u: goto L_08988724;
    case 68u: goto L_08988734;
    case 69u: goto L_08988748;
    case 70u: goto L_0898874C;
    case 71u: goto L_0898875C;
    case 72u: goto L_08988774;
    case 73u: goto L_08988778;
    case 74u: goto L_08988788;
    case 75u: goto L_089887A0;
    case 76u: goto L_089887A8;
    case 77u: goto L_089887E0;
    case 78u: goto L_089887FC;
    case 79u: goto L_0898890C;
    case 80u: goto L_08988940;
    case 81u: goto L_08988994;
    case 82u: goto L_089889B4;
    case 83u: goto L_089889C0;
    case 84u: goto L_089889CC;
    case 85u: goto L_089889D8;
    case 86u: goto L_089889F0;
    case 87u: goto L_08988A04;
    case 88u: goto L_08988A14;
    case 89u: goto L_08988A7C;
    case 90u: goto L_08988AB4;
    case 91u: goto L_08988AE8;
    case 92u: goto L_08988B1C;
    case 93u: goto L_08988B50;
    case 94u: goto L_08988B58;
    case 95u: goto L_08988B74;
    case 96u: goto L_08988B7C;
    case 97u: goto L_08988B84;
    case 98u: goto L_08988BB0;
    case 99u: goto L_08988BB8;
    case 100u: goto L_08988BC0;
    case 101u: goto L_08988BC8;
    case 102u: goto L_08988BD4;
    case 103u: goto L_08988BE0;
    case 104u: goto L_08988BEC;
    case 105u: goto L_08988C08;
    case 106u: goto L_08988C28;
    case 107u: goto L_08988C34;
    case 108u: goto L_08988CA0;
    case 109u: goto L_08988CD0;
    case 110u: goto L_08988CD8;
    case 111u: goto L_08988D14;
    case 112u: goto L_08988D38;
    case 113u: goto L_08988D6C;
    case 114u: goto L_08988D88;
    case 115u: goto L_08988DBC;
    case 116u: goto L_08988DC4;
    case 117u: goto L_08988DC8;
    case 118u: goto L_08988DF8;
    case 119u: goto L_08988E14;
    case 120u: goto L_08988E48;
    case 121u: goto L_08988E50;
    case 122u: goto L_08988E84;
    case 123u: goto L_08988EBC;
    case 124u: goto L_08988EC0;
    case 125u: goto L_08988EF0;
    case 126u: goto L_08988F0C;
    case 127u: goto L_08988F40;
    case 128u: goto L_08988F48;
    case 129u: goto L_08988F7C;
    case 130u: goto L_08988FA4;
    case 131u: goto L_08988FD4;
    case 132u: goto L_08988FF0;
    case 133u: goto L_08989024;
    case 134u: goto L_0898902C;
    case 135u: goto L_08989038;
    case 136u: goto L_08989044;
    case 137u: goto L_08989050;
    case 138u: goto L_0898905C;
    case 139u: goto L_08989070;
    case 140u: goto L_08989108;
    case 141u: goto L_08989114;
    case 142u: goto L_08989120;
    case 143u: goto L_08989128;
    case 144u: goto L_0898915C;
    case 145u: goto L_089891A0;
    case 146u: goto L_089891BC;
    case 147u: goto L_089891F0;
    case 148u: goto L_089891F8;
    case 149u: goto L_0898922C;
    case 150u: goto L_08989260;
    case 151u: goto L_0898926C;
    case 152u: goto L_08989278;
    case 153u: goto L_08989284;
    case 154u: goto L_08989290;
    case 155u: goto L_089892A4;
    case 156u: goto L_0898933C;
    case 157u: goto L_08989348;
    case 158u: goto L_08989354;
    case 159u: goto L_0898935C;
    case 160u: goto L_08989380;
    case 161u: goto L_089893A8;
    case 162u: goto L_089893AC;
    case 163u: goto L_089893B4;
    case 164u: goto L_089893DC;
    case 165u: goto L_08989408;
    case 166u: goto L_08989440;
    case 167u: goto L_08989460;
    case 168u: goto L_089894A4;
    case 169u: goto L_089894C0;
    case 170u: goto L_089894DC;
    case 171u: goto L_08989518;
    case 172u: goto L_08989538;
    case 173u: goto L_08989554;
    case 174u: goto L_08989584;
    case 175u: goto L_0898959C;
    case 176u: goto L_089895B8;
    case 177u: goto L_089895E8;
    case 178u: goto L_089895F0;
    case 179u: goto L_08989618;
    case 180u: goto L_08989648;
    case 181u: goto L_0898966C;
    case 182u: goto L_08989678;
    case 183u: goto L_08989684;
    case 184u: goto L_08989690;
    case 185u: goto L_0898969C;
    case 186u: goto L_089896A8;
    case 187u: goto L_089896BC;
    case 188u: goto L_0898971C;
    case 189u: goto L_08989730;
    case 190u: goto L_08989774;
    case 191u: goto L_08989790;
    case 192u: goto L_089897D0;
    case 193u: goto L_0898980C;
    case 194u: goto L_08989818;
    case 195u: goto L_08989824;
    case 196u: goto L_08989830;
    case 197u: goto L_0898983C;
    case 198u: goto L_08989844;
    case 199u: goto L_0898984C;
    case 200u: goto L_08989854;
    case 201u: goto L_08989860;
    case 202u: goto L_08989898;
    case 203u: goto L_089898A4;
    case 204u: goto L_089898E0;
    case 205u: goto L_089898EC;
    case 206u: goto L_089898F0;
    case 207u: goto L_08989910;
    case 208u: goto L_08989920;
    case 209u: goto L_0898992C;
    case 210u: goto L_08989934;
    case 211u: goto L_0898993C;
    case 212u: goto L_08989940;
    case 213u: goto L_08989998;
    case 214u: goto L_089899A4;
    case 215u: goto L_089899CC;
    case 216u: goto L_089899D8;
    case 217u: goto L_089899DC;
    case 218u: goto L_089899FC;
    case 219u: goto L_08989A0C;
    case 220u: goto L_08989A1C;
    case 221u: goto L_08989A3C;
    case 222u: goto L_08989A64;
    case 223u: goto L_08989A74;
    case 224u: goto L_08989A7C;
    case 225u: goto L_08989A88;
    case 226u: goto L_08989A90;
    case 227u: goto L_08989AA8;
    case 228u: goto L_08989ABC;
    case 229u: goto L_08989AE0;
    case 230u: goto L_08989AE8;
    case 231u: goto L_08989B00;
    case 232u: goto L_08989B0C;
    case 233u: goto L_08989B24;
    case 234u: goto L_08989B38;
    case 235u: goto L_08989B44;
    case 236u: goto L_08989B50;
    case 237u: goto L_08989B68;
    case 238u: goto L_08989B7C;
    case 239u: goto L_08989B84;
    case 240u: goto L_08989BD0;
    case 241u: goto L_08989BDC;
    case 242u: goto L_08989C38;
    case 243u: goto L_08989C44;
    case 244u: goto L_08989C4C;
    case 245u: goto L_08989C58;
    case 246u: goto L_08989C60;
    case 247u: goto L_08989C84;
    case 248u: goto L_08989C90;
    case 249u: goto L_08989CC0;
    case 250u: goto L_08989CF4;
    case 251u: goto L_08989CFC;
    case 252u: goto L_08989D18;
    case 253u: goto L_08989D20;
    case 254u: goto L_08989D28;
    case 255u: goto L_08989D34;
    case 256u: goto L_08989D3C;
    case 257u: goto L_08989D44;
    case 258u: goto L_08989D4C;
    case 259u: goto L_08989D7C;
    case 260u: goto L_08989D88;
    case 261u: goto L_08989D90;
    case 262u: goto L_08989D98;
    case 263u: goto L_08989DB8;
    case 264u: goto L_08989DDC;
    case 265u: goto L_08989DF8;
    case 266u: goto L_08989E08;
    case 267u: goto L_08989E10;
    case 268u: goto L_08989E38;
    case 269u: goto L_08989E40;
    case 270u: goto L_08989E58;
    case 271u: goto L_08989E60;
    case 272u: goto L_08989E6C;
    case 273u: goto L_08989E74;
    case 274u: goto L_08989E80;
    case 275u: goto L_08989E88;
    case 276u: goto L_08989E98;
    case 277u: goto L_08989EBC;
    case 278u: goto L_08989F04;
    case 279u: goto L_08989F18;
    case 280u: goto L_08989F5C;
    case 281u: goto L_08989F6C;
    case 282u: goto L_08989F74;
    case 283u: goto L_08989FAC;
    case 284u: goto L_08989FB4;
    case 285u: goto L_08989FE0;
    case 286u: goto L_08989FE8;
    case 287u: goto L_08989FF0;
    case 288u: goto L_0898A000;
    case 289u: goto L_0898A020;
    case 290u: goto L_0898A028;
    case 291u: goto L_0898A034;
    case 292u: goto L_0898A050;
    case 293u: goto L_0898A05C;
    case 294u: goto L_0898A078;
    case 295u: goto L_0898A080;
    case 296u: goto L_0898A098;
    case 297u: goto L_0898A0A8;
    case 298u: goto L_0898A0C8;
    case 299u: goto L_0898A0D0;
    case 300u: goto L_0898A0D4;
    case 301u: goto L_0898A10C;
    case 302u: goto L_0898A118;
    case 303u: goto L_0898A150;
    case 304u: goto L_0898A15C;
    case 305u: goto L_0898A16C;
    case 306u: goto L_0898A174;
    case 307u: goto L_0898A18C;
    case 308u: goto L_0898A194;
    case 309u: goto L_0898A19C;
    case 310u: goto L_0898A1A4;
    case 311u: goto L_0898A1AC;
    case 312u: goto L_0898A1B4;
    case 313u: goto L_0898A1BC;
    case 314u: goto L_0898A1C4;
    case 315u: goto L_0898A1DC;
    case 316u: goto L_0898A1E4;
    case 317u: goto L_0898A1F8;
    case 318u: goto L_0898A20C;
    case 319u: goto L_0898A210;
    case 320u: goto L_0898A220;
    case 321u: goto L_0898A26C;
    case 322u: goto L_0898A27C;
    case 323u: goto L_0898A280;
    case 324u: goto L_0898A2C8;
    case 325u: goto L_0898A310;
    case 326u: goto L_0898A320;
    case 327u: goto L_0898A32C;
    case 328u: goto L_0898A334;
    case 329u: goto L_0898A374;
    case 330u: goto L_0898A37C;
    case 331u: goto L_0898A390;
    case 332u: goto L_0898A3A4;
    case 333u: goto L_0898A3A8;
    case 334u: goto L_0898A3B8;
    case 335u: goto L_0898A3D0;
    case 336u: goto L_0898A418;
    case 337u: goto L_0898A430;
    case 338u: goto L_0898A484;
    case 339u: goto L_0898A490;
    case 340u: goto L_0898A49C;
    case 341u: goto L_0898A4A4;
    case 342u: goto L_0898A4D4;
    case 343u: goto L_0898A518;
    case 344u: goto L_0898A52C;
    case 345u: goto L_0898A530;
    case 346u: goto L_0898A570;
    case 347u: goto L_0898A580;
    case 348u: goto L_0898A58C;
    case 349u: goto L_0898A59C;
    case 350u: goto L_0898A5A8;
    case 351u: goto L_0898A5AC;
    case 352u: goto L_0898A5CC;
    case 353u: goto L_0898A5DC;
    case 354u: goto L_0898A5FC;
    case 355u: goto L_0898A608;
    case 356u: goto L_0898A610;
    case 357u: goto L_0898A61C;
    case 358u: goto L_0898A660;
    case 359u: goto L_0898A670;
    case 360u: goto L_0898A688;
    case 361u: goto L_0898A690;
    case 362u: goto L_0898A69C;
    case 363u: goto L_0898A6AC;
    case 364u: goto L_0898A6C4;
    case 365u: goto L_0898A6CC;
    case 366u: goto L_0898A6E4;
    case 367u: goto L_0898A6F4;
    case 368u: goto L_0898A744;
    case 369u: goto L_0898A784;
    case 370u: goto L_0898A78C;
    case 371u: goto L_0898A794;
    case 372u: goto L_0898A7DC;
    case 373u: goto L_0898A7F8;
    case 374u: goto L_0898A804;
    case 375u: goto L_0898A810;
    case 376u: goto L_0898A818;
    case 377u: goto L_0898A81C;
    case 378u: goto L_0898A824;
    case 379u: goto L_0898A838;
    case 380u: goto L_0898A840;
    case 381u: goto L_0898A894;
    case 382u: goto L_0898A89C;
    case 383u: goto L_0898A8B8;
    case 384u: goto L_0898A8C4;
    case 385u: goto L_0898A8D0;
    case 386u: goto L_0898A8D8;
    case 387u: goto L_0898A8DC;
    case 388u: goto L_0898A8E4;
    case 389u: goto L_0898A8F8;
    case 390u: goto L_0898A900;
    case 391u: goto L_0898A944;
    case 392u: goto L_0898A958;
    case 393u: goto L_0898A960;
    case 394u: goto L_0898A978;
    case 395u: goto L_0898A980;
    case 396u: goto L_0898A988;
    case 397u: goto L_0898A990;
    case 398u: goto L_0898A998;
    case 399u: goto L_0898A9A0;
    case 400u: goto L_0898A9A8;
    case 401u: goto L_0898A9B0;
    case 402u: goto L_0898A9C8;
    case 403u: goto L_0898A9D0;
    case 404u: goto L_0898A9E4;
    case 405u: goto L_0898A9FC;
    case 406u: goto L_0898AA04;
    case 407u: goto L_0898AA0C;
    case 408u: goto L_0898AA24;
    case 409u: goto L_0898AA2C;
    case 410u: goto L_0898AA30;
    case 411u: goto L_0898AA90;
    case 412u: goto L_0898AAA0;
    case 413u: goto L_0898AAAC;
    case 414u: goto L_0898AAB8;
    case 415u: goto L_0898AAC0;
    case 416u: goto L_0898AAC4;
    case 417u: goto L_0898AAD0;
    case 418u: goto L_0898AB04;
    case 419u: goto L_0898AB10;
    case 420u: goto L_0898AB24;
    case 421u: goto L_0898AB38;
    case 422u: goto L_0898AB48;
    case 423u: goto L_0898AB6C;
    case 424u: goto L_0898ABCC;
    case 425u: goto L_0898ABD4;
    case 426u: goto L_0898ABDC;
    case 427u: goto L_0898ABEC;
    case 428u: goto L_0898AC04;
    case 429u: goto L_0898AC18;
    case 430u: goto L_0898AC28;
    case 431u: goto L_0898AC30;
    case 432u: goto L_0898AC38;
    case 433u: goto L_0898AC40;
    case 434u: goto L_0898AC80;
    case 435u: goto L_0898AC90;
    case 436u: goto L_0898AC9C;
    case 437u: goto L_0898ACA4;
    case 438u: goto L_0898ACC0;
    case 439u: goto L_0898ACDC;
    case 440u: goto L_0898ACF8;
    case 441u: goto L_0898AD10;
    case 442u: goto L_0898AD20;
    case 443u: goto L_0898AD34;
    case 444u: goto L_0898AD48;
    case 445u: goto L_0898AD50;
    case 446u: goto L_0898AD58;
    case 447u: goto L_0898AD60;
    case 448u: goto L_0898AD64;
    case 449u: goto L_0898AD6C;
    case 450u: goto L_0898AD74;
    case 451u: goto L_0898AD7C;
    case 452u: goto L_0898AD80;
    case 453u: goto L_0898ADB8;
    case 454u: goto L_0898ADE4;
    case 455u: goto L_0898AE20;
    case 456u: goto L_0898AE4C;
    case 457u: goto L_0898AE68;
    case 458u: goto L_0898AE90;
    case 459u: goto L_0898AECC;
    case 460u: goto L_0898AEF8;
    case 461u: goto L_0898AF34;
    case 462u: goto L_0898AF58;
    case 463u: goto L_0898AF68;
    case 464u: goto L_0898AF94;
    case 465u: goto L_0898AFCC;
    case 466u: goto L_0898AFF8;
    case 467u: goto L_0898B034;
    case 468u: goto L_0898B058;
    case 469u: goto L_0898B07C;
    case 470u: goto L_0898B0A8;
    case 471u: goto L_0898B0E0;
    case 472u: goto L_0898B0F8;
    case 473u: goto L_0898B108;
    case 474u: goto L_0898B124;
    case 475u: goto L_0898B140;
    case 476u: goto L_0898B15C;
    case 477u: goto L_0898B194;
    case 478u: goto L_0898B1C0;
    case 479u: goto L_0898B1FC;
    case 480u: goto L_0898B20C;
    case 481u: goto L_0898B214;
    case 482u: goto L_0898B21C;
    case 483u: goto L_0898B238;
    case 484u: goto L_0898B24C;
    case 485u: goto L_0898B254;
    case 486u: goto L_0898B25C;
    case 487u: goto L_0898B264;
    case 488u: goto L_0898B26C;
    case 489u: goto L_0898B294;
    case 490u: goto L_0898B29C;
    case 491u: goto L_0898B2A4;
    case 492u: goto L_0898B2BC;
    case 493u: goto L_0898B2C4;
    case 494u: goto L_0898B2D4;
    case 495u: goto L_0898B2F0;
    case 496u: goto L_0898B2F8;
    case 497u: goto L_0898B304;
    case 498u: goto L_0898B314;
    case 499u: goto L_0898B334;
    case 500u: goto L_0898B34C;
    case 501u: goto L_0898B360;
    case 502u: goto L_0898B370;
    case 503u: goto L_0898B378;
    case 504u: goto L_0898B380;
    case 505u: goto L_0898B388;
    case 506u: goto L_0898B3C8;
    case 507u: goto L_0898B3D8;
    case 508u: goto L_0898B3E4;
    case 509u: goto L_0898B3EC;
    case 510u: goto L_0898B400;
    case 511u: goto L_0898B410;
    case 512u: goto L_0898B420;
    case 513u: goto L_0898B434;
    case 514u: goto L_0898B43C;
    case 515u: goto L_0898B444;
    case 516u: goto L_0898B44C;
    case 517u: goto L_0898B450;
    case 518u: goto L_0898B458;
    case 519u: goto L_0898B460;
    case 520u: goto L_0898B468;
    case 521u: goto L_0898B46C;
    case 522u: goto L_0898B4A4;
    case 523u: goto L_0898B4D0;
    case 524u: goto L_0898B50C;
    case 525u: goto L_0898B538;
    case 526u: goto L_0898B554;
    case 527u: goto L_0898B57C;
    case 528u: goto L_0898B5B8;
    case 529u: goto L_0898B5E4;
    case 530u: goto L_0898B620;
    case 531u: goto L_0898B630;
    case 532u: goto L_0898B640;
    case 533u: goto L_0898B66C;
    case 534u: goto L_0898B6A4;
    case 535u: goto L_0898B6D0;
    case 536u: goto L_0898B70C;
    case 537u: goto L_0898B71C;
    case 538u: goto L_0898B748;
    case 539u: goto L_0898B774;
    case 540u: goto L_0898B79C;
    case 541u: goto L_0898B7B4;
    case 542u: goto L_0898B7BC;
    case 543u: goto L_0898B7CC;
    case 544u: goto L_0898B804;
    case 545u: goto L_0898B830;
    case 546u: goto L_0898B86C;
    case 547u: goto L_0898B87C;
    case 548u: goto L_0898B884;
    case 549u: goto L_0898B88C;
    case 550u: goto L_0898B8A8;
    case 551u: goto L_0898B8BC;
    case 552u: goto L_0898B8D8;
    case 553u: goto L_0898B8E4;
    case 554u: goto L_0898B8EC;
    case 555u: goto L_0898B8F4;
    case 556u: goto L_0898B8FC;
    case 557u: goto L_0898B904;
    case 558u: goto L_0898B90C;
    case 559u: goto L_0898B928;
    case 560u: goto L_0898B930;
    case 561u: goto L_0898B950;
    case 562u: goto L_0898B958;
    case 563u: goto L_0898B96C;
    case 564u: goto L_0898B974;
    case 565u: goto L_0898B988;
    case 566u: goto L_0898B994;
    case 567u: goto L_0898B99C;
    case 568u: goto L_0898B9A4;
    case 569u: goto L_0898B9B8;
    case 570u: goto L_0898B9BC;
    case 571u: goto L_0898B9EC;
    case 572u: goto L_0898BA04;
    case 573u: goto L_0898BA1C;
    case 574u: goto L_0898BA4C;
    case 575u: goto L_0898BA74;
    case 576u: goto L_0898BA88;
    case 577u: goto L_0898BA9C;
    case 578u: goto L_0898BAB4;
    case 579u: goto L_0898BAC0;
    case 580u: goto L_0898BAD0;
    case 581u: goto L_0898BADC;
    case 582u: goto L_0898BAE8;
    case 583u: goto L_0898BAF0;
    case 584u: goto L_0898BAF4;
    case 585u: goto L_0898BB00;
    case 586u: goto L_0898BB0C;
    case 587u: goto L_0898BB14;
    case 588u: goto L_0898BB1C;
    case 589u: goto L_0898BB38;
    case 590u: goto L_0898BB40;
    case 591u: goto L_0898BB5C;
    case 592u: goto L_0898BB94;
    case 593u: goto L_0898BBA0;
    case 594u: goto L_0898BBA8;
    case 595u: goto L_0898BBBC;
    case 596u: goto L_0898BBD0;
    case 597u: goto L_0898BBE0;
    case 598u: goto L_0898BBE8;
    case 599u: goto L_0898BBF8;
    case 600u: goto L_0898BBFC;
    case 601u: goto L_0898BC24;
    case 602u: goto L_0898BC34;
    case 603u: goto L_0898BC48;
    case 604u: goto L_0898BC60;
    case 605u: goto L_0898BC78;
    case 606u: goto L_0898BC84;
    case 607u: goto L_0898BC94;
    case 608u: goto L_0898BCA0;
    case 609u: goto L_0898BCC0;
    case 610u: goto L_0898BCCC;
    case 611u: goto L_0898BCDC;
    case 612u: goto L_0898BCE4;
    case 613u: goto L_0898BCEC;
    case 614u: goto L_0898BD08;
    case 615u: goto L_0898BD10;
    case 616u: goto L_0898BD48;
    case 617u: goto L_0898BD54;
    case 618u: goto L_0898BD64;
    case 619u: goto L_0898BD70;
    case 620u: goto L_0898BD7C;
    case 621u: goto L_0898BD84;
    case 622u: goto L_0898BD88;
    case 623u: goto L_0898BD94;
    case 624u: goto L_0898BDA0;
    case 625u: goto L_0898BDB0;
    case 626u: goto L_0898BDC0;
    case 627u: goto L_0898BDDC;
    case 628u: goto L_0898BDE4;
    case 629u: goto L_0898BE20;
    case 630u: goto L_0898BE30;
    case 631u: goto L_0898BE4C;
    case 632u: goto L_0898BE54;
    case 633u: goto L_0898BE64;
    case 634u: goto L_0898BE6C;
    case 635u: goto L_0898BE7C;
    case 636u: goto L_0898BE80;
    case 637u: goto L_0898BEB0;
    case 638u: goto L_0898BEC4;
    case 639u: goto L_0898BEDC;
    case 640u: goto L_0898BEE8;
    case 641u: goto L_0898BEF4;
    case 642u: goto L_0898BF04;
    case 643u: goto L_0898BF0C;
    case 644u: goto L_0898BF14;
    case 645u: goto L_0898BF30;
    case 646u: goto L_0898BF38;
    case 647u: goto L_0898BF44;
    case 648u: goto L_0898BF88;
    case 649u: goto L_0898BF90;
    case 650u: goto L_0898BF98;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08988000:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.fpr[17] = ctx.fpr[26] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08988020u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 918u, 0x08AD3BE4u>(ctx, &aot_mem) && ctx.pc == 0x08988020u) goto L_08988020;
    return;
L_08988020:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0898804C;
      }
      goto L_08988040;
    }
L_08988040:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_0898804C;
L_0898804C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[24];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(ctx.fpr[13]));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[24] / ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[16] != 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 661u, 0x08987E80u>(ctx, &aot_mem); return;
      }
      goto L_08988078;
    }
L_08988078:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
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
L_089880C0:
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24616)));
    ctx.gpr[5] = (2228u << 16u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-24628)));
      if (branch_taken) {
          goto L_08988104;
      }
      goto L_089880D4;
    }
L_089880D4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988138;
      }
      goto L_089880E0;
    }
L_089880E0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-24628), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 210 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08988138;
      }
      goto L_089880F8;
    }
L_089880F8:
    ctx.gpr[4] = (0u | 209u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-24628), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08988138;
      }
      goto L_08988104;
    }
L_08988104:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-24616), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 101 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08988138;
      }
      goto L_08988118;
    }
L_08988118:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-24628), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988138;
      }
      goto L_08988130;
    }
L_08988130:
    ctx.gpr[4] = (0u | 100u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-24628), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08988138;
L_08988138:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988140:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089881D4;
      }
      goto L_08988160;
    }
L_08988160:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_089881CC;
      }
      goto L_08988168;
    }
L_08988168:
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (ctx.gpr[16] >> 24u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (ctx.gpr[16] >> 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] >> 8u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089881CCu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3E9Cu>(ctx, &aot_mem) && ctx.pc == 0x089881CCu) goto L_089881CC;
    return;
L_089881CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089882C8;
      }
      goto L_089881D4;
    }
L_089881D4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08988258;
      }
      goto L_089881E0;
    }
L_089881E0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089881CC;
      }
      goto L_089881E8;
    }
L_089881E8:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[31] = (0x08988224u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08988224u) goto L_08988224;
    return;
L_08988224:
    ctx.gpr[4] = (ctx.gpr[16] >> 24u);
    ctx.gpr[5] = (ctx.gpr[16] >> 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] >> 8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08988250u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x08988250u) goto L_08988250;
    return;
L_08988250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089881CC;
      }
      goto L_08988258;
    }
L_08988258:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (ctx.gpr[16] >> 24u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (ctx.gpr[16] >> 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] >> 8u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089882C0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3E9Cu>(ctx, &aot_mem) && ctx.pc == 0x089882C0u) goto L_089882C0;
    return;
L_089882C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089881CC;
      }
      goto L_089882C8;
    }
L_089882C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089882D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16657)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0898847C;
      }
      goto L_08988308;
    }
L_08988308:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16660)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898847C;
      }
      goto L_08988314;
    }
L_08988314:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08988320u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x08988320u) goto L_08988320;
    return;
L_08988320:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08988344;
    }
    goto L_08988330;
L_08988330:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089883F4;
      }
      goto L_0898833C;
    }
L_0898833C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898847C;
      }
      goto L_08988344;
    }
L_08988344:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (17361u << 16u);
      if (branch_taken) {
          goto L_0898833C;
      }
      goto L_0898834C;
    }
L_0898834C:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (17369u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6268));
    ctx.gpr[5] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17108u << 16u);
    ctx.gpr[31] = (0x08988384u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08988384u) goto L_08988384;
    return;
L_08988384:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0898839Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 100u, 0x088A8514u>(ctx, &aot_mem) && ctx.pc == 0x0898839Cu) goto L_0898839C;
    return;
L_0898839C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089883ACu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 906u, 0x08AD3ABCu>(ctx, &aot_mem) && ctx.pc == 0x089883ACu) goto L_089883AC;
    return;
L_089883AC:
    ctx.gpr[5] = (17158u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (17174u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089883CCu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089883CCu) goto L_089883CC;
    return;
L_089883CC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089883DCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 100u, 0x088A8514u>(ctx, &aot_mem) && ctx.pc == 0x089883DCu) goto L_089883DC;
    return;
L_089883DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089883ECu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 906u, 0x08AD3ABCu>(ctx, &aot_mem) && ctx.pc == 0x089883ECu) goto L_089883EC;
    return;
L_089883EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898847C;
      }
      goto L_089883F4;
    }
L_089883F4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[31] = (0x08988404u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 293u, 0x088A9434u>(ctx, &aot_mem) && ctx.pc == 0x08988404u) goto L_08988404;
    return;
L_08988404:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[31] = (0x08988414u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 100u, 0x088A8514u>(ctx, &aot_mem) && ctx.pc == 0x08988414u) goto L_08988414;
    return;
L_08988414:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (17371u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17379u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6268));
    ctx.gpr[5] = (17106u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17138u << 16u);
    ctx.gpr[31] = (0x0898846Cu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x0898846Cu) goto L_0898846C;
    return;
L_0898846C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898847Cu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 906u, 0x08AD3ABCu>(ctx, &aot_mem) && ctx.pc == 0x0898847Cu) goto L_0898847C;
    return;
L_0898847C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089884A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[5] = (0u | 70u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7232));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089884CCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(13940));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x089884CCu) goto L_089884CC;
    return;
L_089884CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089884D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08988514u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21880));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892F99Cu>(ctx, &aot_mem) && ctx.pc == 0x08988514u) goto L_08988514;
    return;
L_08988514:
    ctx.gpr[31] = (0x0898851Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC30u>(ctx, &aot_mem) && ctx.pc == 0x0898851Cu) goto L_0898851C;
    return;
L_0898851C:
    ctx.gpr[31] = (0x08988524u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 619u, 0x0892FBDCu>(ctx, &aot_mem) && ctx.pc == 0x08988524u) goto L_08988524;
    return;
L_08988524:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7660), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6140), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7096), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7232));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6168));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[21] = (2277u << 16u);
    ctx.gpr[20] = (2277u << 16u);
    ctx.gpr[19] = (2277u << 16u);
    ctx.gpr[22] = (2277u << 16u);
    ctx.gpr[23] = (2269u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25208));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-8768));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8256));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-7744));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-9280));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4880));
    ctx.gpr[30] = (2228u << 16u);
    goto L_089885A4;
L_089885A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089885B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 887u, 0x08AD395Cu>(ctx, &aot_mem) && ctx.pc == 0x089885B4u) goto L_089885B4;
    return;
L_089885B4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 70 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089885A4;
      }
      goto L_089885C8;
    }
L_089885C8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6148), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6808), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7628), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7632), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-24648)));
    goto L_089885F0;
L_089885F0:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(2));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089885F0;
      }
      goto L_08988614;
    }
L_08988614:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6136), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6132), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6128), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6124), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6123), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6116), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6112), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6100), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6108), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6104), 0u);
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6836), 0u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08988680;
L_08988680:
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08988680;
      }
      goto L_08988694;
    }
L_08988694:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6152), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4624));
    goto L_089886AC;
L_089886AC:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_089886B8;
L_089886B8:
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089886B8;
      }
      goto L_089886CC;
    }
L_089886CC:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(512));
      if (branch_taken) {
          goto L_089886AC;
      }
      goto L_089886E0;
    }
L_089886E0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089886FC;
      }
      goto L_089886E8;
    }
L_089886E8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089886F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22056));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089886F8u) goto L_089886F8;
    return;
L_089886F8:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-24648), ctx.gpr[2]);
    goto L_089886FC;
L_089886FC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24644)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08988724;
      }
      goto L_0898870C;
    }
L_0898870C:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08988720u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22176));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08988720u) goto L_08988720;
    return;
L_08988720:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24644), ctx.gpr[2]);
    goto L_08988724;
L_08988724:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24636)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898874C;
      }
      goto L_08988734;
    }
L_08988734:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08988748u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22012));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08988748u) goto L_08988748;
    return;
L_08988748:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24636), ctx.gpr[2]);
    goto L_0898874C;
L_0898874C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24632)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08988778;
      }
      goto L_0898875C;
    }
L_0898875C:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21988));
    ctx.gpr[31] = (0x08988774u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21976));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08988774u) goto L_08988774;
    return;
L_08988774:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24632), ctx.gpr[2]);
    goto L_08988778;
L_08988778:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24640)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (2230u << 16u);
        goto L_089887A8;
    }
    goto L_08988788;
L_08988788:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21964));
    ctx.gpr[31] = (0x089887A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21948));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x089887A0u) goto L_089887A0;
    return;
L_089887A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24640), ctx.gpr[2]);
    ctx.gpr[4] = (2230u << 16u);
    goto L_089887A8;
L_089887A8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[5] << 7u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(248)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6172));
    goto L_089887E0;
L_089887E0:
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089887E0;
      }
      goto L_089887FC;
    }
L_089887FC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6162), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6160), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6040), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6803), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6804), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-6520), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-25212), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6192), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6184), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-25210), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6182), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6096), ctx.gpr[7]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6092), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6088), 0u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6084), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6080), ctx.gpr[8]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6076), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6072), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6508), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6068), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6064), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6060), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6512), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6056), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6052), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6048), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6044), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6516), ctx.gpr[4]);
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0898890Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 626u, 0x0892FC54u>(ctx, &aot_mem) && ctx.pc == 0x0898890Cu) goto L_0898890C;
    return;
L_0898890C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_08988940:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2000));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16657)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1932), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1936), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1948), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1952), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1956), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1960), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1964), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1968), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1972), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1976), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1980), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1984), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1988), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1992), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 443u, 0x0898E3A4u>(ctx, &aot_mem); return;
      }
      goto L_08988994;
    }
L_08988994:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (50944u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(257));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089889B4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    goto L_089880C0;
L_089889B4:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x089889C0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089889C0u) goto L_089889C0;
    return;
L_089889C0:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x089889CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089889CCu) goto L_089889CC;
    return;
L_089889CC:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089889D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089889D8u) goto L_089889D8;
    return;
L_089889D8:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(117)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089889F0;
      }
      goto L_089889F0;
    }
L_089889F0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7660)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C398u>(ctx, &aot_mem); return;
      }
      goto L_08988A04;
    }
L_08988A04:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C398u>(ctx, &aot_mem); return;
      }
      goto L_08988A14;
    }
L_08988A14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08988B50;
      }
      goto L_08988A7C;
    }
L_08988A7C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08988B50;
      }
      goto L_08988AB4;
    }
L_08988AB4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08988B50;
      }
      goto L_08988AE8;
    }
L_08988AE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08988B50;
      }
      goto L_08988B1C;
    }
L_08988B1C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08988B84;
      }
      goto L_08988B50;
    }
L_08988B50:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08988B84;
      }
      goto L_08988B58;
    }
L_08988B58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08988B74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850D9Cu>(ctx, &aot_mem) && ctx.pc == 0x08988B74u) goto L_08988B74;
    return;
L_08988B74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08988B84;
      }
      goto L_08988B7C;
    }
L_08988B7C:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (2232u << 16u);
    goto L_08988B84;
L_08988B84:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08988BB0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 483u, 0x088EAB10u>(ctx, &aot_mem) && ctx.pc == 0x08988BB0u) goto L_08988BB0;
    return;
L_08988BB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988BC8;
      }
      goto L_08988BB8;
    }
L_08988BB8:
    ctx.gpr[31] = (0x08988BC0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08988BC0u) goto L_08988BC0;
    return;
L_08988BC0:
    ctx.gpr[31] = (0x08988BC8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1006u, 0x08A97C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08988BC8u) goto L_08988BC8;
    return;
L_08988BC8:
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989854;
      }
      goto L_08988BD4;
    }
L_08988BD4:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08988BE0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08988BE0u) goto L_08988BE0;
    return;
L_08988BE0:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08988BECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08988BECu) goto L_08988BEC;
    return;
L_08988BEC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6040))))));
    ctx.gpr[4] = (0u | 30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08988C08;
    }
    goto L_08988C08;
L_08988C08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1023u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-6040), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08988C34;
      }
      goto L_08988C28;
    }
L_08988C28:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08988C34;
L_08988C34:
    ctx.gpr[4] = (15304u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6040))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08988E50;
      }
      goto L_08988CA0;
    }
L_08988CA0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08988CD0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 483u, 0x088EAB10u>(ctx, &aot_mem) && ctx.pc == 0x08988CD0u) goto L_08988CD0;
    return;
L_08988CD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08988E50;
      }
      goto L_08988CD8;
    }
L_08988CD8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (2232u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(384)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(388)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[16] == 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
      if (branch_taken) {
          goto L_08988DC4;
      }
      goto L_08988D14;
    }
L_08988D14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[5] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16716u << 16u);
      if (branch_taken) {
          goto L_08988DC8;
      }
      goto L_08988D38;
    }
L_08988D38:
    ctx.gpr[4] = (16793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[5] = (2277u << 16u);
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[15];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7232));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(716));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[31] = (0x08988D6Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08988D6Cu) goto L_08988D6C;
    return;
L_08988D6C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(732));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08988D88u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08988D88u) goto L_08988D88;
    return;
L_08988D88:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08988DBCu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 918u, 0x08AD3BE4u>(ctx, &aot_mem) && ctx.pc == 0x08988DBCu) goto L_08988DBC;
    return;
L_08988DBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08988E48;
      }
      goto L_08988DC4;
    }
L_08988DC4:
    ctx.gpr[4] = (16716u << 16u);
    goto L_08988DC8;
L_08988DC8:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[5] = (2277u << 16u);
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[15];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7232));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[31] = (0x08988DF8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08988DF8u) goto L_08988DF8;
    return;
L_08988DF8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08988E14u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08988E14u) goto L_08988E14;
    return;
L_08988E14:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08988E48u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 918u, 0x08AD3BE4u>(ctx, &aot_mem) && ctx.pc == 0x08988E48u) goto L_08988E48;
    return;
L_08988E48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08989818;
      }
      goto L_08988E50;
    }
L_08988E50:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2277u << 16u);
      if (branch_taken) {
          goto L_08988EC0;
      }
      goto L_08988E84;
    }
L_08988E84:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08988F48;
      }
      goto L_08988EBC;
    }
L_08988EBC:
    ctx.gpr[5] = (2277u << 16u);
    goto L_08988EC0;
L_08988EC0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7232));
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (17232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(756));
    ctx.gpr[5] = (17104u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17192u << 16u);
    ctx.gpr[31] = (0x08988EF0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08988EF0u) goto L_08988EF0;
    return;
L_08988EF0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(772));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08988F0Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08988F0Cu) goto L_08988F0C;
    return;
L_08988F0C:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08988F40u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 918u, 0x08AD3BE4u>(ctx, &aot_mem) && ctx.pc == 0x08988F40u) goto L_08988F40;
    return;
L_08988F40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08989818;
      }
      goto L_08988F48;
    }
L_08988F48:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08989128;
      }
      goto L_08988F7C;
    }
L_08988F7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2277u << 16u);
      if (branch_taken) {
          goto L_0898902C;
      }
      goto L_08988FA4;
    }
L_08988FA4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7232));
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (17232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(776));
    ctx.gpr[5] = (17104u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17192u << 16u);
    ctx.gpr[31] = (0x08988FD4u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08988FD4u) goto L_08988FD4;
    return;
L_08988FD4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(792));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08988FF0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08988FF0u) goto L_08988FF0;
    return;
L_08988FF0:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08989024u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 918u, 0x08AD3BE4u>(ctx, &aot_mem) && ctx.pc == 0x08989024u) goto L_08989024;
    return;
L_08989024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08989818;
      }
      goto L_0898902C;
    }
L_0898902C:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08989038u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989038u) goto L_08989038;
    return;
L_08989038:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08989044u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989044u) goto L_08989044;
    return;
L_08989044:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08989050u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989050u) goto L_08989050;
    return;
L_08989050:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x0898905Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0898905Cu) goto L_0898905C;
    return;
L_0898905C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24644)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08989070u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989070u) goto L_08989070;
    return;
L_08989070:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17224u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[9] = (16256u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[9] = (16928u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[31] = (0x08989108u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 311u, 0x08A26024u>(ctx, &aot_mem) && ctx.pc == 0x08989108u) goto L_08989108;
    return;
L_08989108:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08989114u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989114u) goto L_08989114;
    return;
L_08989114:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08989120u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989120u) goto L_08989120;
    return;
L_08989120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08989818;
      }
      goto L_08989128;
    }
L_08989128:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089891F8;
      }
      goto L_0898915C;
    }
L_0898915C:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7232));
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (17241u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17123u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(796));
    ctx.gpr[5] = (17283u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17182u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.gpr[31] = (0x089891A0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089891A0u) goto L_089891A0;
    return;
L_089891A0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(812));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089891BCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089891BCu) goto L_089891BC;
    return;
L_089891BC:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089891F0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 918u, 0x08AD3BE4u>(ctx, &aot_mem) && ctx.pc == 0x089891F0u) goto L_089891F0;
    return;
L_089891F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08989818;
      }
      goto L_089891F8;
    }
L_089891F8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08989260;
      }
      goto L_0898922C;
    }
L_0898922C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898935C;
      }
      goto L_08989260;
    }
L_08989260:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0898926Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0898926Cu) goto L_0898926C;
    return;
L_0898926C:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08989278u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989278u) goto L_08989278;
    return;
L_08989278:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08989284u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989284u) goto L_08989284;
    return;
L_08989284:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08989290u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989290u) goto L_08989290;
    return;
L_08989290:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24644)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089892A4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089892A4u) goto L_089892A4;
    return;
L_089892A4:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17224u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[9] = (16256u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[9] = (16928u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[31] = (0x0898933Cu);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 311u, 0x08A26024u>(ctx, &aot_mem) && ctx.pc == 0x0898933Cu) goto L_0898933C;
    return;
L_0898933C:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08989348u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989348u) goto L_08989348;
    return;
L_08989348:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08989354u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989354u) goto L_08989354;
    return;
L_08989354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08989818;
      }
      goto L_0898935C;
    }
L_0898935C:
    ctx.gpr[4] = (17234u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 63u);
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17160u << 16u);
    ctx.gpr[31] = (0x08989380u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08989380u) goto L_08989380;
    return;
L_08989380:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089893AC;
      }
      goto L_089893A8;
    }
L_089893A8:
    ctx.gpr[18] = (0u | 65u);
    goto L_089893AC;
L_089893AC:
    ctx.gpr[31] = (0x089893B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089893B4u) goto L_089893B4;
    return;
L_089893B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_08989408;
      }
      goto L_089893DC;
    }
L_089893DC:
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-24616), ctx.gpr[4]);
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 67u);
    ctx.gpr[4] = (17160u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17262u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17158u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08989408;
L_08989408:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[24];
    ctx.gpr[5] = (2277u << 16u);
    ctx.fpr[30] = ctx.fpr[22] - ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7232));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1924), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1920), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08989440u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08989440u) goto L_08989440;
    return;
L_08989440:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08989460u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08989460u) goto L_08989460;
    return;
L_08989460:
    ctx.gpr[7] = (15395u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (ctx.gpr[7] | 55050u);
    ctx.gpr[8] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089894A4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 918u, 0x08AD3BE4u>(ctx, &aot_mem) && ctx.pc == 0x089894A4u) goto L_089894A4;
    return;
L_089894A4:
    ctx.fpr[14] = ctx.fpr[24] + ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089894C0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1928), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089894C0u) goto L_089894C0;
    return;
L_089894C0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089894DCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089894DCu) goto L_089894DC;
    return;
L_089894DC:
    ctx.gpr[7] = (16253u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (ctx.gpr[7] | 28836u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08989518u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 918u, 0x08AD3BE4u>(ctx, &aot_mem) && ctx.pc == 0x08989518u) goto L_08989518;
    return;
L_08989518:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1924)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[31] = (0x08989538u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08989538u) goto L_08989538;
    return;
L_08989538:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08989554u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08989554u) goto L_08989554;
    return;
L_08989554:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08989584u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 918u, 0x08AD3BE4u>(ctx, &aot_mem) && ctx.pc == 0x08989584u) goto L_08989584;
    return;
L_08989584:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1928)));
    ctx.gpr[31] = (0x0898959Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x0898959Cu) goto L_0898959C;
    return;
L_0898959C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089895B8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089895B8u) goto L_089895B8;
    return;
L_089895B8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x089895E8u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 918u, 0x08AD3BE4u>(ctx, &aot_mem) && ctx.pc == 0x089895E8u) goto L_089895E8;
    return;
L_089895E8:
    ctx.gpr[31] = (0x089895F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089895F0u) goto L_089895F0;
    return;
L_089895F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16448u << 16u);
      if (branch_taken) {
          goto L_08989818;
      }
      goto L_08989618;
    }
L_08989618:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17280u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17184u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17076u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(852), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08989648u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08989648u) goto L_08989648;
    return;
L_08989648:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(836));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0898966Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 368u, 0x088521E8u>(ctx, &aot_mem) && ctx.pc == 0x0898966Cu) goto L_0898966C;
    return;
L_0898966C:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08989678u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989678u) goto L_08989678;
    return;
L_08989678:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08989684u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989684u) goto L_08989684;
    return;
L_08989684:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08989690u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989690u) goto L_08989690;
    return;
L_08989690:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x0898969Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0898969Cu) goto L_0898969C;
    return;
L_0898969C:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x089896A8u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089896A8u) goto L_089896A8;
    return;
L_089896A8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24632)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089896BCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089896BCu) goto L_089896BC;
    return;
L_089896BC:
    ctx.gpr[4] = (16382u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 47186u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(836)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[4] = (16320u << 16u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (0u | 245u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[18] = (ctx.gpr[6] - ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[20] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[31] = (0x0898971Cu);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0898971Cu) goto L_0898971C;
    return;
L_0898971C:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08989730u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08989730u) goto L_08989730;
    return;
L_08989730:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(848)));
    ctx.gpr[5] = (17174u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08989790;
      }
      goto L_08989774;
    }
L_08989774:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(848)));
    ctx.gpr[5] = (17327u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089897D0;
      }
      goto L_08989790;
    }
L_08989790:
    ctx.gpr[5] = (17280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17184u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(868), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(872), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16640u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089897D0;
L_089897D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(848)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(856)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(836)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[9] = (16256u << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0898980Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 311u, 0x08A26024u>(ctx, &aot_mem) && ctx.pc == 0x0898980Cu) goto L_0898980C;
    return;
L_0898980C:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08989818u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989818u) goto L_08989818;
    return;
L_08989818:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08989824u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989824u) goto L_08989824;
    return;
L_08989824:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08989830u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989830u) goto L_08989830;
    return;
L_08989830:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x0898983Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0898983Cu) goto L_0898983C;
    return;
L_0898983C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898984C;
      }
      goto L_08989844;
    }
L_08989844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 475u, 0x0898E5DCu>(ctx, &aot_mem); return;
      }
      goto L_0898984C;
    }
L_0898984C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08989860;
      }
      goto L_08989854;
    }
L_08989854:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6040), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    goto L_08989860;
L_08989860:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6080)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089898E0;
      }
      goto L_08989898;
    }
L_08989898:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x089898A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 722u, 0x0898F9C0u>(ctx, &aot_mem) && ctx.pc == 0x089898A4u) goto L_089898A4;
    return;
L_089898A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6080), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089898F0;
      }
      goto L_089898E0;
    }
L_089898E0:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x089898ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 722u, 0x0898F9C0u>(ctx, &aot_mem) && ctx.pc == 0x089898ECu) goto L_089898EC;
    return;
L_089898EC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089898F0;
L_089898F0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24628)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08989910;
      }
      goto L_08989910;
    }
L_08989910:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08989940;
      }
      goto L_08989920;
    }
L_08989920:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898992Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 583u, 0x08ADA6B0u>(ctx, &aot_mem) && ctx.pc == 0x0898992Cu) goto L_0898992C;
    return;
L_0898992C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08989940;
      }
      goto L_08989934;
    }
L_08989934:
    ctx.gpr[31] = (0x0898993Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 635u, 0x08987B94u>(ctx, &aot_mem) && ctx.pc == 0x0898993Cu) goto L_0898993C;
    return;
L_0898993C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08989940;
L_08989940:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6056)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089899CC;
      }
      goto L_08989998;
    }
L_08989998:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x089899A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 722u, 0x0898F9C0u>(ctx, &aot_mem) && ctx.pc == 0x089899A4u) goto L_089899A4;
    return;
L_089899A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6056), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089899DC;
      }
      goto L_089899CC;
    }
L_089899CC:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x089899D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 722u, 0x0898F9C0u>(ctx, &aot_mem) && ctx.pc == 0x089899D8u) goto L_089899D8;
    return;
L_089899D8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089899DC;
L_089899DC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24628)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08989A0C;
      }
      goto L_089899FC;
    }
L_089899FC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24628)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    goto L_08989A0C;
L_08989A0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6044)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A0D4;
      }
      goto L_08989A1C;
    }
L_08989A1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[31] = (0x08989A3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08989A3Cu) goto L_08989A3C;
    return;
L_08989A3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08989A64u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08989A64u) goto L_08989A64;
    return;
L_08989A64:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08989A74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 583u, 0x08ADA6B0u>(ctx, &aot_mem) && ctx.pc == 0x08989A74u) goto L_08989A74;
    return;
L_08989A74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989CF4;
      }
      goto L_08989A7C;
    }
L_08989A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 13u);
      if (branch_taken) {
          goto L_08989C4C;
      }
      goto L_08989A88;
    }
L_08989A88:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08989C4C;
      }
      goto L_08989A90;
    }
L_08989A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08989ABC;
      }
      goto L_08989AA8;
    }
L_08989AA8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08989ABC;
L_08989ABC:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_08989AE8;
      }
      goto L_08989AE0;
    }
L_08989AE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08989B00;
      }
      goto L_08989AE8;
    }
L_08989AE8:
    ctx.gpr[4] = (ctx.gpr[21] << 5u);
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[21] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08989B00;
L_08989B00:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989C44;
      }
      goto L_08989B0C;
    }
L_08989B0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08989B38;
      }
      goto L_08989B24;
    }
L_08989B24:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08989B38;
L_08989B38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08989B44u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 73u, 0x08A0CF08u>(ctx, &aot_mem) && ctx.pc == 0x08989B44u) goto L_08989B44;
    return;
L_08989B44:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989C44;
      }
      goto L_08989B50;
    }
L_08989B50:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08989B7C;
      }
      goto L_08989B68;
    }
L_08989B68:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[22] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08989B7C;
L_08989B7C:
    ctx.gpr[31] = (0x08989B84u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 626u, 0x08AB37F8u>(ctx, &aot_mem) && ctx.pc == 0x08989B84u) goto L_08989B84;
    return;
L_08989B84:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15112u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 34953u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27344)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (15216u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 61681u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08989BD0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989BD0u) goto L_08989BD0;
    return;
L_08989BD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08989BDCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989BDCu) goto L_08989BDC;
    return;
L_08989BDC:
    ctx.gpr[4] = (17379u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.gpr[5] = (16900u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16924u << 16u);
    ctx.gpr[6] = (16896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[9] = (16256u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-24628)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (0u | 255u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (0u | 255u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08989C38u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 311u, 0x08A26024u>(ctx, &aot_mem) && ctx.pc == 0x08989C38u) goto L_08989C38;
    return;
L_08989C38:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08989C44u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08989C44u) goto L_08989C44;
    return;
L_08989C44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08989CF4;
      }
      goto L_08989C4C;
    }
L_08989C4C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08989C58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 583u, 0x08ADA6B0u>(ctx, &aot_mem) && ctx.pc == 0x08989C58u) goto L_08989C58;
    return;
L_08989C58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (17363u << 16u);
      if (branch_taken) {
          goto L_08989CF4;
      }
      goto L_08989C60;
    }
L_08989C60:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(892));
    ctx.gpr[5] = (16608u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17396u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17038u << 16u);
    ctx.gpr[31] = (0x08989C84u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08989C84u) goto L_08989C84;
    return;
L_08989C84:
    ctx.gpr[4] = (0u | 69u);
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
        goto L_08989C90;
    }
    goto L_08989C90;
L_08989C90:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7232));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(888));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08989CC0u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08989CC0u) goto L_08989CC0;
    return;
L_08989CC0:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(892));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08989CF4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 918u, 0x08AD3BE4u>(ctx, &aot_mem) && ctx.pc == 0x08989CF4u) goto L_08989CF4;
    return;
L_08989CF4:
    ctx.gpr[31] = (0x08989CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x08989CFCu) goto L_08989CFC;
    return;
L_08989CFC:
    ctx.gpr[4] = (15959u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2621u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16145u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 60293u);
    ctx.gpr[31] = (0x08989D18u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08989D18u) goto L_08989D18;
    return;
L_08989D18:
    ctx.gpr[31] = (0x08989D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x08989D20u) goto L_08989D20;
    return;
L_08989D20:
    ctx.gpr[31] = (0x08989D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x08989D28u) goto L_08989D28;
    return;
L_08989D28:
    ctx.gpr[4] = (17440u << 16u);
    ctx.gpr[31] = (0x08989D34u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x08989D34u) goto L_08989D34;
    return;
L_08989D34:
    ctx.gpr[31] = (0x08989D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x08989D3Cu) goto L_08989D3C;
    return;
L_08989D3C:
    ctx.gpr[31] = (0x08989D44u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08989D44u) goto L_08989D44;
    return;
L_08989D44:
    ctx.gpr[31] = (0x08989D4Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08989D4Cu) goto L_08989D4C;
    return;
L_08989D4C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u | 9999u);
    ctx.gpr[5] = (ctx.gpr[19] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08989D7C;
    }
    goto L_08989D7C;
L_08989D7C:
    ctx.gpr[4] = (0u | 9999u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898A0D0;
      }
      goto L_08989D88;
    }
L_08989D88:
    ctx.gpr[31] = (0x08989D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 78u, 0x089184E0u>(ctx, &aot_mem) && ctx.pc == 0x08989D90u) goto L_08989D90;
    return;
L_08989D90:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A0D0;
      }
      goto L_08989D98;
    }
L_08989D98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A0D0;
      }
      goto L_08989DB8;
    }
L_08989DB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898A0D0;
      }
      goto L_08989DDC;
    }
L_08989DDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08989DF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08989DF8u) goto L_08989DF8;
    return;
L_08989DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A0D0;
      }
      goto L_08989E08;
    }
L_08989E08:
    ctx.gpr[31] = (0x08989E10u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08989E10u) goto L_08989E10;
    return;
L_08989E10:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(908));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[8] & 255u);
    ctx.gpr[31] = (0x08989E38u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08989E38u) goto L_08989E38;
    return;
L_08989E38:
    ctx.gpr[31] = (0x08989E40u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x08989E40u) goto L_08989E40;
    return;
L_08989E40:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08989E58u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08989E58u) goto L_08989E58;
    return;
L_08989E58:
    ctx.gpr[31] = (0x08989E60u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08989E60u) goto L_08989E60;
    return;
L_08989E60:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08989E6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 583u, 0x08ADA6B0u>(ctx, &aot_mem) && ctx.pc == 0x08989E6Cu) goto L_08989E6C;
    return;
L_08989E6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A0C8;
      }
      goto L_08989E74;
    }
L_08989E74:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 1000 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898A080;
      }
      goto L_08989E80;
    }
L_08989E80:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A080;
      }
      goto L_08989E88;
    }
L_08989E88:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(936));
    ctx.gpr[31] = (0x08989E98u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21876));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08989E98u) goto L_08989E98;
    return;
L_08989E98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[5] = (0u | 31u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_08989F74;
    }
    goto L_08989EBC;
L_08989EBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (0u | 9999u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21872));
    ctx.gpr[19] = (ctx.lo);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
        goto L_08989F04;
    }
    goto L_08989F04;
L_08989F04:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08989F18u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08989F18u) goto L_08989F18;
    return;
L_08989F18:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 10u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (0u | 9999u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(924));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21872));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
        goto L_08989F5C;
    }
    goto L_08989F5C;
L_08989F5C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08989F6Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08989F6Cu) goto L_08989F6C;
    return;
L_08989F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08989FE0;
      }
      goto L_08989F74;
    }
L_08989F74:
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 9999u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21872));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
        goto L_08989FAC;
    }
    goto L_08989FAC;
L_08989FAC:
    ctx.gpr[31] = (0x08989FB4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08989FB4u) goto L_08989FB4;
    return;
L_08989FB4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(924));
    ctx.gpr[31] = (0x08989FE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21872));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08989FE0u) goto L_08989FE0;
    return;
L_08989FE0:
    ctx.gpr[31] = (0x08989FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x08989FE8u) goto L_08989FE8;
    return;
L_08989FE8:
    ctx.gpr[31] = (0x08989FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x08989FF0u) goto L_08989FF0;
    return;
L_08989FF0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[31] = (0x0898A000u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x0898A000u) goto L_0898A000;
    return;
L_0898A000:
    ctx.gpr[6] = (16948u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (17375u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0898A020u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898A020u) goto L_0898A020;
    return;
L_0898A020:
    ctx.gpr[31] = (0x0898A028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x0898A028u) goto L_0898A028;
    return;
L_0898A028:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(936));
    ctx.gpr[31] = (0x0898A034u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x0898A034u) goto L_0898A034;
    return;
L_0898A034:
    ctx.gpr[5] = (17376u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898A050u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898A050u) goto L_0898A050;
    return;
L_0898A050:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(924));
    ctx.gpr[31] = (0x0898A05Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x0898A05Cu) goto L_0898A05C;
    return;
L_0898A05C:
    ctx.gpr[6] = (17378u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0898A078u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898A078u) goto L_0898A078;
    return;
L_0898A078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A0C8;
      }
      goto L_0898A080;
    }
L_0898A080:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0898A098u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21872));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0898A098u) goto L_0898A098;
    return;
L_0898A098:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898A0A8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x0898A0A8u) goto L_0898A0A8;
    return;
L_0898A0A8:
    ctx.gpr[6] = (17375u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (16948u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0898A0C8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898A0C8u) goto L_0898A0C8;
    return;
L_0898A0C8:
    ctx.gpr[31] = (0x0898A0D0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A0D0u) goto L_0898A0D0;
    return;
L_0898A0D0:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898A0D4;
L_0898A0D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6096)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898A150;
      }
      goto L_0898A10C;
    }
L_0898A10C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0898A118u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 722u, 0x0898F9C0u>(ctx, &aot_mem) && ctx.pc == 0x0898A118u) goto L_0898A118;
    return;
L_0898A118:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6096), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898A15C;
      }
      goto L_0898A150;
    }
L_0898A150:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0898A15Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 722u, 0x0898F9C0u>(ctx, &aot_mem) && ctx.pc == 0x0898A15Cu) goto L_0898A15C;
    return;
L_0898A15C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6084)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A570;
      }
      goto L_0898A16C;
    }
L_0898A16C:
    ctx.gpr[31] = (0x0898A174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x0898A174u) goto L_0898A174;
    return;
L_0898A174:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[31] = (0x0898A18Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898A18Cu) goto L_0898A18C;
    return;
L_0898A18C:
    ctx.gpr[31] = (0x0898A194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x0898A194u) goto L_0898A194;
    return;
L_0898A194:
    ctx.gpr[31] = (0x0898A19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x0898A19Cu) goto L_0898A19C;
    return;
L_0898A19C:
    ctx.gpr[31] = (0x0898A1A4u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A1A4u) goto L_0898A1A4;
    return;
L_0898A1A4:
    ctx.gpr[31] = (0x0898A1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x0898A1ACu) goto L_0898A1AC;
    return;
L_0898A1AC:
    ctx.gpr[31] = (0x0898A1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 226u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x0898A1B4u) goto L_0898A1B4;
    return;
L_0898A1B4:
    ctx.gpr[31] = (0x0898A1BCu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898A1BCu) goto L_0898A1BC;
    return;
L_0898A1BC:
    ctx.gpr[31] = (0x0898A1C4u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A1C4u) goto L_0898A1C4;
    return;
L_0898A1C4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(956));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898A1DCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898A1DCu) goto L_0898A1DC;
    return;
L_0898A1DC:
    ctx.gpr[31] = (0x0898A1E4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0898A1E4u) goto L_0898A1E4;
    return;
L_0898A1E4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6520))))));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A210;
      }
      goto L_0898A1F8;
    }
L_0898A1F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A280;
      }
      goto L_0898A20C;
    }
L_0898A20C:
    ctx.gpr[5] = (2230u << 16u);
    goto L_0898A210;
L_0898A210:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6520))))));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A280;
      }
      goto L_0898A220;
    }
L_0898A220:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A37C;
      }
      goto L_0898A26C;
    }
L_0898A26C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A37C;
      }
      goto L_0898A27C;
    }
L_0898A27C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898A280;
L_0898A280:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A320;
      }
      goto L_0898A2C8;
    }
L_0898A2C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A37C;
      }
      goto L_0898A310;
    }
L_0898A310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A37C;
      }
      goto L_0898A320;
    }
L_0898A320:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898A32Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 583u, 0x08ADA6B0u>(ctx, &aot_mem) && ctx.pc == 0x0898A32Cu) goto L_0898A32C;
    return;
L_0898A32C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A37C;
      }
      goto L_0898A334;
    }
L_0898A334:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x0898A374u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 523u, 0x089870BCu>(ctx, &aot_mem) && ctx.pc == 0x0898A374u) goto L_0898A374;
    return;
L_0898A374:
    ctx.gpr[31] = (0x0898A37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 605u, 0x08987A14u>(ctx, &aot_mem) && ctx.pc == 0x0898A37Cu) goto L_0898A37C;
    return;
L_0898A37C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6520))))));
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A3A8;
      }
      goto L_0898A390;
    }
L_0898A390:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898A3B8;
      }
      goto L_0898A3A4;
    }
L_0898A3A4:
    ctx.gpr[5] = (2230u << 16u);
    goto L_0898A3A8;
L_0898A3A8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6520))))));
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898A570;
      }
      goto L_0898A3B8;
    }
L_0898A3B8:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[31] = (0x0898A3D0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898A3D0u) goto L_0898A3D0;
    return;
L_0898A3D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1212)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898A570;
      }
      goto L_0898A418;
    }
L_0898A418:
    ctx.gpr[4] = (0u | 91u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(648), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(649), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(648));
    ctx.gpr[31] = (0x0898A430u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(668));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x0898A430u) goto L_0898A430;
    return;
L_0898A430:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1212)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21868));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[31] = (0x0898A484u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0898A484u) goto L_0898A484;
    return;
L_0898A484:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.gpr[31] = (0x0898A490u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x0898A490u) goto L_0898A490;
    return;
L_0898A490:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898A49Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 583u, 0x08ADA6B0u>(ctx, &aot_mem) && ctx.pc == 0x0898A49Cu) goto L_0898A49C;
    return;
L_0898A49C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A570;
      }
      goto L_0898A4A4;
    }
L_0898A4A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A530;
      }
      goto L_0898A4D4;
    }
L_0898A4D4:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(252)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A530;
      }
      goto L_0898A518;
    }
L_0898A518:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A570;
      }
      goto L_0898A52C;
    }
L_0898A52C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898A530;
L_0898A530:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1212)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x0898A570u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 564u, 0x08987568u>(ctx, &aot_mem) && ctx.pc == 0x0898A570u) goto L_0898A570;
    return;
L_0898A570:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6068)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898A59C;
      }
      goto L_0898A580;
    }
L_0898A580:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0898A58Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 722u, 0x0898F9C0u>(ctx, &aot_mem) && ctx.pc == 0x0898A58Cu) goto L_0898A58C;
    return;
L_0898A58C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6068), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0898A5AC;
      }
      goto L_0898A59C;
    }
L_0898A59C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0898A5A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 722u, 0x0898F9C0u>(ctx, &aot_mem) && ctx.pc == 0x0898A5A8u) goto L_0898A5A8;
    return;
L_0898A5A8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0898A5AC;
L_0898A5AC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24628)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898A5CC;
      }
      goto L_0898A5CC;
    }
L_0898A5CC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6512)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A6E4;
      }
      goto L_0898A5DC;
    }
L_0898A5DC:
    ctx.gpr[4] = (0u | 22u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(648), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17378u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(649), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0898A6E4;
      }
      goto L_0898A5FC;
    }
L_0898A5FC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898A608u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 583u, 0x08ADA6B0u>(ctx, &aot_mem) && ctx.pc == 0x0898A608u) goto L_0898A608;
    return;
L_0898A608:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A6CC;
      }
      goto L_0898A610;
    }
L_0898A610:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A690;
      }
      goto L_0898A61C;
    }
L_0898A61C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2076)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A670;
      }
      goto L_0898A660;
    }
L_0898A660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A690;
      }
      goto L_0898A670;
    }
L_0898A670:
    ctx.gpr[6] = (17050u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(648));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0898A688u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 658u, 0x08987DACu>(ctx, &aot_mem) && ctx.pc == 0x0898A688u) goto L_0898A688;
    return;
L_0898A688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A6CC;
      }
      goto L_0898A690;
    }
L_0898A690:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898A6CC;
      }
      goto L_0898A69C;
    }
L_0898A69C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A6CC;
      }
      goto L_0898A6AC;
    }
L_0898A6AC:
    ctx.gpr[6] = (17050u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(648));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0898A6C4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 658u, 0x08987DACu>(ctx, &aot_mem) && ctx.pc == 0x0898A6C4u) goto L_0898A6C4;
    return;
L_0898A6C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A6CC;
      }
      goto L_0898A6CC;
    }
L_0898A6CC:
    ctx.gpr[4] = (16776u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0898A5FC;
      }
      goto L_0898A6E4;
    }
L_0898A6E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898ABDC;
      }
      goto L_0898A6F4;
    }
L_0898A6F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7288)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.gpr[6] = (2233u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898ABD4;
      }
      goto L_0898A744;
    }
L_0898A744:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898ABD4;
      }
      goto L_0898A784;
    }
L_0898A784:
    ctx.gpr[31] = (0x0898A78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 30u, 0x089581F0u>(ctx, &aot_mem) && ctx.pc == 0x0898A78Cu) goto L_0898A78C;
    return;
L_0898A78C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898ABD4;
      }
      goto L_0898A794;
    }
L_0898A794:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7288)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898A89C;
      }
      goto L_0898A7DC;
    }
L_0898A7DC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(9432));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-21860));
      if (branch_taken) {
          goto L_0898A824;
      }
      goto L_0898A7F8;
    }
L_0898A7F8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898A804u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0898A804u) goto L_0898A804;
    return;
L_0898A804:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A81C;
      }
      goto L_0898A810;
    }
L_0898A810:
    ctx.gpr[31] = (0x0898A818u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0898A818u) goto L_0898A818;
    return;
L_0898A818:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0898A81C;
L_0898A81C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_0898A824;
L_0898A824:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0898A838u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21848));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898A838u) goto L_0898A838;
    return;
L_0898A838:
    ctx.gpr[31] = (0x0898A840u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x0898A840u) goto L_0898A840;
    return;
L_0898A840:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7288)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0898A894u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0898A894u) goto L_0898A894;
    return;
L_0898A894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A944;
      }
      goto L_0898A89C;
    }
L_0898A89C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[17] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(9432));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-21840));
      if (branch_taken) {
          goto L_0898A8E4;
      }
      goto L_0898A8B8;
    }
L_0898A8B8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0898A8C4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0898A8C4u) goto L_0898A8C4;
    return;
L_0898A8C4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A8DC;
      }
      goto L_0898A8D0;
    }
L_0898A8D0:
    ctx.gpr[31] = (0x0898A8D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0898A8D8u) goto L_0898A8D8;
    return;
L_0898A8D8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0898A8DC;
L_0898A8DC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    goto L_0898A8E4;
L_0898A8E4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0898A8F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21848));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898A8F8u) goto L_0898A8F8;
    return;
L_0898A8F8:
    ctx.gpr[31] = (0x0898A900u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x0898A900u) goto L_0898A900;
    return;
L_0898A900:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898A944u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0898A944u) goto L_0898A944;
    return;
L_0898A944:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9432));
    ctx.gpr[31] = (0x0898A958u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5136));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x0898A958u) goto L_0898A958;
    return;
L_0898A958:
    ctx.gpr[31] = (0x0898A960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x0898A960u) goto L_0898A960;
    return;
L_0898A960:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[31] = (0x0898A978u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898A978u) goto L_0898A978;
    return;
L_0898A978:
    ctx.gpr[31] = (0x0898A980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x0898A980u) goto L_0898A980;
    return;
L_0898A980:
    ctx.gpr[31] = (0x0898A988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x0898A988u) goto L_0898A988;
    return;
L_0898A988:
    ctx.gpr[31] = (0x0898A990u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A990u) goto L_0898A990;
    return;
L_0898A990:
    ctx.gpr[31] = (0x0898A998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55020u>(ctx, &aot_mem) && ctx.pc == 0x0898A998u) goto L_0898A998;
    return;
L_0898A998:
    ctx.gpr[31] = (0x0898A9A0u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898A9A0u) goto L_0898A9A0;
    return;
L_0898A9A0:
    ctx.gpr[31] = (0x0898A9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898A9A8u) goto L_0898A9A8;
    return;
L_0898A9A8:
    ctx.gpr[31] = (0x0898A9B0u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A9B0u) goto L_0898A9B0;
    return;
L_0898A9B0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898A9C8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898A9C8u) goto L_0898A9C8;
    return;
L_0898A9C8:
    ctx.gpr[31] = (0x0898A9D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0898A9D0u) goto L_0898A9D0;
    return;
L_0898A9D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898AA0C;
      }
      goto L_0898A9E4;
    }
L_0898A9E4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(964));
    ctx.gpr[5] = (0u | 204u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 185u);
    ctx.gpr[31] = (0x0898A9FCu);
    ctx.gpr[8] = (0u | 180u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898A9FCu) goto L_0898A9FC;
    return;
L_0898A9FC:
    ctx.gpr[31] = (0x0898AA04u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898AA04u) goto L_0898AA04;
    return;
L_0898AA04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0898AA30;
      }
      goto L_0898AA0C;
    }
L_0898AA0C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(968));
    ctx.gpr[5] = (0u | 178u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 162u);
    ctx.gpr[31] = (0x0898AA24u);
    ctx.gpr[8] = (0u | 180u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898AA24u) goto L_0898AA24;
    return;
L_0898AA24:
    ctx.gpr[31] = (0x0898AA2Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898AA2Cu) goto L_0898AA2C;
    return;
L_0898AA2C:
    ctx.gpr[4] = (2229u << 16u);
    goto L_0898AA30;
L_0898AA30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27344)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[4] = (17382u << 16u);
    ctx.gpr[6] = (17122u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 32768u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5136));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[31] = (0x0898AA90u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898AA90u) goto L_0898AA90;
    return;
L_0898AA90:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898AAD0;
      }
      goto L_0898AAA0;
    }
L_0898AAA0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0898AAACu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0898AAACu) goto L_0898AAAC;
    return;
L_0898AAAC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898AAC4;
      }
      goto L_0898AAB8;
    }
L_0898AAB8:
    ctx.gpr[31] = (0x0898AAC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0898AAC0u) goto L_0898AAC0;
    return;
L_0898AAC0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0898AAC4;
L_0898AAC4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898AAD0;
L_0898AAD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0898AB04u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 124u, 0x08844A48u>(ctx, &aot_mem) && ctx.pc == 0x0898AB04u) goto L_0898AB04;
    return;
L_0898AB04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898AB10u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898AB10u) goto L_0898AB10;
    return;
L_0898AB10:
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32128)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898AB38;
      }
      goto L_0898AB24;
    }
L_0898AB24:
    ctx.gpr[5] = (0u | 100u);
    ctx.gpr[6] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-24596), ctx.gpr[5]);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32128), ctx.gpr[4]);
    goto L_0898AB38;
L_0898AB38:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24596)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898ABCC;
      }
      goto L_0898AB48;
    }
L_0898AB48:
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-24596)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5136));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898AB6Cu);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-24596), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 25u, 0x08A54264u>(ctx, &aot_mem) && ctx.pc == 0x0898AB6Cu) goto L_0898AB6C;
    return;
L_0898AB6C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[6] = (17162u << 16u);
    ctx.gpr[4] = (17382u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[31] = (0x0898ABCCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898ABCCu) goto L_0898ABCC;
    return;
L_0898ABCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898ABDC;
      }
      goto L_0898ABD4;
    }
L_0898ABD4:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24596), 0u);
    goto L_0898ABDC;
L_0898ABDC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6808)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B304;
      }
      goto L_0898ABEC;
    }
L_0898ABEC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6808)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7628)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898AD20;
      }
      goto L_0898AC04;
    }
L_0898AC04:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7632)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898AD10;
      }
      goto L_0898AC18;
    }
L_0898AC18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7632)));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898ACA4;
      }
      goto L_0898AC28;
    }
L_0898AC28:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898ACC0;
      }
      goto L_0898AC30;
    }
L_0898AC30:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898ACDC;
      }
      goto L_0898AC38;
    }
L_0898AC38:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0898ACF8;
      }
      goto L_0898AC40;
    }
L_0898AC40:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7632), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6148), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6144), 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6808)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6156), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6836)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898AC90;
      }
      goto L_0898AC80;
    }
L_0898AC80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6836)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898AC9C;
      }
      goto L_0898AC90;
    }
L_0898AC90:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6836), ctx.gpr[4]);
    goto L_0898AC9C;
L_0898AC9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898AD10;
      }
      goto L_0898ACA4;
    }
L_0898ACA4:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7632), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6148), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898AD10;
      }
      goto L_0898ACC0;
    }
L_0898ACC0:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7632), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6148), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898AD10;
      }
      goto L_0898ACDC;
    }
L_0898ACDC:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7632), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6148), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898AD10;
      }
      goto L_0898ACF8;
    }
L_0898ACF8:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7632), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6148), ctx.gpr[4]);
    goto L_0898AD10;
L_0898AD10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6808)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7628), ctx.gpr[4]);
    goto L_0898AD20;
L_0898AD20:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7632)));
    ctx.gpr[5] = (17279u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0898B304;
      }
      goto L_0898AD34;
    }
L_0898AD34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7632)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898AD64;
      }
      goto L_0898AD48;
    }
L_0898AD48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898B0F8;
      }
      goto L_0898AD50;
    }
L_0898AD50:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B0A8;
      }
      goto L_0898AD58;
    }
L_0898AD58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898AD80;
      }
      goto L_0898AD60;
    }
L_0898AD60:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    goto L_0898AD64;
L_0898AD64:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898AE90;
      }
      goto L_0898AD6C;
    }
L_0898AD6C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898AF94;
      }
      goto L_0898AD74;
    }
L_0898AD74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B0F8;
      }
      goto L_0898AD7C;
    }
L_0898AD7C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898AD80;
L_0898AD80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6144)));
      if (branch_taken) {
          goto L_0898ADE4;
      }
      goto L_0898ADB8;
    }
L_0898ADB8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898AE20;
      }
      goto L_0898ADE4;
    }
L_0898ADE4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_0898AE20;
L_0898AE20:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6144), ctx.gpr[4]);
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898AE68;
      }
      goto L_0898AE4C;
    }
L_0898AE4C:
    ctx.gpr[4] = (0u | 1000u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6144), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7632), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898AE68;
L_0898AE68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6144)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0898B0F8;
      }
      goto L_0898AE90;
    }
L_0898AE90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6144)));
      if (branch_taken) {
          goto L_0898AEF8;
      }
      goto L_0898AECC;
    }
L_0898AECC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898AF34;
      }
      goto L_0898AEF8;
    }
L_0898AEF8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_0898AF34;
L_0898AF34:
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6144), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898AF68;
      }
      goto L_0898AF58;
    }
L_0898AF58:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6144), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7632), 0u);
    goto L_0898AF68;
L_0898AF68:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6144)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0898B0F8;
      }
      goto L_0898AF94;
    }
L_0898AF94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6144)));
      if (branch_taken) {
          goto L_0898AFF8;
      }
      goto L_0898AFCC;
    }
L_0898AFCC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898B034;
      }
      goto L_0898AFF8;
    }
L_0898AFF8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_0898B034;
L_0898B034:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6144), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898B07C;
      }
      goto L_0898B058;
    }
L_0898B058:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6144), 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7632), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7628)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6156), ctx.gpr[4]);
    goto L_0898B07C;
L_0898B07C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6144)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0898B0F8;
      }
      goto L_0898B0A8;
    }
L_0898B0A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6148)));
    ctx.gpr[5] = (0u | 1000u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6144), ctx.gpr[5]);
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898B0F8;
      }
      goto L_0898B0E0;
    }
L_0898B0E0:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7632), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1000u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6144), ctx.gpr[4]);
    goto L_0898B0F8;
L_0898B0F8:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-9280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0898B2F8;
      }
      goto L_0898B108;
    }
L_0898B108:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0898B2F8;
      }
      goto L_0898B124;
    }
L_0898B124:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0898B2F8;
      }
      goto L_0898B140;
    }
L_0898B140:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4880));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B2F8;
      }
      goto L_0898B15C;
    }
L_0898B15C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6148)));
      if (branch_taken) {
          goto L_0898B1C0;
      }
      goto L_0898B194;
    }
L_0898B194:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898B1FC;
      }
      goto L_0898B1C0;
    }
L_0898B1C0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_0898B1FC;
L_0898B1FC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x0898B20Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6148), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x0898B20Cu) goto L_0898B20C;
    return;
L_0898B20C:
    ctx.gpr[31] = (0x0898B214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898B214u) goto L_0898B214;
    return;
L_0898B214:
    ctx.gpr[31] = (0x0898B21Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x0898B21Cu) goto L_0898B21C;
    return;
L_0898B21C:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0898B238u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898B238u) goto L_0898B238;
    return;
L_0898B238:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0898B24Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B24Cu) goto L_0898B24C;
    return;
L_0898B24C:
    ctx.gpr[31] = (0x0898B254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x0898B254u) goto L_0898B254;
    return;
L_0898B254:
    ctx.gpr[31] = (0x0898B25Cu);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B25Cu) goto L_0898B25C;
    return;
L_0898B25C:
    ctx.gpr[31] = (0x0898B264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55020u>(ctx, &aot_mem) && ctx.pc == 0x0898B264u) goto L_0898B264;
    return;
L_0898B264:
    ctx.gpr[31] = (0x0898B26Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B26Cu) goto L_0898B26C;
    return;
L_0898B26C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(972));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[8] & 255u);
    ctx.gpr[31] = (0x0898B294u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898B294u) goto L_0898B294;
    return;
L_0898B294:
    ctx.gpr[31] = (0x0898B29Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0898B29Cu) goto L_0898B29C;
    return;
L_0898B29C:
    ctx.gpr[31] = (0x0898B2A4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898B2A4u) goto L_0898B2A4;
    return;
L_0898B2A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0898B2BCu);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898B2BCu) goto L_0898B2BC;
    return;
L_0898B2BC:
    ctx.gpr[31] = (0x0898B2C4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898B2C4u) goto L_0898B2C4;
    return;
L_0898B2C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6536)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B2F0;
      }
      goto L_0898B2D4;
    }
L_0898B2D4:
    ctx.gpr[5] = (17387u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (17286u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6156)));
    ctx.gpr[31] = (0x0898B2F0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 79u, 0x08A545A4u>(ctx, &aot_mem) && ctx.pc == 0x0898B2F0u) goto L_0898B2F0;
    return;
L_0898B2F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B304;
      }
      goto L_0898B2F8;
    }
L_0898B2F8:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7632), ctx.gpr[4]);
    goto L_0898B304;
L_0898B304:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6116)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B334;
      }
      goto L_0898B314;
    }
L_0898B314:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6836), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6108), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104), 0u);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6112), 0u);
      if (branch_taken) {
          goto L_0898B974;
      }
      goto L_0898B334;
    }
L_0898B334:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6116)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6112)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898B410;
      }
      goto L_0898B34C;
    }
L_0898B34C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6836)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B400;
      }
      goto L_0898B360;
    }
L_0898B360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6836)));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898B3EC;
      }
      goto L_0898B370;
    }
L_0898B370:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898B3EC;
      }
      goto L_0898B378;
    }
L_0898B378:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898B3EC;
      }
      goto L_0898B380;
    }
L_0898B380:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0898B3EC;
      }
      goto L_0898B388;
    }
L_0898B388:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6836), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6108), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104), 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6116)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6100), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7632)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B3D8;
      }
      goto L_0898B3C8;
    }
L_0898B3C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7632)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898B3E4;
      }
      goto L_0898B3D8;
    }
L_0898B3D8:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7632), ctx.gpr[4]);
    goto L_0898B3E4;
L_0898B3E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B400;
      }
      goto L_0898B3EC;
    }
L_0898B3EC:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6836), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6108), 0u);
    goto L_0898B400;
L_0898B400:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6116)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6112), ctx.gpr[4]);
    goto L_0898B410;
L_0898B410:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B974;
      }
      goto L_0898B420;
    }
L_0898B420:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6836)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898B450;
      }
      goto L_0898B434;
    }
L_0898B434:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898B7BC;
      }
      goto L_0898B43C;
    }
L_0898B43C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B774;
      }
      goto L_0898B444;
    }
L_0898B444:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B46C;
      }
      goto L_0898B44C;
    }
L_0898B44C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    goto L_0898B450;
L_0898B450:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898B57C;
      }
      goto L_0898B458;
    }
L_0898B458:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B66C;
      }
      goto L_0898B460;
    }
L_0898B460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B7BC;
      }
      goto L_0898B468;
    }
L_0898B468:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898B46C;
L_0898B46C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6104)));
      if (branch_taken) {
          goto L_0898B4D0;
      }
      goto L_0898B4A4;
    }
L_0898B4A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898B50C;
      }
      goto L_0898B4D0;
    }
L_0898B4D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_0898B50C;
L_0898B50C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6104), ctx.gpr[4]);
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B554;
      }
      goto L_0898B538;
    }
L_0898B538:
    ctx.gpr[4] = (0u | 1000u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6104), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6836), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898B554;
L_0898B554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0898B7BC;
      }
      goto L_0898B57C;
    }
L_0898B57C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6104)));
      if (branch_taken) {
          goto L_0898B5E4;
      }
      goto L_0898B5B8;
    }
L_0898B5B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898B620;
      }
      goto L_0898B5E4;
    }
L_0898B5E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_0898B620;
L_0898B620:
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6104), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898B640;
      }
      goto L_0898B630;
    }
L_0898B630:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6836), 0u);
    goto L_0898B640;
L_0898B640:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0898B7BC;
      }
      goto L_0898B66C;
    }
L_0898B66C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104)));
      if (branch_taken) {
          goto L_0898B6D0;
      }
      goto L_0898B6A4;
    }
L_0898B6A4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898B70C;
      }
      goto L_0898B6D0;
    }
L_0898B6D0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_0898B70C;
L_0898B70C:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6104), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898B748;
      }
      goto L_0898B71C;
    }
L_0898B71C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6108), 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6836), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6112)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6100), ctx.gpr[4]);
    goto L_0898B748;
L_0898B748:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6104)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0898B7BC;
      }
      goto L_0898B774;
    }
L_0898B774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6108)));
    ctx.gpr[5] = (17948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898B7B4;
      }
      goto L_0898B79C;
    }
L_0898B79C:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6836), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1000u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6104), ctx.gpr[4]);
    goto L_0898B7B4;
L_0898B7B4:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0898B7BC;
L_0898B7BC:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-9280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898B974;
      }
      goto L_0898B7CC;
    }
L_0898B7CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6108)));
      if (branch_taken) {
          goto L_0898B830;
      }
      goto L_0898B804;
    }
L_0898B804:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898B86C;
      }
      goto L_0898B830;
    }
L_0898B830:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_0898B86C;
L_0898B86C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x0898B87Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6108), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x0898B87Cu) goto L_0898B87C;
    return;
L_0898B87C:
    ctx.gpr[31] = (0x0898B884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898B884u) goto L_0898B884;
    return;
L_0898B884:
    ctx.gpr[31] = (0x0898B88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x0898B88Cu) goto L_0898B88C;
    return;
L_0898B88C:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0898B8A8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898B8A8u) goto L_0898B8A8;
    return;
L_0898B8A8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0898B8BCu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B8BCu) goto L_0898B8BC;
    return;
L_0898B8BC:
    ctx.gpr[4] = (17387u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0898B8D8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 199u, 0x08A54E1Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B8D8u) goto L_0898B8D8;
    return;
L_0898B8D8:
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x0898B8E4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 198u, 0x08A54E0Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B8E4u) goto L_0898B8E4;
    return;
L_0898B8E4:
    ctx.gpr[31] = (0x0898B8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x0898B8ECu) goto L_0898B8EC;
    return;
L_0898B8EC:
    ctx.gpr[31] = (0x0898B8F4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B8F4u) goto L_0898B8F4;
    return;
L_0898B8F4:
    ctx.gpr[31] = (0x0898B8FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55020u>(ctx, &aot_mem) && ctx.pc == 0x0898B8FCu) goto L_0898B8FC;
    return;
L_0898B8FC:
    ctx.gpr[31] = (0x0898B904u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x0898B904u) goto L_0898B904;
    return;
L_0898B904:
    ctx.gpr[31] = (0x0898B90Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B90Cu) goto L_0898B90C;
    return;
L_0898B90C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0898B928u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898B928u) goto L_0898B928;
    return;
L_0898B928:
    ctx.gpr[31] = (0x0898B930u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898B930u) goto L_0898B930;
    return;
L_0898B930:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0898B950u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898B950u) goto L_0898B950;
    return;
L_0898B950:
    ctx.gpr[31] = (0x0898B958u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x0898B958u) goto L_0898B958;
    return;
L_0898B958:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6100)));
    ctx.gpr[31] = (0x0898B96Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 79u, 0x08A545A4u>(ctx, &aot_mem) && ctx.pc == 0x0898B96Cu) goto L_0898B96C;
    return;
L_0898B96C:
    ctx.gpr[31] = (0x0898B974u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 198u, 0x08A54E0Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B974u) goto L_0898B974;
    return;
L_0898B974:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6516)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898B9A4;
      }
      goto L_0898B988;
    }
L_0898B988:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898B994u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 583u, 0x08ADA6B0u>(ctx, &aot_mem) && ctx.pc == 0x0898B994u) goto L_0898B994;
    return;
L_0898B994:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B9A4;
      }
      goto L_0898B99C;
    }
L_0898B99C:
    ctx.gpr[31] = (0x0898B9A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 638u, 0x08987C10u>(ctx, &aot_mem) && ctx.pc == 0x0898B9A4u) goto L_0898B9A4;
    return;
L_0898B9A4:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0898BBBC;
      }
      goto L_0898B9B8;
    }
L_0898B9B8:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    goto L_0898B9BC;
L_0898B9BC:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[21] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(74)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898BBA8;
      }
      goto L_0898B9EC;
    }
L_0898B9EC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6172));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BA1C;
      }
      goto L_0898BA04;
    }
L_0898BA04:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6168));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_0898BA1C;
L_0898BA1C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6172));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6168));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898BA88;
      }
      goto L_0898BA4C;
    }
L_0898BA4C:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 51 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BA88;
      }
      goto L_0898BA74;
    }
L_0898BA74:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_0898BA88;
L_0898BA88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898BAB4;
      }
      goto L_0898BA9C;
    }
L_0898BA9C:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BB94;
      }
      goto L_0898BAB4;
    }
L_0898BAB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BB94;
      }
      goto L_0898BAC0;
    }
L_0898BAC0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0898BB00;
      }
      goto L_0898BAD0;
    }
L_0898BAD0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0898BADCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0898BADCu) goto L_0898BADC;
    return;
L_0898BADC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BAF4;
      }
      goto L_0898BAE8;
    }
L_0898BAE8:
    ctx.gpr[31] = (0x0898BAF0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0898BAF0u) goto L_0898BAF0;
    return;
L_0898BAF0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0898BAF4;
L_0898BAF4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0898BB00;
L_0898BB00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0898BB0Cu);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898BB0Cu) goto L_0898BB0C;
    return;
L_0898BB0C:
    ctx.gpr[31] = (0x0898BB14u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 512u, 0x08987034u>(ctx, &aot_mem) && ctx.pc == 0x0898BB14u) goto L_0898BB14;
    return;
L_0898BB14:
    ctx.gpr[31] = (0x0898BB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898BB1Cu) goto L_0898BB1C;
    return;
L_0898BB1C:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(980));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x0898BB38u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898BB38u) goto L_0898BB38;
    return;
L_0898BB38:
    ctx.gpr[31] = (0x0898BB40u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898BB40u) goto L_0898BB40;
    return;
L_0898BB40:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16322u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51289u);
    ctx.gpr[31] = (0x0898BB5Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0898BB5Cu) goto L_0898BB5C;
    return;
L_0898BB5C:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17386u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0898BB94u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898BB94u) goto L_0898BB94;
    return;
L_0898BB94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BBA8;
      }
      goto L_0898BBA0;
    }
L_0898BBA0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    goto L_0898BBA8;
L_0898BBA8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_0898B9BC;
      }
      goto L_0898BBBC;
    }
L_0898BBBC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0898BBE0;
      }
      goto L_0898BBD0;
    }
L_0898BBD0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BBE8;
      }
      goto L_0898BBE0;
    }
L_0898BBE0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6162), static_cast<std::uint8_t>(0u));
    goto L_0898BBE8;
L_0898BBE8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BC48;
      }
      goto L_0898BBF8;
    }
L_0898BBF8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    goto L_0898BBFC;
L_0898BBFC:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(9096));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(142)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BC34;
      }
      goto L_0898BC24;
    }
L_0898BC24:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6172));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0898BC34;
L_0898BC34:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898BBFC;
      }
      goto L_0898BC48;
    }
L_0898BC48:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9096));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(332)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 26u, 0x0898C1F4u>(ctx, &aot_mem); return;
      }
      goto L_0898BC60;
    }
L_0898BC60:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(9096));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898BE54;
      }
      goto L_0898BC78;
    }
L_0898BC78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BE54;
      }
      goto L_0898BC84;
    }
L_0898BC84:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6162)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BCA0;
      }
      goto L_0898BC94;
    }
L_0898BC94:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-6160), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0898BCA0;
L_0898BCA0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6162), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898BCCC;
      }
      goto L_0898BCC0;
    }
L_0898BCC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6160))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BE20;
      }
      goto L_0898BCCC;
    }
L_0898BCCC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(14));
    ctx.gpr[31] = (0x0898BCDCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x0898BCDCu) goto L_0898BCDC;
    return;
L_0898BCDC:
    ctx.gpr[31] = (0x0898BCE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 512u, 0x08987034u>(ctx, &aot_mem) && ctx.pc == 0x0898BCE4u) goto L_0898BCE4;
    return;
L_0898BCE4:
    ctx.gpr[31] = (0x0898BCECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 226u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x0898BCECu) goto L_0898BCEC;
    return;
L_0898BCEC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(61)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(62)));
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(984));
    ctx.gpr[31] = (0x0898BD08u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-24628)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898BD08u) goto L_0898BD08;
    return;
L_0898BD08:
    ctx.gpr[31] = (0x0898BD10u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898BD10u) goto L_0898BD10;
    return;
L_0898BD10:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17386u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0898BD48u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898BD48u) goto L_0898BD48;
    return;
L_0898BD48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BE20;
      }
      goto L_0898BD54;
    }
L_0898BD54:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0898BD94;
      }
      goto L_0898BD64;
    }
L_0898BD64:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0898BD70u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0898BD70u) goto L_0898BD70;
    return;
L_0898BD70:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BD88;
      }
      goto L_0898BD7C;
    }
L_0898BD7C:
    ctx.gpr[31] = (0x0898BD84u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0898BD84u) goto L_0898BD84;
    return;
L_0898BD84:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_0898BD88;
L_0898BD88:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0898BD94;
L_0898BD94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0898BDA0u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898BDA0u) goto L_0898BDA0;
    return;
L_0898BDA0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.gpr[31] = (0x0898BDB0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x0898BDB0u) goto L_0898BDB0;
    return;
L_0898BDB0:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0898BDC0u);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x0898BDC0u) goto L_0898BDC0;
    return;
L_0898BDC0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(61)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(62)));
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(988));
    ctx.gpr[31] = (0x0898BDDCu);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-24628)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898BDDCu) goto L_0898BDDC;
    return;
L_0898BDDC:
    ctx.gpr[31] = (0x0898BDE4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898BDE4u) goto L_0898BDE4;
    return;
L_0898BDE4:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (17386u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0898BE20u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898BE20u) goto L_0898BE20;
    return;
L_0898BE20:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6160))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898BE54;
      }
      goto L_0898BE30;
    }
L_0898BE30:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6160))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6160), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6160))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 51 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BE54;
      }
      goto L_0898BE4C;
    }
L_0898BE4C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6160), static_cast<std::uint16_t>(0u));
    goto L_0898BE54;
L_0898BE54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898BE6C;
      }
      goto L_0898BE64;
    }
L_0898BE64:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    goto L_0898BE6C;
L_0898BE6C:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 26u, 0x0898C1F4u>(ctx, &aot_mem); return;
      }
      goto L_0898BE7C;
    }
L_0898BE7C:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    goto L_0898BE80;
L_0898BE80:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[21] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(74)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 25u, 0x0898C1E0u>(ctx, &aot_mem); return;
      }
      goto L_0898BEB0;
    }
L_0898BEB0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898BEE8;
      }
      goto L_0898BEC4;
    }
L_0898BEC4:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BEE8;
      }
      goto L_0898BEDC;
    }
L_0898BEDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 24u, 0x0898C1D8u>(ctx, &aot_mem); return;
      }
      goto L_0898BEE8;
    }
L_0898BEE8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BF90;
      }
      goto L_0898BEF4;
    }
L_0898BEF4:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0898BF04u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x0898BF04u) goto L_0898BF04;
    return;
L_0898BF04:
    ctx.gpr[31] = (0x0898BF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 512u, 0x08987034u>(ctx, &aot_mem) && ctx.pc == 0x0898BF0Cu) goto L_0898BF0C;
    return;
L_0898BF0C:
    ctx.gpr[31] = (0x0898BF14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 226u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x0898BF14u) goto L_0898BF14;
    return;
L_0898BF14:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(77)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(78)));
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[31] = (0x0898BF30u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-24628)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0898BF30u) goto L_0898BF30;
    return;
L_0898BF30:
    ctx.gpr[31] = (0x0898BF38u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x0898BF38u) goto L_0898BF38;
    return;
L_0898BF38:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0898BF44u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x0898BF44u) goto L_0898BF44;
    return;
L_0898BF44:
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[6] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17386u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0898BF88u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0898BF88u) goto L_0898BF88;
    return;
L_0898BF88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 10u, 0x0898C100u>(ctx, &aot_mem); return;
      }
      goto L_0898BF90;
    }
L_0898BF90:
    ctx.gpr[31] = (0x0898BF98u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 226u, 0x08AECB54u>(ctx, &aot_mem) && ctx.pc == 0x0898BF98u) goto L_0898BF98;
    return;
L_0898BF98:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[2] << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16688u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(996));
    ctx.gpr[4] = (17362u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[24] = ctx.fpr[22] + ctx.fpr[14];
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17386u << 16u);
    ctx.pc = 0x0898C000u; return;
}

void recomp_unit_0097(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0097_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_97(Runtime &runtime) {
    runtime.register_generated_unit(97u, 0x08988000u, 16384u, &recomp_unit_0097, &recomp_unit_0097_entry);
    runtime.register_function(0x08988000u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988020u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988040u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898804Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988078u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089880C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089880D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089880E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089880F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988104u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988118u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988130u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988138u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988140u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988160u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988168u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089881CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089881D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089881E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089881E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988224u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988250u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988258u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089882C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089882C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089882D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988308u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988314u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988320u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988330u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898833Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988344u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898834Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988384u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898839Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089883ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089883CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089883DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089883ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089883F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988404u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988414u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898846Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898847Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089884A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089884CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089884D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988514u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898851Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988524u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089885A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089885B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089885C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089885F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988614u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988680u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988694u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898870Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988720u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988724u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988734u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988748u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898874Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898875Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988774u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988778u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988788u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089887A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089887A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089887E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089887FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898890Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988940u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988994u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089889B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089889C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089889CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089889D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089889F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988A04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988A14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988A7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988AB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988AE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988BB0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988BB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988BC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988BC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988BD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988BE0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988BECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C08u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C28u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988CA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988CD0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988CD8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988DBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988DC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988DC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988DF8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988EBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988EC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988EF0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F40u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988FA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988FD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988FF0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989024u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898902Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989038u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989044u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989050u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898905Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989070u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989108u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989114u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989120u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989128u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898915Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089891A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089891BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089891F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089891F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898922Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989260u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898926Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989278u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989284u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989290u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089892A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898933Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989348u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989354u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898935Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989380u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089893A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089893ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089893B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089893DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989408u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989440u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989460u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089894A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089894C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089894DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989518u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989538u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989554u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989584u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898959Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089895B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089895E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089895F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989618u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989648u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898966Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989678u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989684u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989690u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898969Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898971Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989730u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989774u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989790u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089897D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898980Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989818u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989824u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989830u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898983Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989844u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898984Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989854u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989860u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989898u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989910u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989920u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898992Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989934u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898993Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989940u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989998u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989AA8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989ABCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989AE0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989AE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B68u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989BD0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989BDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989CC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989CF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989CFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D18u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D28u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D98u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DF8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E08u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E10u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E40u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E98u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989EBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F18u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F5Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989FACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989FB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989FE0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989FE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989FF0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A000u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A020u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A028u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A034u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A050u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A05Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A078u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A080u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A098u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A10Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A118u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A150u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A15Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A16Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A174u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A18Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A194u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A19Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A20Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A210u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A220u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A26Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A27Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A280u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A2C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A310u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A320u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A32Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A334u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A374u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A37Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A390u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A418u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A430u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A484u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A490u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A49Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A4A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A4D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A518u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A52Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A530u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A570u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A580u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A58Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A59Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A608u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A610u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A61Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A660u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A670u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A688u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A690u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A69Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A744u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A784u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A78Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A794u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A7DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A7F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A804u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A810u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A818u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A81Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A824u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A838u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A840u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A894u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A89Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A900u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A944u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A958u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A960u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A978u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A980u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A988u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A990u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A998u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA2Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAD0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB10u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABCCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC18u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC28u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC40u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACF8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD10u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADE4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE68u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AECCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AEF8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF68u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFCCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFF8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B034u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B058u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B07Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B0A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B0E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B0F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B108u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B124u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B140u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B15Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B194u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B20Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B214u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B21Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B238u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B24Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B254u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B25Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B264u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B26Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B294u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B29Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B304u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B314u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B334u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B34Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B360u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B370u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B378u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B380u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B388u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B3C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B3D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B3E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B3ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B400u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B410u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B420u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B434u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B43Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B444u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B44Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B450u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B458u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B460u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B468u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B46Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B50Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B538u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B554u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B57Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B5B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B5E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B620u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B630u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B640u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B66Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B6A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B6D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B70Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B71Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B748u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B774u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B79Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B7B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B7BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B7CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B804u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B830u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B86Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B87Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B884u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B88Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B904u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B90Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B928u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B930u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B950u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B958u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B96Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B974u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B988u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B994u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B99Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BAB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BAC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BAD0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BADCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BAE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BAF0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BAF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB40u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB5Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBA8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBD0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBE0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBF8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCCCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCE4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD08u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD10u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDB0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDE4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEB0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF98u, &recomp_unit_0097, "recomp_unit_0097");
}
} // namespace psprecomp
