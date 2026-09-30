#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0195[3944] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11,
    12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28,
    0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0,
    36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 42,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0,
    64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 83, 84, 0, 0, 85, 0, 86, 0, 87, 88, 0, 89, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 101, 0, 102, 0, 103, 104, 0,
    0, 105, 0, 106, 0, 0, 107, 0, 0, 0, 108, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    112, 0, 113, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 137, 0, 0, 0, 0, 0, 138, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 151,
    0, 152, 153, 154, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 167, 0,
    168, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185,
    0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 190, 0, 0, 191, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 197, 0, 198, 0, 0, 0, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0,
    0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219,
    220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 225,
    0, 226, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 234, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0,
    0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 240, 0, 241, 0, 242, 0, 243, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252,
    0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268,
    0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283, 0, 284,
    0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300,
    0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 316, 0,
    317, 0, 318, 0, 319, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332, 0,
    333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348,
    0, 349, 0, 350, 0, 351, 0, 352, 0, 353, 0, 354, 0, 355, 0, 0, 356, 0, 357, 0, 358, 0, 359, 0, 0, 360, 0, 361, 0, 362, 0, 363,
    0, 364, 0, 365, 0, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373, 0, 0, 374, 0, 375, 0, 0, 376, 0, 0, 0,
    0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 380, 0, 0, 381, 382, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 387, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0,
    394, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0, 398, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0,
    402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0,
    0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0,
    0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432,
    0, 433, 0, 434, 0, 435, 436, 0, 437, 0, 438, 439, 0, 440, 0, 0, 0, 441, 442, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0,
    0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 453, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0,
    0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0,
    0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 466, 0, 467, 0, 468, 0, 0,
    469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 477,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 479, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 485, 0, 486, 0, 0, 0,
    0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0,
    0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0,
    501, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0,
    510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515, 0, 516, 0, 0, 517, 0, 518, 0, 0, 519, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522,
    0, 523, 0, 524, 0, 525, 0, 526, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0,
    536, 0, 537, 0, 538, 0, 539, 540,
};
void recomp_unit_0195_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B10000u;
        entry_id = (entry_delta < 15776u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0195[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B10000;
    case 2u: goto L_08B10008;
    case 3u: goto L_08B10038;
    case 4u: goto L_08B10060;
    case 5u: goto L_08B10084;
    case 6u: goto L_08B1008C;
    case 7u: goto L_08B10094;
    case 8u: goto L_08B100BC;
    case 9u: goto L_08B100C4;
    case 10u: goto L_08B100DC;
    case 11u: goto L_08B100FC;
    case 12u: goto L_08B10100;
    case 13u: goto L_08B10104;
    case 14u: goto L_08B10108;
    case 15u: goto L_08B1010C;
    case 16u: goto L_08B10110;
    case 17u: goto L_08B10114;
    case 18u: goto L_08B10118;
    case 19u: goto L_08B1011C;
    case 20u: goto L_08B10120;
    case 21u: goto L_08B10124;
    case 22u: goto L_08B10148;
    case 23u: goto L_08B10154;
    case 24u: goto L_08B10A94;
    case 25u: goto L_08B10BF8;
    case 26u: goto L_08B10F18;
    case 27u: goto L_08B10F6C;
    case 28u: goto L_08B10F7C;
    case 29u: goto L_08B10F90;
    case 30u: goto L_08B10F98;
    case 31u: goto L_08B10FB0;
    case 32u: goto L_08B10FCC;
    case 33u: goto L_08B10FD8;
    case 34u: goto L_08B10FF0;
    case 35u: goto L_08B10FF8;
    case 36u: goto L_08B11000;
    case 37u: goto L_08B11010;
    case 38u: goto L_08B11020;
    case 39u: goto L_08B11030;
    case 40u: goto L_08B1105C;
    case 41u: goto L_08B11064;
    case 42u: goto L_08B1107C;
    case 43u: goto L_08B11094;
    case 44u: goto L_08B110CC;
    case 45u: goto L_08B110EC;
    case 46u: goto L_08B1111C;
    case 47u: goto L_08B11140;
    case 48u: goto L_08B1114C;
    case 49u: goto L_08B1116C;
    case 50u: goto L_08B11188;
    case 51u: goto L_08B11194;
    case 52u: goto L_08B111D0;
    case 53u: goto L_08B111F0;
    case 54u: goto L_08B11210;
    case 55u: goto L_08B11218;
    case 56u: goto L_08B11238;
    case 57u: goto L_08B1125C;
    case 58u: goto L_08B1127C;
    case 59u: goto L_08B112AC;
    case 60u: goto L_08B112C0;
    case 61u: goto L_08B112C8;
    case 62u: goto L_08B112DC;
    case 63u: goto L_08B112F8;
    case 64u: goto L_08B11300;
    case 65u: goto L_08B11314;
    case 66u: goto L_08B11328;
    case 67u: goto L_08B11330;
    case 68u: goto L_08B11338;
    case 69u: goto L_08B1134C;
    case 70u: goto L_08B1135C;
    case 71u: goto L_08B11364;
    case 72u: goto L_08B11390;
    case 73u: goto L_08B113B8;
    case 74u: goto L_08B113E0;
    case 75u: goto L_08B113F8;
    case 76u: goto L_08B11420;
    case 77u: goto L_08B1142C;
    case 78u: goto L_08B11444;
    case 79u: goto L_08B11470;
    case 80u: goto L_08B11478;
    case 81u: goto L_08B114C0;
    case 82u: goto L_08B11510;
    case 83u: goto L_08B11518;
    case 84u: goto L_08B1151C;
    case 85u: goto L_08B11528;
    case 86u: goto L_08B11530;
    case 87u: goto L_08B11538;
    case 88u: goto L_08B1153C;
    case 89u: goto L_08B11544;
    case 90u: goto L_08B1154C;
    case 91u: goto L_08B1155C;
    case 92u: goto L_08B11570;
    case 93u: goto L_08B11578;
    case 94u: goto L_08B11590;
    case 95u: goto L_08B115A4;
    case 96u: goto L_08B115B0;
    case 97u: goto L_08B115B8;
    case 98u: goto L_08B115C0;
    case 99u: goto L_08B115D0;
    case 100u: goto L_08B115DC;
    case 101u: goto L_08B115E4;
    case 102u: goto L_08B115EC;
    case 103u: goto L_08B115F4;
    case 104u: goto L_08B115F8;
    case 105u: goto L_08B11604;
    case 106u: goto L_08B1160C;
    case 107u: goto L_08B11618;
    case 108u: goto L_08B11628;
    case 109u: goto L_08B1162C;
    case 110u: goto L_08B11648;
    case 111u: goto L_08B11678;
    case 112u: goto L_08B11680;
    case 113u: goto L_08B11688;
    case 114u: goto L_08B116A0;
    case 115u: goto L_08B116A8;
    case 116u: goto L_08B116B0;
    case 117u: goto L_08B116B8;
    case 118u: goto L_08B116D4;
    case 119u: goto L_08B11704;
    case 120u: goto L_08B11734;
    case 121u: goto L_08B11770;
    case 122u: goto L_08B11798;
    case 123u: goto L_08B117D0;
    case 124u: goto L_08B11834;
    case 125u: goto L_08B11868;
    case 126u: goto L_08B11884;
    case 127u: goto L_08B118A4;
    case 128u: goto L_08B118A8;
    case 129u: goto L_08B118D0;
    case 130u: goto L_08B11900;
    case 131u: goto L_08B11924;
    case 132u: goto L_08B1194C;
    case 133u: goto L_08B11970;
    case 134u: goto L_08B1198C;
    case 135u: goto L_08B119B8;
    case 136u: goto L_08B119E0;
    case 137u: goto L_08B11A08;
    case 138u: goto L_08B11A20;
    case 139u: goto L_08B11A24;
    case 140u: goto L_08B11A40;
    case 141u: goto L_08B11A6C;
    case 142u: goto L_08B11AAC;
    case 143u: goto L_08B11AB8;
    case 144u: goto L_08B11AE0;
    case 145u: goto L_08B11B08;
    case 146u: goto L_08B11B28;
    case 147u: goto L_08B11B30;
    case 148u: goto L_08B11B44;
    case 149u: goto L_08B11B58;
    case 150u: goto L_08B11B68;
    case 151u: goto L_08B11B7C;
    case 152u: goto L_08B11B84;
    case 153u: goto L_08B11B88;
    case 154u: goto L_08B11B8C;
    case 155u: goto L_08B11B98;
    case 156u: goto L_08B11BA0;
    case 157u: goto L_08B11BC8;
    case 158u: goto L_08B11BD4;
    case 159u: goto L_08B11C04;
    case 160u: goto L_08B11C0C;
    case 161u: goto L_08B11C14;
    case 162u: goto L_08B11C28;
    case 163u: goto L_08B11C38;
    case 164u: goto L_08B11C4C;
    case 165u: goto L_08B11C58;
    case 166u: goto L_08B11C60;
    case 167u: goto L_08B11C78;
    case 168u: goto L_08B11C80;
    case 169u: goto L_08B11C94;
    case 170u: goto L_08B11C9C;
    case 171u: goto L_08B11CA4;
    case 172u: goto L_08B11CAC;
    case 173u: goto L_08B11CB4;
    case 174u: goto L_08B11CBC;
    case 175u: goto L_08B11CC4;
    case 176u: goto L_08B11CCC;
    case 177u: goto L_08B11CE8;
    case 178u: goto L_08B11CF8;
    case 179u: goto L_08B11D10;
    case 180u: goto L_08B11D20;
    case 181u: goto L_08B11D3C;
    case 182u: goto L_08B11D4C;
    case 183u: goto L_08B11D5C;
    case 184u: goto L_08B11D6C;
    case 185u: goto L_08B11D7C;
    case 186u: goto L_08B11D8C;
    case 187u: goto L_08B11D9C;
    case 188u: goto L_08B11DB0;
    case 189u: goto L_08B11DDC;
    case 190u: goto L_08B11DE0;
    case 191u: goto L_08B11DEC;
    case 192u: goto L_08B11E08;
    case 193u: goto L_08B11E28;
    case 194u: goto L_08B11E30;
    case 195u: goto L_08B11E44;
    case 196u: goto L_08B11E60;
    case 197u: goto L_08B11E64;
    case 198u: goto L_08B11E6C;
    case 199u: goto L_08B11E8C;
    case 200u: goto L_08B11EA8;
    case 201u: goto L_08B11EC0;
    case 202u: goto L_08B11ECC;
    case 203u: goto L_08B11ED4;
    case 204u: goto L_08B11EE8;
    case 205u: goto L_08B11F08;
    case 206u: goto L_08B11F20;
    case 207u: goto L_08B11F38;
    case 208u: goto L_08B11F40;
    case 209u: goto L_08B11FE8;
    case 210u: goto L_08B1200C;
    case 211u: goto L_08B12028;
    case 212u: goto L_08B1204C;
    case 213u: goto L_08B12068;
    case 214u: goto L_08B12090;
    case 215u: goto L_08B120A0;
    case 216u: goto L_08B120C4;
    case 217u: goto L_08B120D8;
    case 218u: goto L_08B120E8;
    case 219u: goto L_08B120FC;
    case 220u: goto L_08B12100;
    case 221u: goto L_08B12118;
    case 222u: goto L_08B12128;
    case 223u: goto L_08B12168;
    case 224u: goto L_08B12174;
    case 225u: goto L_08B1217C;
    case 226u: goto L_08B12184;
    case 227u: goto L_08B12188;
    case 228u: goto L_08B121A4;
    case 229u: goto L_08B121F4;
    case 230u: goto L_08B12200;
    case 231u: goto L_08B12238;
    case 232u: goto L_08B12254;
    case 233u: goto L_08B12260;
    case 234u: goto L_08B12268;
    case 235u: goto L_08B12278;
    case 236u: goto L_08B122C8;
    case 237u: goto L_08B122EC;
    case 238u: goto L_08B12308;
    case 239u: goto L_08B12320;
    case 240u: goto L_08B12508;
    case 241u: goto L_08B12510;
    case 242u: goto L_08B12518;
    case 243u: goto L_08B12520;
    case 244u: goto L_08B12524;
    case 245u: goto L_08B12548;
    case 246u: goto L_08B1254C;
    case 247u: goto L_08B12554;
    case 248u: goto L_08B1255C;
    case 249u: goto L_08B12564;
    case 250u: goto L_08B1256C;
    case 251u: goto L_08B12574;
    case 252u: goto L_08B1257C;
    case 253u: goto L_08B12584;
    case 254u: goto L_08B1258C;
    case 255u: goto L_08B12594;
    case 256u: goto L_08B1259C;
    case 257u: goto L_08B125A4;
    case 258u: goto L_08B125AC;
    case 259u: goto L_08B125B4;
    case 260u: goto L_08B125BC;
    case 261u: goto L_08B125C4;
    case 262u: goto L_08B125CC;
    case 263u: goto L_08B125D4;
    case 264u: goto L_08B125DC;
    case 265u: goto L_08B125E4;
    case 266u: goto L_08B125EC;
    case 267u: goto L_08B125F4;
    case 268u: goto L_08B125FC;
    case 269u: goto L_08B12604;
    case 270u: goto L_08B1260C;
    case 271u: goto L_08B12614;
    case 272u: goto L_08B1261C;
    case 273u: goto L_08B12624;
    case 274u: goto L_08B1262C;
    case 275u: goto L_08B12634;
    case 276u: goto L_08B1263C;
    case 277u: goto L_08B12644;
    case 278u: goto L_08B1264C;
    case 279u: goto L_08B12654;
    case 280u: goto L_08B1265C;
    case 281u: goto L_08B12664;
    case 282u: goto L_08B1266C;
    case 283u: goto L_08B12674;
    case 284u: goto L_08B1267C;
    case 285u: goto L_08B12684;
    case 286u: goto L_08B1268C;
    case 287u: goto L_08B12694;
    case 288u: goto L_08B1269C;
    case 289u: goto L_08B126A4;
    case 290u: goto L_08B126AC;
    case 291u: goto L_08B126B4;
    case 292u: goto L_08B126BC;
    case 293u: goto L_08B126C4;
    case 294u: goto L_08B126CC;
    case 295u: goto L_08B126D4;
    case 296u: goto L_08B126DC;
    case 297u: goto L_08B126E4;
    case 298u: goto L_08B126EC;
    case 299u: goto L_08B126F4;
    case 300u: goto L_08B126FC;
    case 301u: goto L_08B12704;
    case 302u: goto L_08B1270C;
    case 303u: goto L_08B12714;
    case 304u: goto L_08B1271C;
    case 305u: goto L_08B12724;
    case 306u: goto L_08B1272C;
    case 307u: goto L_08B12734;
    case 308u: goto L_08B1273C;
    case 309u: goto L_08B12744;
    case 310u: goto L_08B1274C;
    case 311u: goto L_08B12754;
    case 312u: goto L_08B1275C;
    case 313u: goto L_08B12764;
    case 314u: goto L_08B1276C;
    case 315u: goto L_08B12774;
    case 316u: goto L_08B12778;
    case 317u: goto L_08B12780;
    case 318u: goto L_08B12788;
    case 319u: goto L_08B12790;
    case 320u: goto L_08B12794;
    case 321u: goto L_08B1279C;
    case 322u: goto L_08B127A4;
    case 323u: goto L_08B127AC;
    case 324u: goto L_08B127B4;
    case 325u: goto L_08B127BC;
    case 326u: goto L_08B127C4;
    case 327u: goto L_08B127CC;
    case 328u: goto L_08B127D8;
    case 329u: goto L_08B127E0;
    case 330u: goto L_08B127E8;
    case 331u: goto L_08B127F0;
    case 332u: goto L_08B127F8;
    case 333u: goto L_08B12800;
    case 334u: goto L_08B12808;
    case 335u: goto L_08B12810;
    case 336u: goto L_08B12818;
    case 337u: goto L_08B12820;
    case 338u: goto L_08B12828;
    case 339u: goto L_08B12830;
    case 340u: goto L_08B12838;
    case 341u: goto L_08B12840;
    case 342u: goto L_08B1284C;
    case 343u: goto L_08B12854;
    case 344u: goto L_08B1285C;
    case 345u: goto L_08B12864;
    case 346u: goto L_08B1286C;
    case 347u: goto L_08B12874;
    case 348u: goto L_08B1287C;
    case 349u: goto L_08B12884;
    case 350u: goto L_08B1288C;
    case 351u: goto L_08B12894;
    case 352u: goto L_08B1289C;
    case 353u: goto L_08B128A4;
    case 354u: goto L_08B128AC;
    case 355u: goto L_08B128B4;
    case 356u: goto L_08B128C0;
    case 357u: goto L_08B128C8;
    case 358u: goto L_08B128D0;
    case 359u: goto L_08B128D8;
    case 360u: goto L_08B128E4;
    case 361u: goto L_08B128EC;
    case 362u: goto L_08B128F4;
    case 363u: goto L_08B128FC;
    case 364u: goto L_08B12904;
    case 365u: goto L_08B1290C;
    case 366u: goto L_08B12918;
    case 367u: goto L_08B12920;
    case 368u: goto L_08B12928;
    case 369u: goto L_08B12930;
    case 370u: goto L_08B12938;
    case 371u: goto L_08B12940;
    case 372u: goto L_08B12948;
    case 373u: goto L_08B12950;
    case 374u: goto L_08B1295C;
    case 375u: goto L_08B12964;
    case 376u: goto L_08B12970;
    case 377u: goto L_08B12984;
    case 378u: goto L_08B129C0;
    case 379u: goto L_08B129D0;
    case 380u: goto L_08B129DC;
    case 381u: goto L_08B129E8;
    case 382u: goto L_08B129EC;
    case 383u: goto L_08B12A00;
    case 384u: goto L_08B12A14;
    case 385u: goto L_08B12A2C;
    case 386u: goto L_08B12A3C;
    case 387u: goto L_08B12A40;
    case 388u: goto L_08B12A48;
    case 389u: goto L_08B12A5C;
    case 390u: goto L_08B12A7C;
    case 391u: goto L_08B12AA4;
    case 392u: goto L_08B12AD8;
    case 393u: goto L_08B12AF8;
    case 394u: goto L_08B12B00;
    case 395u: goto L_08B12B14;
    case 396u: goto L_08B12B1C;
    case 397u: goto L_08B12B2C;
    case 398u: goto L_08B12B34;
    case 399u: goto L_08B12B3C;
    case 400u: goto L_08B12B4C;
    case 401u: goto L_08B12B64;
    case 402u: goto L_08B12B80;
    case 403u: goto L_08B12BA4;
    case 404u: goto L_08B12BBC;
    case 405u: goto L_08B12BD0;
    case 406u: goto L_08B12BE4;
    case 407u: goto L_08B12BF8;
    case 408u: goto L_08B12C2C;
    case 409u: goto L_08B12C48;
    case 410u: goto L_08B12C4C;
    case 411u: goto L_08B12C78;
    case 412u: goto L_08B12C94;
    case 413u: goto L_08B12CBC;
    case 414u: goto L_08B12CD4;
    case 415u: goto L_08B12CF4;
    case 416u: goto L_08B12D2C;
    case 417u: goto L_08B12D64;
    case 418u: goto L_08B12D88;
    case 419u: goto L_08B12DA8;
    case 420u: goto L_08B12DB4;
    case 421u: goto L_08B12DD4;
    case 422u: goto L_08B12DF0;
    case 423u: goto L_08B12E28;
    case 424u: goto L_08B12E3C;
    case 425u: goto L_08B12E44;
    case 426u: goto L_08B12E4C;
    case 427u: goto L_08B12E54;
    case 428u: goto L_08B12E5C;
    case 429u: goto L_08B12E64;
    case 430u: goto L_08B12E6C;
    case 431u: goto L_08B12E74;
    case 432u: goto L_08B12E7C;
    case 433u: goto L_08B12E84;
    case 434u: goto L_08B12E8C;
    case 435u: goto L_08B12E94;
    case 436u: goto L_08B12E98;
    case 437u: goto L_08B12EA0;
    case 438u: goto L_08B12EA8;
    case 439u: goto L_08B12EAC;
    case 440u: goto L_08B12EB4;
    case 441u: goto L_08B12EC4;
    case 442u: goto L_08B12EC8;
    case 443u: goto L_08B12ED0;
    case 444u: goto L_08B12EE4;
    case 445u: goto L_08B12F08;
    case 446u: goto L_08B12F1C;
    case 447u: goto L_08B12F34;
    case 448u: goto L_08B12F40;
    case 449u: goto L_08B12F68;
    case 450u: goto L_08B12F7C;
    case 451u: goto L_08B12FAC;
    case 452u: goto L_08B12FB8;
    case 453u: goto L_08B12FC0;
    case 454u: goto L_08B12FC8;
    case 455u: goto L_08B12FD4;
    case 456u: goto L_08B12FEC;
    case 457u: goto L_08B13004;
    case 458u: goto L_08B1304C;
    case 459u: goto L_08B13060;
    case 460u: goto L_08B13074;
    case 461u: goto L_08B13094;
    case 462u: goto L_08B130A8;
    case 463u: goto L_08B130B4;
    case 464u: goto L_08B130CC;
    case 465u: goto L_08B130D4;
    case 466u: goto L_08B130E4;
    case 467u: goto L_08B130EC;
    case 468u: goto L_08B130F4;
    case 469u: goto L_08B13100;
    case 470u: goto L_08B1312C;
    case 471u: goto L_08B13150;
    case 472u: goto L_08B13184;
    case 473u: goto L_08B131A0;
    case 474u: goto L_08B131B4;
    case 475u: goto L_08B131D8;
    case 476u: goto L_08B131E4;
    case 477u: goto L_08B131FC;
    case 478u: goto L_08B13224;
    case 479u: goto L_08B13308;
    case 480u: goto L_08B13310;
    case 481u: goto L_08B1332C;
    case 482u: goto L_08B13334;
    case 483u: goto L_08B1334C;
    case 484u: goto L_08B133E0;
    case 485u: goto L_08B133E8;
    case 486u: goto L_08B133F0;
    case 487u: goto L_08B13404;
    case 488u: goto L_08B13418;
    case 489u: goto L_08B13430;
    case 490u: goto L_08B1345C;
    case 491u: goto L_08B13484;
    case 492u: goto L_08B134A4;
    case 493u: goto L_08B134C0;
    case 494u: goto L_08B13504;
    case 495u: goto L_08B13578;
    case 496u: goto L_08B13598;
    case 497u: goto L_08B135C0;
    case 498u: goto L_08B135E0;
    case 499u: goto L_08B13748;
    case 500u: goto L_08B1375C;
    case 501u: goto L_08B13780;
    case 502u: goto L_08B13794;
    case 503u: goto L_08B137A4;
    case 504u: goto L_08B13B20;
    case 505u: goto L_08B13B30;
    case 506u: goto L_08B13B40;
    case 507u: goto L_08B13B50;
    case 508u: goto L_08B13B60;
    case 509u: goto L_08B13B70;
    case 510u: goto L_08B13B80;
    case 511u: goto L_08B13B88;
    case 512u: goto L_08B13B90;
    case 513u: goto L_08B13B98;
    case 514u: goto L_08B13BA0;
    case 515u: goto L_08B13BA8;
    case 516u: goto L_08B13BB0;
    case 517u: goto L_08B13BBC;
    case 518u: goto L_08B13BC4;
    case 519u: goto L_08B13BD0;
    case 520u: goto L_08B13BDC;
    case 521u: goto L_08B13BEC;
    case 522u: goto L_08B13BFC;
    case 523u: goto L_08B13C04;
    case 524u: goto L_08B13C0C;
    case 525u: goto L_08B13C14;
    case 526u: goto L_08B13C1C;
    case 527u: goto L_08B13C24;
    case 528u: goto L_08B13C34;
    case 529u: goto L_08B13C48;
    case 530u: goto L_08B13C58;
    case 531u: goto L_08B13C70;
    case 532u: goto L_08B13D00;
    case 533u: goto L_08B13D20;
    case 534u: goto L_08B13D5C;
    case 535u: goto L_08B13D70;
    case 536u: goto L_08B13D80;
    case 537u: goto L_08B13D88;
    case 538u: goto L_08B13D90;
    case 539u: goto L_08B13D98;
    case 540u: goto L_08B13D9C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B10000:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 186u, 0x08859194u>(ctx, &aot_mem); return;
L_08B10008:
    rt.unsupported(0x08B10008u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B10038:
    rt.unsupported(0x08B10038u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B10060:
    rt.unsupported(0x08B10060u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B10084:
    if (ctx.gpr[2] == ctx.gpr[31]) {
    rt.unsupported(0x08B10088u, 0x45535341u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 445u, 0x08B24D8Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1008C;
L_08B1008C:
    if (ctx.gpr[18] == ctx.gpr[5]) {
    rt.unsupported(0x08B10090u, 0x74202D20u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 240u, 0x08B21DC8u>(ctx, &aot_mem); return;
    }
    goto L_08B10094;
L_08B10094:
    rt.unsupported(0x08B10094u, 0x20736968u, "unknown not lowered yet"); return;
L_08B100BC:
    rt.unsupported(0x08B100BCu, 0x45524548u, "cop1? not lowered yet"); return;
L_08B100C4:
    rt.unsupported(0x08B100C4u, 0x20726143u, "unknown not lowered yet"); return;
L_08B100DC:
    rt.unsupported(0x08B100DCu, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B100FC:
    rt.unsupported(0x08B100FCu, 0x00002031u, "special? not lowered yet"); return;
L_08B10100:
    rt.unsupported(0x08B10100u, 0x00002032u, "special? not lowered yet"); return;
L_08B10104:
    rt.unsupported(0x08B10104u, 0x00002033u, "special? not lowered yet"); return;
L_08B10108:
    ctx.gpr[12] = (ctx.gpr[1] | 0u);
    goto L_08B1010C;
L_08B1010C:
    rt.unsupported(0x08B1010Cu, 0x00002038u, "special? not lowered yet"); return;
L_08B10110:
    rt.unsupported(0x08B10110u, 0x00002039u, "special? not lowered yet"); return;
L_08B10114:
    rt.unsupported(0x08B10114u, 0x00203031u, "special? not lowered yet"); return;
L_08B10118:
    rt.unsupported(0x08B10118u, 0x00203131u, "special? not lowered yet"); return;
L_08B1011C:
    rt.unsupported(0x08B1011Cu, 0x00203231u, "special? not lowered yet"); return;
L_08B10120:
    if (0u == 0u) (void)(0u);
    goto L_08B10124;
L_08B10124:
    rt.unsupported(0x08B10124u, 0x736F500Au, "unknown not lowered yet"); return;
L_08B10148:
    rt.unsupported(0x08B10148u, 0x63637553u, "vfpu0 not lowered yet"); return;
L_08B10154:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B10158u, 0x20216465u, "unknown not lowered yet"); return;
L_08B10A94:
    rt.unsupported(0x08B10A98u, 0x0889780Cu, "control flow in delay slot"); return;
L_08B10BF8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B10BFCu, 0x6361202Au, "vfpu0 not lowered yet"); return;
L_08B10F18:
    rt.unsupported(0x08B10F18u, 0x4E524157u, "unknown not lowered yet"); return;
L_08B10F6C:
    ctx.gpr[13] = (ctx.gpr[9] < static_cast<std::uint32_t>(11565) ? 1u : 0u);
    ctx.gpr[13] = (ctx.gpr[9] < static_cast<std::uint32_t>(11565) ? 1u : 0u);
    if (ctx.gpr[25] == 0u) {
    rt.unsupported(0x08B10F78u, 0x74747568u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 42u, 0x08B1C42Cu>(ctx, &aot_mem); return;
    }
    goto L_08B10F7C;
L_08B10F7C:
    rt.unsupported(0x08B10F7Cu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B10F90:
    if (ctx.gpr[1] == 0u) {
    (void)(static_cast<std::int32_t>(ctx.gpr[1]) < 26917 ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 64u, 0x08B20488u>(ctx, &aot_mem); return;
    }
    goto L_08B10F98;
L_08B10F98:
    rt.unsupported(0x08B10F98u, 0x20297325u, "unknown not lowered yet"); return;
L_08B10FB0:
    rt.unsupported(0x08B10FB0u, 0x21212121u, "unknown not lowered yet"); return;
L_08B10FCC:
    rt.unsupported(0x08B10FCCu, 0x20444544u, "unknown not lowered yet"); return;
L_08B10FD8:
    rt.unsupported(0x08B10FD8u, 0x74696177u, "unknown not lowered yet"); return;
L_08B10FF0:
    if (ctx.gpr[18] != ctx.gpr[3]) {
    rt.unsupported(0x08B10FF4u, 0x474F4C20u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 406u, 0x08B2253Cu>(ctx, &aot_mem); return;
    }
    goto L_08B10FF8;
L_08B10FF8:
    if (ctx.gpr[18] == ctx.gpr[15]) {
    rt.unsupported(0x08B10FFCu, 0x414C5020u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 513u, 0x08B2287Cu>(ctx, &aot_mem); return;
    }
    goto L_08B11000;
L_08B11000:
    rt.unsupported(0x08B11000u, 0x20524559u, "unknown not lowered yet"); return;
L_08B11010:
    rt.unsupported(0x08B11010u, 0x444E4553u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B11014u, 0x474F4C20u, "cop1? not lowered yet"); return;
L_08B11020:
    rt.unsupported(0x08B11020u, 0x20524559u, "unknown not lowered yet"); return;
L_08B11030:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B11034u, 0x696E4920u, "unknown not lowered yet"); return;
L_08B1105C:
    rt.unsupported(0x08B1105Cu, 0x4E5F4F4Eu, "unknown not lowered yet"); return;
L_08B11064:
    rt.unsupported(0x08B11064u, 0x4D414554u, "unknown not lowered yet"); return;
L_08B1107C:
    rt.unsupported(0x08B1107Cu, 0x4D414554u, "unknown not lowered yet"); return;
L_08B11094:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[1]) < 10280 ? 1u : 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[1]) < 10280 ? 1u : 0u);
    ctx.execute_vfpu_vscl_ct<40u, 32u, 83u, 1u>();
    rt.unsupported(0x08B110A0u, 0x6E69646Eu, "vfpu3 not lowered yet"); return;
L_08B110CC:
    rt.unsupported(0x08B110CCu, 0x69746E45u, "unknown not lowered yet"); return;
L_08B110EC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<83u, 1u>(vfpu_d); }
    rt.unsupported(0x08B110F0u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B1111C:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B11128u, 0x754D6320u, "unknown not lowered yet"); return;
L_08B11140:
    ctx.execute_vfpu_compare3(114u, 70u, 114u, 1u, 6u);
    ctx.execute_vfpu_vminmax(109u, 71u, 97u, 1u, false);
    ctx.gpr[1] = (0u | 0u);
    goto L_08B1114C;
L_08B1114C:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.execute_vfpu_vscl_ct<42u, 32u, 82u, 1u>();
    ctx.execute_vfpu_vscl_ct<109u, 111u, 118u, 1u>();
    rt.unsupported(0x08B11158u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1116C:
    rt.unsupported(0x08B1116Cu, 0x6E69616Du, "vfpu3 not lowered yet"); return;
L_08B11188:
    rt.unsupported(0x08B11188u, 0x4D5E545Eu, "unknown not lowered yet"); return;
L_08B11194:
    rt.unsupported(0x08B11194u, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B111D0:
    rt.unsupported(0x08B111D0u, 0x61206557u, "vfpu0 not lowered yet"); return;
L_08B111F0:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B111F4u, 0x676E6976u, "vfpu1 not lowered yet"); return;
L_08B11210:
    ctx.execute_vfpu_vscl_ct<65u, 102u, 116u, 1u>();
    rt.unsupported(0x08B11214u, 0x000A3A72u, "special? not lowered yet"); return;
L_08B11218:
    rt.unsupported(0x08B11218u, 0x74736544u, "unknown not lowered yet"); return;
L_08B11238:
    rt.unsupported(0x08B11238u, 0x76726553u, "unknown not lowered yet"); return;
L_08B1125C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<72u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11260u, 0x676E696Cu, "vfpu1 not lowered yet"); return;
L_08B1127C:
    ctx.execute_vfpu_vscl_ct<67u, 108u, 105u, 1u>();
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(29806));
    ctx.execute_vfpu_vscl_ct<100u, 32u, 114u, 1u>();
    rt.unsupported(0x08B11288u, 0x73657571u, "unknown not lowered yet"); return;
L_08B112AC:
    rt.unsupported(0x08B112ACu, 0x69676552u, "unknown not lowered yet"); return;
L_08B112C0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    rt.unsupported(0x08B112C4u, 0x63205858u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1077u, 0x08B27424u>(ctx, &aot_mem); return;
    }
    goto L_08B112C8;
L_08B112C8:
    rt.unsupported(0x08B112C8u, 0x746C754Du, "unknown not lowered yet"); return;
L_08B112DC:
    rt.unsupported(0x08B112DCu, 0x6E696F44u, "vfpu3 not lowered yet"); return;
L_08B112F8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    rt.unsupported(0x08B112FCu, 0x63205858u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1078u, 0x08B2745Cu>(ctx, &aot_mem); return;
    }
    goto L_08B11300;
L_08B11300:
    rt.unsupported(0x08B11300u, 0x746C754Du, "unknown not lowered yet"); return;
L_08B11314:
    ctx.execute_vfpu_vscl_ct<68u, 101u, 108u, 1u>();
    rt.unsupported(0x08B11318u, 0x676E6974u, "vfpu1 not lowered yet"); return;
L_08B11328:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    rt.unsupported(0x08B1132Cu, 0x0057454Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 672u, 0x08B25460u>(ctx, &aot_mem); return;
    }
    goto L_08B11330;
L_08B11330:
    if (ctx.gpr[1] == 0u) {
    (void)(static_cast<std::int32_t>(ctx.gpr[1]) < 26917 ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 91u, 0x08B20828u>(ctx, &aot_mem); return;
    }
    goto L_08B11338;
L_08B11338:
    rt.unsupported(0x08B11338u, 0x20297325u, "unknown not lowered yet"); return;
L_08B1134C:
    rt.unsupported(0x08B1134Cu, 0x6E6E6F43u, "vfpu3 not lowered yet"); return;
L_08B1135C:
    ctx.gpr[14] = (ctx.gpr[17] < static_cast<std::uint32_t>(29554) ? 1u : 0u);
    rt.unsupported(0x08B11360u, 0x00000A2Eu, "special? not lowered yet"); return;
L_08B11364:
    rt.unsupported(0x08B11364u, 0x20736148u, "unknown not lowered yet"); return;
L_08B11390:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.execute_vfpu_compare3(42u, 32u, 67u, 1u, 6u);
    rt.unsupported(0x08B11398u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B113B8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.execute_vfpu_compare3(42u, 32u, 78u, 1u, 6u);
    ctx.execute_vfpu_compare3(116u, 32u, 67u, 1u, 6u);
    rt.unsupported(0x08B113C4u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B113E0:
    rt.unsupported(0x08B113E0u, 0x6E696F4Au, "vfpu3 not lowered yet"); return;
L_08B113F8:
    rt.unsupported(0x08B113F8u, 0x4E706D21u, "unknown not lowered yet"); return;
L_08B11420:
    rt.unsupported(0x08B11420u, 0x6E6F5A70u, "vfpu3 not lowered yet"); return;
L_08B1142C:
    rt.unsupported(0x08B1142Cu, 0x41747361u, "unknown not lowered yet"); return;
L_08B11444:
    ctx.execute_vfpu_vscl_ct<116u, 105u, 109u, 1u>();
    rt.unsupported(0x08B11448u, 0x70202D20u, "unknown not lowered yet"); return;
L_08B11470:
    rt.unsupported(0x08B11470u, 0x4F5F454Du, "unknown not lowered yet"); return;
L_08B11478:
    rt.unsupported(0x08B11478u, 0x61682049u, "vfpu0 not lowered yet"); return;
L_08B114C0:
    rt.unsupported(0x08B114C0u, 0x72656550u, "unknown not lowered yet"); return;
L_08B11510:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    rt.unsupported(0x08B11514u, 0x494B5245u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 205u, 0x08B24654u>(ctx, &aot_mem); return;
    }
    goto L_08B11518;
L_08B11518:
    rt.unsupported(0x08B11518u, 0x00004C4Cu, "syscall not lowered yet"); return;
L_08B1151C:
    rt.unsupported(0x08B1151Cu, 0x4B43494Bu, "cop2/vfpu not lowered yet"); return;
L_08B11528:
    if (ctx.gpr[10] != ctx.gpr[17]) {
    rt.unsupported(0x08B1152Cu, 0x4B545345u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 579u, 0x08B22A74u>(ctx, &aot_mem); return;
    }
    goto L_08B11530;
L_08B11530:
    if (ctx.gpr[2] == ctx.gpr[11]) {
    rt.unsupported(0x08B11534u, 0x4559414Cu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 309u, 0x08B22258u>(ctx, &aot_mem); return;
    }
    goto L_08B11538;
L_08B11538:
    (void)(ctx.lo);
    goto L_08B1153C;
L_08B1153C:
    rt.unsupported(0x08B11540u, 0x534D4145u, "control flow in delay slot"); return;
L_08B11544:
    rt.unsupported(0x08B11544u, 0x45524F43u, "cop1? not lowered yet"); return;
L_08B1154C:
    rt.unsupported(0x08B1154Cu, 0x444E4553u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B11550u, 0x4147504Du, "unknown not lowered yet"); return;
L_08B1155C:
    rt.unsupported(0x08B1155Cu, 0x43524F46u, "unknown not lowered yet"); return;
L_08B11570:
    if (ctx.gpr[18] != ctx.gpr[20]) {
    rt.unsupported(0x08B11574u, 0x43494845u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 590u, 0x08B22AC0u>(ctx, &aot_mem); return;
    }
    goto L_08B11578;
L_08B11578:
    rt.unsupported(0x08B11578u, 0x4D45454Cu, "unknown not lowered yet"); return;
L_08B11590:
    rt.unsupported(0x08B11590u, 0x43544553u, "unknown not lowered yet"); return;
L_08B115A4:
    rt.unsupported(0x08B115A4u, 0x41504552u, "unknown not lowered yet"); return;
L_08B115B0:
    rt.unsupported(0x08B115B4u, 0x53455259u, "control flow in delay slot"); return;
L_08B115B8:
    if (ctx.gpr[10] != ctx.gpr[2]) {
    ctx.gpr[10] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 625u, 0x08B252F4u>(ctx, &aot_mem); return;
    }
    goto L_08B115C0;
L_08B115C0:
    rt.unsupported(0x08B115C0u, 0x454C4544u, "cop1? not lowered yet"); return;
L_08B115D0:
    rt.unsupported(0x08B115D0u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08B115DC:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    rt.unsupported(0x08B115E0u, 0x4F4D4552u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 233u, 0x08B24720u>(ctx, &aot_mem); return;
    }
    goto L_08B115E4;
L_08B115E4:
    rt.unsupported(0x08B115E4u, 0x4F534554u, "unknown not lowered yet"); return;
L_08B115EC:
    if (ctx.gpr[18] == ctx.gpr[1]) {
    rt.unsupported(0x08B115F0u, 0x41454254u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 600u, 0x08B22B10u>(ctx, &aot_mem); return;
    }
    goto L_08B115F4;
L_08B115F4:
    rt.unsupported(0x08B115F4u, 0x00000054u, "special? not lowered yet"); return;
L_08B115F8:
    rt.unsupported(0x08B115F8u, 0x4E415254u, "unknown not lowered yet"); return;
L_08B11604:
    rt.unsupported(0x08B11604u, 0x434F4C43u, "unknown not lowered yet"); return;
L_08B1160C:
    rt.unsupported(0x08B1160Cu, 0x454D4147u, "cop1? not lowered yet"); return;
L_08B11618:
    rt.unsupported(0x08B11618u, 0x47524154u, "cop1? not lowered yet"); return;
L_08B11628:
    rt.unsupported(0x08B11628u, 0x00000029u, "special? not lowered yet"); return;
L_08B1162C:
    rt.unsupported(0x08B1162Cu, 0x63656843u, "vfpu0 not lowered yet"); return;
L_08B11648:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B1164Cu, 0x20216465u, "unknown not lowered yet"); return;
L_08B11678:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1152u, 0x08B23BC8u>(ctx, &aot_mem); return;
    }
    goto L_08B11680;
L_08B11680:
    if (ctx.gpr[2] != ctx.gpr[16]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 968u, 0x08B25FD0u>(ctx, &aot_mem); return;
    }
    goto L_08B11688;
L_08B11688:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B1168Cu, 0x69616620u, "unknown not lowered yet"); return;
L_08B116A0:
    rt.unsupported(0x08B116A0u, 0x45475247u, "cop1? not lowered yet"); return;
L_08B116A8:
    if (ctx.gpr[18] == ctx.gpr[25]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 259u, 0x08B247ECu>(ctx, &aot_mem); return;
    }
    goto L_08B116B0;
L_08B116B0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1013u, 0x08B26800u>(ctx, &aot_mem); return;
    }
    goto L_08B116B8;
L_08B116B8:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B116BCu, 0x63757320u, "vfpu0 not lowered yet"); return;
L_08B116D4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B116D8u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11704:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11708u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11734:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11738u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11770:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11774u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11798:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1179Cu, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B117D0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B117D4u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11834:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11838u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11868:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1186Cu, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11884:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11888u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B118A4:
    rt.unsupported(0x08B118A4u, 0x00000A2Eu, "special? not lowered yet"); return;
L_08B118A8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B118ACu, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B118D0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B118D4u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11900:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11904u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11924:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11928u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B1194C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11950u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11970:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11974u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B1198C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11990u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B119B8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B119BCu, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B119E0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B119E4u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11A08:
    rt.unsupported(0x08B11A08u, 0x63726F46u, "vfpu0 not lowered yet"); return;
L_08B11A20:
    // nop
    goto L_08B11A24;
L_08B11A24:
    rt.unsupported(0x08B11A24u, 0x63726F46u, "vfpu0 not lowered yet"); return;
L_08B11A40:
    ctx.execute_vfpu_vcmp_ct<105u, 108u, 1u, 11u>();
    rt.unsupported(0x08B11A44u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B11A6C:
    rt.unsupported(0x08B11A6Cu, 0x4E524157u, "unknown not lowered yet"); return;
L_08B11AAC:
    rt.unsupported(0x08B11AACu, 0x736D656Du, "unknown not lowered yet"); return;
L_08B11AB8:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B11ABCu, 0x74206465u, "unknown not lowered yet"); return;
L_08B11AE0:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B11AE4u, 0x74206465u, "unknown not lowered yet"); return;
L_08B11B08:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<70u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11B0Cu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B11B28:
    ctx.execute_vfpu_vscl_ct<68u, 111u, 110u, 1u>();
    if (0u == 0u) (void)(0u);
    goto L_08B11B30;
L_08B11B30:
    ctx.gpr[16] = (ctx.gpr[17] ^ 29549u);
    ctx.gpr[16] = (ctx.gpr[26] < static_cast<std::uint32_t>(21328) ? 1u : 0u);
    rt.unsupported(0x08B11B38u, 0x45564153u, "cop1? not lowered yet"); return;
L_08B11B44:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11B48u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B11B58:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<73u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    (void)(ctx.gpr[25] + static_cast<std::uint32_t>(30821));
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 131u, 0x089DCC94u>(ctx, &aot_mem); return;
L_08B11B68:
    rt.unsupported(0x08B11B68u, 0x61206F44u, "vfpu0 not lowered yet"); return;
L_08B11B7C:
    if (ctx.gpr[26] == ctx.gpr[21]) {
    ctx.gpr[16] = (ctx.gpr[1] | 12337u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 421u, 0x08B24CD4u>(ctx, &aot_mem); return;
    }
    goto L_08B11B84;
L_08B11B84:
    rt.unsupported(0x08B11B84u, 0x00000031u, "special? not lowered yet"); return;
L_08B11B88:
    ctx.lo = 0u;
    goto L_08B11B8C;
L_08B11B8C:
    rt.unsupported(0x08B11B8Cu, 0x6E756F46u, "vfpu3 not lowered yet"); return;
L_08B11B98:
    ctx.gpr[15] = (ctx.gpr[9] + static_cast<std::uint32_t>(29477));
    rt.unsupported(0x08B11B9Cu, 0x00000073u, "special? not lowered yet"); return;
L_08B11BA0:
    rt.unsupported(0x08B11BA0u, 0x69646F4Du, "unknown not lowered yet"); return;
L_08B11BC8:
    ctx.execute_vfpu_vscl_ct<78u, 101u, 119u, 1u>();
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 154u, 0x0885D1CCu>(ctx, &aot_mem); return;
L_08B11BD4:
    rt.unsupported(0x08B11BD4u, 0x4267736Du, "unknown not lowered yet"); return;
L_08B11C04:
    rt.unsupported(0x08B11C04u, 0x6267736Du, "vfpu0 not lowered yet"); return;
L_08B11C0C:
    if (ctx.gpr[11] != ctx.gpr[5]) {
    rt.unsupported(0x08B11C10u, 0x696C6974u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 181u, 0x08B2A9DCu>(ctx, &aot_mem); return;
    }
    goto L_08B11C14;
L_08B11C14:
    rt.unsupported(0x08B11C14u, 0x734D7974u, "unknown not lowered yet"); return;
L_08B11C28:
    rt.unsupported(0x08B11C28u, 0x4F202928u, "unknown not lowered yet"); return;
L_08B11C38:
    rt.unsupported(0x08B11C38u, 0x69726353u, "unknown not lowered yet"); return;
L_08B11C4C:
    rt.unsupported(0x08B11C4Cu, 0x61726147u, "vfpu0 not lowered yet"); return;
L_08B11C58:
    rt.unsupported(0x08B11C58u, 0x6925203Du, "unknown not lowered yet"); return;
L_08B11C60:
    rt.unsupported(0x08B11C60u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B11C78:
    if (ctx.gpr[18] == ctx.gpr[25]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 453u, 0x08B24DBCu>(ctx, &aot_mem); return;
    }
    goto L_08B11C80;
L_08B11C80:
    rt.unsupported(0x08B11C80u, 0x74617453u, "unknown not lowered yet"); return;
L_08B11C94:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1065u, 0x08B26DE4u>(ctx, &aot_mem); return;
    }
    goto L_08B11C9C;
L_08B11C9C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 718u, 0x08B255C4u>(ctx, &aot_mem); return;
    }
    goto L_08B11CA4;
L_08B11CA4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 852u, 0x08B259B4u>(ctx, &aot_mem); return;
    }
    goto L_08B11CAC;
L_08B11CAC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1072u, 0x08B271FCu>(ctx, &aot_mem); return;
    }
    goto L_08B11CB4;
L_08B11CB4:
    rt.unsupported(0x08B11CB4u, 0x44564153u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B11CB8u, 0x0048535Fu, "special? not lowered yet"); return;
L_08B11CBC:
    rt.unsupported(0x08B11CBCu, 0x44564153u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B11CC0u, 0x0059445Fu, "special? not lowered yet"); return;
L_08B11CC4:
    rt.unsupported(0x08B11CC4u, 0x44564153u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B11CC8u, 0x004F435Fu, "special? not lowered yet"); return;
L_08B11CCC:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(29477));
    rt.unsupported(0x08B11CD0u, 0x73250A73u, "unknown not lowered yet"); return;
L_08B11CE8:
    ctx.execute_vfpu_compare3(77u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B11CECu, 0x74537972u, "unknown not lowered yet"); return;
L_08B11CF8:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 29555 ? 1u : 0u);
    rt.unsupported(0x08B11CFCu, 0x696E4920u, "unknown not lowered yet"); return;
L_08B11D10:
    ctx.execute_vfpu_compare3(77u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B11D14u, 0x74537972u, "unknown not lowered yet"); return;
L_08B11D20:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 29555 ? 1u : 0u);
    rt.unsupported(0x08B11D24u, 0x6E755220u, "vfpu3 not lowered yet"); return;
L_08B11D3C:
    ctx.execute_vfpu_compare3(77u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B11D40u, 0x74537972u, "unknown not lowered yet"); return;
L_08B11D4C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 29555 ? 1u : 0u);
    rt.unsupported(0x08B11D50u, 0x6E694620u, "vfpu3 not lowered yet"); return;
L_08B11D5C:
    rt.unsupported(0x08B11D5Cu, 0x20746F47u, "unknown not lowered yet"); return;
L_08B11D6C:
    ctx.execute_vfpu_compare3(77u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B11D70u, 0x74537972u, "unknown not lowered yet"); return;
L_08B11D7C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 29555 ? 1u : 0u);
    rt.unsupported(0x08B11D80u, 0x75685320u, "unknown not lowered yet"); return;
L_08B11D8C:
    ctx.execute_vfpu_compare3(77u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B11D90u, 0x74537972u, "unknown not lowered yet"); return;
L_08B11D9C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 29555 ? 1u : 0u);
    rt.unsupported(0x08B11DA0u, 0x73616820u, "unknown not lowered yet"); return;
L_08B11DB0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11DB4u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11DDC:
    ctx.lo = 0u;
    goto L_08B11DE0;
L_08B11DE0:
    rt.unsupported(0x08B11DE0u, 0x41544144u, "unknown not lowered yet"); return;
L_08B11DEC:
    ctx.gpr[1] = (ctx.gpr[18] ^ 21575u);
    rt.unsupported(0x08B11DF0u, 0x62694C20u, "vfpu0 not lowered yet"); return;
L_08B11E08:
    rt.unsupported(0x08B11E08u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B11E28:
    rt.unsupported(0x08B11E28u, 0x474E502Eu, "cop1? not lowered yet"); return;
L_08B11E30:
    rt.unsupported(0x08B11E30u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B11E44:
    rt.unsupported(0x08B11E44u, 0x6E65704Fu, "vfpu3 not lowered yet"); return;
L_08B11E60:
    rt.unsupported(0x08B11E60u, 0x00006272u, "special? not lowered yet"); return;
L_08B11E64:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.lo = ctx.gpr[2];
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 354u, 0x08B223B4u>(ctx, &aot_mem); return;
    }
    goto L_08B11E6C;
L_08B11E6C:
    rt.unsupported(0x08B11E6Cu, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B11E8C:
    rt.unsupported(0x08B11E8Cu, 0x6E65704Fu, "vfpu3 not lowered yet"); return;
L_08B11EA8:
    rt.unsupported(0x08B11EA8u, 0x704F5252u, "unknown not lowered yet"); return;
L_08B11EC0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11EC4u, 0x4F206465u, "unknown not lowered yet"); return;
L_08B11ECC:
    rt.unsupported(0x08B11ECCu, 0x464D502Eu, "cop1? not lowered yet"); return;
L_08B11ED4:
    rt.unsupported(0x08B11ED4u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B11EE8:
    rt.unsupported(0x08B11EE8u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B11F08:
    rt.unsupported(0x08B11F08u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B11F20:
    rt.unsupported(0x08B11F20u, 0x6E65704Fu, "vfpu3 not lowered yet"); return;
L_08B11F38:
    if (ctx.gpr[11] != ctx.gpr[5]) {
    rt.unsupported(0x08B11F3Cu, 0x696C6974u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 229u, 0x08B2AD08u>(ctx, &aot_mem); return;
    }
    goto L_08B11F40;
L_08B11F40:
    rt.unsupported(0x08B11F40u, 0x61537974u, "vfpu0 not lowered yet"); return;
L_08B11FE8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10762 ? 1u : 0u);
    ctx.execute_vfpu_vscl_ct<32u, 115u, 99u, 1u>();
    rt.unsupported(0x08B11FF0u, 0x43736153u, "unknown not lowered yet"); return;
L_08B1200C:
    rt.unsupported(0x08B1200Cu, 0x74696E49u, "unknown not lowered yet"); return;
L_08B12028:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2570 ? 1u : 0u);
    ctx.execute_vfpu_vscl_ct<10u, 115u, 99u, 1u>();
    ctx.execute_vfpu_vscl_ct<87u, 97u, 118u, 1u>();
    rt.unsupported(0x08B12034u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B1204C:
    rt.unsupported(0x08B1204Cu, 0x74746573u, "unknown not lowered yet"); return;
L_08B12068:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2570 ? 1u : 0u);
    ctx.execute_vfpu_vscl_ct<10u, 115u, 99u, 1u>();
    ctx.execute_vfpu_vscl_ct<87u, 97u, 118u, 1u>();
    rt.unsupported(0x08B12074u, 0x69647541u, "unknown not lowered yet"); return;
L_08B12090:
    rt.unsupported(0x08B12090u, 0x6E756F73u, "vfpu3 not lowered yet"); return;
L_08B120A0:
    rt.unsupported(0x08B120A0u, 0x4F525245u, "unknown not lowered yet"); return;
L_08B120C4:
    rt.unsupported(0x08B120C4u, 0x4F525245u, "unknown not lowered yet"); return;
L_08B120D8:
    ctx.execute_vfpu_vscl_ct<84u, 104u, 114u, 1u>();
    ctx.gpr[26] = (ctx.gpr[9] + static_cast<std::uint32_t>(25697));
    // nop
    (void)(ctx.pc = 0x0960E0C0u, rt.invoke_chained_call(ctx, &aot_mem)); return;
L_08B120E8:
    rt.unsupported(0x08B120E8u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B120FC:
    // nop
    goto L_08B12100;
L_08B12100:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2570 ? 1u : 0u);
    rt.unsupported(0x08B12104u, 0x7361730Au, "unknown not lowered yet"); return;
L_08B12118:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B1211Cu, 0x756F5320u, "unknown not lowered yet"); return;
L_08B12128:
    rt.unsupported(0x08B12128u, 0x63206563u, "vfpu0 not lowered yet"); return;
L_08B12168:
    ctx.gpr[14] = (0u | 0u);
    rt.unsupported(0x08B1216Cu, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B12174:
    if (ctx.gpr[26] == ctx.gpr[20]) {
    rt.unsupported(0x08B12178u, 0x454E4543u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1081u, 0x08B27684u>(ctx, &aot_mem); return;
    }
    goto L_08B1217C;
L_08B1217C:
    rt.unsupported(0x08B12180u, 0x0A2E4646u, "control flow in delay slot"); return;
L_08B12184:
    // nop
    goto L_08B12188;
L_08B12188:
    rt.unsupported(0x08B12188u, 0x6E6F7257u, "vfpu3 not lowered yet"); return;
L_08B121A4:
    rt.unsupported(0x08B121A4u, 0x426F5478u, "unknown not lowered yet"); return;
L_08B121F4:
    rt.unsupported(0x08B121F4u, 0x696F7620u, "unknown not lowered yet"); return;
L_08B12200:
    rt.unsupported(0x08B12200u, 0x20746573u, "unknown not lowered yet"); return;
L_08B12238:
    rt.unsupported(0x08B12238u, 0x20746573u, "unknown not lowered yet"); return;
L_08B12254:
    rt.unsupported(0x08B12254u, 0x2064253Du, "unknown not lowered yet"); return;
L_08B12260:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<61u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    if (0u == 0u) (void)(0u);
    goto L_08B12268;
L_08B12268:
    rt.unsupported(0x08B12268u, 0x216B6565u, "unknown not lowered yet"); return;
L_08B12278:
    rt.unsupported(0x08B12278u, 0x20746573u, "unknown not lowered yet"); return;
L_08B122C8:
    rt.unsupported(0x08B122C8u, 0x75736572u, "unknown not lowered yet"); return;
L_08B122EC:
    rt.unsupported(0x08B122ECu, 0x2079656Bu, "unknown not lowered yet"); return;
L_08B12308:
    rt.unsupported(0x08B12308u, 0x61726850u, "vfpu0 not lowered yet"); return;
L_08B12320:
    rt.unsupported(0x08B12320u, 0x61726850u, "vfpu0 not lowered yet"); return;
L_08B12508:
    rt.unsupported(0x08B12508u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B12510:
    rt.unsupported(0x08B12510u, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B12518:
    rt.unsupported(0x08B12518u, 0x61667270u, "vfpu0 not lowered yet"); return;
L_08B12520:
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[1]) < static_cast<std::int32_t>(ctx.gpr[16]) ? ctx.gpr[1] : ctx.gpr[16]);
    goto L_08B12524;
L_08B12524:
    rt.unsupported(0x08B12524u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B12548:
    rt.unsupported(0x08B12548u, 0x00726C70u, "special? not lowered yet"); return;
L_08B1254C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12550u, 0x00303030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 987u, 0x08B26684u>(ctx, &aot_mem); return;
    }
    goto L_08B12554;
L_08B12554:
    ctx.gpr[18] = (ctx.gpr[19] & 27760u);
    // nop
    goto L_08B1255C;
L_08B1255C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12560u, 0x00313030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 988u, 0x08B26694u>(ctx, &aot_mem); return;
    }
    goto L_08B12564;
L_08B12564:
    ctx.gpr[18] = (ctx.gpr[27] & 27760u);
    // nop
    goto L_08B1256C;
L_08B1256C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12570u, 0x00323030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 989u, 0x08B266A4u>(ctx, &aot_mem); return;
    }
    goto L_08B12574;
L_08B12574:
    ctx.gpr[18] = (ctx.gpr[3] | 27760u);
    // nop
    goto L_08B1257C;
L_08B1257C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12580u, 0x00333030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 990u, 0x08B266B4u>(ctx, &aot_mem); return;
    }
    goto L_08B12584;
L_08B12584:
    ctx.gpr[18] = (ctx.gpr[11] | 27760u);
    // nop
    goto L_08B1258C;
L_08B1258C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12590u, 0x00343030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 991u, 0x08B266C4u>(ctx, &aot_mem); return;
    }
    goto L_08B12594;
L_08B12594:
    ctx.gpr[18] = (ctx.gpr[19] | 27760u);
    // nop
    goto L_08B1259C;
L_08B1259C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B125A0u, 0x00353030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 992u, 0x08B266D4u>(ctx, &aot_mem); return;
    }
    goto L_08B125A4;
