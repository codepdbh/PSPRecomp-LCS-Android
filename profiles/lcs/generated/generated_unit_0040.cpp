#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0040[4094] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24,
    0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 30, 0, 31, 32, 0, 0, 0, 0, 0, 0, 33, 0, 34, 35, 0, 0, 0, 0, 0, 0, 36, 0, 37, 38, 0, 0, 0, 0, 0,
    0, 39, 0, 40, 41, 0, 0, 0, 0, 0, 0, 42, 0, 43, 44, 0, 0, 0, 0, 0, 0, 45, 0, 46, 47, 0, 0, 0, 0, 0, 0, 48,
    0, 49, 50, 0, 0, 0, 0, 0, 0, 51, 0, 52, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 78, 79, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0,
    0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114,
    0, 0, 115, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 130, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0,
    0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 149, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155,
    0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158,
    0, 0, 0, 159, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 163, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 168, 0, 169, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 178, 179, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0,
    0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 197, 0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 201,
    0, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 0, 209, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213,
    0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221,
    0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0,
    0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0,
    237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 260, 261, 0, 0, 0, 0, 262, 0,
    0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 267, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0,
    0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 286,
    0, 287, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 293, 0, 294, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0,
    0, 0, 0, 302, 0, 303, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 309, 0, 0,
    310, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 329, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 334, 0,
    0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0,
    0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 349, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 354, 0,
    355, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 362, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365, 0, 366, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 369,
    0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374,
    0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 381, 0,
    0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 389,
    0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0,
    0, 0, 397, 0, 0, 398, 399, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 403, 0, 404, 0, 0, 0, 0, 0, 405, 0,
    0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 423, 424, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 427, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 434, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0,
    0, 439, 0, 0, 0, 0, 0, 440, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 447, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 449, 0, 0, 450, 0, 451, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 453, 0, 0, 454, 0, 455, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 464, 465, 0,
    0, 0, 0, 466, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 475, 0, 476, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0, 480, 0,
    481, 0, 482, 0, 483, 484, 0, 485, 0, 486, 0, 0, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 0, 0, 0, 494,
    0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 497, 0, 498, 0, 499, 0, 500, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0,
    0, 0, 0, 0, 503, 0, 504, 0, 0, 505, 0, 506, 0, 507, 0, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 0, 515,
    0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 519, 0, 520, 0, 521, 0, 522, 0, 0, 523, 0, 0, 0, 0,
    524, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 527, 0, 528, 529, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532,
    0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534, 535, 536, 0, 537, 0, 0, 538, 0, 539, 540, 0, 0, 0, 541, 0, 0,
    0, 542, 0, 543, 0, 544, 0, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 549, 0,
    550, 0, 551, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    559, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0, 563, 0, 564, 565, 0, 0, 566, 0, 0, 0, 567, 0,
    0, 0, 0, 0, 568, 569, 570, 0, 571, 0, 0, 572, 0, 573, 0, 574, 0, 0, 575, 0, 576, 577, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0,
    0, 0, 0, 579, 580, 581, 0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 585, 0, 586, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 590, 0, 0,
    591, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 595, 0, 596, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0,
    0, 599, 0, 0, 600, 0, 0, 601, 602, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 605, 606, 0, 0, 607, 0, 608, 0, 609, 0, 0,
    0, 610, 0, 0, 0, 611, 0, 0, 612, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 615, 616, 0, 0, 617, 0, 618, 0, 619, 0, 0, 0, 620,
    0, 0, 0, 621, 0, 0, 622, 0, 0, 623, 624, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 627, 0, 628, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 631, 0, 632, 0, 633, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 637,
    0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 0, 0, 641, 0, 0,
    642, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 645, 0, 0, 646, 0, 0, 0, 647, 0, 0, 648, 0, 649, 0, 0, 650, 0, 0, 0, 651, 0,
    0, 652, 0, 653, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 656, 657, 0, 658, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 659, 0, 660, 661, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664,
    0, 0, 0, 0, 0, 665, 0, 666, 0, 0, 0, 667, 0, 0, 668, 0, 0, 669, 0, 670, 671, 0, 672, 0, 0, 673, 0, 674, 0, 675, 0, 0,
    0, 0, 0, 0, 0, 676, 0, 0, 0, 677, 0, 678, 679, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 682,
};
void recomp_unit_0040_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088A4000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0040[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A4000;
    case 2u: goto L_088A400C;
    case 3u: goto L_088A4018;
    case 4u: goto L_088A402C;
    case 5u: goto L_088A403C;
    case 6u: goto L_088A404C;
    case 7u: goto L_088A4094;
    case 8u: goto L_088A4138;
    case 9u: goto L_088A4150;
    case 10u: goto L_088A4168;
    case 11u: goto L_088A4180;
    case 12u: goto L_088A4198;
    case 13u: goto L_088A41A4;
    case 14u: goto L_088A41B0;
    case 15u: goto L_088A41C0;
    case 16u: goto L_088A41D0;
    case 17u: goto L_088A41F0;
    case 18u: goto L_088A4250;
    case 19u: goto L_088A427C;
    case 20u: goto L_088A42A4;
    case 21u: goto L_088A42D0;
    case 22u: goto L_088A42E4;
    case 23u: goto L_088A42F4;
    case 24u: goto L_088A42FC;
    case 25u: goto L_088A4304;
    case 26u: goto L_088A431C;
    case 27u: goto L_088A433C;
    case 28u: goto L_088A4350;
    case 29u: goto L_088A4368;
    case 30u: goto L_088A438C;
    case 31u: goto L_088A4394;
    case 32u: goto L_088A4398;
    case 33u: goto L_088A43B4;
    case 34u: goto L_088A43BC;
    case 35u: goto L_088A43C0;
    case 36u: goto L_088A43DC;
    case 37u: goto L_088A43E4;
    case 38u: goto L_088A43E8;
    case 39u: goto L_088A4404;
    case 40u: goto L_088A440C;
    case 41u: goto L_088A4410;
    case 42u: goto L_088A442C;
    case 43u: goto L_088A4434;
    case 44u: goto L_088A4438;
    case 45u: goto L_088A4454;
    case 46u: goto L_088A445C;
    case 47u: goto L_088A4460;
    case 48u: goto L_088A447C;
    case 49u: goto L_088A4484;
    case 50u: goto L_088A4488;
    case 51u: goto L_088A44A4;
    case 52u: goto L_088A44AC;
    case 53u: goto L_088A44B0;
    case 54u: goto L_088A44C0;
    case 55u: goto L_088A44E4;
    case 56u: goto L_088A4530;
    case 57u: goto L_088A45A0;
    case 58u: goto L_088A45BC;
    case 59u: goto L_088A45DC;
    case 60u: goto L_088A4610;
    case 61u: goto L_088A4634;
    case 62u: goto L_088A466C;
    case 63u: goto L_088A4690;
    case 64u: goto L_088A46C0;
    case 65u: goto L_088A471C;
    case 66u: goto L_088A472C;
    case 67u: goto L_088A4738;
    case 68u: goto L_088A4750;
    case 69u: goto L_088A4764;
    case 70u: goto L_088A4788;
    case 71u: goto L_088A47A0;
    case 72u: goto L_088A47B4;
    case 73u: goto L_088A47C0;
    case 74u: goto L_088A47C8;
    case 75u: goto L_088A47E4;
    case 76u: goto L_088A47EC;
    case 77u: goto L_088A4810;
    case 78u: goto L_088A4818;
    case 79u: goto L_088A481C;
    case 80u: goto L_088A4824;
    case 81u: goto L_088A4840;
    case 82u: goto L_088A488C;
    case 83u: goto L_088A4898;
    case 84u: goto L_088A48D4;
    case 85u: goto L_088A48E0;
    case 86u: goto L_088A48EC;
    case 87u: goto L_088A493C;
    case 88u: goto L_088A495C;
    case 89u: goto L_088A49A0;
    case 90u: goto L_088A49A8;
    case 91u: goto L_088A49B8;
    case 92u: goto L_088A49E0;
    case 93u: goto L_088A49F4;
    case 94u: goto L_088A4A4C;
    case 95u: goto L_088A4AB8;
    case 96u: goto L_088A4AC0;
    case 97u: goto L_088A4AC8;
    case 98u: goto L_088A4AD8;
    case 99u: goto L_088A4B00;
    case 100u: goto L_088A4BCC;
    case 101u: goto L_088A4BF0;
    case 102u: goto L_088A4BF8;
    case 103u: goto L_088A4C2C;
    case 104u: goto L_088A4C78;
    case 105u: goto L_088A4CE8;
    case 106u: goto L_088A4D5C;
    case 107u: goto L_088A4D78;
    case 108u: goto L_088A4D84;
    case 109u: goto L_088A4DA8;
    case 110u: goto L_088A4DC4;
    case 111u: goto L_088A4E2C;
    case 112u: goto L_088A4E44;
    case 113u: goto L_088A4E64;
    case 114u: goto L_088A4E7C;
    case 115u: goto L_088A4E88;
    case 116u: goto L_088A4E8C;
    case 117u: goto L_088A4EBC;
    case 118u: goto L_088A4EFC;
    case 119u: goto L_088A4F18;
    case 120u: goto L_088A4F24;
    case 121u: goto L_088A4F3C;
    case 122u: goto L_088A4F44;
    case 123u: goto L_088A4F60;
    case 124u: goto L_088A4F90;
    case 125u: goto L_088A4F94;
    case 126u: goto L_088A4F9C;
    case 127u: goto L_088A4FDC;
    case 128u: goto L_088A5028;
    case 129u: goto L_088A5080;
    case 130u: goto L_088A5088;
    case 131u: goto L_088A5090;
    case 132u: goto L_088A509C;
    case 133u: goto L_088A50C8;
    case 134u: goto L_088A50F0;
    case 135u: goto L_088A50FC;
    case 136u: goto L_088A5148;
    case 137u: goto L_088A5160;
    case 138u: goto L_088A51C4;
    case 139u: goto L_088A5238;
    case 140u: goto L_088A5258;
    case 141u: goto L_088A5264;
    case 142u: goto L_088A5270;
    case 143u: goto L_088A5284;
    case 144u: goto L_088A5290;
    case 145u: goto L_088A52D4;
    case 146u: goto L_088A52E0;
    case 147u: goto L_088A5314;
    case 148u: goto L_088A531C;
    case 149u: goto L_088A532C;
    case 150u: goto L_088A5330;
    case 151u: goto L_088A534C;
    case 152u: goto L_088A5354;
    case 153u: goto L_088A5368;
    case 154u: goto L_088A5374;
    case 155u: goto L_088A537C;
    case 156u: goto L_088A538C;
    case 157u: goto L_088A53F4;
    case 158u: goto L_088A53FC;
    case 159u: goto L_088A540C;
    case 160u: goto L_088A5410;
    case 161u: goto L_088A5420;
    case 162u: goto L_088A5428;
    case 163u: goto L_088A5438;
    case 164u: goto L_088A543C;
    case 165u: goto L_088A544C;
    case 166u: goto L_088A5454;
    case 167u: goto L_088A5464;
    case 168u: goto L_088A5468;
    case 169u: goto L_088A5470;
    case 170u: goto L_088A5488;
    case 171u: goto L_088A550C;
    case 172u: goto L_088A5538;
    case 173u: goto L_088A5540;
    case 174u: goto L_088A5548;
    case 175u: goto L_088A5570;
    case 176u: goto L_088A55A0;
    case 177u: goto L_088A55C0;
    case 178u: goto L_088A5604;
    case 179u: goto L_088A5608;
    case 180u: goto L_088A5610;
    case 181u: goto L_088A5620;
    case 182u: goto L_088A5638;
    case 183u: goto L_088A5648;
    case 184u: goto L_088A5658;
    case 185u: goto L_088A5668;
    case 186u: goto L_088A5678;
    case 187u: goto L_088A5688;
    case 188u: goto L_088A5698;
    case 189u: goto L_088A56A4;
    case 190u: goto L_088A56D8;
    case 191u: goto L_088A5704;
    case 192u: goto L_088A570C;
    case 193u: goto L_088A5724;
    case 194u: goto L_088A576C;
    case 195u: goto L_088A57B4;
    case 196u: goto L_088A57C0;
    case 197u: goto L_088A57C4;
    case 198u: goto L_088A57D0;
    case 199u: goto L_088A57E4;
    case 200u: goto L_088A57EC;
    case 201u: goto L_088A57FC;
    case 202u: goto L_088A580C;
    case 203u: goto L_088A5814;
    case 204u: goto L_088A581C;
    case 205u: goto L_088A5824;
    case 206u: goto L_088A582C;
    case 207u: goto L_088A5834;
    case 208u: goto L_088A583C;
    case 209u: goto L_088A5848;
    case 210u: goto L_088A5850;
    case 211u: goto L_088A585C;
    case 212u: goto L_088A586C;
    case 213u: goto L_088A587C;
    case 214u: goto L_088A588C;
    case 215u: goto L_088A589C;
    case 216u: goto L_088A58AC;
    case 217u: goto L_088A58BC;
    case 218u: goto L_088A58CC;
    case 219u: goto L_088A58DC;
    case 220u: goto L_088A58EC;
    case 221u: goto L_088A58FC;
    case 222u: goto L_088A5904;
    case 223u: goto L_088A590C;
    case 224u: goto L_088A5938;
    case 225u: goto L_088A594C;
    case 226u: goto L_088A5954;
    case 227u: goto L_088A5960;
    case 228u: goto L_088A596C;
    case 229u: goto L_088A5978;
    case 230u: goto L_088A5984;
    case 231u: goto L_088A5998;
    case 232u: goto L_088A59AC;
    case 233u: goto L_088A59B4;
    case 234u: goto L_088A59C4;
    case 235u: goto L_088A59D0;
    case 236u: goto L_088A59F4;
    case 237u: goto L_088A5A00;
    case 238u: goto L_088A5A0C;
    case 239u: goto L_088A5A1C;
    case 240u: goto L_088A5A28;
    case 241u: goto L_088A5A4C;
    case 242u: goto L_088A5A54;
    case 243u: goto L_088A5A60;
    case 244u: goto L_088A5A70;
    case 245u: goto L_088A5AA0;
    case 246u: goto L_088A5AAC;
    case 247u: goto L_088A5AC0;
    case 248u: goto L_088A5AD0;
    case 249u: goto L_088A5ADC;
    case 250u: goto L_088A5AE8;
    case 251u: goto L_088A5AF4;
    case 252u: goto L_088A5B10;
    case 253u: goto L_088A5B2C;
    case 254u: goto L_088A5B30;
    case 255u: goto L_088A5B44;
    case 256u: goto L_088A5B78;
    case 257u: goto L_088A5C30;
    case 258u: goto L_088A5C40;
    case 259u: goto L_088A5C4C;
    case 260u: goto L_088A5C60;
    case 261u: goto L_088A5C64;
    case 262u: goto L_088A5C78;
    case 263u: goto L_088A5C9C;
    case 264u: goto L_088A5CAC;
    case 265u: goto L_088A5CC0;
    case 266u: goto L_088A5CE4;
    case 267u: goto L_088A5CE8;
    case 268u: goto L_088A5D10;
    case 269u: goto L_088A5D2C;
    case 270u: goto L_088A5D44;
    case 271u: goto L_088A5D70;
    case 272u: goto L_088A5D78;
    case 273u: goto L_088A5D84;
    case 274u: goto L_088A5D94;
    case 275u: goto L_088A5DA4;
    case 276u: goto L_088A5DAC;
    case 277u: goto L_088A5DC0;
    case 278u: goto L_088A5DC8;
    case 279u: goto L_088A5DD8;
    case 280u: goto L_088A5DF4;
    case 281u: goto L_088A5E18;
    case 282u: goto L_088A5E28;
    case 283u: goto L_088A5E4C;
    case 284u: goto L_088A5E64;
    case 285u: goto L_088A5E74;
    case 286u: goto L_088A5E7C;
    case 287u: goto L_088A5E84;
    case 288u: goto L_088A5E9C;
    case 289u: goto L_088A5EA4;
    case 290u: goto L_088A5EC8;
    case 291u: goto L_088A5ED8;
    case 292u: goto L_088A5EE0;
    case 293u: goto L_088A5F04;
    case 294u: goto L_088A5F0C;
    case 295u: goto L_088A5F18;
    case 296u: goto L_088A5F28;
    case 297u: goto L_088A5F38;
    case 298u: goto L_088A5F48;
    case 299u: goto L_088A5F50;
    case 300u: goto L_088A5F64;
    case 301u: goto L_088A5F6C;
    case 302u: goto L_088A5F8C;
    case 303u: goto L_088A5F94;
    case 304u: goto L_088A5F98;
    case 305u: goto L_088A5FB4;
    case 306u: goto L_088A5FC4;
    case 307u: goto L_088A5FE4;
    case 308u: goto L_088A5FEC;
    case 309u: goto L_088A5FF4;
    case 310u: goto L_088A6000;
    case 311u: goto L_088A600C;
    case 312u: goto L_088A6024;
    case 313u: goto L_088A6030;
    case 314u: goto L_088A6038;
    case 315u: goto L_088A6050;
    case 316u: goto L_088A605C;
    case 317u: goto L_088A606C;
    case 318u: goto L_088A607C;
    case 319u: goto L_088A6090;
    case 320u: goto L_088A60B4;
    case 321u: goto L_088A60C8;
    case 322u: goto L_088A60D8;
    case 323u: goto L_088A60E8;
    case 324u: goto L_088A6168;
    case 325u: goto L_088A6174;
    case 326u: goto L_088A61B4;
    case 327u: goto L_088A61C0;
    case 328u: goto L_088A61CC;
    case 329u: goto L_088A6218;
    case 330u: goto L_088A621C;
    case 331u: goto L_088A624C;
    case 332u: goto L_088A6260;
    case 333u: goto L_088A6270;
    case 334u: goto L_088A6278;
    case 335u: goto L_088A629C;
    case 336u: goto L_088A62A4;
    case 337u: goto L_088A62B4;
    case 338u: goto L_088A62C4;
    case 339u: goto L_088A62CC;
    case 340u: goto L_088A62F0;
    case 341u: goto L_088A63AC;
    case 342u: goto L_088A63CC;
    case 343u: goto L_088A6414;
    case 344u: goto L_088A64E8;
    case 345u: goto L_088A64F8;
    case 346u: goto L_088A6508;
    case 347u: goto L_088A651C;
    case 348u: goto L_088A6534;
    case 349u: goto L_088A6538;
    case 350u: goto L_088A6544;
    case 351u: goto L_088A654C;
    case 352u: goto L_088A6564;
    case 353u: goto L_088A6570;
    case 354u: goto L_088A6578;
    case 355u: goto L_088A6580;
    case 356u: goto L_088A658C;
    case 357u: goto L_088A65A0;
    case 358u: goto L_088A65B0;
    case 359u: goto L_088A65CC;
    case 360u: goto L_088A65E4;
    case 361u: goto L_088A6610;
    case 362u: goto L_088A6618;
    case 363u: goto L_088A6624;
    case 364u: goto L_088A6634;
    case 365u: goto L_088A6644;
    case 366u: goto L_088A664C;
    case 367u: goto L_088A6660;
    case 368u: goto L_088A6668;
    case 369u: goto L_088A667C;
    case 370u: goto L_088A669C;
    case 371u: goto L_088A66B0;
    case 372u: goto L_088A66CC;
    case 373u: goto L_088A66DC;
    case 374u: goto L_088A66FC;
    case 375u: goto L_088A6714;
    case 376u: goto L_088A671C;
    case 377u: goto L_088A6734;
    case 378u: goto L_088A673C;
    case 379u: goto L_088A6760;
    case 380u: goto L_088A6770;
    case 381u: goto L_088A6778;
    case 382u: goto L_088A679C;
    case 383u: goto L_088A67A4;
    case 384u: goto L_088A67B0;
    case 385u: goto L_088A67C0;
    case 386u: goto L_088A67D0;
    case 387u: goto L_088A67E0;
    case 388u: goto L_088A67E8;
    case 389u: goto L_088A67FC;
    case 390u: goto L_088A6804;
    case 391u: goto L_088A6828;
    case 392u: goto L_088A6830;
    case 393u: goto L_088A6834;
    case 394u: goto L_088A6850;
    case 395u: goto L_088A6860;
    case 396u: goto L_088A686C;
    case 397u: goto L_088A6888;
    case 398u: goto L_088A6894;
    case 399u: goto L_088A6898;
    case 400u: goto L_088A68A8;
    case 401u: goto L_088A68B0;
    case 402u: goto L_088A68D4;
    case 403u: goto L_088A68D8;
    case 404u: goto L_088A68E0;
    case 405u: goto L_088A68F8;
    case 406u: goto L_088A6904;
    case 407u: goto L_088A6914;
    case 408u: goto L_088A6928;
    case 409u: goto L_088A6938;
    case 410u: goto L_088A6948;
    case 411u: goto L_088A6958;
    case 412u: goto L_088A6A68;
    case 413u: goto L_088A6AB8;
    case 414u: goto L_088A6ACC;
    case 415u: goto L_088A6B64;
    case 416u: goto L_088A6BAC;
    case 417u: goto L_088A6BF4;
    case 418u: goto L_088A6C98;
    case 419u: goto L_088A6CA4;
    case 420u: goto L_088A6CB0;
    case 421u: goto L_088A6CDC;
    case 422u: goto L_088A6CE4;
    case 423u: goto L_088A6CF0;
    case 424u: goto L_088A6CF4;
    case 425u: goto L_088A6D24;
    case 426u: goto L_088A6D30;
    case 427u: goto L_088A6D38;
    case 428u: goto L_088A6D3C;
    case 429u: goto L_088A6D4C;
    case 430u: goto L_088A6D90;
    case 431u: goto L_088A6D9C;
    case 432u: goto L_088A6E64;
    case 433u: goto L_088A6E6C;
    case 434u: goto L_088A6E74;
    case 435u: goto L_088A6ECC;
    case 436u: goto L_088A6ED4;
    case 437u: goto L_088A6ED8;
    case 438u: goto L_088A6EEC;
    case 439u: goto L_088A6F04;
    case 440u: goto L_088A6F1C;
    case 441u: goto L_088A6F20;
    case 442u: goto L_088A6F50;
    case 443u: goto L_088A6FC8;
    case 444u: goto L_088A6FF4;
    case 445u: goto L_088A70A0;
    case 446u: goto L_088A70B0;
    case 447u: goto L_088A70B8;
    case 448u: goto L_088A70BC;
    case 449u: goto L_088A710C;
    case 450u: goto L_088A7118;
    case 451u: goto L_088A7120;
    case 452u: goto L_088A7124;
    case 453u: goto L_088A7190;
    case 454u: goto L_088A719C;
    case 455u: goto L_088A71A4;
    case 456u: goto L_088A71A8;
    case 457u: goto L_088A71EC;
    case 458u: goto L_088A71F4;
    case 459u: goto L_088A722C;
    case 460u: goto L_088A7240;
    case 461u: goto L_088A7254;
    case 462u: goto L_088A7260;
    case 463u: goto L_088A726C;
    case 464u: goto L_088A7274;
    case 465u: goto L_088A7278;
    case 466u: goto L_088A728C;
    case 467u: goto L_088A7298;
    case 468u: goto L_088A72A0;
    case 469u: goto L_088A72B8;
    case 470u: goto L_088A72D8;
    case 471u: goto L_088A7308;
    case 472u: goto L_088A7314;
    case 473u: goto L_088A732C;
    case 474u: goto L_088A7338;
    case 475u: goto L_088A7340;
    case 476u: goto L_088A7348;
    case 477u: goto L_088A7354;
    case 478u: goto L_088A7360;
    case 479u: goto L_088A736C;
    case 480u: goto L_088A7378;
    case 481u: goto L_088A7380;
    case 482u: goto L_088A7388;
    case 483u: goto L_088A7390;
    case 484u: goto L_088A7394;
    case 485u: goto L_088A739C;
    case 486u: goto L_088A73A4;
    case 487u: goto L_088A73B4;
    case 488u: goto L_088A73BC;
    case 489u: goto L_088A73C4;
    case 490u: goto L_088A73CC;
    case 491u: goto L_088A73D4;
    case 492u: goto L_088A73DC;
    case 493u: goto L_088A73E8;
    case 494u: goto L_088A73FC;
    case 495u: goto L_088A7420;
    case 496u: goto L_088A7428;
    case 497u: goto L_088A7434;
    case 498u: goto L_088A743C;
    case 499u: goto L_088A7444;
    case 500u: goto L_088A744C;
    case 501u: goto L_088A7458;
    case 502u: goto L_088A746C;
    case 503u: goto L_088A7490;
    case 504u: goto L_088A7498;
    case 505u: goto L_088A74A4;
    case 506u: goto L_088A74AC;
    case 507u: goto L_088A74B4;
    case 508u: goto L_088A74C0;
    case 509u: goto L_088A74C8;
    case 510u: goto L_088A74D0;
    case 511u: goto L_088A74D8;
    case 512u: goto L_088A74E0;
    case 513u: goto L_088A74E8;
    case 514u: goto L_088A74F0;
    case 515u: goto L_088A74FC;
    case 516u: goto L_088A7510;
    case 517u: goto L_088A7534;
    case 518u: goto L_088A753C;
    case 519u: goto L_088A7548;
    case 520u: goto L_088A7550;
    case 521u: goto L_088A7558;
    case 522u: goto L_088A7560;
    case 523u: goto L_088A756C;
    case 524u: goto L_088A7580;
    case 525u: goto L_088A75A4;
    case 526u: goto L_088A75AC;
    case 527u: goto L_088A75B8;
    case 528u: goto L_088A75C0;
    case 529u: goto L_088A75C4;
    case 530u: goto L_088A75CC;
    case 531u: goto L_088A75D4;
    case 532u: goto L_088A75FC;
    case 533u: goto L_088A7620;
    case 534u: goto L_088A763C;
    case 535u: goto L_088A7640;
    case 536u: goto L_088A7644;
    case 537u: goto L_088A764C;
    case 538u: goto L_088A7658;
    case 539u: goto L_088A7660;
    case 540u: goto L_088A7664;
    case 541u: goto L_088A7674;
    case 542u: goto L_088A7684;
    case 543u: goto L_088A768C;
    case 544u: goto L_088A7694;
    case 545u: goto L_088A76A0;
    case 546u: goto L_088A76BC;
    case 547u: goto L_088A76C8;
    case 548u: goto L_088A76E0;
    case 549u: goto L_088A76F8;
    case 550u: goto L_088A7700;
    case 551u: goto L_088A7708;
    case 552u: goto L_088A770C;
    case 553u: goto L_088A7748;
    case 554u: goto L_088A774C;
    case 555u: goto L_088A7768;
    case 556u: goto L_088A77AC;
    case 557u: goto L_088A77C0;
    case 558u: goto L_088A77CC;
    case 559u: goto L_088A7800;
    case 560u: goto L_088A7818;
    case 561u: goto L_088A7838;
    case 562u: goto L_088A7844;
    case 563u: goto L_088A7850;
    case 564u: goto L_088A7858;
    case 565u: goto L_088A785C;
    case 566u: goto L_088A7868;
    case 567u: goto L_088A7878;
    case 568u: goto L_088A7890;
    case 569u: goto L_088A7894;
    case 570u: goto L_088A7898;
    case 571u: goto L_088A78A0;
    case 572u: goto L_088A78AC;
    case 573u: goto L_088A78B4;
    case 574u: goto L_088A78BC;
    case 575u: goto L_088A78C8;
    case 576u: goto L_088A78D0;
    case 577u: goto L_088A78D4;
    case 578u: goto L_088A78F0;
    case 579u: goto L_088A790C;
    case 580u: goto L_088A7910;
    case 581u: goto L_088A7914;
    case 582u: goto L_088A791C;
    case 583u: goto L_088A7924;
    case 584u: goto L_088A7940;
    case 585u: goto L_088A7984;
    case 586u: goto L_088A798C;
    case 587u: goto L_088A7994;
    case 588u: goto L_088A799C;
    case 589u: goto L_088A79F0;
    case 590u: goto L_088A79F4;
    case 591u: goto L_088A7A00;
    case 592u: goto L_088A7A08;
    case 593u: goto L_088A7A10;
    case 594u: goto L_088A7A40;
    case 595u: goto L_088A7A4C;
    case 596u: goto L_088A7A54;
    case 597u: goto L_088A7A5C;
    case 598u: goto L_088A7A6C;
    case 599u: goto L_088A7A84;
    case 600u: goto L_088A7A90;
    case 601u: goto L_088A7A9C;
    case 602u: goto L_088A7AA0;
    case 603u: goto L_088A7AA8;
    case 604u: goto L_088A7ACC;
    case 605u: goto L_088A7AD4;
    case 606u: goto L_088A7AD8;
    case 607u: goto L_088A7AE4;
    case 608u: goto L_088A7AEC;
    case 609u: goto L_088A7AF4;
    case 610u: goto L_088A7B04;
    case 611u: goto L_088A7B14;
    case 612u: goto L_088A7B20;
    case 613u: goto L_088A7B2C;
    case 614u: goto L_088A7B44;
    case 615u: goto L_088A7B4C;
    case 616u: goto L_088A7B50;
    case 617u: goto L_088A7B5C;
    case 618u: goto L_088A7B64;
    case 619u: goto L_088A7B6C;
    case 620u: goto L_088A7B7C;
    case 621u: goto L_088A7B8C;
    case 622u: goto L_088A7B98;
    case 623u: goto L_088A7BA4;
    case 624u: goto L_088A7BA8;
    case 625u: goto L_088A7BB0;
    case 626u: goto L_088A7BD8;
    case 627u: goto L_088A7BE4;
    case 628u: goto L_088A7BEC;
    case 629u: goto L_088A7C18;
    case 630u: goto L_088A7C5C;
    case 631u: goto L_088A7C68;
    case 632u: goto L_088A7C70;
    case 633u: goto L_088A7C78;
    case 634u: goto L_088A7CA0;
    case 635u: goto L_088A7CBC;
    case 636u: goto L_088A7CE8;
    case 637u: goto L_088A7CFC;
    case 638u: goto L_088A7D1C;
    case 639u: goto L_088A7D5C;
    case 640u: goto L_088A7D64;
    case 641u: goto L_088A7D74;
    case 642u: goto L_088A7D80;
    case 643u: goto L_088A7D90;
    case 644u: goto L_088A7D9C;
    case 645u: goto L_088A7DAC;
    case 646u: goto L_088A7DB8;
    case 647u: goto L_088A7DC8;
    case 648u: goto L_088A7DD4;
    case 649u: goto L_088A7DDC;
    case 650u: goto L_088A7DE8;
    case 651u: goto L_088A7DF8;
    case 652u: goto L_088A7E04;
    case 653u: goto L_088A7E0C;
    case 654u: goto L_088A7E18;
    case 655u: goto L_088A7E40;
    case 656u: goto L_088A7E54;
    case 657u: goto L_088A7E58;
    case 658u: goto L_088A7E60;
    case 659u: goto L_088A7E98;
    case 660u: goto L_088A7EA0;
    case 661u: goto L_088A7EA4;
    case 662u: goto L_088A7EB4;
    case 663u: goto L_088A7EC8;
    case 664u: goto L_088A7EFC;
    case 665u: goto L_088A7F14;
    case 666u: goto L_088A7F1C;
    case 667u: goto L_088A7F2C;
    case 668u: goto L_088A7F38;
    case 669u: goto L_088A7F44;
    case 670u: goto L_088A7F4C;
    case 671u: goto L_088A7F50;
    case 672u: goto L_088A7F58;
    case 673u: goto L_088A7F64;
    case 674u: goto L_088A7F6C;
    case 675u: goto L_088A7F74;
    case 676u: goto L_088A7F94;
    case 677u: goto L_088A7FA4;
    case 678u: goto L_088A7FAC;
    case 679u: goto L_088A7FB0;
    case 680u: goto L_088A7FD0;
    case 681u: goto L_088A7FE0;
    case 682u: goto L_088A7FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088A4000:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A400Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 507u, 0x0889E880u>(ctx, &aot_mem) && ctx.pc == 0x088A400Cu) goto L_088A400C;
    return;