L_08B125A4:
    ctx.gpr[18] = (ctx.gpr[27] | 27760u);
    // nop
    goto L_08B125AC;
L_08B125AC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B125B0u, 0x00363030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 994u, 0x08B266E4u>(ctx, &aot_mem); return;
    }
    goto L_08B125B4;
L_08B125B4:
    ctx.gpr[18] = (ctx.gpr[3] ^ 27760u);
    // nop
    goto L_08B125BC;
L_08B125BC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B125C0u, 0x00373030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 996u, 0x08B266F4u>(ctx, &aot_mem); return;
    }
    goto L_08B125C4;
L_08B125C4:
    ctx.gpr[18] = (ctx.gpr[11] ^ 27760u);
    // nop
    goto L_08B125CC;
L_08B125CC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B125D0u, 0x00383030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 997u, 0x08B26704u>(ctx, &aot_mem); return;
    }
    goto L_08B125D4;
L_08B125D4:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B125D8u, 0x00000030u, "special? not lowered yet"); return;
L_08B125DC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B125E0u, 0x00393030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 998u, 0x08B26714u>(ctx, &aot_mem); return;
    }
    goto L_08B125E4;
L_08B125E4:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B125E8u, 0x00000031u, "special? not lowered yet"); return;
L_08B125EC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B125F0u, 0x00303130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 999u, 0x08B26724u>(ctx, &aot_mem); return;
    }
    goto L_08B125F4;
L_08B125F4:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B125F8u, 0x00000032u, "special? not lowered yet"); return;
L_08B125FC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12600u, 0x00313130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1000u, 0x08B26734u>(ctx, &aot_mem); return;
    }
    goto L_08B12604;
L_08B12604:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B12608u, 0x00000033u, "special? not lowered yet"); return;
L_08B1260C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12610u, 0x00303630u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1001u, 0x08B26744u>(ctx, &aot_mem); return;
    }
    goto L_08B12614;
L_08B12614:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B12618u, 0x00000034u, "special? not lowered yet"); return;
L_08B1261C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12620u, 0x00313630u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1002u, 0x08B26754u>(ctx, &aot_mem); return;
    }
    goto L_08B12624;
L_08B12624:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B12628u, 0x00000035u, "special? not lowered yet"); return;
L_08B1262C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12630u, 0x00333630u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1003u, 0x08B26764u>(ctx, &aot_mem); return;
    }
    goto L_08B12634;
L_08B12634:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B12638u, 0x00000036u, "special? not lowered yet"); return;
L_08B1263C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12640u, 0x00323630u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1004u, 0x08B26774u>(ctx, &aot_mem); return;
    }
    goto L_08B12644;
L_08B12644:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 4u>();
    rt.unsupported(0x08B12648u, 0x0031305Fu, "special? not lowered yet"); return;