L_088A400C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[31] = (0x088A4018u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x088A4018u) goto L_088A4018;
    return;
L_088A4018:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A402Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 470u, 0x0889E5E0u>(ctx, &aot_mem) && ctx.pc == 0x088A402Cu) goto L_088A402C;
    return;
L_088A402C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088A403Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 475u, 0x0889E678u>(ctx, &aot_mem) && ctx.pc == 0x088A403Cu) goto L_088A403C;
    return;
L_088A403C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A404Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x088A404Cu) goto L_088A404C;
    return;
L_088A404C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1232)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1236)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1240)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1244)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1268)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1272)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1276)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1280)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1284)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1288)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1296));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4094:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (16928u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[20]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[21]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(3));
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[6] = (16968u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[22]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16032));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (2227u << 16u);
      if (branch_taken) {
          goto L_088A4198;
      }
      goto L_088A4138;
    }
L_088A4138:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(3640)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4150:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16128)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088A4198;
      }
      goto L_088A4168;
    }
L_088A4168:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16128)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088A4198;
      }
      goto L_088A4180;
    }
L_088A4180:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16128)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088A4198;
      }
      goto L_088A4198;
    }
L_088A4198:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088A41A4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x088A41A4u) goto L_088A41A4;
    return;
L_088A41A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A41B0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x088A41B0u) goto L_088A41B0;
    return;
L_088A41B0:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088A41C0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 269u, 0x08A7D68Cu>(ctx, &aot_mem) && ctx.pc == 0x088A41C0u) goto L_088A41C0;
    return;
L_088A41C0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088A41D0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 315u, 0x08869F20u>(ctx, &aot_mem) && ctx.pc == 0x088A41D0u) goto L_088A41D0;
    return;
L_088A41D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(5856));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088A41F0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 316u, 0x08869F4Cu>(ctx, &aot_mem) && ctx.pc == 0x088A41F0u) goto L_088A41F0;
    return;
L_088A41F0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_088A4250;
    }
    goto L_088A4250;
L_088A4250:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_088A427C;
    }
    goto L_088A427C;
L_088A427C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.gpr[22] = (0u | 100u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
        goto L_088A42A4;
    }
    goto L_088A42A4;
L_088A42A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.gpr[4] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
        goto L_088A42D0;
    }
    goto L_088A42D0;
L_088A42D0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A42F4;
      }
      goto L_088A42E4;
    }
L_088A42E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A4304;
      }
      goto L_088A42F4;
    }
L_088A42F4:
    ctx.gpr[31] = (0x088A42FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 155u, 0x088C4C18u>(ctx, &aot_mem) && ctx.pc == 0x088A42FCu) goto L_088A42FC;
    return;
L_088A42FC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088A4304;
L_088A4304:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088A44E4;
      }
      goto L_088A431C;
    }
L_088A431C:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[30] = (2227u << 16u);
    goto L_088A433C;
L_088A433C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A44C0;
      }
      goto L_088A4350;
    }
L_088A4350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[22]);
    goto L_088A4368;
L_088A4368:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20972)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A438Cu);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088A4530;
L_088A438C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4398;
      }
      goto L_088A4394;
    }
L_088A4394:
    ctx.gpr[17] = (0u | 1u);
    goto L_088A4398;
L_088A4398:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A43B4u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088A4530;
L_088A43B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A43C0;
      }
      goto L_088A43BC;
    }
L_088A43BC:
    ctx.gpr[17] = (0u | 1u);
    goto L_088A43C0;
L_088A43C0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A43DCu);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088A4530;
L_088A43DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A43E8;
      }
      goto L_088A43E4;
    }
L_088A43E4:
    ctx.gpr[17] = (0u | 1u);
    goto L_088A43E8;
L_088A43E8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A4404u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088A4530;
L_088A4404:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4410;
      }
      goto L_088A440C;
    }
L_088A440C:
    ctx.gpr[17] = (0u | 1u);
    goto L_088A4410;
L_088A4410:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A442Cu);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088A4530;
L_088A442C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4438;
      }
      goto L_088A4434;
    }
L_088A4434:
    ctx.gpr[17] = (0u | 1u);
    goto L_088A4438;
L_088A4438:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A4454u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088A4530;
L_088A4454:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4460;
      }
      goto L_088A445C;
    }
L_088A445C:
    ctx.gpr[17] = (0u | 1u);
    goto L_088A4460;
L_088A4460:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A447Cu);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088A4530;
L_088A447C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4488;
      }
      goto L_088A4484;
    }
L_088A4484:
    ctx.gpr[17] = (0u | 1u);
    goto L_088A4488;
L_088A4488:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A44A4u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_088A4530;
L_088A44A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_088A44B0;
      }
      goto L_088A44AC;
    }
L_088A44AC:
    ctx.gpr[17] = (0u | 1u);
    goto L_088A44B0;
L_088A44B0:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_088A4368;
      }
      goto L_088A44C0;
    }
L_088A44C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088A433C;
      }
      goto L_088A44E4;
    }
L_088A44E4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4530:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-784));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), ctx.gpr[19]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[8] << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(732), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(760), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(764), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(780), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088A46C0;
      }
      goto L_088A45A0;
    }
L_088A45A0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(3672)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A45BC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A46C0;
      }
      goto L_088A45DC;
    }
L_088A45DC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16132)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A46C0;
      }
      goto L_088A4610;
    }
L_088A4610:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A46C0;
      }
      goto L_088A4634;
    }
L_088A4634:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16132)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A46C0;
      }
      goto L_088A466C;
    }
L_088A466C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A46C0;
      }
      goto L_088A4690;
    }
L_088A4690:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16132)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088A46C0;
L_088A46C0:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A471Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 472u, 0x0889E620u>(ctx, &aot_mem) && ctx.pc == 0x088A471Cu) goto L_088A471C;
    return;
L_088A471C:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4F9C;
      }
      goto L_088A472C;
    }
L_088A472C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[16];
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088A4F94;
      }
      goto L_088A4738;
    }
L_088A4738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4F94;
      }
      goto L_088A4750;
    }
L_088A4750:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A4F94;
      }
      goto L_088A4764;
    }
L_088A4764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088A47C8;
      }
      goto L_088A4788;
    }