L_08B1264C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12650u, 0x00323130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1005u, 0x08B26784u>(ctx, &aot_mem); return;
    }
    goto L_08B12654;
L_08B12654:
    rt.unsupported(0x08B12654u, 0x706D6967u, "unknown not lowered yet"); return;
L_08B1265C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12660u, 0x00333130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1006u, 0x08B26794u>(ctx, &aot_mem); return;
    }
    goto L_08B12664;
L_08B12664:
    rt.unsupported(0x08B12664u, 0x72657661u, "unknown not lowered yet"); return;
L_08B1266C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12670u, 0x00343130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1007u, 0x08B267A4u>(ctx, &aot_mem); return;
    }
    goto L_08B12674;
L_08B12674:
    rt.unsupported(0x08B12674u, 0x79626162u, "unknown not lowered yet"); return;
L_08B1267C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12680u, 0x00353130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1008u, 0x08B267B4u>(ctx, &aot_mem); return;
    }
    goto L_08B12684;
L_08B12684:
    rt.unsupported(0x08B12684u, 0x68676965u, "unknown not lowered yet"); return;
L_08B1268C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12690u, 0x00363130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1009u, 0x08B267C4u>(ctx, &aot_mem); return;
    }
    goto L_08B12694;
L_08B12694:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B12698u, 0x00003130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 214u, 0x08B2AC4Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1269C;
L_08B1269C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B126A0u, 0x00373130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1010u, 0x08B267D4u>(ctx, &aot_mem); return;
    }
    goto L_08B126A4;