L_088A4788:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088A47B4;
      }
      goto L_088A47A0;
    }
L_088A47A0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088A47B4;
L_088A47B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088A47C0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 70u, 0x0899C950u>(ctx, &aot_mem) && ctx.pc == 0x088A47C0u) goto L_088A47C0;
    return;
L_088A47C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088A47E4;
      }
      goto L_088A47C8;
    }
L_088A47C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_088A47E4;
L_088A47E4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4818;
      }
      goto L_088A47EC;
    }
L_088A47EC:
    ctx.gpr[8] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088A4810u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(15488));
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 325u, 0x088CE900u>(ctx, &aot_mem) && ctx.pc == 0x088A4810u) goto L_088A4810;
    return;
L_088A4810:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088A481C;
      }
      goto L_088A4818;
    }
L_088A4818:
    ctx.gpr[20] = (0u | 0u);
    goto L_088A481C;
L_088A481C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088A4AC0;
      }
      goto L_088A4824;
    }
L_088A4824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4AC0;
      }
      goto L_088A4840;
    }
L_088A4840:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_088A4898;
      }
      goto L_088A488C;
    }
L_088A488C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A48D4;
      }
      goto L_088A4898;
    }
L_088A4898:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A48D4;
L_088A48D4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x088A48E0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 338u, 0x0899E180u>(ctx, &aot_mem) && ctx.pc == 0x088A48E0u) goto L_088A48E0;
    return;
L_088A48E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088A493C;
      }
      goto L_088A48EC;
    }
L_088A48EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (49312u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16544u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088A493Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x088A493Cu) goto L_088A493C;
    return;
L_088A493C:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[20] & 255u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[31] = (0x088A495Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x088A495Cu) goto L_088A495C;
    return;
L_088A495C:
    ctx.gpr[20] = (0u | 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088A49A0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x088A49A0u) goto L_088A49A0;
    return;
L_088A49A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4AB8;
      }
      goto L_088A49A8;
    }
L_088A49A8:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A49F4;
      }
      goto L_088A49B8;
    }
L_088A49B8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088A49E0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088A49E0u) goto L_088A49E0;
    return;
L_088A49E0:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A49B8;
      }
      goto L_088A49F4;
    }
L_088A49F4:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 74u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088A4A4Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088A4A4Cu) goto L_088A4A4C;
    return;
L_088A4A4C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (48163u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (0u | 74u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088A4AB8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088A4AB8u) goto L_088A4AB8;
    return;
L_088A4AB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4F94;
      }
      goto L_088A4AC0;
    }
L_088A4AC0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088A4F94;
      }
      goto L_088A4AC8;
    }
L_088A4AC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 273u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A4F94;
      }
      goto L_088A4AD8;
    }
L_088A4AD8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16140)));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A4F3C;
      }
      goto L_088A4B00;
    }
L_088A4B00:
    ctx.gpr[4] = (ctx.gpr[23] << 5u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[9] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16128)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4BF8;
      }
      goto L_088A4BCC;
    }
L_088A4BCC:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16136)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4BF8;
      }
      goto L_088A4BF0;
    }
L_088A4BF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4F24;
      }
      goto L_088A4BF8;
    }
L_088A4BF8:
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088A4C2Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x088A4C2Cu) goto L_088A4C2C;
    return;
L_088A4C2C:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
      if (branch_taken) {
          goto L_088A4D78;
      }
      goto L_088A4C78;
    }
L_088A4C78:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(724), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088A4CE8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088A4CE8u) goto L_088A4CE8;
    return;
L_088A4CE8:
    ctx.gpr[4] = (ctx.gpr[23] << 5u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088A4D5Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088A4D5Cu) goto L_088A4D5C;
    return;
L_088A4D5C:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[4] << 16u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 4 ? 1u : 0u);
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
      if (branch_taken) {
          goto L_088A4C78;
      }
      goto L_088A4D78;
    }
L_088A4D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
        goto L_088A4E8C;
    }
    goto L_088A4D84;
L_088A4D84:
    ctx.gpr[30] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (15897u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4E44;
      }
      goto L_088A4DA8;
    }
L_088A4DA8:
    ctx.gpr[5] = (ctx.gpr[23] << 5u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15488));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x088A4DC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 391u, 0x08A0EE2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A4DC4u) goto L_088A4DC4;
    return;
L_088A4DC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16144)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[31] = (0x088A4E2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x088A4E2Cu) goto L_088A4E2C;
    return;
L_088A4E2C:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4E88;
      }
      goto L_088A4E44;
    }
L_088A4E44:
    ctx.gpr[4] = (15769u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4E88;
      }
      goto L_088A4E64;
    }
L_088A4E64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A4E88;
      }
      goto L_088A4E7C;
    }
L_088A4E7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A4E88;
L_088A4E88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    goto L_088A4E8C;
L_088A4E8C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16148)));
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
        goto L_088A4EBC;
    }
    goto L_088A4EBC;
L_088A4EBC:
    ctx.gpr[5] = (2269u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[23] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15488));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088A4F24;
      }
      goto L_088A4EFC;
    }
L_088A4EFC:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(320), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(300));
    ctx.gpr[31] = (0x088A4F18u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x088A4F18u) goto L_088A4F18;
    return;
L_088A4F18:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088A4F24;
L_088A4F24:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[4] << 16u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A4B00;
      }
      goto L_088A4F3C;
    }
L_088A4F3C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A4F90;
      }
      goto L_088A4F44;
    }
L_088A4F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A4F90;
      }
      goto L_088A4F60;
    }
L_088A4F60:
    ctx.gpr[4] = (15800u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[9] = (16968u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x088A4F90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 136u, 0x088649C4u>(ctx, &aot_mem) && ctx.pc == 0x088A4F90u) goto L_088A4F90;
    return;
L_088A4F90:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088A4F94;
L_088A4F94:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A472C;
      }
      goto L_088A4F9C;
    }
L_088A4F9C:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(732)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(748)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(752)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(760)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(764)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(780)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A4FDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A5088;
      }
      goto L_088A5028;
    }
L_088A5028:
    ctx.gpr[6] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7820)));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (49866u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[23] = (ctx.gpr[23] & 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[9] = (0u | 211u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088A509C;
      }
      goto L_088A5080;
    }
L_088A5080:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
      if (branch_taken) {
          goto L_088A5090;
      }
      goto L_088A5088;
    }
L_088A5088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5724;
      }
      goto L_088A5090;
    }
L_088A5090:
    ctx.gpr[9] = (0u | 212u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_088A50C8;
      }
      goto L_088A509C;
    }
L_088A509C:
    ctx.gpr[8] = (15651u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (15759u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 23593u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (16025u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    goto L_088A50C8;
L_088A50C8:
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[7] & 14u);
    ctx.gpr[7] = (ctx.gpr[7] ^ 4u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5148;
      }
      goto L_088A50F0;
    }
L_088A50F0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5148;
      }
      goto L_088A50FC;
    }
L_088A50FC:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (16128u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[18] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A5148;
L_088A5148:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088A5724;
      }
      goto L_088A5160;
    }
L_088A5160:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (ctx.gpr[23] << 2u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16025u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (17279u << 16u);
    ctx.gpr[23] = (ctx.gpr[5] & 255u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 255u);
    ctx.gpr[22] = (0u | 32u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[21]);
    goto L_088A51C4;
L_088A51C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    ctx.gpr[4] = (15945u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088A5238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088A5238u) goto L_088A5238;
    return;
L_088A5238:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16260)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16256)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088A5258u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x088A5258u) goto L_088A5258;
    return;
L_088A5258:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088A5264u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x088A5264u) goto L_088A5264;
    return;
L_088A5264:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088A5270u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088A5270u) goto L_088A5270;
    return;
L_088A5270:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088A5284u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x088A5284u) goto L_088A5284;
    return;
L_088A5284:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088A5290u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x088A5290u) goto L_088A5290;
    return;
L_088A5290:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 32 ? 1u : 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
      if (branch_taken) {
          goto L_088A5374;
      }
      goto L_088A52D4;
    }
L_088A52D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A5374;
      }
      goto L_088A52E0;
    }
L_088A52E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x088A5314u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x088A5314u) goto L_088A5314;
    return;
L_088A5314:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A532C;
      }
      goto L_088A531C;
    }
L_088A531C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(78)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_088A5330;
      }
      goto L_088A532C;
    }
L_088A532C:
    ctx.gpr[16] = (0u | 0u);
    goto L_088A5330;
L_088A5330:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x088A534Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x088A534Cu) goto L_088A534C;
    return;
L_088A534C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5374;
      }
      goto L_088A5354;
    }
L_088A5354:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5374;
      }
      goto L_088A5368;
    }
L_088A5368:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[19] = (0u | 19u);
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    goto L_088A5374;
L_088A5374:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088A570C;
      }
      goto L_088A537C;
    }
L_088A537C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088A5610;
      }
      goto L_088A538C;
    }
L_088A538C:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11056)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11020)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11060)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11024)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11064)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11028)));
    ctx.fpr[24] = ctx.fpr[15] + ctx.fpr[14];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[16] + ctx.fpr[12];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[18] + ctx.fpr[13];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_088A53FC;
      }
      goto L_088A53F4;
    }
L_088A53F4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_088A5410;
      }
      goto L_088A53FC;
    }
L_088A53FC:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5410;
      }
      goto L_088A540C;
    }
L_088A540C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_088A5410;
L_088A5410:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5428;
      }
      goto L_088A5420;
    }
L_088A5420:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_088A543C;
      }
      goto L_088A5428;
    }
L_088A5428:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A543C;
      }
      goto L_088A5438;
    }
L_088A5438:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_088A543C;
L_088A543C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5454;
      }
      goto L_088A544C;
    }
L_088A544C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_088A5468;
      }
      goto L_088A5454;
    }
L_088A5454:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5468;
      }
      goto L_088A5464;
    }
L_088A5464:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_088A5468;
L_088A5468:
    ctx.gpr[31] = (0x088A5470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088A5470u) goto L_088A5470;
    return;
L_088A5470:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16268)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16264)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A5488u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088A5488u) goto L_088A5488;
    return;
L_088A5488:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16276)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16272)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(171), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_088A5540;
      }
      goto L_088A550C;
    }
L_088A550C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088A5538u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x088A5538u) goto L_088A5538;
    return;
L_088A5538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5608;
      }
      goto L_088A5540;
    }
L_088A5540:
    ctx.gpr[31] = (0x088A5548u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x088A5548u) goto L_088A5548;
    return;
L_088A5548:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[30];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[30] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x088A5570u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x088A5570u) goto L_088A5570;
    return;
L_088A5570:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[30];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[30] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[31] = (0x088A55A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x088A55A0u) goto L_088A55A0;
    return;
L_088A55A0:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088A55C0u);
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x088A55C0u) goto L_088A55C0;
    return;
L_088A55C0:
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[26] + ctx.fpr[13];
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088A5604u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x088A5604u) goto L_088A5604;
    return;
L_088A5604:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    goto L_088A5608;
L_088A5608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5704;
      }
      goto L_088A5610;
    }
L_088A5610:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5698;
      }
      goto L_088A5620;
    }
L_088A5620:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(3704)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5638:
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088A56A4;
      }
      goto L_088A5648;
    }
L_088A5648:
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088A56A4;
      }
      goto L_088A5658;
    }
L_088A5658:
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 7u);
      if (branch_taken) {
          goto L_088A56A4;
      }
      goto L_088A5668;
    }
L_088A5668:
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088A56A4;
      }
      goto L_088A5678;
    }
L_088A5678:
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 7u);
      if (branch_taken) {
          goto L_088A56A4;
      }
      goto L_088A5688;
    }
L_088A5688:
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 7u);
      if (branch_taken) {
          goto L_088A56A4;
      }
      goto L_088A5698;
    }
L_088A5698:
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_088A56A4;
L_088A56A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(175), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(173), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(174), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5704;
      }
      goto L_088A56D8;
    }
L_088A56D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (0u | 53u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088A5704u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x088A5704u) goto L_088A5704;
    return;
L_088A5704:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    goto L_088A570C;
L_088A570C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[21]);
        goto L_088A51C4;
    }
    goto L_088A5724;
L_088A5724:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A576C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A57C4;
      }
      goto L_088A57B4;
    }
L_088A57B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088A57C4;
      }
      goto L_088A57C0;
    }
L_088A57C0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088A57C4;
L_088A57C4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5B44;
      }
      goto L_088A57D0;
    }
L_088A57D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 48u);
      if (branch_taken) {
          goto L_088A57EC;
      }
      goto L_088A57E4;
    }
L_088A57E4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A5B44;
      }
      goto L_088A57EC;
    }
L_088A57EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5824;
      }
      goto L_088A57FC;
    }
L_088A57FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 199u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 196u);
      if (branch_taken) {
          goto L_088A5824;
      }
      goto L_088A580C;
    }
L_088A580C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 157u);
      if (branch_taken) {
          goto L_088A5824;
      }
      goto L_088A5814;
    }
L_088A5814:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 158u);
      if (branch_taken) {
          goto L_088A5824;
      }
      goto L_088A581C;
    }
L_088A581C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A5850;
      }
      goto L_088A5824;
    }
L_088A5824:
    ctx.gpr[31] = (0x088A582Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088A582Cu) goto L_088A582C;
    return;
L_088A582C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088A5850;
      }
      goto L_088A5834;
    }
L_088A5834:
    ctx.gpr[31] = (0x088A583Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088A583Cu) goto L_088A583C;
    return;
L_088A583C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A5848u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 206u, 0x08944E10u>(ctx, &aot_mem) && ctx.pc == 0x088A5848u) goto L_088A5848;
    return;
L_088A5848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5B44;
      }
      goto L_088A5850;
    }
L_088A5850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A59B4;
      }
      goto L_088A585C;
    }
L_088A585C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.gpr[23] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088A59B4;
      }
      goto L_088A586C;
    }
L_088A586C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088A58FC;
      }
      goto L_088A587C;
    }
L_088A587C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088A58FC;
      }
      goto L_088A588C;
    }
L_088A588C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088A58FC;
      }
      goto L_088A589C;
    }
L_088A589C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088A58FC;
      }
      goto L_088A58AC;
    }
L_088A58AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088A58FC;
      }
      goto L_088A58BC;
    }
L_088A58BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088A58FC;
      }
      goto L_088A58CC;
    }
L_088A58CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088A58FC;
      }
      goto L_088A58DC;
    }
L_088A58DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088A58FC;
      }
      goto L_088A58EC;
    }
L_088A58EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A59B4;
      }
      goto L_088A58FC;
    }
L_088A58FC:
    ctx.gpr[31] = (0x088A5904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088A5904u) goto L_088A5904;
    return;
L_088A5904:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088A59B4;
      }
      goto L_088A590C;
    }
L_088A590C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (0u | 8u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x088A5938u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x088A5938u) goto L_088A5938;
    return;
L_088A5938:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 200u);
      if (branch_taken) {
          goto L_088A59AC;
      }
      goto L_088A594C;
    }
L_088A594C:
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    ctx.gpr[22] = (2230u << 16u);
    goto L_088A5954;
L_088A5954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5998;
      }
      goto L_088A5960;
    }
L_088A5960:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088A5998;
      }
      goto L_088A596C;
    }
L_088A596C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088A5998;
      }
      goto L_088A5978;
    }
L_088A5978:
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x088A5984u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x088A5984u) goto L_088A5984;
    return;
L_088A5984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1800), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(200));
    goto L_088A5998;
L_088A5998:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A5954;
      }
      goto L_088A59AC;
    }
L_088A59AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5B44;
      }
      goto L_088A59B4;
    }
L_088A59B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(397))))));
    ctx.gpr[17] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_088A5A00;
      }
      goto L_088A59C4;
    }
L_088A59C4:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088A59D0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x088A59D0u) goto L_088A59D0;
    return;
L_088A59D0:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5A54;
      }
      goto L_088A59F4;
    }
L_088A59F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088A5A54;
      }
      goto L_088A5A00;
    }
L_088A5A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5B44;
      }
      goto L_088A5A0C;
    }
L_088A5A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A5B44;
      }
      goto L_088A5A1C;
    }
L_088A5A1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(397))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088A5A4C;
      }
      goto L_088A5A28;
    }
L_088A5A28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088A5A4C;
L_088A5A4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088A5B44;
      }
      goto L_088A5A54;
    }
L_088A5A54:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5AAC;
      }
      goto L_088A5A60;
    }
L_088A5A60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A5AAC;
      }
      goto L_088A5A70;
    }
L_088A5A70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x088A5AA0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x088A5AA0u) goto L_088A5AA0;
    return;
L_088A5AA0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A5AACu);
    ctx.gpr[5] = (0u | 120u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5AACu) goto L_088A5AAC;
    return;
L_088A5AAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 200u);
      if (branch_taken) {
          goto L_088A5B44;
      }
      goto L_088A5AC0;
    }
L_088A5AC0:
    ctx.gpr[19] = (0u | 16u);
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[22] = (ctx.gpr[16] | 0u);
    ctx.gpr[18] = (2230u << 16u);
    goto L_088A5AD0;
L_088A5AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5B30;
      }
      goto L_088A5ADC;
    }
L_088A5ADC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088A5B30;
      }
      goto L_088A5AE8;
    }
L_088A5AE8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088A5B30;
      }
      goto L_088A5AF4;
    }
L_088A5AF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (0x088A5B10u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x088A5B10u) goto L_088A5B10;
    return;
L_088A5B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1800), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (0x088A5B2Cu);
    ctx.gpr[5] = (0u | 120u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A5B2Cu) goto L_088A5B2C;
    return;
L_088A5B2C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(200));
    goto L_088A5B30;
L_088A5B30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A5AD0;
      }
      goto L_088A5B44;
    }
L_088A5B44:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A5B78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-608));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), ctx.gpr[31]);
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[10] << 24u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 24u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[2]);
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[8]);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[24])) && ctx.fpr[13] == ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (0u | 1u);
        goto L_088A5C30;
    }
    goto L_088A5C30;
L_088A5C30:
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(5888), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(5888)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5C4C;
      }
      goto L_088A5C40;
    }
L_088A5C40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(5889), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088A5C64;
      }
      goto L_088A5C4C;
    }
L_088A5C4C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[28])) && ctx.fpr[15] == ctx.fpr[28]));
    ctx.gpr[5] = (0u | 0u);
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (0u | 1u);
        goto L_088A5C60;
    }
    goto L_088A5C60;
L_088A5C60:
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(5889), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088A5C64;
L_088A5C64:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
      if (branch_taken) {
          goto L_088A5CE4;
      }
      goto L_088A5C78;
    }
L_088A5C78:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(16280), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(172)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
      if (branch_taken) {
          goto L_088A5CE4;
      }
      goto L_088A5C9C;
    }
L_088A5C9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5CC0;
      }
      goto L_088A5CAC;
    }
L_088A5CAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 192u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[11]);
        goto L_088A5CE8;
    }
    goto L_088A5CC0;
L_088A5CC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(588)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16016)));
    ctx.gpr[5] = (16256u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    goto L_088A5CE4;
L_088A5CE4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[11]);
    goto L_088A5CE8;
L_088A5CE8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[28])) && ctx.fpr[12] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5D78;
      }
      goto L_088A5D10;
    }
L_088A5D10:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[13];
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A5D78;
      }
      goto L_088A5D2C;
    }
L_088A5D2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16004)));
    ctx.gpr[31] = (0x088A5D44u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x088A5D44u) goto L_088A5D44;
    return;
L_088A5D44:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16008)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16008)));
        goto L_088A5D70;
    }
    goto L_088A5D70;
L_088A5D70:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_088A5D78;
L_088A5D78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(5889)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5DC8;
      }
      goto L_088A5D84;
    }
L_088A5D84:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
      if (branch_taken) {
          goto L_088A5DAC;
      }
      goto L_088A5D94;
    }
L_088A5D94:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_088A5F98;
    }
    goto L_088A5DA4;
L_088A5DA4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_088A5F94;
      }
      goto L_088A5DAC;
    }
L_088A5DAC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_088A5F98;
    }
    goto L_088A5DC0;
L_088A5DC0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A5F94;
      }
      goto L_088A5DC8;
    }
L_088A5DC8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[30]) || std::isnan(ctx.fpr[28])) && ctx.fpr[30] == ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_088A5F98;
    }
    goto L_088A5DD8;
L_088A5DD8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(5888)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]) ^ 0x80000000u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A5F18;
      }
      goto L_088A5DF4;
    }
L_088A5DF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(588)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5F18;
      }
      goto L_088A5E18;
    }
L_088A5E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A5E64;
      }
      goto L_088A5E28;
    }
L_088A5E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[6] = (16153u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x088A5E4Cu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x088A5E4Cu) goto L_088A5E4C;
    return;
L_088A5E4C:
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[0] + ctx.fpr[14];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5F18;
      }
      goto L_088A5E64;
    }
L_088A5E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A5E7C;
      }
      goto L_088A5E74;
    }
L_088A5E74:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_088A5F18;
      }
      goto L_088A5E7C;
    }
L_088A5E7C:
    ctx.gpr[31] = (0x088A5E84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x088A5E84u) goto L_088A5E84;
    return;
L_088A5E84:
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_088A5EC8;
      }
      goto L_088A5E9C;
    }
L_088A5E9C:
    ctx.gpr[31] = (0x088A5EA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x088A5EA4u) goto L_088A5EA4;
    return;
L_088A5EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[5] = (15820u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5F18;
      }
      goto L_088A5EC8;
    }
L_088A5EC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A5F04;
      }
      goto L_088A5ED8;
    }
L_088A5ED8:
    ctx.gpr[31] = (0x088A5EE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x088A5EE0u) goto L_088A5EE0;
    return;
L_088A5EE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[5] = (15948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A5F18;
      }
      goto L_088A5F04;
    }
L_088A5F04:
    ctx.gpr[31] = (0x088A5F0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x088A5F0Cu) goto L_088A5F0C;
    return;
L_088A5F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24340)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[0];
    goto L_088A5F18;
L_088A5F18:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5F6C;
      }
      goto L_088A5F28;
    }
L_088A5F28:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A5F50;
      }
      goto L_088A5F38;
    }
L_088A5F38:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_088A5F98;
    }
    goto L_088A5F48;
L_088A5F48:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088A5F94;
      }
      goto L_088A5F50;
    }
L_088A5F50:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_088A5F98;
    }
    goto L_088A5F64;
L_088A5F64:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A5F94;
      }
      goto L_088A5F6C;
    }
L_088A5F6C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_088A5F98;
    }
    goto L_088A5F8C;
L_088A5F8C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088A5F94;
L_088A5F94:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_088A5F98;
L_088A5F98:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A60C8;
      }
      goto L_088A5FB4;
    }
L_088A5FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A6038;
      }
      goto L_088A5FC4;
    }
L_088A5FC4:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.set_fpu_condition((ctx.fpr[30] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16012)));
      if (branch_taken) {
          goto L_088A6000;
      }
      goto L_088A5FE4;
    }
L_088A5FE4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088A5FF4;
      }
      goto L_088A5FEC;
    }
L_088A5FEC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A6000;
      }
      goto L_088A5FF4;
    }
L_088A5FF4:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    goto L_088A6000;
L_088A6000:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(5889)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6030;
      }
      goto L_088A600C;
    }
L_088A600C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A6030;
      }
      goto L_088A6024;
    }
L_088A6024:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A6038;
      }
      goto L_088A6030;
    }
L_088A6030:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088A6038;
L_088A6038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16280)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A605C;
      }
      goto L_088A6050;
    }
L_088A6050:
    ctx.gpr[4] = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A60B4;
      }
      goto L_088A605C;
    }
L_088A605C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A60B4;
      }
      goto L_088A606C;
    }
L_088A606C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6090;
      }
      goto L_088A607C;
    }
L_088A607C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 192u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A60B4;
      }
      goto L_088A6090;
    }
L_088A6090:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(588)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16016)));
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] - ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    goto L_088A60B4;
L_088A60B4:
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[12] = ctx.fpr[26] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_088A60C8;
L_088A60C8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[28])) && ctx.fpr[22] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A60E8;
      }
      goto L_088A60D8;
    }
L_088A60D8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[28])) && ctx.fpr[24] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A63CC;
      }
      goto L_088A60E8;
    }
L_088A60E8:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(204)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_088A621C;
      }
      goto L_088A6168;
    }
L_088A6168:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(5888)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A61C0;
      }
      goto L_088A6174;
    }
L_088A6174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088A61B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x088A61B4u) goto L_088A61B4;
    return;
L_088A61B4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A621C;
      }
      goto L_088A61C0;
    }
L_088A61C0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(5889)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A621C;
      }
      goto L_088A61CC;
    }
L_088A61CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088A6218u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x088A6218u) goto L_088A6218;
    return;
L_088A6218:
    ctx.gpr[4] = (0u | 1u);
    goto L_088A621C;
L_088A621C:
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6260;
      }
      goto L_088A624C;
    }
L_088A624C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_088A6260;
L_088A6260:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A6278;
      }
      goto L_088A6270;
    }
L_088A6270:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_088A629C;
      }
      goto L_088A6278;
    }
L_088A6278:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088A629C;
L_088A629C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A62B4;
      }
      goto L_088A62A4;
    }
L_088A62A4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A62F0;
      }
      goto L_088A62B4;
    }
L_088A62B4:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A62CC;
      }
      goto L_088A62C4;
    }
L_088A62C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_088A62F0;
      }
      goto L_088A62CC;
    }