L_08B126A4:
    rt.unsupported(0x08B126A4u, 0x6B63696Du, "unknown not lowered yet"); return;
L_08B126AC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B126B0u, 0x00383130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1011u, 0x08B267E4u>(ctx, &aot_mem); return;
    }
    goto L_08B126B4;
L_08B126B4:
    ctx.execute_vfpu_vscl_ct<98u, 105u, 107u, 1u>();
    rt.unsupported(0x08B126B8u, 0x00003272u, "special? not lowered yet"); return;
L_08B126BC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B126C0u, 0x00393130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1012u, 0x08B267F4u>(ctx, &aot_mem); return;
    }
    goto L_08B126C4;
L_08B126C4:
    rt.unsupported(0x08B126C4u, 0x67756874u, "vfpu1 not lowered yet"); return;
L_08B126CC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B126D0u, 0x00303230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1014u, 0x08B26804u>(ctx, &aot_mem); return;
    }
    goto L_08B126D4;
L_08B126D4:
    ctx.execute_vfpu_vminmax(104u, 105u, 116u, 1u, false);
    ctx.gpr[13] = (0u + 0u);
    goto L_08B126DC;
L_08B126DC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B126E0u, 0x00313230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1015u, 0x08B26814u>(ctx, &aot_mem); return;
    }
    goto L_08B126E4;
L_08B126E4:
    rt.unsupported(0x08B126E4u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B126EC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B126F0u, 0x00323230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1016u, 0x08B26824u>(ctx, &aot_mem); return;
    }
    goto L_08B126F4;
L_08B126F4:
    rt.unsupported(0x08B126F4u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B126FC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12700u, 0x00333230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1017u, 0x08B26834u>(ctx, &aot_mem); return;
    }
    goto L_08B12704;
L_08B12704:
    rt.unsupported(0x08B12704u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B1270C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12710u, 0x00343230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1018u, 0x08B26844u>(ctx, &aot_mem); return;
    }
    goto L_08B12714;
L_08B12714:
    rt.unsupported(0x08B12714u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B1271C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12720u, 0x00353230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1019u, 0x08B26854u>(ctx, &aot_mem); return;
    }
    goto L_08B12724;
L_08B12724:
    rt.unsupported(0x08B12724u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B1272C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12730u, 0x00363230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1020u, 0x08B26864u>(ctx, &aot_mem); return;
    }
    goto L_08B12734;