L_088A62CC:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088A62F0;
L_088A62F0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(208)));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(240));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(208)));
    ctx.fpr[15] = ctx.fpr[24] / ctx.fpr[15];
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[17];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[15] = ctx.fpr[24] / ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (0x088A63ACu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x088A63ACu) goto L_088A63AC;
    return;
L_088A63AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088A63CCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x088A63CCu) goto L_088A63CC;
    return;
L_088A63CC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6414:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-528));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[31]);
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[10] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[30] = (0u | 2u);
    ctx.gpr[23] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[2]);
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[6] = (0u | 1u);
        goto L_088A64E8;
    }
    goto L_088A64E8;
L_088A64E8:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(5890), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(5890)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6508;
      }
      goto L_088A64F8;
    }
L_088A64F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5891), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(5892), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088A6538;
      }
      goto L_088A6508;
    }
L_088A6508:
    ctx.gpr[6] = (0u | 0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[16]) || std::isnan(ctx.fpr[28])) && ctx.fpr[16] == ctx.fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[6] = (0u | 1u);
        goto L_088A651C;
    }
    goto L_088A651C;
L_088A651C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[28]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5891), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 0u);
    if (ctx.fpu_condition()) {
    ctx.gpr[6] = (0u | 1u);
        goto L_088A6534;
    }
    goto L_088A6534;
L_088A6534:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(5892), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_088A6538;
L_088A6538:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A654C;
      }
      goto L_088A6544;
    }
L_088A6544:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(16281), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_088A654C;
L_088A654C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16281)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
      if (branch_taken) {
          goto L_088A6570;
      }
      goto L_088A6564;
    }
L_088A6564:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(172)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    goto L_088A6570;
L_088A6570:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[30];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_088A6580;
      }
      goto L_088A6578;
    }
L_088A6578:
    if (ctx.gpr[5] != ctx.gpr[6]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[11]);
        goto L_088A658C;
    }
    goto L_088A6580;
L_088A6580:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[11]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_088A65A0;
      }
      goto L_088A658C;
    }
L_088A658C:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_088A65A0;
L_088A65A0:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[28])) && ctx.fpr[12] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A6618;
      }
      goto L_088A65B0;
    }
L_088A65B0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[13];
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A6618;
      }
      goto L_088A65CC;
    }
L_088A65CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16020)));
    ctx.gpr[31] = (0x088A65E4u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x088A65E4u) goto L_088A65E4;
    return;
L_088A65E4:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16024)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16024)));
        goto L_088A6610;
    }
    goto L_088A6610;
L_088A6610:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_088A6618;
L_088A6618:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5891)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6668;
      }
      goto L_088A6624;
    }
L_088A6624:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
      if (branch_taken) {
          goto L_088A664C;
      }
      goto L_088A6634;
    }
L_088A6634:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
        goto L_088A6834;
    }
    goto L_088A6644;
L_088A6644:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_088A6830;
      }
      goto L_088A664C;
    }
L_088A664C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
        goto L_088A6834;
    }
    goto L_088A6660;
L_088A6660:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A6830;
      }
      goto L_088A6668;
    }
L_088A6668:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[28])) && ctx.fpr[12] == ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
        goto L_088A6834;
    }
    goto L_088A667C;
L_088A667C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(5890)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[24] = ctx.fpr[12] / ctx.fpr[24];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A67B0;
      }
      goto L_088A669C;
    }
L_088A669C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(588)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088A66B0;
    }
    goto L_088A66B0;
L_088A66B0:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A67B0;
      }
      goto L_088A66CC;
    }
L_088A66CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_088A6714;
      }
      goto L_088A66DC;
    }
L_088A66DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[5] = (16153u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (0x088A66FCu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x088A66FCu) goto L_088A66FC;
    return;
L_088A66FC:
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[0] + ctx.fpr[14];
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A67B0;
      }
      goto L_088A6714;
    }
L_088A6714:
    ctx.gpr[31] = (0x088A671Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x088A671Cu) goto L_088A671C;
    return;
L_088A671C:
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A6760;
      }
      goto L_088A6734;
    }
L_088A6734:
    ctx.gpr[31] = (0x088A673Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x088A673Cu) goto L_088A673C;
    return;
L_088A673C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[5] = (15948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A67B0;
      }
      goto L_088A6760;
    }
L_088A6760:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A679C;
      }
      goto L_088A6770;
    }
L_088A6770:
    ctx.gpr[31] = (0x088A6778u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x088A6778u) goto L_088A6778;
    return;
L_088A6778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[5] = (15948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A67B0;
      }
      goto L_088A679C;
    }
L_088A679C:
    ctx.gpr[31] = (0x088A67A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x088A67A4u) goto L_088A67A4;
    return;
L_088A67A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24340)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[0];
    goto L_088A67B0;
L_088A67B0:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A6804;
      }
      goto L_088A67C0;
    }
L_088A67C0:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A67E8;
      }
      goto L_088A67D0;
    }
L_088A67D0:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A6830;
      }
      goto L_088A67E0;
    }
L_088A67E0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088A6830;
      }
      goto L_088A67E8;
    }
L_088A67E8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A6830;
      }
      goto L_088A67FC;
    }
L_088A67FC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A6830;
      }
      goto L_088A6804;
    }
L_088A6804:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A6830;
      }
      goto L_088A6828;
    }
L_088A6828:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088A6830;
L_088A6830:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    goto L_088A6834;
L_088A6834:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A68E0;
      }
      goto L_088A6850;
    }
L_088A6850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A6898;
      }
      goto L_088A6860;
    }
L_088A6860:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5891)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_088A6894;
      }
      goto L_088A686C;
    }
L_088A686C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A6894;
      }
      goto L_088A6888;
    }
L_088A6888:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A6898;
      }
      goto L_088A6894;
    }
L_088A6894:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    goto L_088A6898;
L_088A6898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16281)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
      if (branch_taken) {
          goto L_088A68B0;
      }
      goto L_088A68A8;
    }
L_088A68A8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088A68B0;
L_088A68B0:
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.fpr[13] = ctx.fpr[26] / ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_088A68D8;
      }
      goto L_088A68D4;
    }
L_088A68D4:
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_088A68D8;
L_088A68D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6938;
      }
      goto L_088A68E0;
    }
L_088A68E0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A6938;
      }
      goto L_088A68F8;
    }
L_088A68F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16281)));
    if (ctx.gpr[4] != 0u) {
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_088A6914;
    }
    goto L_088A6904;
L_088A6904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_088A6914;
L_088A6914:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A6938;
      }
      goto L_088A6928;
    }
L_088A6928:
    ctx.fpr[12] = std::sqrt(ctx.fpr[13]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_088A6938;
L_088A6938:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[28])) && ctx.fpr[24] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A6958;
      }
      goto L_088A6948;
    }
L_088A6948:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[28])) && ctx.fpr[20] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A6BAC;
      }
      goto L_088A6958;
    }
L_088A6958:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(208)));
    ctx.fpr[15] = ctx.fpr[14] / ctx.fpr[13];
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[17];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x088A6A68u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x088A6A68u) goto L_088A6A68;
    return;
L_088A6A68:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A6ACC;
      }
      goto L_088A6AB8;
    }
L_088A6AB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(5890)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A6B64;
      }
      goto L_088A6ACC;
    }
L_088A6ACC:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16028)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (0x088A6B64u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x088A6B64u) goto L_088A6B64;
    return;
L_088A6B64:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x088A6BACu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x088A6BACu) goto L_088A6BAC;
    return;
L_088A6BAC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6BF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15972)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15968)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15996)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(15976), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(15984), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(15980), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[13] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(15988), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[12] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[13] + static_cast<std::uint32_t>(16032));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(15992), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A6C98u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(16000), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 582u, 0x088063D8u>(ctx, &aot_mem) && ctx.pc == 0x088A6C98u) goto L_088A6C98;
    return;
L_088A6C98:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088A6CA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16284));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088A6CA4u) goto L_088A6CA4;
    return;
L_088A6CA4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6CB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 1u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088A6CE4;
      }
      goto L_088A6CDC;
    }
L_088A6CDC:
    ctx.gpr[7] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    goto L_088A6CE4;
L_088A6CE4:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088A6CF4;
      }
      goto L_088A6CF0;
    }
L_088A6CF0:
    ctx.gpr[5] = (0u | 2u);
    goto L_088A6CF4;
L_088A6CF4:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x088A6D24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 270u, 0x088C1A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088A6D24u) goto L_088A6D24;
    return;
L_088A6D24:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A6D38;
      }
      goto L_088A6D30;
    }
L_088A6D30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088A6D3C;
      }
      goto L_088A6D38;
    }
L_088A6D38:
    ctx.gpr[2] = (0u | 0u);
    goto L_088A6D3C;
L_088A6D3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6D4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088A6D90u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x088A6D90u) goto L_088A6D90;
    return;
L_088A6D90:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6D9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x088A6E64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x088A6E64u) goto L_088A6E64;
    return;
L_088A6E64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_088A6E74;
      }
      goto L_088A6E6C;
    }
L_088A6E6C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (15820u << 16u);
    goto L_088A6E74;
L_088A6E74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x088A6ECCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x088A6ECCu) goto L_088A6ECC;
    return;
L_088A6ECC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A6ED8;
      }
      goto L_088A6ED4;
    }
L_088A6ED4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_088A6ED8;
L_088A6ED8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088A6EEC;
    }
    goto L_088A6EEC;
L_088A6EEC:
    ctx.gpr[4] = (49862u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16261u << 16u);
      if (branch_taken) {
          goto L_088A6F1C;
      }
      goto L_088A6F04;
    }
L_088A6F04:
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A6F20;
      }
      goto L_088A6F1C;
    }
L_088A6F1C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088A6F20;
L_088A6F20:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6F50:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16308)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16304)));
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
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16312), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16320), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16316), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16324), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(16328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A6FC8:
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
L_088A6FF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 5000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 131u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (0u | 162u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A70A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x088A70A0u) goto L_088A70A0;
    return;
L_088A70A0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_088A70BC;
      }
      goto L_088A70B0;
    }
L_088A70B0:
    ctx.gpr[31] = (0x088A70B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x088A70B8u) goto L_088A70B8;
    return;
L_088A70B8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_088A70BC;
L_088A70BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    ctx.gpr[31] = (0x088A710Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x088A710Cu) goto L_088A710C;
    return;
L_088A710C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088A7124;
      }
      goto L_088A7118;
    }
L_088A7118:
    ctx.gpr[31] = (0x088A7120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x088A7120u) goto L_088A7120;
    return;
L_088A7120:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_088A7124;
L_088A7124:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(124));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(156), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), 0u);
    ctx.gpr[31] = (0x088A7190u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x088A7190u) goto L_088A7190;
    return;
L_088A7190:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088A71A8;
      }
      goto L_088A719C;
    }
L_088A719C:
    ctx.gpr[31] = (0x088A71A4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x088A71A4u) goto L_088A71A4;
    return;
L_088A71A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088A71A8;
L_088A71A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(172));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x088A71ECu);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 140u, 0x08AB89A4u>(ctx, &aot_mem) && ctx.pc == 0x088A71ECu) goto L_088A71EC;
    return;
L_088A71EC:
    ctx.gpr[31] = (0x088A71F4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(204));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 460u, 0x089D1C6Cu>(ctx, &aot_mem) && ctx.pc == 0x088A71F4u) goto L_088A71F4;
    return;
L_088A71F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), 0u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[18]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(268), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(269), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
      if (branch_taken) {
          goto L_088A7240;
      }
      goto L_088A722C;
    }
L_088A722C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A7254;
      }
      goto L_088A7240;
    }
L_088A7240:
    ctx.gpr[6] = (ctx.gpr[17] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x088A7254u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 674u, 0x08AFEF38u>(ctx, &aot_mem) && ctx.pc == 0x088A7254u) goto L_088A7254;
    return;
L_088A7254:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088A7260u);
    ctx.gpr[4] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088A7260u) goto L_088A7260;
    return;
L_088A7260:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088A7278;
      }
      goto L_088A726C;
    }
L_088A726C:
    ctx.gpr[31] = (0x088A7274u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 696u, 0x088AB064u>(ctx, &aot_mem) && ctx.pc == 0x088A7274u) goto L_088A7274;
    return;
L_088A7274:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088A7278;
L_088A7278:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[31] = (0x088A728Cu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088A728Cu) goto L_088A728C;
    return;
L_088A728C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[18] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
        goto L_088A72B8;
    }
    goto L_088A7298;
L_088A7298:
    ctx.gpr[31] = (0x088A72A0u);
    ctx.gpr[4] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x088A72A0u) goto L_088A72A0;
    return;
L_088A72A0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    goto L_088A72B8;
L_088A72B8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_088A72D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A75D4;
      }
      goto L_088A7308;
    }
L_088A7308:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088A7314u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3948));
    goto L_088A6FC8;
L_088A7314:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(160));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_088A7348;
      }
      goto L_088A732C;
    }