L_08B12734:
    rt.unsupported(0x08B12734u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B1273C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12740u, 0x00373230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1021u, 0x08B26874u>(ctx, &aot_mem); return;
    }
    goto L_08B12744;
L_08B12744:
    rt.unsupported(0x08B12744u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B1274C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12750u, 0x00383230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1022u, 0x08B26884u>(ctx, &aot_mem); return;
    }
    goto L_08B12754;
L_08B12754:
    rt.unsupported(0x08B12754u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B1275C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12760u, 0x00393230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1023u, 0x08B26894u>(ctx, &aot_mem); return;
    }
    goto L_08B12764;
L_08B12764:
    rt.unsupported(0x08B12764u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B1276C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12770u, 0x00303330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1024u, 0x08B268A4u>(ctx, &aot_mem); return;
    }
    goto L_08B12774;
L_08B12774:
    ctx.gpr[13] = (ctx.gpr[3] - ctx.gpr[16]);
    goto L_08B12778;
L_08B12778:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1277Cu, 0x00313330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1025u, 0x08B268B0u>(ctx, &aot_mem); return;
    }
    goto L_08B12780;
L_08B12780:
    rt.unsupported(0x08B12780u, 0x74617773u, "unknown not lowered yet"); return;
L_08B12788:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1278Cu, 0x00323330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1026u, 0x08B268C0u>(ctx, &aot_mem); return;
    }
    goto L_08B12790;
L_08B12790:
    ctx.gpr[12] = (ctx.gpr[3] ^ ctx.gpr[9]);
    goto L_08B12794;
L_08B12794:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12798u, 0x00333330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1027u, 0x08B268CCu>(ctx, &aot_mem); return;
    }
    goto L_08B1279C;
L_08B1279C:
    rt.unsupported(0x08B1279Cu, 0x796D7261u, "unknown not lowered yet"); return;
L_08B127A4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B127A8u, 0x00343330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1028u, 0x08B268DCu>(ctx, &aot_mem); return;
    }
    goto L_08B127AC;
L_08B127AC:
    ctx.execute_vfpu_vscl_ct<102u, 105u, 114u, 1u>();
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[3] : ctx.gpr[14]);
    goto L_08B127B4;
L_08B127B4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B127B8u, 0x00353330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1029u, 0x08B268ECu>(ctx, &aot_mem); return;
    }
    goto L_08B127BC;
L_08B127BC:
    rt.unsupported(0x08B127BCu, 0x706D6970u, "unknown not lowered yet"); return;
L_08B127C4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B127C8u, 0x00363330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1030u, 0x08B268FCu>(ctx, &aot_mem); return;
    }
    goto L_08B127CC;
L_08B127CC:
    rt.unsupported(0x08B127CCu, 0x736F7270u, "unknown not lowered yet"); return;
L_08B127D8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B127DCu, 0x00373330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1031u, 0x08B26910u>(ctx, &aot_mem); return;
    }
    goto L_08B127E0;
L_08B127E0:
    rt.unsupported(0x08B127E0u, 0x736E6F63u, "unknown not lowered yet"); return;
L_08B127E8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B127ECu, 0x00383330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1032u, 0x08B26920u>(ctx, &aot_mem); return;
    }
    goto L_08B127F0;
L_08B127F0:
    rt.unsupported(0x08B127F0u, 0x636E6976u, "vfpu0 not lowered yet"); return;
L_08B127F8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B127FCu, 0x00393330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1033u, 0x08B26930u>(ctx, &aot_mem); return;
    }
    goto L_08B12800;
L_08B12800:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B12804u, 0x00003130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 243u, 0x08B2ADD0u>(ctx, &aot_mem); return;
    }
    goto L_08B12808;
L_08B12808:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1280Cu, 0x00303430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1034u, 0x08B26940u>(ctx, &aot_mem); return;
    }
    goto L_08B12810;
L_08B12810:
    rt.unsupported(0x08B12810u, 0x757A616Bu, "unknown not lowered yet"); return;
L_08B12818:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1281Cu, 0x00343630u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1035u, 0x08B26950u>(ctx, &aot_mem); return;
    }
    goto L_08B12820;
L_08B12820:
    rt.unsupported(0x08B12820u, 0x73616B77u, "unknown not lowered yet"); return;
L_08B12828:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1282Cu, 0x00313430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1036u, 0x08B26960u>(ctx, &aot_mem); return;
    }
    goto L_08B12830;
L_08B12830:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B12834u, 0x00003130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 244u, 0x08B2ADE0u>(ctx, &aot_mem); return;
    }
    goto L_08B12838;
L_08B12838:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1283Cu, 0x00323430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1038u, 0x08B26970u>(ctx, &aot_mem); return;
    }
    goto L_08B12840;
L_08B12840:
    ctx.execute_vfpu_vhdp(70u, 97u, 116u, 1u);
    ctx.execute_vfpu_vcmp_ct<109u, 97u, 1u, 5u>();
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[17]);
    goto L_08B1284C;
L_08B1284C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12850u, 0x00333430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1039u, 0x08B26984u>(ctx, &aot_mem); return;
    }
    goto L_08B12854;
L_08B12854:
    ctx.execute_vfpu_vscl_ct<98u, 105u, 107u, 1u>();
    rt.unsupported(0x08B12858u, 0x00003172u, "special? not lowered yet"); return;
L_08B1285C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12860u, 0x00343430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1040u, 0x08B26994u>(ctx, &aot_mem); return;
    }
    goto L_08B12864;
L_08B12864:
    rt.unsupported(0x08B12864u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B1286C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12870u, 0x00353430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1043u, 0x08B269A4u>(ctx, &aot_mem); return;
    }
    goto L_08B12874;
L_08B12874:
    rt.unsupported(0x08B12874u, 0x775F7463u, "unknown not lowered yet"); return;
L_08B1287C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12880u, 0x00363430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1044u, 0x08B269B4u>(ctx, &aot_mem); return;
    }
    goto L_08B12884;
L_08B12884:
    ctx.execute_vfpu_vminmax(99u, 116u, 95u, 1u, false);
    ctx.gpr[13] = (ctx.gpr[1] + ctx.gpr[18]);
    goto L_08B1288C;
L_08B1288C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12890u, 0x00373430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1045u, 0x08B269C4u>(ctx, &aot_mem); return;
    }
    goto L_08B12894;
L_08B12894:
    rt.unsupported(0x08B12894u, 0x6E796177u, "vfpu3 not lowered yet"); return;
L_08B1289C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B128A0u, 0x00383430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1046u, 0x08B269D4u>(ctx, &aot_mem); return;
    }
    goto L_08B128A4;
L_08B128A4:
    ctx.execute_vfpu_vcmp_ct<97u, 117u, 1u, 0u>();
    rt.unsupported(0x08B128A8u, 0x00006569u, "special? not lowered yet"); return;
L_08B128AC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B128B0u, 0x00393430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1047u, 0x08B269E4u>(ctx, &aot_mem); return;
    }
    goto L_08B128B4;
L_08B128B4:
    rt.unsupported(0x08B128B4u, 0x616D6566u, "vfpu0 not lowered yet"); return;
L_08B128C0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B128C4u, 0x00303530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1049u, 0x08B269F8u>(ctx, &aot_mem); return;
    }
    goto L_08B128C8;
L_08B128C8:
    ctx.execute_vfpu_vscl_ct<109u, 97u, 108u, 1u>();
    rt.unsupported(0x08B128CCu, 0x00003330u, "special? not lowered yet"); return;
L_08B128D0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B128D4u, 0x00313530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1050u, 0x08B26A08u>(ctx, &aot_mem); return;
    }
    goto L_08B128D8;
L_08B128D8:
    ctx.execute_vfpu_vminmax(115u, 99u, 117u, 1u, false);
    rt.unsupported(0x08B128DCu, 0x6E616D5Fu, "vfpu3 not lowered yet"); return;
L_08B128E4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B128E8u, 0x00323530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1051u, 0x08B26A1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B128EC;
L_08B128EC:
    rt.unsupported(0x08B128ECu, 0x69786174u, "unknown not lowered yet"); return;
L_08B128F4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B128F8u, 0x00333530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1052u, 0x08B26A2Cu>(ctx, &aot_mem); return;
    }
    goto L_08B128FC;
L_08B128FC:
    rt.unsupported(0x08B128FCu, 0x696C6564u, "unknown not lowered yet"); return;
L_08B12904:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12908u, 0x00343530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1053u, 0x08B26A3Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1290C;
L_08B1290C:
    ctx.execute_vfpu_vminmax(99u, 114u, 105u, 1u, false);
    ctx.execute_vfpu_vcmp_ct<110u, 97u, 1u, 9u>();
    rt.unsupported(0x08B12914u, 0x00003230u, "special? not lowered yet"); return;
L_08B12918:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1291Cu, 0x00353530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1055u, 0x08B26A50u>(ctx, &aot_mem); return;
    }
    goto L_08B12920;
L_08B12920:
    ctx.execute_vfpu_vscl_ct<109u, 97u, 108u, 1u>();
    rt.unsupported(0x08B12924u, 0x00003130u, "special? not lowered yet"); return;
L_08B12928:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1292Cu, 0x00363530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1056u, 0x08B26A60u>(ctx, &aot_mem); return;
    }
    goto L_08B12930;
L_08B12930:
    ctx.execute_vfpu_compare3(112u, 95u, 119u, 1u, 6u);
    ctx.gpr[6] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B12938;
L_08B12938:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1293Cu, 0x00373530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1058u, 0x08B26A70u>(ctx, &aot_mem); return;
    }
    goto L_08B12940;
L_08B12940:
    ctx.execute_vfpu_compare3(66u, 95u, 119u, 1u, 6u);
    ctx.gpr[6] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B12948;
L_08B12948:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1294Cu, 0x00383530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1060u, 0x08B26A80u>(ctx, &aot_mem); return;
    }
    goto L_08B12950;
L_08B12950:
    rt.unsupported(0x08B12950u, 0x736F7270u, "unknown not lowered yet"); return;
L_08B1295C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12960u, 0x00393530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1061u, 0x08B26A94u>(ctx, &aot_mem); return;
    }
    goto L_08B12964;
L_08B12964:
    rt.unsupported(0x08B12964u, 0x74726170u, "unknown not lowered yet"); return;
L_08B12970:
    rt.unsupported(0x08B12970u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B12984:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B12988u, 0x6877202Au, "unknown not lowered yet"); return;
L_08B129C0:
    ctx.execute_vfpu_vminmax(67u, 84u, 105u, 1u, false);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<77u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<101u, 1u>(vfpu_d); }
    rt.unsupported(0x08B129C8u, 0x6E496C65u, "vfpu3 not lowered yet"); return;
L_08B129D0:
    rt.unsupported(0x08B129D0u, 0x43534944u, "unknown not lowered yet"); return;
L_08B129DC:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B129E0u, 0x44525355u, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[1];
    ctx.gpr[10] = (0x08B129ECu);
    rt.unsupported(0x08B129E8u, 0x0000005Cu, "special? not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B129ECu) goto L_08B129EC;
    return;
L_08B129E8:
    rt.unsupported(0x08B129E8u, 0x0000005Cu, "special? not lowered yet"); return;
L_08B129EC:
    rt.unsupported(0x08B129ECu, 0x00627273u, "special? not lowered yet"); return;
L_08B12A00:
    rt.unsupported(0x08B12A00u, 0x20746F6Eu, "unknown not lowered yet"); return;
L_08B12A14:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B12A18u, 0x6E692072u, "vfpu3 not lowered yet"); return;
L_08B12A2C:
    rt.unsupported(0x08B12A2Cu, 0x63617473u, "vfpu0 not lowered yet"); return;
L_08B12A3C:
    rt.unsupported(0x08B12A3Cu, 0x0000006Eu, "special? not lowered yet"); return;
L_08B12A40:
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 3u>();
    // nop
    goto L_08B12A48;
L_08B12A48:
    rt.unsupported(0x08B12A48u, 0x74732043u, "unknown not lowered yet"); return;
L_08B12A5C:
    rt.unsupported(0x08B12A5Cu, 0x6E6E6163u, "vfpu3 not lowered yet"); return;
L_08B12A7C:
    rt.unsupported(0x08B12A7Cu, 0x6E6E6163u, "vfpu3 not lowered yet"); return;
L_08B12AA4:
    ctx.execute_vfpu_vscl_ct<97u, 116u, 116u, 1u>();
    rt.unsupported(0x08B12AA8u, 0x2074706Du, "unknown not lowered yet"); return;
L_08B12AD8:
    rt.unsupported(0x08B12AD8u, 0x6E6E6163u, "vfpu3 not lowered yet"); return;