L_088A732C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7340;
      }
      goto L_088A7338;
    }
L_088A7338:
    ctx.gpr[31] = (0x088A7340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7340u) goto L_088A7340;
    return;
L_088A7340:
    ctx.gpr[31] = (0x088A7348u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088A7348u) goto L_088A7348;
    return;
L_088A7348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088A7354u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 139u, 0x0886D278u>(ctx, &aot_mem) && ctx.pc == 0x088A7354u) goto L_088A7354;
    return;
L_088A7354:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(204));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(172));
      if (branch_taken) {
          goto L_088A7394;
      }
      goto L_088A7360;
    }
L_088A7360:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(208));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088A7390;
      }
      goto L_088A736C;
    }
L_088A736C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088A7390;
      }
      goto L_088A7378;
    }
L_088A7378:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(172));
        goto L_088A7394;
    }
    goto L_088A7380;
L_088A7380:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(172));
        goto L_088A7394;
    }
    goto L_088A7388;
L_088A7388:
    ctx.gpr[31] = (0x088A7390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x088A7390u) goto L_088A7390;
    return;
L_088A7390:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(172));
    goto L_088A7394;
L_088A7394:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(188));
      if (branch_taken) {
          goto L_088A743C;
      }
      goto L_088A739C;
    }
L_088A739C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_088A73CC;
      }
      goto L_088A73A4;
    }
L_088A73A4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088A73CC;
      }
      goto L_088A73B4;
    }
L_088A73B4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A73CC;
      }
      goto L_088A73BC;
    }
L_088A73BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A73CC;
      }
      goto L_088A73C4;
    }
L_088A73C4:
    ctx.gpr[31] = (0x088A73CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x088A73CCu) goto L_088A73CC;
    return;
L_088A73CC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A743C;
      }
      goto L_088A73D4;
    }
L_088A73D4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A743C;
      }
      goto L_088A73DC;
    }
L_088A73DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7420;
      }
      goto L_088A73E8;
    }
L_088A73E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088A73FCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 525u, 0x08AFE3F4u>(ctx, &aot_mem) && ctx.pc == 0x088A73FCu) goto L_088A73FC;
    return;
L_088A73FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), 0u);
    goto L_088A7420;
L_088A7420:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A743C;
      }
      goto L_088A7428;
    }
L_088A7428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A743C;
      }
      goto L_088A7434;
    }
L_088A7434:
    ctx.gpr[31] = (0x088A743Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x088A743Cu) goto L_088A743C;
    return;
L_088A743C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A74AC;
      }
      goto L_088A7444;
    }
L_088A7444:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A74AC;
      }
      goto L_088A744C;
    }
L_088A744C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7490;
      }
      goto L_088A7458;
    }
L_088A7458:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088A746Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 749u, 0x08AFF468u>(ctx, &aot_mem) && ctx.pc == 0x088A746Cu) goto L_088A746C;
    return;
L_088A746C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), 0u);
    goto L_088A7490;
L_088A7490:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A74AC;
      }
      goto L_088A7498;
    }
L_088A7498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A74AC;
      }
      goto L_088A74A4;
    }
L_088A74A4:
    ctx.gpr[31] = (0x088A74ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x088A74ACu) goto L_088A74AC;
    return;
L_088A74AC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A74D8;
      }
      goto L_088A74B4;
    }
L_088A74B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088A74D8;
      }
      goto L_088A74C0;
    }
L_088A74C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A74D8;
      }
      goto L_088A74C8;
    }
L_088A74C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A74D8;
      }
      goto L_088A74D0;
    }
L_088A74D0:
    ctx.gpr[31] = (0x088A74D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x088A74D8u) goto L_088A74D8;
    return;
L_088A74D8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7550;
      }
      goto L_088A74E0;
    }
L_088A74E0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7550;
      }
      goto L_088A74E8;
    }
L_088A74E8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7550;
      }
      goto L_088A74F0;
    }
L_088A74F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7534;
      }
      goto L_088A74FC;
    }
L_088A74FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088A7510u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 519u, 0x08AFE390u>(ctx, &aot_mem) && ctx.pc == 0x088A7510u) goto L_088A7510;
    return;
L_088A7510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    goto L_088A7534;
L_088A7534:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7550;
      }
      goto L_088A753C;
    }
L_088A753C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7550;
      }
      goto L_088A7548;
    }
L_088A7548:
    ctx.gpr[31] = (0x088A7550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x088A7550u) goto L_088A7550;
    return;
L_088A7550:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_088A75C4;
      }
      goto L_088A7558;
    }
L_088A7558:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_088A75C4;
      }
      goto L_088A7560;
    }
L_088A7560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A75A4;
      }
      goto L_088A756C;
    }
L_088A756C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088A7580u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 606u, 0x08AFE9C0u>(ctx, &aot_mem) && ctx.pc == 0x088A7580u) goto L_088A7580;
    return;
L_088A7580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    goto L_088A75A4;
L_088A75A4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_088A75C4;
      }
      goto L_088A75AC;
    }
L_088A75AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
        goto L_088A75C4;
    }
    goto L_088A75B8;
L_088A75B8:
    ctx.gpr[31] = (0x088A75C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x088A75C0u) goto L_088A75C0;
    return;
L_088A75C0:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    goto L_088A75C4;
L_088A75C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A75D4;
      }
      goto L_088A75CC;
    }
L_088A75CC:
    ctx.gpr[31] = (0x088A75D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088A75D4u) goto L_088A75D4;
    return;
L_088A75D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A75FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088A7640;
      }
      goto L_088A7620;
    }
L_088A7620:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088A7644;
      }
      goto L_088A763C;
    }
L_088A763C:
    ctx.gpr[4] = (0u | 1u);
    goto L_088A7640;
L_088A7640:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088A7644;
L_088A7644:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_088A7700;
      }
      goto L_088A764C;
    }
L_088A764C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
        goto L_088A7664;
    }
    goto L_088A7658;
L_088A7658:
    ctx.gpr[31] = (0x088A7660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7660u) goto L_088A7660;
    return;
L_088A7660:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_088A7664;
L_088A7664:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088A7684;
      }
      goto L_088A7674;
    }
L_088A7674:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088A768C;
      }
      goto L_088A7684;
    }
L_088A7684:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088A768C;
L_088A768C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A7700;
      }
      goto L_088A7694;
    }
L_088A7694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7700;
      }
      goto L_088A76A0;
    }
L_088A76A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7700;
      }
      goto L_088A76BC;
    }
L_088A76BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7700;
      }
      goto L_088A76C8;
    }
L_088A76C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7700;
      }
      goto L_088A76E0;
    }
L_088A76E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088A7708;
      }
      goto L_088A76F8;
    }
L_088A76F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088A770C;
      }
      goto L_088A7700;
    }
L_088A7700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7800;
      }
      goto L_088A7708;
    }
L_088A7708:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088A770C;
L_088A770C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7840)));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_088A774C;
      }
      goto L_088A7748;
    }
L_088A7748:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A774C;
L_088A774C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A7768u);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(3984));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 4u, 0x088A8030u>(ctx, &aot_mem) && ctx.pc == 0x088A7768u) goto L_088A7768;
    return;
L_088A7768:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[31] = (0x088A77ACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 860u, 0x088ABC34u>(ctx, &aot_mem) && ctx.pc == 0x088A77ACu) goto L_088A77AC;
    return;
L_088A77AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088A77CC;
      }
      goto L_088A77C0;
    }
L_088A77C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088A77CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088A77CCu) goto L_088A77CC;
    return;
L_088A77CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088A7800u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 218u, 0x0886D6F0u>(ctx, &aot_mem) && ctx.pc == 0x088A7800u) goto L_088A7800;
    return;
L_088A7800:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A7818:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A7838u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4016));
    goto L_088A6FC8;
L_088A7838:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(59)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_088A78BC;
      }
      goto L_088A7844;
    }
L_088A7844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
        goto L_088A785C;
    }
    goto L_088A7850;
L_088A7850:
    ctx.gpr[31] = (0x088A7858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7858u) goto L_088A7858;
    return;
L_088A7858:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_088A785C;
L_088A785C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088A7890;
      }
      goto L_088A7868;
    }
L_088A7868:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088A7894;
    }
    goto L_088A7878;
L_088A7878:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[6] = (2209u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26624));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088A7898;
      }
      goto L_088A7890;
    }
L_088A7890:
    ctx.gpr[4] = (0u | 1u);
    goto L_088A7894;
L_088A7894:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088A7898;
L_088A7898:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A78BC;
      }
      goto L_088A78A0;
    }
L_088A78A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A78B4;
      }
      goto L_088A78AC;
    }
L_088A78AC:
    ctx.gpr[31] = (0x088A78B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088A78B4u) goto L_088A78B4;
    return;
L_088A78B4:
    ctx.gpr[31] = (0x088A78BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 336u, 0x08A0962Cu>(ctx, &aot_mem) && ctx.pc == 0x088A78BCu) goto L_088A78BC;
    return;
L_088A78BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
        goto L_088A78D4;
    }
    goto L_088A78C8;
L_088A78C8:
    ctx.gpr[31] = (0x088A78D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088A78D0u) goto L_088A78D0;
    return;
L_088A78D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_088A78D4;
L_088A78D4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088A7910;
      }
      goto L_088A78F0;
    }
L_088A78F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_088A7914;
      }
      goto L_088A790C;
    }
L_088A790C:
    ctx.gpr[17] = (0u | 1u);
    goto L_088A7910;
L_088A7910:
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    goto L_088A7914;
L_088A7914:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7924;
      }
      goto L_088A791C;
    }
L_088A791C:
    ctx.gpr[31] = (0x088A7924u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 399u, 0x088AD91Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7924u) goto L_088A7924;
    return;
L_088A7924:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A7940:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_088A7994;
    }
    goto L_088A7984;
L_088A7984:
    ctx.gpr[31] = (0x088A798Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088A798Cu) goto L_088A798C;
    return;
L_088A798C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_088A7994;
L_088A7994:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088A79F4;
      }
      goto L_088A799C;
    }
L_088A799C:
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[31] = (0x088A79F0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 430u, 0x0886E718u>(ctx, &aot_mem) && ctx.pc == 0x088A79F0u) goto L_088A79F0;
    return;
L_088A79F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_088A79F4;
L_088A79F4:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x088A7A00u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 218u, 0x0886D6F0u>(ctx, &aot_mem) && ctx.pc == 0x088A7A00u) goto L_088A7A00;
    return;
L_088A7A00:
    ctx.gpr[31] = (0x088A7A08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 643u, 0x0886FCE8u>(ctx, &aot_mem) && ctx.pc == 0x088A7A08u) goto L_088A7A08;
    return;
L_088A7A08:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_088A7A10;
L_088A7A10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[8] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_088A7A40;
    }
    goto L_088A7A40;
L_088A7A40:
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7A9C;
      }
      goto L_088A7A4C;
    }
L_088A7A4C:
    ctx.gpr[31] = (0x088A7A54u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 267u, 0x0886DBA8u>(ctx, &aot_mem) && ctx.pc == 0x088A7A54u) goto L_088A7A54;
    return;
L_088A7A54:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A7A90;
      }
      goto L_088A7A5C;
    }
L_088A7A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A7A84;
      }
      goto L_088A7A6C;
    }
L_088A7A6C:
    ctx.gpr[4] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A7A84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4056));
    goto L_088A6FC8;
L_088A7A84:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(225)));
      if (branch_taken) {
          goto L_088A7AA0;
      }
      goto L_088A7A90;
    }
L_088A7A90:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088A7A10;
      }
      goto L_088A7A9C;
    }
L_088A7A9C:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(225)));
    goto L_088A7AA0;
L_088A7AA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7BA8;
      }
      goto L_088A7AA8;
    }
L_088A7AA8:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[19] = (2225u << 16u);
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4080));
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-21008));
      if (branch_taken) {
          goto L_088A7AD8;
      }
      goto L_088A7ACC;
    }
L_088A7ACC:
    ctx.gpr[31] = (0x088A7AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7AD4u) goto L_088A7AD4;
    return;
L_088A7AD4:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    goto L_088A7AD8;
L_088A7AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A7AEC;
      }
      goto L_088A7AE4;
    }
L_088A7AE4:
    ctx.gpr[31] = (0x088A7AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7AECu) goto L_088A7AEC;
    return;
L_088A7AEC:
    ctx.gpr[31] = (0x088A7AF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 289u, 0x08A0928Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7AF4u) goto L_088A7AF4;
    return;
L_088A7AF4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088A7B04u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 222u, 0x08A08E2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7B04u) goto L_088A7B04;
    return;
L_088A7B04:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A7B14u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 860u, 0x088ABC34u>(ctx, &aot_mem) && ctx.pc == 0x088A7B14u) goto L_088A7B14;
    return;
L_088A7B14:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[21];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088A7B2C;
      }
      goto L_088A7B20;
    }
L_088A7B20:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A7B2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7B2Cu) goto L_088A7B2C;
    return;
L_088A7B2C:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[22] = (2225u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4112));
      if (branch_taken) {
          goto L_088A7B50;
      }
      goto L_088A7B44;
    }
L_088A7B44:
    ctx.gpr[31] = (0x088A7B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7B4Cu) goto L_088A7B4C;
    return;
L_088A7B4C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    goto L_088A7B50;
L_088A7B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A7B64;
      }
      goto L_088A7B5C;
    }
L_088A7B5C:
    ctx.gpr[31] = (0x088A7B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7B64u) goto L_088A7B64;
    return;
L_088A7B64:
    ctx.gpr[31] = (0x088A7B6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 289u, 0x08A0928Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7B6Cu) goto L_088A7B6C;
    return;
L_088A7B6C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088A7B7Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 222u, 0x08A08E2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7B7Cu) goto L_088A7B7C;
    return;
L_088A7B7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088A7B8Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 861u, 0x088ABC60u>(ctx, &aot_mem) && ctx.pc == 0x088A7B8Cu) goto L_088A7B8C;
    return;
L_088A7B8C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[21];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088A7BA4;
      }
      goto L_088A7B98;
    }
L_088A7B98:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A7BA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7BA4u) goto L_088A7BA4;
    return;
L_088A7BA4:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(225)));
    goto L_088A7BA8;
L_088A7BA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A7BEC;
      }
      goto L_088A7BB0;
    }
L_088A7BB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7840)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A7BEC;
      }
      goto L_088A7BD8;
    }
L_088A7BD8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088A7BE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4144));
    goto L_088A6FC8;
L_088A7BE4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(225)));
    goto L_088A7BEC;
L_088A7BEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A7C18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088A7CA0;
      }
      goto L_088A7C5C;
    }
L_088A7C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088A7C68u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 267u, 0x0886DBA8u>(ctx, &aot_mem) && ctx.pc == 0x088A7C68u) goto L_088A7C68;
    return;
L_088A7C68:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
        goto L_088A7C78;
    }
    goto L_088A7C70;
L_088A7C70:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    goto L_088A7C78;
L_088A7C78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A7C5C;
      }
      goto L_088A7CA0;
    }
L_088A7CA0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_088A7CBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[6] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
        goto L_088A7CFC;
    }
    goto L_088A7CE8;
L_088A7CE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(6))))));
      if (branch_taken) {
          goto L_088A7D1C;
      }
      goto L_088A7CFC;
    }
L_088A7CFC:
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 45696u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(6))))));
    goto L_088A7D1C;
L_088A7D1C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A7D5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A7D64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A7D74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 279u, 0x0886DC3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7D74u) goto L_088A7D74;
    return;
L_088A7D74:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A7D80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A7D90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 363u, 0x0886E2A0u>(ctx, &aot_mem) && ctx.pc == 0x088A7D90u) goto L_088A7D90;
    return;
L_088A7D90:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A7D9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A7DACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 365u, 0x0886E2BCu>(ctx, &aot_mem) && ctx.pc == 0x088A7DACu) goto L_088A7DAC;
    return;
L_088A7DAC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A7DB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088A7DD4;
      }
      goto L_088A7DC8;
    }
L_088A7DC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088A7DD4;
      }
      goto L_088A7DD4;
    }
L_088A7DD4:
    ctx.gpr[31] = (0x088A7DDCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x088A7DDCu) goto L_088A7DDC;
    return;
L_088A7DDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A7DE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088A7E04;
      }
      goto L_088A7DF8;
    }
L_088A7DF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088A7E04;
      }
      goto L_088A7E04;
    }
L_088A7E04:
    ctx.gpr[31] = (0x088A7E0Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x088A7E0Cu) goto L_088A7E0C;
    return;
L_088A7E0C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A7E18:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088A7E58;
      }
      goto L_088A7E40;
    }
L_088A7E40:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7E58;
      }
      goto L_088A7E54;
    }
L_088A7E54:
    ctx.gpr[6] = (0u | 1u);
    goto L_088A7E58;
L_088A7E58:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A7E60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A7EA4;
      }
      goto L_088A7E98;
    }
L_088A7E98:
    ctx.gpr[31] = (0x088A7EA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088A7EA0u) goto L_088A7EA0;
    return;
L_088A7EA0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088A7EA4;
L_088A7EA4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A7EB4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7EB4u) goto L_088A7EB4;
    return;
L_088A7EB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A7EC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A7F1C;
      }
      goto L_088A7EFC;
    }
L_088A7EFC:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088A7F14u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 267u, 0x0886DBA8u>(ctx, &aot_mem) && ctx.pc == 0x088A7F14u) goto L_088A7F14;
    return;
L_088A7F14:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
        goto L_088A7F74;
    }
    goto L_088A7F1C;
L_088A7F1C:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088A7F58;
      }
      goto L_088A7F2C;
    }
L_088A7F2C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088A7F38u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088A7F38u) goto L_088A7F38;
    return;
L_088A7F38:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A7F50;
      }
      goto L_088A7F44;
    }
L_088A7F44:
    ctx.gpr[31] = (0x088A7F4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088A7F4Cu) goto L_088A7F4C;
    return;
L_088A7F4C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088A7F50;
L_088A7F50:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088A7F58;
L_088A7F58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x088A7F64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4188));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088A7F64u) goto L_088A7F64;
    return;
L_088A7F64:
    ctx.gpr[31] = (0x088A7F6Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x088A7F6Cu) goto L_088A7F6C;
    return;
L_088A7F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 3u, 0x088A8014u>(ctx, &aot_mem); return;
      }
      goto L_088A7F74;
    }
L_088A7F74:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 2u, 0x088A8010u>(ctx, &aot_mem); return;
      }
      goto L_088A7F94;
    }
L_088A7F94:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
        goto L_088A7FB0;
    }
    goto L_088A7FA4;
L_088A7FA4:
    ctx.gpr[31] = (0x088A7FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7FACu) goto L_088A7FAC;
    return;
L_088A7FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_088A7FB0;
L_088A7FB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088A7FD0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 222u, 0x08A08E2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7FD0u) goto L_088A7FD0;
    return;
L_088A7FD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088A7FE0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A7FE0u) goto L_088A7FE0;
    return;
L_088A7FE0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 1u, 0x088A8000u>(ctx, &aot_mem); return;
      }
      goto L_088A7FF4;
    }
L_088A7FF4:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A8000u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0040(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0040_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_40(Runtime &runtime) {
    runtime.register_generated_unit(40u, 0x088A4000u, 16384u, &recomp_unit_0040, &recomp_unit_0040_entry);
    runtime.register_function(0x088A4000u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A400Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4018u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A402Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A403Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A404Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4094u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4138u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4150u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4168u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4180u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4198u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A41A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A41B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A41C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A41D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A41F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4250u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A427Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A42A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A42D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A42E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A42F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A42FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4304u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A431Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A433Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4350u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4368u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A438Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4394u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4398u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A43B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A43BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A43C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A43DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A43E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A43E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4404u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A440Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4410u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A442Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4434u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4438u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4454u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A445Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4460u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A447Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4484u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4488u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A44A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A44ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A44B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A44C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A44E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4530u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A45A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A45BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A45DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4610u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4634u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A466Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4690u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A46C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A471Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A472Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4738u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4750u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4764u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4788u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A47A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A47B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A47C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A47C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A47E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A47ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4810u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4818u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A481Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4824u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4840u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A488Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4898u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A48D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A48E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A48ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A493Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A495Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A49A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A49A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A49B8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A49E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A49F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4A4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4AB8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4AC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4AC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4AD8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4B00u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4BCCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4BF0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4BF8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4C2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4C78u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4CE8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D5Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D78u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4D84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4DA8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4DC4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E44u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E88u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4E8Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4EBCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4EFCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F18u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F24u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F3Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F44u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F60u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F90u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F94u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4F9Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A4FDCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5028u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5080u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5088u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5090u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A509Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A50C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A50F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A50FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5148u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5160u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A51C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5238u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5258u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5264u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5270u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5284u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5290u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A52E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5314u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A531Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A532Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5330u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A534Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5354u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5368u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5374u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A537Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A538Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A53F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A53FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A540Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5410u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5420u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5428u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5438u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A543Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A544Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5454u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5464u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5468u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5470u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5488u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A550Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5538u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5540u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5548u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5570u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A55A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A55C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5604u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5608u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5610u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5620u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5638u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5648u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5658u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5668u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5678u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5688u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5698u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A56A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A56D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5704u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A570Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5724u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A576Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A57FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A580Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5814u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A581Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5824u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A582Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5834u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A583Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5848u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5850u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A585Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A586Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A587Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A588Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A589Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A58FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5904u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A590Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5938u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A594Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5954u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5960u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A596Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5978u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5984u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5998u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A59ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A59B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A59C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A59D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A59F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A00u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A0Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A1Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A28u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A54u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A60u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5A70u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AD0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5ADCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AE8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5AF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B10u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B30u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B44u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5B78u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C30u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C40u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C60u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C78u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5C9Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5CACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5CC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5CE4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5CE8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D10u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D44u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D70u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D78u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5D94u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DA4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DC0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DD8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5DF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E18u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E28u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E74u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5E9Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5EA4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5EC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5ED8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5EE0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F04u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F0Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F18u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F28u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F38u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F48u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F6Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F8Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F94u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5F98u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5FB4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5FC4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5FE4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5FECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A5FF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6000u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A600Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6024u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6030u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6038u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6050u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A605Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A606Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A607Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6090u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A60B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A60C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A60D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A60E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6168u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6174u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A61B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A61C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A61CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6218u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A621Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A624Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6260u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6270u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6278u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A629Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A62F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A63ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A63CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6414u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A64E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A64F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6508u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A651Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6534u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6538u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6544u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A654Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6564u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6570u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6578u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6580u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A658Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A65A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A65B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A65CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A65E4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6610u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6618u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6624u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6634u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6644u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A664Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6660u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6668u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A667Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A669Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A66B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A66CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A66DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A66FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6714u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A671Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6734u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A673Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6760u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6770u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6778u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A679Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A67A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A67B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A67C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A67D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A67E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A67E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A67FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6804u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6828u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6830u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6834u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6850u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6860u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A686Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6888u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6894u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6898u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A68A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A68B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A68D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A68D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A68E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A68F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6904u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6914u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6928u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6938u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6948u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6958u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6A68u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6AB8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6ACCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6B64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6BACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6BF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6C98u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6CA4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6CB0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6CDCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6CE4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6CF0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6CF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D24u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D30u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D38u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D3Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D90u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6D9Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E6Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6E74u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6ECCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6ED4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6ED8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6EECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F04u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F1Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F20u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6F50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6FC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A6FF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A70A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A70B0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A70B8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A70BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A710Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7118u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7120u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7124u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7190u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A719Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A71A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A71A8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A71ECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A71F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A722Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7240u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7254u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7260u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A726Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7274u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7278u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A728Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7298u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A72A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A72B8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A72D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7308u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7314u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A732Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7338u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7340u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7348u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7354u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7360u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A736Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7378u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7380u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7388u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7390u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7394u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A739Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A73A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A73B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A73BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A73C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A73CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A73D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A73DCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A73E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A73FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7420u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7428u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7434u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A743Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7444u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A744Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7458u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A746Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7490u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7498u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A74A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A74ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A74B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A74C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A74C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A74D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A74D8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A74E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A74E8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A74F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A74FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7510u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7534u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A753Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7548u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7550u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7558u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7560u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A756Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7580u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75A4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75B8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75C4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A75FCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7620u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A763Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7640u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7644u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A764Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7658u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7660u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7664u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7674u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7684u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A768Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7694u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A76A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A76BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A76C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A76E0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A76F8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7700u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7708u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A770Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7748u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A774Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7768u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A77ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A77C0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A77CCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7800u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7818u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7838u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7844u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7850u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7858u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A785Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7868u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7878u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7890u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7894u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7898u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78A0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78ACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78B4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78BCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78C8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78D0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78D4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A78F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A790Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7910u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7914u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A791Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7924u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7940u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7984u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A798Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7994u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A799Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A79F0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A79F4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A00u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A08u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A10u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A40u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A54u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A5Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A6Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A84u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A90u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7A9Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7AA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7AA8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7ACCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7AD4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7AD8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7AE4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7AECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7AF4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B04u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B20u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B44u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B5Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B6Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B7Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B8Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7B98u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BA4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BA8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BB0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BD8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BE4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7BECu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C18u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C5Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C68u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C70u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7C78u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CBCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CE8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7CFCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D1Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D5Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D74u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D80u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D90u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7D9Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DB8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DD4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DDCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DE8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7DF8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E04u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E0Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E18u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E40u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E54u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E58u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E60u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7E98u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7EA0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7EA4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7EB4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7EC8u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7EFCu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F14u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F1Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F2Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F38u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F44u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F4Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F50u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F58u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F64u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F6Cu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F74u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7F94u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7FA4u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7FACu, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7FB0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7FD0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7FE0u, &recomp_unit_0040, "recomp_unit_0040");
    runtime.register_function(0x088A7FF4u, &recomp_unit_0040, "recomp_unit_0040");
}
} // namespace psprecomp