L_08B12AF8:
    if (ctx.gpr[1] == ctx.gpr[10]) {
    ctx.execute_vfpu_compare3(114u, 101u, 108u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 385u, 0x08B1D3A4u>(ctx, &aot_mem); return;
    }
    goto L_08B12B00;
L_08B12B00:
    rt.unsupported(0x08B12B00u, 0x75436461u, "unknown not lowered yet"); return;
L_08B12B14:
    rt.unsupported(0x08B12B18u, 0x5079616Cu, "control flow in delay slot"); return;
L_08B12B1C:
    ctx.execute_vfpu_compare3(114u, 101u, 108u, 1u, 6u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    if (ctx.gpr[27] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<99u, 101u, 110u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 4u, 0x08B30034u>(ctx, &aot_mem); return;
    }
    goto L_08B12B2C;
L_08B12B2C:
    rt.unsupported(0x08B12B2Cu, 0x6973754Du, "unknown not lowered yet"); return;
L_08B12B34:
    if (ctx.gpr[25] == ctx.gpr[10]) {
    rt.unsupported(0x08B12B38u, 0x43706F74u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 392u, 0x08B1D3E0u>(ctx, &aot_mem); return;
    }
    goto L_08B12B3C;
L_08B12B3C:
    rt.unsupported(0x08B12B3Cu, 0x63537475u, "vfpu0 not lowered yet"); return;
L_08B12B4C:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B12B50u, 0x6E692072u, "vfpu3 not lowered yet"); return;
L_08B12B64:
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(8260));
    (void)(static_cast<std::int32_t>(ctx.gpr[1]) < 10596 ? 1u : 0u);
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_compare3(114u, 32u, 99u, 1u, 6u);
    (void)(25956u << 16u);
    ctx.gpr[24] = (ctx.gpr[11] + static_cast<std::uint32_t>(12320));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B12B80;
L_08B12B80:
    rt.unsupported(0x08B12B80u, 0x72685467u, "unknown not lowered yet"); return;
L_08B12BA4:
    rt.unsupported(0x08B12BA4u, 0x74696E69u, "unknown not lowered yet"); return;
L_08B12BBC:
    rt.unsupported(0x08B12BBCu, 0x6973756Du, "unknown not lowered yet"); return;
L_08B12BD0:
    rt.unsupported(0x08B12BD0u, 0x6E756F73u, "vfpu3 not lowered yet"); return;
L_08B12BE4:
    rt.unsupported(0x08B12BE4u, 0x41525441u, "unknown not lowered yet"); return;
L_08B12BF8:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B12BFCu, 0x6E692072u, "vfpu3 not lowered yet"); return;
L_08B12C2C:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B12C30u, 0x6E692072u, "vfpu3 not lowered yet"); return;
L_08B12C48:
    ctx.gpr[4] = (0u & ctx.gpr[10]);
    goto L_08B12C4C;
L_08B12C4C:
    rt.unsupported(0x08B12C4Cu, 0x20776F68u, "unknown not lowered yet"); return;
L_08B12C78:
    rt.unsupported(0x08B12C78u, 0x706F7473u, "unknown not lowered yet"); return;
L_08B12C94:
    rt.unsupported(0x08B12C94u, 0x6973756Du, "unknown not lowered yet"); return;
L_08B12CBC:
    rt.unsupported(0x08B12CBCu, 0x20212121u, "unknown not lowered yet"); return;
L_08B12CD4:
    rt.unsupported(0x08B12CD4u, 0x72617473u, "unknown not lowered yet"); return;
L_08B12CF4:
    rt.unsupported(0x08B12CF4u, 0x20564157u, "unknown not lowered yet"); return;
L_08B12D2C:
    rt.unsupported(0x08B12D2Cu, 0x20564157u, "unknown not lowered yet"); return;
L_08B12D64:
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    rt.unsupported(0x08B12D6Cu, 0x74696177u, "unknown not lowered yet"); return;
L_08B12D88:
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    rt.unsupported(0x08B12D90u, 0x7268743Du, "unknown not lowered yet"); return;
L_08B12DA8:
    rt.unsupported(0x08B12DA8u, 0x43534944u, "unknown not lowered yet"); return;
L_08B12DB4:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B12DB8u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B12DBCu, 0x412F5249u, "unknown not lowered yet"); return;
L_08B12DD4:
    rt.unsupported(0x08B12DD4u, 0x20746F6Eu, "unknown not lowered yet"); return;
L_08B12DF0:
    rt.unsupported(0x08B12DF0u, 0x69646152u, "unknown not lowered yet"); return;
L_08B12E28:
    rt.unsupported(0x08B12E28u, 0x69646172u, "unknown not lowered yet"); return;
L_08B12E3C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[16] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 108u, 0x08B24358u>(ctx, &aot_mem); return;
    }
    goto L_08B12E44;
L_08B12E44:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[17] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 109u, 0x08B24360u>(ctx, &aot_mem); return;
    }
    goto L_08B12E4C;
L_08B12E4C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[18] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 110u, 0x08B24368u>(ctx, &aot_mem); return;
    }
    goto L_08B12E54;
L_08B12E54:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[19] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 111u, 0x08B24370u>(ctx, &aot_mem); return;
    }
    goto L_08B12E5C;
L_08B12E5C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[20] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 112u, 0x08B24378u>(ctx, &aot_mem); return;
    }
    goto L_08B12E64;
L_08B12E64:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[21] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 113u, 0x08B24380u>(ctx, &aot_mem); return;
    }
    goto L_08B12E6C;
L_08B12E6C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[22] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 114u, 0x08B24388u>(ctx, &aot_mem); return;
    }
    goto L_08B12E74;
L_08B12E74:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[23] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 115u, 0x08B24390u>(ctx, &aot_mem); return;
    }
    goto L_08B12E7C;
L_08B12E7C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[24] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 116u, 0x08B24398u>(ctx, &aot_mem); return;
    }
    goto L_08B12E84;
L_08B12E84:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[25] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 117u, 0x08B243A0u>(ctx, &aot_mem); return;
    }
    goto L_08B12E8C;
L_08B12E8C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12E90u, 0x004E4F4Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 118u, 0x08B243A8u>(ctx, &aot_mem); return;
    }
    goto L_08B12E94;
L_08B12E94:
    rt.unsupported(0x08B12E94u, 0x002E2E2Eu, "special? not lowered yet"); return;
L_08B12E98:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B12E9Cu, 0x49545241u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 126u, 0x08B243E4u>(ctx, &aot_mem); return;
    }
    goto L_08B12EA0;
L_08B12EA0:
    if (ctx.gpr[1] != 0u) {
    rt.unsupported(0x08B12EA4u, 0x4B434152u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 389u, 0x08B24BDCu>(ctx, &aot_mem); return;
    }
    goto L_08B12EA8;
L_08B12EA8:
    { const bool signed_ok = ctx.execute_signed_add(1u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B12EA8u, 0x00000A20u); return; } }
    goto L_08B12EAC;
L_08B12EAC:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B12EB0u, 0x49545241u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 129u, 0x08B243F8u>(ctx, &aot_mem); return;
    }
    goto L_08B12EB4;
L_08B12EB4:
    rt.unsupported(0x08B12EB4u, 0x4320474Eu, "unknown not lowered yet"); return;
L_08B12EC4:
    if (0u == 0u) (void)(0u);
    goto L_08B12EC8;
L_08B12EC8:
    if (ctx.gpr[3] == ctx.gpr[14]) {
    rt.unsupported(0x08B12ECCu, 0x6979616Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 219u, 0x08B2AC80u>(ctx, &aot_mem); return;
    }
    goto L_08B12ED0;
L_08B12ED0:
    rt.unsupported(0x08B12ED0u, 0x7254676Eu, "unknown not lowered yet"); return;
L_08B12EE4:
    rt.unsupported(0x08B12EE4u, 0x74657920u, "unknown not lowered yet"); return;
L_08B12F08:
    rt.unsupported(0x08B12F08u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B12F1C:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B12F20u, 0x706F2072u, "unknown not lowered yet"); return;
L_08B12F34:
    rt.unsupported(0x08B12F34u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B12F40:
    rt.unsupported(0x08B12F40u, 0x6E6E6163u, "vfpu3 not lowered yet"); return;
L_08B12F68:
    rt.unsupported(0x08B12F68u, 0x20746F67u, "unknown not lowered yet"); return;
L_08B12F7C:
    rt.unsupported(0x08B12F7Cu, 0x6279616Du, "vfpu0 not lowered yet"); return;
L_08B12FAC:
    rt.unsupported(0x08B12FACu, 0x44414552u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[18] == ctx.gpr[8]) {
    rt.unsupported(0x08B12FB4u, 0x4F485345u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 1u, 0x08B28034u>(ctx, &aot_mem); return;
    }
    goto L_08B12FB8;
L_08B12FB8:
    rt.unsupported(0x08B12FB8u, 0x203A444Cu, "unknown not lowered yet"); return;
L_08B12FC0:
    if (ctx.gpr[25] != 0u) {
    rt.unsupported(0x08B12FC4u, 0x49544941u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 471u, 0x08B1D86Cu>(ctx, &aot_mem); return;
    }
    goto L_08B12FC8;
L_08B12FC8:
    rt.unsupported(0x08B12FC8u, 0x203A474Eu, "unknown not lowered yet"); return;
L_08B12FD4:
    rt.unsupported(0x08B12FD4u, 0x43202A2Au, "unknown not lowered yet"); return;
L_08B12FEC:
    ctx.execute_vfpu_compare3(100u, 101u, 99u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<100u, 101u, 32u, 1u>();
    (void)(ctx.gpr[1] & 29298u);
    rt.unsupported(0x08B12FF8u, 0x20782578u, "unknown not lowered yet"); return;
L_08B13004:
    rt.unsupported(0x08B13004u, 0x6973756Du, "unknown not lowered yet"); return;
L_08B1304C:
    rt.unsupported(0x08B1304Cu, 0x4953554Du, "cop2/vfpu not lowered yet"); return;
L_08B13060:
    rt.unsupported(0x08B13060u, 0x20692528u, "unknown not lowered yet"); return;
L_08B13074:
    rt.unsupported(0x08B13074u, 0x73706F6Fu, "unknown not lowered yet"); return;
L_08B13094:
    rt.unsupported(0x08B13094u, 0x6E797361u, "vfpu3 not lowered yet"); return;
L_08B130A8:
    rt.unsupported(0x08B130A8u, 0x6973756Du, "unknown not lowered yet"); return;
L_08B130B4:
    rt.unsupported(0x08B130B4u, 0x6973756Du, "unknown not lowered yet"); return;
L_08B130CC:
    rt.unsupported(0x08B130D0u, 0x54204D4Fu, "control flow in delay slot"); return;
L_08B130D4:
    rt.unsupported(0x08B130D4u, 0x4B434152u, "cop2/vfpu not lowered yet"); return;
L_08B130E4:
    if (ctx.gpr[2] == ctx.gpr[15]) {
    rt.unsupported(0x08B130E8u, 0x20444550u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 4u, 0x08B28234u>(ctx, &aot_mem); return;
    }
    goto L_08B130EC;
L_08B130EC:
    rt.unsupported(0x08B130F0u, 0x54204D4Fu, "control flow in delay slot"); return;
L_08B130F4:
    rt.unsupported(0x08B130F4u, 0x4B434152u, "cop2/vfpu not lowered yet"); return;
L_08B13100:
    rt.unsupported(0x08B13100u, 0x74617473u, "unknown not lowered yet"); return;
L_08B1312C:
    rt.unsupported(0x08B1312Cu, 0x72617473u, "unknown not lowered yet"); return;
L_08B13150:
    rt.unsupported(0x08B13150u, 0x74617473u, "unknown not lowered yet"); return;
L_08B13184:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08B13188u, 0x72696620u, "unknown not lowered yet"); return;
L_08B131A0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08B131A4u, 0x63657320u, "vfpu0 not lowered yet"); return;
L_08B131B4:
    rt.unsupported(0x08B131B4u, 0x74617473u, "unknown not lowered yet"); return;
L_08B131D8:
    rt.unsupported(0x08B131D8u, 0x7469736Fu, "unknown not lowered yet"); return;
L_08B131E4:
    rt.unsupported(0x08B131E4u, 0x616C5067u, "vfpu0 not lowered yet"); return;
L_08B131FC:
    rt.unsupported(0x08B131FCu, 0x74617473u, "unknown not lowered yet"); return;
L_08B13224:
    rt.unsupported(0x08B13224u, 0x74617473u, "unknown not lowered yet"); return;
L_08B13308:
    rt.unsupported(0x08B1330Cu, 0x53492045u, "control flow in delay slot"); return;
L_08B13310:
    rt.unsupported(0x08B13310u, 0x204F4E20u, "unknown not lowered yet"); return;
L_08B1332C:
    if (ctx.gpr[18] == ctx.gpr[15]) {
    ctx.execute_vfpu_vhdp(83u, 58u, 37u, 1u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1069u, 0x08B2703Cu>(ctx, &aot_mem); return;
    }
    goto L_08B13334;
L_08B13334:
    rt.unsupported(0x08B13334u, 0x20662520u, "unknown not lowered yet"); return;
L_08B1334C:
    ctx.execute_vfpu_compare3(68u, 67u, 111u, 1u, 6u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 199u, 0x08A591C8u>(ctx, &aot_mem); return;
L_08B133E0:
    ctx.gpr[17] = (ctx.gpr[1] | 11813u);
    (void)(~(0u | 0u));
    goto L_08B133E8;
L_08B133E8:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 100u, 1u>();
    rt.unsupported(0x08B133ECu, 0x00000078u, "special? not lowered yet"); return;
L_08B133F0:
    rt.unsupported(0x08B133F0u, 0x706F6F6Cu, "unknown not lowered yet"); return;
L_08B13404:
    rt.unsupported(0x08B13404u, 0x706F6F6Cu, "unknown not lowered yet"); return;
L_08B13418:
    rt.unsupported(0x08B13418u, 0x69727473u, "unknown not lowered yet"); return;
L_08B13430:
    rt.unsupported(0x08B13430u, 0x705F5F60u, "unknown not lowered yet"); return;
L_08B1345C:
    rt.unsupported(0x08B1345Cu, 0x726F6660u, "unknown not lowered yet"); return;
L_08B13484:
    rt.unsupported(0x08B13484u, 0x726F6660u, "unknown not lowered yet"); return;
L_08B134A4:
    rt.unsupported(0x08B134A4u, 0x726F6660u, "unknown not lowered yet"); return;
L_08B134C0:
    rt.unsupported(0x08B134C0u, 0x7478656Eu, "unknown not lowered yet"); return;
L_08B13504:
    rt.unsupported(0x08B13508u, 0x088D31ACu, "control flow in delay slot"); return;
L_08B13578:
    rt.unsupported(0x08B13578u, 0x20756F79u, "unknown not lowered yet"); return;
L_08B13598:
    rt.unsupported(0x08B13598u, 0x69797254u, "unknown not lowered yet"); return;
L_08B135C0:
    ctx.execute_vfpu_vcmp_ct<105u, 108u, 1u, 11u>();
    rt.unsupported(0x08B135C4u, 0x62206465u, "vfpu0 not lowered yet"); return;
L_08B135E0:
    rt.unsupported(0x08B135E0u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B13748:
    rt.unsupported(0x08B13748u, 0x41454C43u, "unknown not lowered yet"); return;
L_08B1375C:
    rt.unsupported(0x08B1375Cu, 0x445F4E4Fu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B13760u, 0x47414D41u, "cop1? not lowered yet"); return;
L_08B13780:
    rt.unsupported(0x08B13780u, 0x41454C43u, "unknown not lowered yet"); return;
L_08B13794:
    rt.unsupported(0x08B13794u, 0x41445F4Eu, "unknown not lowered yet"); return;
L_08B137A4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B137A8u, 0x6E73656Fu, "vfpu3 not lowered yet"); return;
L_08B13B20:
    ctx.execute_vfpu_vscl_ct<67u, 97u, 109u, 1u>();
    rt.unsupported(0x08B13B24u, 0x61466172u, "vfpu0 not lowered yet"); return;
L_08B13B30:
    ctx.execute_vfpu_vscl_ct<67u, 97u, 109u, 1u>();
    rt.unsupported(0x08B13B34u, 0x61466172u, "vfpu0 not lowered yet"); return;
L_08B13B40:
    rt.unsupported(0x08B13B40u, 0x61437349u, "vfpu0 not lowered yet"); return;
L_08B13B50:
    rt.unsupported(0x08B13B50u, 0x46746553u, "cop1? not lowered yet"); return;
L_08B13B60:
    rt.unsupported(0x08B13B60u, 0x74736552u, "unknown not lowered yet"); return;
L_08B13B70:
    rt.unsupported(0x08B13B70u, 0x46544553u, "cop1? not lowered yet"); return;
L_08B13B80:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B13B84u, 0x4345524Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 555u, 0x08B250CCu>(ctx, &aot_mem); return;
    }
    goto L_08B13B88;
L_08B13B88:
    if (ctx.gpr[18] == ctx.gpr[5]) {
    rt.unsupported(0x08B13B8Cu, 0x00000041u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1070u, 0x08B27090u>(ctx, &aot_mem); return;
    }
    goto L_08B13B90;
L_08B13B90:
    rt.unsupported(0x08B13B94u, 0x536D6165u, "control flow in delay slot"); return;
L_08B13B98:
    ctx.execute_vfpu_vscl_ct<99u, 111u, 114u, 1u>();
    // nop
    goto L_08B13BA0;
L_08B13BA0:
    rt.unsupported(0x08B13BA4u, 0x536D6165u, "control flow in delay slot"); return;
L_08B13BA8:
    ctx.execute_vfpu_vscl_ct<99u, 111u, 114u, 1u>();
    // nop
    goto L_08B13BB0;
L_08B13BB0:
    rt.unsupported(0x08B13BB0u, 0x76457349u, "unknown not lowered yet"); return;
L_08B13BBC:
    rt.unsupported(0x08B13BBCu, 0x74706D45u, "unknown not lowered yet"); return;
L_08B13BC4:
    rt.unsupported(0x08B13BC4u, 0x45746547u, "cop1? not lowered yet"); return;
L_08B13BD0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<83u, 1u>(vfpu_d); }
    rt.unsupported(0x08B13BD4u, 0x6E657645u, "vfpu3 not lowered yet"); return;
L_08B13BDC:
    rt.unsupported(0x08B13BDCu, 0x61656C43u, "vfpu0 not lowered yet"); return;
L_08B13BEC:
    rt.unsupported(0x08B13BECu, 0x6B73614Du, "unknown not lowered yet"); return;
L_08B13BFC:
    rt.unsupported(0x08B13C00u, 0x546D6165u, "control flow in delay slot"); return;
L_08B13C04:
    rt.unsupported(0x08B13C04u, 0x72656D69u, "unknown not lowered yet"); return;
L_08B13C0C:
    rt.unsupported(0x08B13C10u, 0x546D6165u, "control flow in delay slot"); return;
L_08B13C14:
    rt.unsupported(0x08B13C14u, 0x72656D69u, "unknown not lowered yet"); return;
L_08B13C1C:
    rt.unsupported(0x08B13C20u, 0x546D6165u, "control flow in delay slot"); return;
L_08B13C24:
    rt.unsupported(0x08B13C24u, 0x72656D69u, "unknown not lowered yet"); return;
L_08B13C34:
    rt.unsupported(0x08B13C34u, 0x70537349u, "unknown not lowered yet"); return;
L_08B13C48:
    ctx.execute_vfpu_vscl_ct<68u, 111u, 77u, 1u>();
    rt.unsupported(0x08B13C4Cu, 0x79726F6Du, "unknown not lowered yet"); return;
L_08B13C58:
    rt.unsupported(0x08B13C58u, 0x706D7544u, "unknown not lowered yet"); return;
L_08B13C70:
    rt.unsupported(0x08B13C70u, 0x61656C63u, "vfpu0 not lowered yet"); return;
L_08B13D00:
    ctx.execute_vfpu_vscl_ct<102u, 97u, 100u, 1u>();
    ctx.execute_vfpu_vcmp_ct<99u, 111u, 1u, 0u>();
    rt.unsupported(0x08B13D08u, 0x2072756Fu, "unknown not lowered yet"); return;
L_08B13D20:
    ctx.gpr[13] = (ctx.gpr[9] < static_cast<std::uint32_t>(11565) ? 1u : 0u);
    rt.unsupported(0x08B13D24u, 0x616F4C20u, "vfpu0 not lowered yet"); return;
L_08B13D5C:
    rt.unsupported(0x08B13D5Cu, 0x61727241u, "vfpu0 not lowered yet"); return;
L_08B13D70:
    rt.unsupported(0x08B13D70u, 0x68746150u, "unknown not lowered yet"); return;
L_08B13D80:
    rt.unsupported(0x08B13D80u, 0x69617254u, "unknown not lowered yet"); return;
L_08B13D88:
    rt.unsupported(0x08B13D88u, 0x69617254u, "unknown not lowered yet"); return;
L_08B13D90:
    rt.unsupported(0x08B13D90u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08B13D98:
    rt.unsupported(0x08B13D98u, 0x00000072u, "special? not lowered yet"); return;
L_08B13D9C:
    // nop
    rt.unsupported(0x08B13DA4u, 0x088F00C4u, "control flow in delay slot"); return;
}

void recomp_unit_0195(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0195_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_195(Runtime &runtime) {
    runtime.register_generated_unit(195u, 0x08B10000u, 16384u, &recomp_unit_0195, &recomp_unit_0195_entry);
    runtime.register_function(0x08B10000u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10008u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10038u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10060u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10084u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1008Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10094u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B100BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B100C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B100DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B100FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10100u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10104u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10108u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1010Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10110u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10114u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10118u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1011Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10120u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10124u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10148u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10154u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10A94u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10BF8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10F18u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10F6Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10F7Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10F90u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10F98u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10FB0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10FCCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10FD8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10FF0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10FF8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11000u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11010u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11020u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11030u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1105Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11064u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1107Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11094u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B110CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B110ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1111Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11140u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1114Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1116Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11188u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11194u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B111D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B111F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11210u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11218u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11238u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1125Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1127Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B112ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B112C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B112C8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B112DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B112F8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11300u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11314u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11328u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11330u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11338u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1134Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1135Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11364u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11390u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B113B8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B113E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B113F8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11420u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1142Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11444u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11470u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11478u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B114C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11510u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11518u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1151Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11528u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11530u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11538u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1153Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11544u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1154Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1155Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11570u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11578u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11590u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115B0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115B8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115F4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115F8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11604u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1160Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11618u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11628u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1162Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11648u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11678u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11680u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11688u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B116A0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B116A8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B116B0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B116B8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B116D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11704u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11734u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11770u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11798u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B117D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11834u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11868u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11884u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B118A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B118A8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B118D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11900u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11924u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1194Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11970u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1198Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B119B8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B119E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11A08u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11A20u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11A24u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11A40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11A6Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11AACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11AB8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11AE0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B08u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B28u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B30u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B44u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B58u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B68u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B7Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B84u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B88u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B8Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B98u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11BA0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11BC8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11BD4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C04u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C0Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C14u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C28u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C38u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C4Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C58u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C60u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C78u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C80u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C94u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C9Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CA4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CB4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CBCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CC4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CCCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CE8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CF8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D10u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D20u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D3Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D4Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D5Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D6Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D7Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D8Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D9Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11DB0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11DDCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11DE0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11DECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E08u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E28u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E30u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E44u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E60u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E64u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E6Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E8Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11EA8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11EC0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11ECCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11ED4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11EE8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F08u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F20u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F38u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11FE8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1200Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12028u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1204Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12068u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12090u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B120A0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B120C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B120D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B120E8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B120FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12100u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12118u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12128u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12168u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12174u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1217Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12184u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12188u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B121A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B121F4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12200u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12238u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12254u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12260u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12268u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12278u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B122C8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B122ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12308u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12320u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12508u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12510u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12518u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12520u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12524u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12548u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1254Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12554u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1255Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12564u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1256Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12574u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1257Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12584u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1258Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12594u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1259Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125F4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12604u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1260Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12614u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1261Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12624u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1262Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12634u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1263Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12644u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1264Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12654u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1265Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12664u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1266Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12674u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1267Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12684u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1268Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12694u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1269Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126F4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12704u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1270Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12714u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1271Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12724u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1272Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12734u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1273Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12744u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1274Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12754u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1275Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12764u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1276Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12774u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12778u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12780u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12788u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12790u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12794u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1279Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127E8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127F8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12800u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12808u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12810u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12818u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12820u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12828u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12830u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12838u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12840u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1284Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12854u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1285Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12864u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1286Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12874u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1287Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12884u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1288Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12894u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1289Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128C8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128F4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12904u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1290Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12918u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12920u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12928u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12930u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12938u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12940u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12948u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12950u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1295Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12964u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12970u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12984u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B129C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B129D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B129DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B129E8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B129ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12A00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12A14u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12A2Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12A3Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12A40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12A48u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12A5Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12A7Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12AA4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12AD8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12AF8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B14u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B1Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B2Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B34u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B3Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B4Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B64u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B80u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BA4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BBCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BD0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BE4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BF8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C2Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C48u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C4Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C78u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C94u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12CBCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12CD4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12CF4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D2Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D64u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D88u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12DA8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12DB4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12DD4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12DF0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E28u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E3Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E44u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E4Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E54u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E5Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E64u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E6Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E74u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E7Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E84u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E8Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E94u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E98u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12EA0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12EA8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12EACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12EB4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12EC4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12EC8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12ED0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12EE4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F08u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F1Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F34u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F68u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F7Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12FACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12FB8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12FC0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12FC8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12FD4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12FECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13004u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1304Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13060u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13074u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13094u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B130A8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B130B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B130CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B130D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B130E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B130ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B130F4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13100u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1312Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13150u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13184u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B131A0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B131B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B131D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B131E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B131FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13224u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13308u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13310u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1332Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13334u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1334Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B133E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B133E8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B133F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13404u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13418u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13430u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1345Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13484u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B134A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B134C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13504u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13578u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13598u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B135C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B135E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13748u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1375Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13780u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13794u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B137A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B20u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B30u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B50u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B60u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B70u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B80u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B88u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B90u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13B98u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BA0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BA8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BB0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BBCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BC4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BD0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BDCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BFCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C04u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C0Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C14u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C1Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C24u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C34u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C48u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C58u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C70u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D20u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D5Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D70u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D80u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D88u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D90u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D98u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D9Cu, &recomp_unit_0195, "recomp_unit_0195");
}
} // namespace psprecomp
