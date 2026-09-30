#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0184[4096] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0, 0, 0, 29,
    0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 49,
    0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 75, 0, 76,
    0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 92, 0, 93, 0, 94, 0, 95, 0,
    96, 0, 97, 0, 98, 0, 99, 0, 100, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0,
    105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0,
    0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    0, 127, 0, 0, 0, 128, 0, 0, 129, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0,
    0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 162,
    0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0,
    0, 174, 0, 175, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 179, 180, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0,
    0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 200, 0, 201, 0, 202, 0, 0, 0, 203, 0, 204, 0, 205, 0, 0,
    0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0,
    0, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 228, 0,
    0, 0, 229, 0, 0, 230, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 0, 242, 0, 0,
    0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 247, 0, 248, 0, 0, 0, 249, 250, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0,
    0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0,
    0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0,
    0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 280, 0, 0, 281, 0,
    0, 0, 282, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287,
    0, 288, 0, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 296,
    0, 0, 297, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302,
    0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 304, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 313, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 319, 0, 0, 320, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 325, 0, 326, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0,
    0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 344, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0,
    0, 351, 0, 0, 0, 0, 352, 0, 353, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 357, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 365, 0, 0, 366, 0, 367, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 375, 0, 0,
    0, 0, 376, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 387, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 391, 0, 0, 392,
    393, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0,
    0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0,
    412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426,
    0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 431, 0, 0, 0, 432, 0, 0,
    0, 433, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0,
    0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    440, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0,
    449, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0,
    0, 458, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0,
    0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 473,
    0, 0, 0, 474, 0, 475, 0, 476, 0, 0, 0, 477, 0, 478, 0, 479, 0, 480, 0, 0, 0, 481, 0, 0, 482, 0, 483, 0, 0, 484, 485, 0,
    0, 0, 0, 486, 0, 0, 487, 0, 488, 0, 489, 0, 0, 490, 0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 0, 0, 0, 497, 0,
    498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0,
    0, 503, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 506, 507, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 511, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 514, 515, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 518,
    0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0,
    0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0,
    532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0,
    0, 537, 0, 538, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0,
    0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 548,
    0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551,
    0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0,
    0, 558, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0,
    0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 566, 0, 567, 0, 568, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 571,
    0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 0, 0, 574, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0,
    0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0, 0, 582, 0, 0,
    0, 583, 0, 0, 0, 0, 0, 584, 0, 585, 586, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 589, 0, 0, 0, 0,
    0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 596, 0, 597, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0,
    601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 609, 0, 610, 0, 0, 0,
    0, 0, 0, 0, 0, 611, 0, 0, 0, 612, 0, 613, 0, 614, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 0, 618, 0,
    619, 620, 0, 0, 621, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626,
    0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0,
    0, 0, 634, 0, 635, 0, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 640, 641, 0, 0,
    642, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 646, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 650,
    0, 0, 651, 652, 0, 653, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 657,
    0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 659, 0, 660, 0, 0, 0, 661, 0, 662, 0, 663, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0,
    0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 671, 0, 672, 0, 0, 673, 0, 0, 674, 0, 675,
};
void recomp_unit_0184_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AE4000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0184[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AE4000;
    case 2u: goto L_08AE400C;
    case 3u: goto L_08AE4018;
    case 4u: goto L_08AE4058;
    case 5u: goto L_08AE4080;
    case 6u: goto L_08AE4094;
    case 7u: goto L_08AE40B0;
    case 8u: goto L_08AE40BC;
    case 9u: goto L_08AE40EC;
    case 10u: goto L_08AE40F8;
    case 11u: goto L_08AE4110;
    case 12u: goto L_08AE412C;
    case 13u: goto L_08AE413C;
    case 14u: goto L_08AE414C;
    case 15u: goto L_08AE4158;
    case 16u: goto L_08AE41C8;
    case 17u: goto L_08AE41E8;
    case 18u: goto L_08AE41F8;
    case 19u: goto L_08AE425C;
    case 20u: goto L_08AE4278;
    case 21u: goto L_08AE4288;
    case 22u: goto L_08AE428C;
    case 23u: goto L_08AE42BC;
    case 24u: goto L_08AE42C4;
    case 25u: goto L_08AE42D4;
    case 26u: goto L_08AE42DC;
    case 27u: goto L_08AE42E4;
    case 28u: goto L_08AE42EC;
    case 29u: goto L_08AE42FC;
    case 30u: goto L_08AE4314;
    case 31u: goto L_08AE431C;
    case 32u: goto L_08AE4324;
    case 33u: goto L_08AE4330;
    case 34u: goto L_08AE4348;
    case 35u: goto L_08AE4350;
    case 36u: goto L_08AE4358;
    case 37u: goto L_08AE437C;
    case 38u: goto L_08AE43CC;
    case 39u: goto L_08AE43D4;
    case 40u: goto L_08AE43E4;
    case 41u: goto L_08AE43E8;
    case 42u: goto L_08AE440C;
    case 43u: goto L_08AE441C;
    case 44u: goto L_08AE4434;
    case 45u: goto L_08AE4444;
    case 46u: goto L_08AE444C;
    case 47u: goto L_08AE4458;
    case 48u: goto L_08AE4464;
    case 49u: goto L_08AE447C;
    case 50u: goto L_08AE4484;
    case 51u: goto L_08AE448C;
    case 52u: goto L_08AE4494;
    case 53u: goto L_08AE44B0;
    case 54u: goto L_08AE44CC;
    case 55u: goto L_08AE44EC;
    case 56u: goto L_08AE44F4;
    case 57u: goto L_08AE450C;
    case 58u: goto L_08AE451C;
    case 59u: goto L_08AE4524;
    case 60u: goto L_08AE452C;
    case 61u: goto L_08AE4534;
    case 62u: goto L_08AE4548;
    case 63u: goto L_08AE455C;
    case 64u: goto L_08AE457C;
    case 65u: goto L_08AE4588;
    case 66u: goto L_08AE45E8;
    case 67u: goto L_08AE4630;
    case 68u: goto L_08AE463C;
    case 69u: goto L_08AE466C;
    case 70u: goto L_08AE4684;
    case 71u: goto L_08AE46A0;
    case 72u: goto L_08AE46D4;
    case 73u: goto L_08AE46DC;
    case 74u: goto L_08AE46EC;
    case 75u: goto L_08AE46F4;
    case 76u: goto L_08AE46FC;
    case 77u: goto L_08AE4704;
    case 78u: goto L_08AE470C;
    case 79u: goto L_08AE4714;
    case 80u: goto L_08AE471C;
    case 81u: goto L_08AE4724;
    case 82u: goto L_08AE472C;
    case 83u: goto L_08AE4730;
    case 84u: goto L_08AE474C;
    case 85u: goto L_08AE4764;
    case 86u: goto L_08AE4780;
    case 87u: goto L_08AE478C;
    case 88u: goto L_08AE47A4;
    case 89u: goto L_08AE47C0;
    case 90u: goto L_08AE47C8;
    case 91u: goto L_08AE47D0;
    case 92u: goto L_08AE47E0;
    case 93u: goto L_08AE47E8;
    case 94u: goto L_08AE47F0;
    case 95u: goto L_08AE47F8;
    case 96u: goto L_08AE4800;
    case 97u: goto L_08AE4808;
    case 98u: goto L_08AE4810;
    case 99u: goto L_08AE4818;
    case 100u: goto L_08AE4820;
    case 101u: goto L_08AE4824;
    case 102u: goto L_08AE4840;
    case 103u: goto L_08AE4858;
    case 104u: goto L_08AE4874;
    case 105u: goto L_08AE4880;
    case 106u: goto L_08AE4898;
    case 107u: goto L_08AE48B4;
    case 108u: goto L_08AE48BC;
    case 109u: goto L_08AE48D0;
    case 110u: goto L_08AE48DC;
    case 111u: goto L_08AE490C;
    case 112u: goto L_08AE4964;
    case 113u: goto L_08AE4974;
    case 114u: goto L_08AE4988;
    case 115u: goto L_08AE4990;
    case 116u: goto L_08AE4998;
    case 117u: goto L_08AE49B4;
    case 118u: goto L_08AE49E0;
    case 119u: goto L_08AE49EC;
    case 120u: goto L_08AE4A0C;
    case 121u: goto L_08AE4A18;
    case 122u: goto L_08AE4A20;
    case 123u: goto L_08AE4A30;
    case 124u: goto L_08AE4A40;
    case 125u: goto L_08AE4A54;
    case 126u: goto L_08AE4A6C;
    case 127u: goto L_08AE4A84;
    case 128u: goto L_08AE4A94;
    case 129u: goto L_08AE4AA0;
    case 130u: goto L_08AE4AA4;
    case 131u: goto L_08AE4AF8;
    case 132u: goto L_08AE4B04;
    case 133u: goto L_08AE4B10;
    case 134u: goto L_08AE4B60;
    case 135u: goto L_08AE4B74;
    case 136u: goto L_08AE4B88;
    case 137u: goto L_08AE4B9C;
    case 138u: goto L_08AE4BBC;
    case 139u: goto L_08AE4BF4;
    case 140u: goto L_08AE4C0C;
    case 141u: goto L_08AE4C24;
    case 142u: goto L_08AE4C34;
    case 143u: goto L_08AE4C4C;
    case 144u: goto L_08AE4C64;
    case 145u: goto L_08AE4C7C;
    case 146u: goto L_08AE4C8C;
    case 147u: goto L_08AE4CA4;
    case 148u: goto L_08AE4CB4;
    case 149u: goto L_08AE4CB8;
    case 150u: goto L_08AE4CC0;
    case 151u: goto L_08AE4CE0;
    case 152u: goto L_08AE4CEC;
    case 153u: goto L_08AE4CF4;
    case 154u: goto L_08AE4D08;
    case 155u: goto L_08AE4D20;
    case 156u: goto L_08AE4D28;
    case 157u: goto L_08AE4D30;
    case 158u: goto L_08AE4D38;
    case 159u: goto L_08AE4D44;
    case 160u: goto L_08AE4D5C;
    case 161u: goto L_08AE4D64;
    case 162u: goto L_08AE4D7C;
    case 163u: goto L_08AE4D84;
    case 164u: goto L_08AE4D90;
    case 165u: goto L_08AE4DA8;
    case 166u: goto L_08AE4DB0;
    case 167u: goto L_08AE4DC0;
    case 168u: goto L_08AE4DD8;
    case 169u: goto L_08AE4DE4;
    case 170u: goto L_08AE4E2C;
    case 171u: goto L_08AE4E58;
    case 172u: goto L_08AE4E64;
    case 173u: goto L_08AE4E74;
    case 174u: goto L_08AE4E84;
    case 175u: goto L_08AE4E8C;
    case 176u: goto L_08AE4E94;
    case 177u: goto L_08AE4EA4;
    case 178u: goto L_08AE4EC0;
    case 179u: goto L_08AE4EC8;
    case 180u: goto L_08AE4ECC;
    case 181u: goto L_08AE4ED8;
    case 182u: goto L_08AE4EE0;
    case 183u: goto L_08AE4EE8;
    case 184u: goto L_08AE4F00;
    case 185u: goto L_08AE4F10;
    case 186u: goto L_08AE4F18;
    case 187u: goto L_08AE4F20;
    case 188u: goto L_08AE4F2C;
    case 189u: goto L_08AE4F38;
    case 190u: goto L_08AE4F68;
    case 191u: goto L_08AE4F78;
    case 192u: goto L_08AE4F88;
    case 193u: goto L_08AE4FB4;
    case 194u: goto L_08AE4FE4;
    case 195u: goto L_08AE4FF8;
    case 196u: goto L_08AE5004;
    case 197u: goto L_08AE5014;
    case 198u: goto L_08AE5024;
    case 199u: goto L_08AE5030;
    case 200u: goto L_08AE5044;
    case 201u: goto L_08AE504C;
    case 202u: goto L_08AE5054;
    case 203u: goto L_08AE5064;
    case 204u: goto L_08AE506C;
    case 205u: goto L_08AE5074;
    case 206u: goto L_08AE5084;
    case 207u: goto L_08AE508C;
    case 208u: goto L_08AE5094;
    case 209u: goto L_08AE509C;
    case 210u: goto L_08AE50A4;
    case 211u: goto L_08AE50B0;
    case 212u: goto L_08AE50B8;
    case 213u: goto L_08AE50C8;
    case 214u: goto L_08AE50D0;
    case 215u: goto L_08AE50D8;
    case 216u: goto L_08AE50E0;
    case 217u: goto L_08AE50E8;
    case 218u: goto L_08AE510C;
    case 219u: goto L_08AE511C;
    case 220u: goto L_08AE5124;
    case 221u: goto L_08AE5130;
    case 222u: goto L_08AE5260;
    case 223u: goto L_08AE526C;
    case 224u: goto L_08AE5298;
    case 225u: goto L_08AE52BC;
    case 226u: goto L_08AE52E4;
    case 227u: goto L_08AE52F0;
    case 228u: goto L_08AE52F8;
    case 229u: goto L_08AE5308;
    case 230u: goto L_08AE5314;
    case 231u: goto L_08AE5318;
    case 232u: goto L_08AE5330;
    case 233u: goto L_08AE5344;
    case 234u: goto L_08AE537C;
    case 235u: goto L_08AE5390;
    case 236u: goto L_08AE53B8;
    case 237u: goto L_08AE53C8;
    case 238u: goto L_08AE53D0;
    case 239u: goto L_08AE53D8;
    case 240u: goto L_08AE53E0;
    case 241u: goto L_08AE53E8;
    case 242u: goto L_08AE53F4;
    case 243u: goto L_08AE5404;
    case 244u: goto L_08AE5410;
    case 245u: goto L_08AE541C;
    case 246u: goto L_08AE5428;
    case 247u: goto L_08AE5430;
    case 248u: goto L_08AE5438;
    case 249u: goto L_08AE5448;
    case 250u: goto L_08AE544C;
    case 251u: goto L_08AE5460;
    case 252u: goto L_08AE5468;
    case 253u: goto L_08AE5484;
    case 254u: goto L_08AE5490;
    case 255u: goto L_08AE549C;
    case 256u: goto L_08AE54A8;
    case 257u: goto L_08AE54BC;
    case 258u: goto L_08AE54CC;
    case 259u: goto L_08AE54D0;
    case 260u: goto L_08AE54F8;
    case 261u: goto L_08AE5504;
    case 262u: goto L_08AE552C;
    case 263u: goto L_08AE5534;
    case 264u: goto L_08AE553C;
    case 265u: goto L_08AE5554;
    case 266u: goto L_08AE5560;
    case 267u: goto L_08AE5568;
    case 268u: goto L_08AE5570;
    case 269u: goto L_08AE5588;
    case 270u: goto L_08AE5594;
    case 271u: goto L_08AE55AC;
    case 272u: goto L_08AE55B8;
    case 273u: goto L_08AE55D0;
    case 274u: goto L_08AE55D8;
    case 275u: goto L_08AE55E8;
    case 276u: goto L_08AE561C;
    case 277u: goto L_08AE5624;
    case 278u: goto L_08AE5650;
    case 279u: goto L_08AE5664;
    case 280u: goto L_08AE566C;
    case 281u: goto L_08AE5678;
    case 282u: goto L_08AE5688;
    case 283u: goto L_08AE568C;
    case 284u: goto L_08AE5834;
    case 285u: goto L_08AE5854;
    case 286u: goto L_08AE585C;
    case 287u: goto L_08AE587C;
    case 288u: goto L_08AE5884;
    case 289u: goto L_08AE5894;
    case 290u: goto L_08AE58A0;
    case 291u: goto L_08AE58AC;
    case 292u: goto L_08AE58B8;
    case 293u: goto L_08AE58CC;
    case 294u: goto L_08AE58E8;
    case 295u: goto L_08AE58F0;
    case 296u: goto L_08AE58FC;
    case 297u: goto L_08AE5908;
    case 298u: goto L_08AE591C;
    case 299u: goto L_08AE5924;
    case 300u: goto L_08AE593C;
    case 301u: goto L_08AE595C;
    case 302u: goto L_08AE597C;
    case 303u: goto L_08AE5994;
    case 304u: goto L_08AE5A08;
    case 305u: goto L_08AE5A10;
    case 306u: goto L_08AE5A1C;
    case 307u: goto L_08AE5A3C;
    case 308u: goto L_08AE5A4C;
    case 309u: goto L_08AE5A60;
    case 310u: goto L_08AE5A74;
    case 311u: goto L_08AE5AAC;
    case 312u: goto L_08AE5ABC;
    case 313u: goto L_08AE5ACC;
    case 314u: goto L_08AE5AD0;
    case 315u: goto L_08AE5AD8;
    case 316u: goto L_08AE5B00;
    case 317u: goto L_08AE5B20;
    case 318u: goto L_08AE5B28;
    case 319u: goto L_08AE5B30;
    case 320u: goto L_08AE5B3C;
    case 321u: goto L_08AE5B4C;
    case 322u: goto L_08AE5B54;
    case 323u: goto L_08AE5B98;
    case 324u: goto L_08AE5BA4;
    case 325u: goto L_08AE5BA8;
    case 326u: goto L_08AE5BB0;
    case 327u: goto L_08AE5BB4;
    case 328u: goto L_08AE5BBC;
    case 329u: goto L_08AE5CCC;
    case 330u: goto L_08AE5CE4;
    case 331u: goto L_08AE5D1C;
    case 332u: goto L_08AE5D3C;
    case 333u: goto L_08AE5D44;
    case 334u: goto L_08AE5D84;
    case 335u: goto L_08AE5D9C;
    case 336u: goto L_08AE5DB8;
    case 337u: goto L_08AE5DC8;
    case 338u: goto L_08AE5DDC;
    case 339u: goto L_08AE5E10;
    case 340u: goto L_08AE5E78;
    case 341u: goto L_08AE5E94;
    case 342u: goto L_08AE5EE0;
    case 343u: goto L_08AE5EEC;
    case 344u: goto L_08AE5EF4;
    case 345u: goto L_08AE5F58;
    case 346u: goto L_08AE5F8C;
    case 347u: goto L_08AE5FA4;
    case 348u: goto L_08AE5FB0;
    case 349u: goto L_08AE5FEC;
    case 350u: goto L_08AE5FF8;
    case 351u: goto L_08AE6004;
    case 352u: goto L_08AE6018;
    case 353u: goto L_08AE6020;
    case 354u: goto L_08AE6028;
    case 355u: goto L_08AE6038;
    case 356u: goto L_08AE605C;
    case 357u: goto L_08AE6090;
    case 358u: goto L_08AE6094;
    case 359u: goto L_08AE60A4;
    case 360u: goto L_08AE60CC;
    case 361u: goto L_08AE60E8;
    case 362u: goto L_08AE6130;
    case 363u: goto L_08AE6144;
    case 364u: goto L_08AE6150;
    case 365u: goto L_08AE6190;
    case 366u: goto L_08AE619C;
    case 367u: goto L_08AE61A4;
    case 368u: goto L_08AE61B4;
    case 369u: goto L_08AE61BC;
    case 370u: goto L_08AE61DC;
    case 371u: goto L_08AE621C;
    case 372u: goto L_08AE6224;
    case 373u: goto L_08AE6264;
    case 374u: goto L_08AE6270;
    case 375u: goto L_08AE6274;
    case 376u: goto L_08AE6288;
    case 377u: goto L_08AE628C;
    case 378u: goto L_08AE62B0;
    case 379u: goto L_08AE6304;
    case 380u: goto L_08AE6310;
    case 381u: goto L_08AE631C;
    case 382u: goto L_08AE6328;
    case 383u: goto L_08AE6334;
    case 384u: goto L_08AE6344;
    case 385u: goto L_08AE6360;
    case 386u: goto L_08AE6368;
    case 387u: goto L_08AE6370;
    case 388u: goto L_08AE63B0;
    case 389u: goto L_08AE63D4;
    case 390u: goto L_08AE63E4;
    case 391u: goto L_08AE63F0;
    case 392u: goto L_08AE63FC;
    case 393u: goto L_08AE6400;
    case 394u: goto L_08AE6414;
    case 395u: goto L_08AE6420;
    case 396u: goto L_08AE6478;
    case 397u: goto L_08AE648C;
    case 398u: goto L_08AE649C;
    case 399u: goto L_08AE64B4;
    case 400u: goto L_08AE64C8;
    case 401u: goto L_08AE64D8;
    case 402u: goto L_08AE650C;
    case 403u: goto L_08AE6528;
    case 404u: goto L_08AE6538;
    case 405u: goto L_08AE6548;
    case 406u: goto L_08AE65A0;
    case 407u: goto L_08AE65AC;
    case 408u: goto L_08AE65C0;
    case 409u: goto L_08AE65D0;
    case 410u: goto L_08AE65DC;
    case 411u: goto L_08AE65E8;
    case 412u: goto L_08AE6600;
    case 413u: goto L_08AE6648;
    case 414u: goto L_08AE6658;
    case 415u: goto L_08AE6684;
    case 416u: goto L_08AE66DC;
    case 417u: goto L_08AE66E4;
    case 418u: goto L_08AE6744;
    case 419u: goto L_08AE6754;
    case 420u: goto L_08AE6788;
    case 421u: goto L_08AE67F4;
    case 422u: goto L_08AE67FC;
    case 423u: goto L_08AE68A4;
    case 424u: goto L_08AE68BC;
    case 425u: goto L_08AE68C8;
    case 426u: goto L_08AE68FC;
    case 427u: goto L_08AE691C;
    case 428u: goto L_08AE6934;
    case 429u: goto L_08AE6950;
    case 430u: goto L_08AE6958;
    case 431u: goto L_08AE6964;
    case 432u: goto L_08AE6974;
    case 433u: goto L_08AE6984;
    case 434u: goto L_08AE6998;
    case 435u: goto L_08AE69A0;
    case 436u: goto L_08AE69F8;
    case 437u: goto L_08AE6A0C;
    case 438u: goto L_08AE6A18;
    case 439u: goto L_08AE6A28;
    case 440u: goto L_08AE6A80;
    case 441u: goto L_08AE6A8C;
    case 442u: goto L_08AE6AA0;
    case 443u: goto L_08AE6AB0;
    case 444u: goto L_08AE6ABC;
    case 445u: goto L_08AE6AD0;
    case 446u: goto L_08AE6AF4;
    case 447u: goto L_08AE6B38;
    case 448u: goto L_08AE6B70;
    case 449u: goto L_08AE6B80;
    case 450u: goto L_08AE6B88;
    case 451u: goto L_08AE6B90;
    case 452u: goto L_08AE6BDC;
    case 453u: goto L_08AE6BE4;
    case 454u: goto L_08AE6C8C;
    case 455u: goto L_08AE6CA4;
    case 456u: goto L_08AE6CB0;
    case 457u: goto L_08AE6CE4;
    case 458u: goto L_08AE6D04;
    case 459u: goto L_08AE6D0C;
    case 460u: goto L_08AE6D24;
    case 461u: goto L_08AE6D40;
    case 462u: goto L_08AE6D48;
    case 463u: goto L_08AE6D6C;
    case 464u: goto L_08AE6DB4;
    case 465u: goto L_08AE6E48;
    case 466u: goto L_08AE6E74;
    case 467u: goto L_08AE6E94;
    case 468u: goto L_08AE6EA8;
    case 469u: goto L_08AE6EB0;
    case 470u: goto L_08AE6EC4;
    case 471u: goto L_08AE6ED8;
    case 472u: goto L_08AE6EE8;
    case 473u: goto L_08AE6EFC;
    case 474u: goto L_08AE6F0C;
    case 475u: goto L_08AE6F14;
    case 476u: goto L_08AE6F1C;
    case 477u: goto L_08AE6F2C;
    case 478u: goto L_08AE6F34;
    case 479u: goto L_08AE6F3C;
    case 480u: goto L_08AE6F44;
    case 481u: goto L_08AE6F54;
    case 482u: goto L_08AE6F60;
    case 483u: goto L_08AE6F68;
    case 484u: goto L_08AE6F74;
    case 485u: goto L_08AE6F78;
    case 486u: goto L_08AE6F8C;
    case 487u: goto L_08AE6F98;
    case 488u: goto L_08AE6FA0;
    case 489u: goto L_08AE6FA8;
    case 490u: goto L_08AE6FB4;
    case 491u: goto L_08AE6FBC;
    case 492u: goto L_08AE6FC4;
    case 493u: goto L_08AE6FCC;
    case 494u: goto L_08AE6FD4;
    case 495u: goto L_08AE6FDC;
    case 496u: goto L_08AE6FE4;
    case 497u: goto L_08AE6FF8;
    case 498u: goto L_08AE7000;
    case 499u: goto L_08AE7008;
    case 500u: goto L_08AE7030;
    case 501u: goto L_08AE703C;
    case 502u: goto L_08AE7070;
    case 503u: goto L_08AE7084;
    case 504u: goto L_08AE7094;
    case 505u: goto L_08AE709C;
    case 506u: goto L_08AE70B4;
    case 507u: goto L_08AE70B8;
    case 508u: goto L_08AE70DC;
    case 509u: goto L_08AE7124;
    case 510u: goto L_08AE713C;
    case 511u: goto L_08AE7140;
    case 512u: goto L_08AE7154;
    case 513u: goto L_08AE7164;
    case 514u: goto L_08AE7174;
    case 515u: goto L_08AE7178;
    case 516u: goto L_08AE71D4;
    case 517u: goto L_08AE71F0;
    case 518u: goto L_08AE71FC;
    case 519u: goto L_08AE7204;
    case 520u: goto L_08AE7234;
    case 521u: goto L_08AE7248;
    case 522u: goto L_08AE7264;
    case 523u: goto L_08AE7278;
    case 524u: goto L_08AE7290;
    case 525u: goto L_08AE72A4;
    case 526u: goto L_08AE72B0;
    case 527u: goto L_08AE72BC;
    case 528u: goto L_08AE72C4;
    case 529u: goto L_08AE72CC;
    case 530u: goto L_08AE72E8;
    case 531u: goto L_08AE72F8;
    case 532u: goto L_08AE7300;
    case 533u: goto L_08AE7328;
    case 534u: goto L_08AE7344;
    case 535u: goto L_08AE736C;
    case 536u: goto L_08AE7374;
    case 537u: goto L_08AE7384;
    case 538u: goto L_08AE738C;
    case 539u: goto L_08AE7398;
    case 540u: goto L_08AE73D0;
    case 541u: goto L_08AE73DC;
    case 542u: goto L_08AE73F8;
    case 543u: goto L_08AE7410;
    case 544u: goto L_08AE7428;
    case 545u: goto L_08AE7450;
    case 546u: goto L_08AE7468;
    case 547u: goto L_08AE7474;
    case 548u: goto L_08AE747C;
    case 549u: goto L_08AE7490;
    case 550u: goto L_08AE74A0;
    case 551u: goto L_08AE74FC;
    case 552u: goto L_08AE7518;
    case 553u: goto L_08AE7524;
    case 554u: goto L_08AE7530;
    case 555u: goto L_08AE7548;
    case 556u: goto L_08AE755C;
    case 557u: goto L_08AE7578;
    case 558u: goto L_08AE7584;
    case 559u: goto L_08AE7588;
    case 560u: goto L_08AE75F4;
    case 561u: goto L_08AE7604;
    case 562u: goto L_08AE7630;
    case 563u: goto L_08AE7638;
    case 564u: goto L_08AE764C;
    case 565u: goto L_08AE7654;
    case 566u: goto L_08AE7668;
    case 567u: goto L_08AE7670;
    case 568u: goto L_08AE7678;
    case 569u: goto L_08AE76D0;
    case 570u: goto L_08AE76EC;
    case 571u: goto L_08AE76FC;
    case 572u: goto L_08AE7708;
    case 573u: goto L_08AE7714;
    case 574u: goto L_08AE7730;
    case 575u: goto L_08AE7738;
    case 576u: goto L_08AE7778;
    case 577u: goto L_08AE7788;
    case 578u: goto L_08AE77B4;
    case 579u: goto L_08AE77C0;
    case 580u: goto L_08AE77D0;
    case 581u: goto L_08AE77D8;
    case 582u: goto L_08AE77F4;
    case 583u: goto L_08AE7804;
    case 584u: goto L_08AE781C;
    case 585u: goto L_08AE7824;
    case 586u: goto L_08AE7828;
    case 587u: goto L_08AE7838;
    case 588u: goto L_08AE7860;
    case 589u: goto L_08AE786C;
    case 590u: goto L_08AE788C;
    case 591u: goto L_08AE78A8;
    case 592u: goto L_08AE78C4;
    case 593u: goto L_08AE78D8;
    case 594u: goto L_08AE7928;
    case 595u: goto L_08AE7954;
    case 596u: goto L_08AE7960;
    case 597u: goto L_08AE7968;
    case 598u: goto L_08AE79B8;
    case 599u: goto L_08AE79CC;
    case 600u: goto L_08AE79E8;
    case 601u: goto L_08AE7A00;
    case 602u: goto L_08AE7A28;
    case 603u: goto L_08AE7A3C;
    case 604u: goto L_08AE7A54;
    case 605u: goto L_08AE7A88;
    case 606u: goto L_08AE7A90;
    case 607u: goto L_08AE7ACC;
    case 608u: goto L_08AE7AD8;
    case 609u: goto L_08AE7AE8;
    case 610u: goto L_08AE7AF0;
    case 611u: goto L_08AE7B14;
    case 612u: goto L_08AE7B24;
    case 613u: goto L_08AE7B2C;
    case 614u: goto L_08AE7B34;
    case 615u: goto L_08AE7B3C;
    case 616u: goto L_08AE7B50;
    case 617u: goto L_08AE7B68;
    case 618u: goto L_08AE7B78;
    case 619u: goto L_08AE7B80;
    case 620u: goto L_08AE7B84;
    case 621u: goto L_08AE7B90;
    case 622u: goto L_08AE7B9C;
    case 623u: goto L_08AE7BB4;
    case 624u: goto L_08AE7BC8;
    case 625u: goto L_08AE7BD4;
    case 626u: goto L_08AE7BFC;
    case 627u: goto L_08AE7C10;
    case 628u: goto L_08AE7C38;
    case 629u: goto L_08AE7C70;
    case 630u: goto L_08AE7CA4;
    case 631u: goto L_08AE7CCC;
    case 632u: goto L_08AE7CEC;
    case 633u: goto L_08AE7CF8;
    case 634u: goto L_08AE7D08;
    case 635u: goto L_08AE7D10;
    case 636u: goto L_08AE7D24;
    case 637u: goto L_08AE7D38;
    case 638u: goto L_08AE7D5C;
    case 639u: goto L_08AE7D64;
    case 640u: goto L_08AE7D70;
    case 641u: goto L_08AE7D74;
    case 642u: goto L_08AE7D80;
    case 643u: goto L_08AE7D90;
    case 644u: goto L_08AE7DA8;
    case 645u: goto L_08AE7DBC;
    case 646u: goto L_08AE7DC4;
    case 647u: goto L_08AE7DCC;
    case 648u: goto L_08AE7DE4;
    case 649u: goto L_08AE7DF4;
    case 650u: goto L_08AE7DFC;
    case 651u: goto L_08AE7E08;
    case 652u: goto L_08AE7E0C;
    case 653u: goto L_08AE7E14;
    case 654u: goto L_08AE7E2C;
    case 655u: goto L_08AE7E34;
    case 656u: goto L_08AE7E68;
    case 657u: goto L_08AE7E7C;
    case 658u: goto L_08AE7EA0;
    case 659u: goto L_08AE7EA8;
    case 660u: goto L_08AE7EB0;
    case 661u: goto L_08AE7EC0;
    case 662u: goto L_08AE7EC8;
    case 663u: goto L_08AE7ED0;
    case 664u: goto L_08AE7EE0;
    case 665u: goto L_08AE7F68;
    case 666u: goto L_08AE7F74;
    case 667u: goto L_08AE7F8C;
    case 668u: goto L_08AE7FA0;
    case 669u: goto L_08AE7FB8;
    case 670u: goto L_08AE7FCC;
    case 671u: goto L_08AE7FD4;
    case 672u: goto L_08AE7FDC;
    case 673u: goto L_08AE7FE8;
    case 674u: goto L_08AE7FF4;
    case 675u: goto L_08AE7FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AE4000:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE400Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x08AE400Cu) goto L_08AE400C;
    return;
L_08AE400C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.gpr[31] = (0x08AE4018u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08AE4018u) goto L_08AE4018;
    return;
L_08AE4018:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AE4058u);
    ctx.gpr[8] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4058u) goto L_08AE4058;
    return;
L_08AE4058:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08AE4080u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4080u) goto L_08AE4080;
    return;
L_08AE4080:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_08AE413C;
      }
      goto L_08AE4094;
    }
L_08AE4094:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(172));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE40B0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x08AE40B0u) goto L_08AE40B0;
    return;
L_08AE40B0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.gpr[31] = (0x08AE40BCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08AE40BCu) goto L_08AE40BC;
    return;
L_08AE40BC:
    ctx.gpr[4] = (17447u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 63406u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.gpr[4] = (17645u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AE40ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x08AE40ECu) goto L_08AE40EC;
    return;
L_08AE40EC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.gpr[31] = (0x08AE40F8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08AE40F8u) goto L_08AE40F8;
    return;
L_08AE40F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.gpr[31] = (0x08AE4110u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08AE4110u) goto L_08AE4110;
    return;
L_08AE4110:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AE412Cu);
    ctx.gpr[8] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE412Cu) goto L_08AE412C;
    return;
L_08AE412C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE413Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE413Cu) goto L_08AE413C;
    return;
L_08AE413C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE428C;
      }
      goto L_08AE414C;
    }
L_08AE414C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE428C;
      }
      goto L_08AE4158;
    }
L_08AE4158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AE41C8u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08AE41C8u) goto L_08AE41C8;
    return;
L_08AE41C8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 252u);
    ctx.gpr[6] = (0u | 178u);
    ctx.gpr[7] = (0u | 54u);
    ctx.gpr[31] = (0x08AE41E8u);
    ctx.gpr[8] = (0u | 150u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE41E8u) goto L_08AE41E8;
    return;
L_08AE41E8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE41F8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE41F8u) goto L_08AE41F8;
    return;
L_08AE41F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] >> 31u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-47));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[31] = (0x08AE425Cu);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08AE425Cu) goto L_08AE425C;
    return;
L_08AE425C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 252u);
    ctx.gpr[6] = (0u | 178u);
    ctx.gpr[7] = (0u | 54u);
    ctx.gpr[31] = (0x08AE4278u);
    ctx.gpr[8] = (0u | 150u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4278u) goto L_08AE4278;
    return;
L_08AE4278:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE4288u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4288u) goto L_08AE4288;
    return;
L_08AE4288:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08AE428C;
L_08AE428C:
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
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE455C;
      }
      goto L_08AE42BC;
    }
L_08AE42BC:
    ctx.gpr[31] = (0x08AE42C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 29u, 0x0896C164u>(ctx, &aot_mem) && ctx.pc == 0x08AE42C4u) goto L_08AE42C4;
    return;
L_08AE42C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25491)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE455C;
      }
      goto L_08AE42D4;
    }
L_08AE42D4:
    ctx.gpr[31] = (0x08AE42DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE42DCu) goto L_08AE42DC;
    return;
L_08AE42DC:
    ctx.gpr[31] = (0x08AE42E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x08AE42E4u) goto L_08AE42E4;
    return;
L_08AE42E4:
    ctx.gpr[31] = (0x08AE42ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55020u>(ctx, &aot_mem) && ctx.pc == 0x08AE42ECu) goto L_08AE42EC;
    return;
L_08AE42EC:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08AE42FCu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE42FCu) goto L_08AE42FC;
    return;
L_08AE42FC:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x08AE4314u);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4314u) goto L_08AE4314;
    return;
L_08AE4314:
    ctx.gpr[31] = (0x08AE431Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AE431Cu) goto L_08AE431C;
    return;
L_08AE431C:
    ctx.gpr[31] = (0x08AE4324u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4324u) goto L_08AE4324;
    return;
L_08AE4324:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08AE4330u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4330u) goto L_08AE4330;
    return;
L_08AE4330:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE4348u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4348u) goto L_08AE4348;
    return;
L_08AE4348:
    ctx.gpr[31] = (0x08AE4350u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE4350u) goto L_08AE4350;
    return;
L_08AE4350:
    ctx.gpr[31] = (0x08AE4358u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08AE4358u) goto L_08AE4358;
    return;
L_08AE4358:
    ctx.gpr[4] = (16058u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 34854u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16202u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 49283u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE437Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE437Cu) goto L_08AE437C;
    return;
L_08AE437C:
    ctx.gpr[23] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(-27980)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16900u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[13]));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (16948u << 16u);
      if (branch_taken) {
          goto L_08AE43E8;
      }
      goto L_08AE43CC;
    }
L_08AE43CC:
    ctx.gpr[5] = (16768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AE43D4;
L_08AE43D4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08AE43D4;
      }
      goto L_08AE43E4;
    }
L_08AE43E4:
    ctx.gpr[5] = (16948u << 16u);
    goto L_08AE43E8;
L_08AE43E8:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[5] = (16720u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17385u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[31] = (0x08AE440Cu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08AE440Cu) goto L_08AE440C;
    return;
L_08AE440C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08AE441Cu);
    ctx.gpr[5] = (0u | 190u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE441Cu) goto L_08AE441C;
    return;
L_08AE441C:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE4434u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4434u) goto L_08AE4434;
    return;
L_08AE4434:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE4444u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4444u) goto L_08AE4444;
    return;
L_08AE4444:
    ctx.gpr[31] = (0x08AE444Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08AE444Cu) goto L_08AE444C;
    return;
L_08AE444C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AE4458u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE4458u) goto L_08AE4458;
    return;
L_08AE4458:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08AE4464u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4464u) goto L_08AE4464;
    return;
L_08AE4464:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x08AE447Cu);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE447Cu) goto L_08AE447C;
    return;
L_08AE447C:
    ctx.gpr[31] = (0x08AE4484u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AE4484u) goto L_08AE4484;
    return;
L_08AE4484:
    ctx.gpr[31] = (0x08AE448Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x08AE448Cu) goto L_08AE448C;
    return;
L_08AE448C:
    ctx.gpr[31] = (0x08AE4494u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4494u) goto L_08AE4494;
    return;
L_08AE4494:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(-27980)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[21] = (0u | 43u);
    ctx.gpr[18] = (0u | 70u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE4548;
      }
      goto L_08AE44B0;
    }
L_08AE44B0:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[19] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15872));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (16768u << 16u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08AE44CC;
L_08AE44CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE44ECu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 434u, 0x0896A7D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE44ECu) goto L_08AE44EC;
    return;
L_08AE44EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE450C;
      }
      goto L_08AE44F4;
    }
L_08AE44F4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE4524;
      }
      goto L_08AE450C;
    }
L_08AE450C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AE4524;
      }
      goto L_08AE451C;
    }
L_08AE451C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (0u | 0u);
    goto L_08AE4524;
L_08AE4524:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AE4534;
      }
      goto L_08AE452C;
    }
L_08AE452C:
    ctx.gpr[21] = (0u | 240u);
    ctx.gpr[18] = (0u | 70u);
    goto L_08AE4534;
L_08AE4534:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(-27980)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AE44CC;
      }
      goto L_08AE4548;
    }
L_08AE4548:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AE455Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6220));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08AE455Cu) goto L_08AE455C;
    return;
L_08AE455C:
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(320), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE457Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE457Cu) goto L_08AE457C;
    return;
L_08AE457C:
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[31] = (0x08AE4588u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4588u) goto L_08AE4588;
    return;
L_08AE4588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (50944u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE45E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE4630u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4630u) goto L_08AE4630;
    return;
L_08AE4630:
    ctx.gpr[4] = (17064u << 16u);
    ctx.gpr[31] = (0x08AE463Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE463Cu) goto L_08AE463C;
    return;
L_08AE463C:
    ctx.gpr[6] = (17164u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17098u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17224u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1216));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (17096u << 16u);
    ctx.gpr[31] = (0x08AE466Cu);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE466Cu) goto L_08AE466C;
    return;
L_08AE466C:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE4684u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4684u) goto L_08AE4684;
    return;
L_08AE4684:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AE46A0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE46A0u) goto L_08AE46A0;
    return;
L_08AE46A0:
    ctx.gpr[5] = (17120u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17078u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (17152u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25520)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (17264u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1252));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE47C8;
      }
      goto L_08AE46D4;
    }
L_08AE46D4:
    ctx.gpr[31] = (0x08AE46DCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AE46DCu) goto L_08AE46DC;
    return;
L_08AE46DC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE4704;
      }
      goto L_08AE46EC;
    }
L_08AE46EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE4730;
      }
      goto L_08AE46F4;
    }
L_08AE46F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AE471C;
      }
      goto L_08AE46FC;
    }
L_08AE46FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 13u);
      if (branch_taken) {
          goto L_08AE4730;
      }
      goto L_08AE4704;
    }
L_08AE4704:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE4724;
      }
      goto L_08AE470C;
    }
L_08AE470C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE472C;
      }
      goto L_08AE4714;
    }
L_08AE4714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4730;
      }
      goto L_08AE471C;
    }
L_08AE471C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 16u);
      if (branch_taken) {
          goto L_08AE4730;
      }
      goto L_08AE4724;
    }
L_08AE4724:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 13u);
      if (branch_taken) {
          goto L_08AE4730;
      }
      goto L_08AE472C;
    }
L_08AE472C:
    ctx.gpr[18] = (0u | 16u);
    goto L_08AE4730;
L_08AE4730:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(1168));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE474Cu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE474Cu) goto L_08AE474C;
    return;
L_08AE474C:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE4764u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4764u) goto L_08AE4764;
    return;
L_08AE4764:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AE4780u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4780u) goto L_08AE4780;
    return;
L_08AE4780:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE478Cu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE478Cu) goto L_08AE478C;
    return;
L_08AE478C:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE47A4u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE47A4u) goto L_08AE47A4;
    return;
L_08AE47A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AE47C0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE47C0u) goto L_08AE47C0;
    return;
L_08AE47C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE48B4;
      }
      goto L_08AE47C8;
    }
L_08AE47C8:
    ctx.gpr[31] = (0x08AE47D0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AE47D0u) goto L_08AE47D0;
    return;
L_08AE47D0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE47F8;
      }
      goto L_08AE47E0;
    }
L_08AE47E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE4824;
      }
      goto L_08AE47E8;
    }
L_08AE47E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AE4810;
      }
      goto L_08AE47F0;
    }
L_08AE47F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 14u);
      if (branch_taken) {
          goto L_08AE4824;
      }
      goto L_08AE47F8;
    }
L_08AE47F8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE4818;
      }
      goto L_08AE4800;
    }
L_08AE4800:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4820;
      }
      goto L_08AE4808;
    }
L_08AE4808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4824;
      }
      goto L_08AE4810;
    }
L_08AE4810:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 16u);
      if (branch_taken) {
          goto L_08AE4824;
      }
      goto L_08AE4818;
    }
L_08AE4818:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 14u);
      if (branch_taken) {
          goto L_08AE4824;
      }
      goto L_08AE4820;
    }
L_08AE4820:
    ctx.gpr[18] = (0u | 16u);
    goto L_08AE4824;
L_08AE4824:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(1168));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE4840u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4840u) goto L_08AE4840;
    return;
L_08AE4840:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE4858u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4858u) goto L_08AE4858;
    return;
L_08AE4858:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AE4874u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4874u) goto L_08AE4874;
    return;
L_08AE4874:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE4880u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4880u) goto L_08AE4880;
    return;
L_08AE4880:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE4898u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4898u) goto L_08AE4898;
    return;
L_08AE4898:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AE48B4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE48B4u) goto L_08AE48B4;
    return;
L_08AE48B4:
    ctx.gpr[31] = (0x08AE48BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55020u>(ctx, &aot_mem) && ctx.pc == 0x08AE48BCu) goto L_08AE48BC;
    return;
L_08AE48BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE48D0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE48D0u) goto L_08AE48D0;
    return;
L_08AE48D0:
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[31] = (0x08AE48DCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE48DCu) goto L_08AE48DC;
    return;
L_08AE48DC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE490C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17385u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE4964u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4964u) goto L_08AE4964;
    return;
L_08AE4964:
    ctx.gpr[4] = (16720u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE4974u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4974u) goto L_08AE4974;
    return;
L_08AE4974:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08AE4988u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08AE4988u) goto L_08AE4988;
    return;
L_08AE4988:
    ctx.gpr[31] = (0x08AE4990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x08AE4990u) goto L_08AE4990;
    return;
L_08AE4990:
    ctx.gpr[31] = (0x08AE4998u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4998u) goto L_08AE4998;
    return;
L_08AE4998:
    ctx.gpr[4] = (16058u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 34854u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16202u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49283u);
    ctx.gpr[31] = (0x08AE49B4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE49B4u) goto L_08AE49B4;
    return;
L_08AE49B4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(4240));
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[4] = (17234u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-5136));
    ctx.gpr[30] = (2230u << 16u);
    goto L_08AE49E0;
L_08AE49E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4A40;
      }
      goto L_08AE49EC;
    }
L_08AE49EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AE4A0Cu);
    ctx.gpr[11] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 517u, 0x0887B1ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE4A0Cu) goto L_08AE4A0C;
    return;
L_08AE4A0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08AE4A18u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 306u, 0x08879CA0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4A18u) goto L_08AE4A18;
    return;
L_08AE4A18:
    ctx.gpr[31] = (0x08AE4A20u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 348u, 0x08879F60u>(ctx, &aot_mem) && ctx.pc == 0x08AE4A20u) goto L_08AE4A20;
    return;
L_08AE4A20:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE4A30u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 637u, 0x08A57420u>(ctx, &aot_mem) && ctx.pc == 0x08AE4A30u) goto L_08AE4A30;
    return;
L_08AE4A30:
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08AE4A40;
L_08AE4A40:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE49E0;
      }
      goto L_08AE4A54;
    }
L_08AE4A54:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25540)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AE4AA4;
      }
      goto L_08AE4A6C;
    }
L_08AE4A6C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25544)));
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-25536)));
      if (branch_taken) {
          goto L_08AE4A94;
      }
      goto L_08AE4A84;
    }
L_08AE4A84:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-25536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE4AA0;
      }
      goto L_08AE4A94;
    }
L_08AE4A94:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-25536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AE4AA0;
L_08AE4AA0:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    goto L_08AE4AA4;
L_08AE4AA4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16688u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (17250u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[5] = (17279u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] | 0u);
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08AE4AF8;
L_08AE4AF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE4B10;
      }
      goto L_08AE4B04;
    }
L_08AE4B04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08AE4B10;
L_08AE4B10:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.gpr[5] = (17230u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16688u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-25536)));
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4B74;
      }
      goto L_08AE4B60;
    }
L_08AE4B60:
    ctx.fpr[20] = ctx.fpr[22] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4B60;
      }
      goto L_08AE4B74;
    }
L_08AE4B74:
    ctx.gpr[5] = (16800u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE4B9C;
      }
      goto L_08AE4B88;
    }
L_08AE4B88:
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4B88;
      }
      goto L_08AE4B9C;
    }
L_08AE4B9C:
    ctx.gpr[5] = (16896u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE4DB0;
      }
      goto L_08AE4BBC;
    }
L_08AE4BBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (16688u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (17230u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4DB0;
      }
      goto L_08AE4BF4;
    }
L_08AE4BF4:
    ctx.gpr[5] = (16976u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08AE4C4C;
      }
      goto L_08AE4C0C;
    }
L_08AE4C0C:
    ctx.fpr[24] = ctx.fpr[20] - ctx.fpr[17];
    ctx.fpr[13] = ctx.fpr[24] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4C34;
      }
      goto L_08AE4C24;
    }
L_08AE4C24:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4C34;
      }
      goto L_08AE4C34;
    }
L_08AE4C34:
    ctx.fpr[13] = ctx.fpr[24] / ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    goto L_08AE4C4C;
L_08AE4C4C:
    ctx.gpr[5] = (17210u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4CA4;
      }
      goto L_08AE4C64;
    }
L_08AE4C64:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4CA4;
      }
      goto L_08AE4C7C;
    }
L_08AE4C7C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4CA4;
      }
      goto L_08AE4C8C;
    }
L_08AE4C8C:
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    goto L_08AE4CA4;
L_08AE4CA4:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4CB8;
      }
      goto L_08AE4CB4;
    }
L_08AE4CB4:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08AE4CB8;
L_08AE4CB8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4DB0;
      }
      goto L_08AE4CC0;
    }
L_08AE4CC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AE4CE0u);
    ctx.gpr[11] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 517u, 0x0887B1ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE4CE0u) goto L_08AE4CE0;
    return;
L_08AE4CE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08AE4CECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 306u, 0x08879CA0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4CECu) goto L_08AE4CEC;
    return;
L_08AE4CEC:
    ctx.gpr[31] = (0x08AE4CF4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 348u, 0x08879F60u>(ctx, &aot_mem) && ctx.pc == 0x08AE4CF4u) goto L_08AE4CF4;
    return;
L_08AE4CF4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AE4D08u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4D08u) goto L_08AE4D08;
    return;
L_08AE4D08:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE4D20u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4D20u) goto L_08AE4D20;
    return;
L_08AE4D20:
    ctx.gpr[31] = (0x08AE4D28u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AE4D28u) goto L_08AE4D28;
    return;
L_08AE4D28:
    ctx.gpr[31] = (0x08AE4D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x08AE4D30u) goto L_08AE4D30;
    return;
L_08AE4D30:
    ctx.gpr[31] = (0x08AE4D38u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4D38u) goto L_08AE4D38;
    return;
L_08AE4D38:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AE4D44u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4D44u) goto L_08AE4D44;
    return;
L_08AE4D44:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE4D5Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4D5Cu) goto L_08AE4D5C;
    return;
L_08AE4D5C:
    ctx.gpr[31] = (0x08AE4D64u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE4D64u) goto L_08AE4D64;
    return;
L_08AE4D64:
    ctx.gpr[6] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08AE4D7Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4D7Cu) goto L_08AE4D7C;
    return;
L_08AE4D7C:
    ctx.gpr[31] = (0x08AE4D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54DCCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4D84u) goto L_08AE4D84;
    return;
L_08AE4D84:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AE4D90u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4D90u) goto L_08AE4D90;
    return;
L_08AE4D90:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE4DA8u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4DA8u) goto L_08AE4DA8;
    return;
L_08AE4DA8:
    ctx.gpr[31] = (0x08AE4DB0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AE4DB0u) goto L_08AE4DB0;
    return;
L_08AE4DB0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE4AF8;
      }
      goto L_08AE4DC0;
    }
L_08AE4DC0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE4DD8u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4DD8u) goto L_08AE4DD8;
    return;
L_08AE4DD8:
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[31] = (0x08AE4DE4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4DE4u) goto L_08AE4DE4;
    return;
L_08AE4DE4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE4E2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AE50E8;
      }
      goto L_08AE4E58;
    }
L_08AE4E58:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE4E64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8232));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 537u, 0x08AD68D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4E64u) goto L_08AE4E64;
    return;
L_08AE4E64:
    ctx.gpr[5] = (17066u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE4E74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 403u, 0x08AD9B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4E74u) goto L_08AE4E74;
    return;
L_08AE4E74:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AE4E84u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1352), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B314u>(ctx, &aot_mem) && ctx.pc == 0x08AE4E84u) goto L_08AE4E84;
    return;
L_08AE4E84:
    ctx.gpr[31] = (0x08AE4E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 769u, 0x089C7274u>(ctx, &aot_mem) && ctx.pc == 0x08AE4E8Cu) goto L_08AE4E8C;
    return;
L_08AE4E8C:
    ctx.gpr[31] = (0x08AE4E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC30u>(ctx, &aot_mem) && ctx.pc == 0x08AE4E94u) goto L_08AE4E94;
    return;
L_08AE4E94:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8552));
    ctx.gpr[31] = (0x08AE4EA4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892F99Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4EA4u) goto L_08AE4EA4;
    return;
L_08AE4EA4:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28884));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE4ECC;
      }
      goto L_08AE4EC0;
    }
L_08AE4EC0:
    ctx.gpr[31] = (0x08AE4EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 573u, 0x0892F8F8u>(ctx, &aot_mem) && ctx.pc == 0x08AE4EC8u) goto L_08AE4EC8;
    return;
L_08AE4EC8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08AE4ECC;
L_08AE4ECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4EE0;
      }
      goto L_08AE4ED8;
    }
L_08AE4ED8:
    ctx.gpr[31] = (0x08AE4EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4EE0u) goto L_08AE4EE0;
    return;
L_08AE4EE0:
    ctx.gpr[31] = (0x08AE4EE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20156)));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 114u, 0x089509E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4EE8u) goto L_08AE4EE8;
    return;
L_08AE4EE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25432)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE4F00u);
    ctx.gpr[6] = (16u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 538u, 0x08AD6900u>(ctx, &aot_mem) && ctx.pc == 0x08AE4F00u) goto L_08AE4F00;
    return;
L_08AE4F00:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE4F10u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 407u, 0x089C9CDCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4F10u) goto L_08AE4F10;
    return;
L_08AE4F10:
    ctx.gpr[31] = (0x08AE4F18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 628u, 0x0892FC80u>(ctx, &aot_mem) && ctx.pc == 0x08AE4F18u) goto L_08AE4F18;
    return;
L_08AE4F18:
    ctx.gpr[31] = (0x08AE4F20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 619u, 0x0892FBDCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4F20u) goto L_08AE4F20;
    return;
L_08AE4F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1168)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5004;
      }
      goto L_08AE4F2C;
    }
L_08AE4F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-28884)));
    ctx.gpr[31] = (0x08AE4F38u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4F38u) goto L_08AE4F38;
    return;
L_08AE4F38:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[19] << (ctx.gpr[5] & 31u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x08AE4F68u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4F68u) goto L_08AE4F68;
    return;
L_08AE4F68:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AE4F78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8204));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 537u, 0x08AD68D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4F78u) goto L_08AE4F78;
    return;
L_08AE4F78:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AE4F88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4F88u) goto L_08AE4F88;
    return;
L_08AE4F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[19] << (ctx.gpr[5] & 31u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[31] = (0x08AE4FB4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AE4FB4u) goto L_08AE4FB4;
    return;
L_08AE4FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[19] << (ctx.gpr[5] & 31u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 84u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08AE4FE4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AE4FE4u) goto L_08AE4FE4;
    return;
L_08AE4FE4:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(84));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AE4FF8u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AE4FF8u) goto L_08AE4FF8;
    return;
L_08AE4FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1168), ctx.gpr[19]);
    goto L_08AE5004;
L_08AE5004:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1168));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    goto L_08AE5014;
L_08AE5014:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AE5024u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 887u, 0x08AD395Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5024u) goto L_08AE5024;
    return;
L_08AE5024:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE5030u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 892u, 0x08AD39A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5030u) goto L_08AE5030;
    return;
L_08AE5030:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 39 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AE5014;
      }
      goto L_08AE5044;
    }
L_08AE5044:
    ctx.gpr[31] = (0x08AE504Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 626u, 0x0892FC54u>(ctx, &aot_mem) && ctx.pc == 0x08AE504Cu) goto L_08AE504C;
    return;
L_08AE504C:
    ctx.gpr[31] = (0x08AE5054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 771u, 0x089C7298u>(ctx, &aot_mem) && ctx.pc == 0x08AE5054u) goto L_08AE5054;
    return;
L_08AE5054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE50D8;
      }
      goto L_08AE5064;
    }
L_08AE5064:
    ctx.gpr[31] = (0x08AE506Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 769u, 0x089C7274u>(ctx, &aot_mem) && ctx.pc == 0x08AE506Cu) goto L_08AE506C;
    return;
L_08AE506C:
    ctx.gpr[31] = (0x08AE5074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC30u>(ctx, &aot_mem) && ctx.pc == 0x08AE5074u) goto L_08AE5074;
    return;
L_08AE5074:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-8540));
    ctx.gpr[31] = (0x08AE5084u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892F99Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5084u) goto L_08AE5084;
    return;
L_08AE5084:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AE5094;
      }
      goto L_08AE508C;
    }
L_08AE508C:
    ctx.gpr[31] = (0x08AE5094u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 573u, 0x0892F8F8u>(ctx, &aot_mem) && ctx.pc == 0x08AE5094u) goto L_08AE5094;
    return;
L_08AE5094:
    ctx.gpr[31] = (0x08AE509Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 626u, 0x0892FC54u>(ctx, &aot_mem) && ctx.pc == 0x08AE509Cu) goto L_08AE509C;
    return;
L_08AE509C:
    ctx.gpr[31] = (0x08AE50A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC30u>(ctx, &aot_mem) && ctx.pc == 0x08AE50A4u) goto L_08AE50A4;
    return;
L_08AE50A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE50B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8168));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892F99Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE50B0u) goto L_08AE50B0;
    return;
L_08AE50B0:
    ctx.gpr[31] = (0x08AE50B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 619u, 0x0892FBDCu>(ctx, &aot_mem) && ctx.pc == 0x08AE50B8u) goto L_08AE50B8;
    return;
L_08AE50B8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1160));
    ctx.gpr[31] = (0x08AE50C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8164));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08AE50C8u) goto L_08AE50C8;
    return;
L_08AE50C8:
    ctx.gpr[31] = (0x08AE50D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 626u, 0x0892FC54u>(ctx, &aot_mem) && ctx.pc == 0x08AE50D0u) goto L_08AE50D0;
    return;
L_08AE50D0:
    ctx.gpr[31] = (0x08AE50D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 771u, 0x089C7298u>(ctx, &aot_mem) && ctx.pc == 0x08AE50D8u) goto L_08AE50D8;
    return;
L_08AE50D8:
    ctx.gpr[31] = (0x08AE50E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 720u, 0x0891B328u>(ctx, &aot_mem) && ctx.pc == 0x08AE50E0u) goto L_08AE50E0;
    return;
L_08AE50E0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1164), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AE50E8;
L_08AE50E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE510C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE511Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 796u, 0x08ADF0C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE511Cu) goto L_08AE511C;
    return;
L_08AE511C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5124;
      }
      goto L_08AE5124;
    }
L_08AE5124:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE5130:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28956)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28960)));
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28952), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[3] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28928)));
    ctx.gpr[9] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28932)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28924), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[16] = (2230u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-28908)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.gpr[20] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-28916), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[12] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-28944), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(26832)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5632), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    ctx.gpr[14] = (2230u << 16u);
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-28948), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (16281u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[8] = (16268u << 16u);
    ctx.gpr[15] = (2230u << 16u);
    ctx.gpr[24] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-28940), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[25] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-28936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[11] = (15744u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-28920), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[2] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[13] = (2230u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28912), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[19] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-6896), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (ctx.gpr[13] + static_cast<std::uint32_t>(-6896));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-4576));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-28904), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE5260u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 588u, 0x08AD6CF0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5260u) goto L_08AE5260;
    return;
L_08AE5260:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AE526Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25416));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x08AE526Cu) goto L_08AE526C;
    return;
L_08AE526C:
    ctx.gpr[4] = (2278u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6240));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AE5298u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 694u, 0x08ADAC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5298u) goto L_08AE5298;
    return;
L_08AE5298:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE52BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (2278u << 16u);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6112));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6860));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE52E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC30u>(ctx, &aot_mem) && ctx.pc == 0x08AE52E4u) goto L_08AE52E4;
    return;
L_08AE52E4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE52F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6824));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892F99Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE52F0u) goto L_08AE52F0;
    return;
L_08AE52F0:
    ctx.gpr[31] = (0x08AE52F8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 619u, 0x0892FBDCu>(ctx, &aot_mem) && ctx.pc == 0x08AE52F8u) goto L_08AE52F8;
    return;
L_08AE52F8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AE5308u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6812));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 101u, 0x08A0D0A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5308u) goto L_08AE5308;
    return;
L_08AE5308:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AE5314u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25340), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 626u, 0x0892FC54u>(ctx, &aot_mem) && ctx.pc == 0x08AE5314u) goto L_08AE5314;
    return;
L_08AE5314:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AE5318;
L_08AE5318:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(407), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(416));
      if (branch_taken) {
          goto L_08AE5318;
      }
      goto L_08AE5330;
    }
L_08AE5330:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08AE5344;
L_08AE5344:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AE5344;
      }
      goto L_08AE537C;
    }
L_08AE537C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE5390:
    ctx.gpr[10] = (2278u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-6112));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(2500));
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(5000));
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(10000));
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(20000));
    goto L_08AE53B8;
L_08AE53B8:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(406)));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    if (ctx.gpr[3] == 0u) {
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
        goto L_08AE53D8;
    }
    goto L_08AE53C8;
L_08AE53C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AE544C;
      }
      goto L_08AE53D0;
    }
L_08AE53D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE53E8;
      }
      goto L_08AE53D8;
    }
L_08AE53D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5438;
      }
      goto L_08AE53E0;
    }
L_08AE53E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE544C;
      }
      goto L_08AE53E8;
    }
L_08AE53E8:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(407)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5430;
      }
      goto L_08AE53F4;
    }
L_08AE53F4:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08AE5410;
      }
      goto L_08AE5404;
    }
L_08AE5404:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(392), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(396), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AE5430;
      }
      goto L_08AE5410;
    }
L_08AE5410:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5428;
      }
      goto L_08AE541C;
    }
L_08AE541C:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(392), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(396), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE5430;
      }
      goto L_08AE5428;
    }
L_08AE5428:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(392), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(396), ctx.gpr[4]);
    goto L_08AE5430;
L_08AE5430:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE544C;
      }
      goto L_08AE5438;
    }
L_08AE5438:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(396)));
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE544C;
      }
      goto L_08AE5448;
    }
L_08AE5448:
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(0u));
    goto L_08AE544C;
L_08AE544C:
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(407), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(416));
      if (branch_taken) {
          goto L_08AE53B8;
      }
      goto L_08AE5460;
    }
L_08AE5460:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE5468:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AE5484u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AE5484u) goto L_08AE5484;
    return;
L_08AE5484:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AE5490u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AE5490u) goto L_08AE5490;
    return;
L_08AE5490:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08AE549Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AE549Cu) goto L_08AE549C;
    return;
L_08AE549C:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08AE54A8u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AE54A8u) goto L_08AE54A8;
    return;
L_08AE54A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25340)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AE54BCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AE54BCu) goto L_08AE54BC;
    return;
L_08AE54BC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5894;
      }
      goto L_08AE54CC;
    }
L_08AE54CC:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    goto L_08AE54D0;
L_08AE54D0:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] << 9u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6112));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(406)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5884;
      }
      goto L_08AE54F8;
    }
L_08AE54F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(404))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AE5884;
      }
      goto L_08AE5504;
    }
L_08AE5504:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE5560;
      }
      goto L_08AE552C;
    }
L_08AE552C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE55D8;
      }
      goto L_08AE5534;
    }
L_08AE5534:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AE5594;
      }
      goto L_08AE553C;
    }
L_08AE553C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AE5554u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE5554u) goto L_08AE5554;
    return;
L_08AE5554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE55D8;
      }
      goto L_08AE5560;
    }
L_08AE5560:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE55B8;
      }
      goto L_08AE5568;
    }
L_08AE5568:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE55D8;
      }
      goto L_08AE5570;
    }
L_08AE5570:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 132u);
    ctx.gpr[6] = (0u | 34u);
    ctx.gpr[7] = (0u | 11u);
    ctx.gpr[31] = (0x08AE5588u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE5588u) goto L_08AE5588;
    return;
L_08AE5588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE55D8;
      }
      goto L_08AE5594;
    }
L_08AE5594:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 90u);
    ctx.gpr[6] = (0u | 62u);
    ctx.gpr[7] = (0u | 9u);
    ctx.gpr[31] = (0x08AE55ACu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE55ACu) goto L_08AE55AC;
    return;
L_08AE55AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE55D8;
      }
      goto L_08AE55B8;
    }
L_08AE55B8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 108u);
    ctx.gpr[6] = (0u | 108u);
    ctx.gpr[7] = (0u | 96u);
    ctx.gpr[31] = (0x08AE55D0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE55D0u) goto L_08AE55D0;
    return;
L_08AE55D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08AE55D8;
L_08AE55D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(406)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AE561C;
      }
      goto L_08AE55E8;
    }
L_08AE55E8:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] << 9u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6112));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(392)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(396)));
        goto L_08AE5624;
    }
    goto L_08AE561C;
L_08AE561C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 255u);
      if (branch_taken) {
          goto L_08AE5650;
      }
      goto L_08AE5624;
    }
L_08AE5624:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(392)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[4] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    goto L_08AE5650;
L_08AE5650:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5834;
      }
      goto L_08AE5664;
    }
L_08AE5664:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 128u);
      if (branch_taken) {
          goto L_08AE5688;
      }
      goto L_08AE566C;
    }
L_08AE566C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(404))))));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AE568C;
      }
      goto L_08AE5678;
    }
L_08AE5678:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(406)));
    ctx.gpr[9] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AE568C;
      }
      goto L_08AE5688;
    }
L_08AE5688:
    ctx.gpr[5] = (0u | 0u);
    goto L_08AE568C;
L_08AE568C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[6] << 4u);
    ctx.gpr[9] = (ctx.gpr[16] + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[6] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[16] + ctx.gpr[10]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(256)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(320)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (15820u << 16u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[17];
    ctx.gpr[11] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.gpr[10] = (16544u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] | 20972u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[9] = (2232u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(20400));
    ctx.gpr[10] = (ctx.gpr[6] << 6u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[6] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[16] + ctx.gpr[9]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(256)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(320)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[17];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[9] = (16544u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[9] = (ctx.gpr[9] | 20972u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE5664;
      }
      goto L_08AE5834;
    }
L_08AE5834:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08AE5854u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20400));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868560u>(ctx, &aot_mem) && ctx.pc == 0x08AE5854u) goto L_08AE5854;
    return;
L_08AE5854:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5884;
      }
      goto L_08AE585C;
    }
L_08AE585C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6860));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08AE587Cu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886885Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE587Cu) goto L_08AE587C;
    return;
L_08AE587C:
    ctx.gpr[31] = (0x08AE5884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868844u>(ctx, &aot_mem) && ctx.pc == 0x08AE5884u) goto L_08AE5884;
    return;
L_08AE5884:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AE54D0;
      }
      goto L_08AE5894;
    }
L_08AE5894:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AE58A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AE58A0u) goto L_08AE58A0;
    return;
L_08AE58A0:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AE58ACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AE58ACu) goto L_08AE58AC;
    return;
L_08AE58AC:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AE58B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AE58B8u) goto L_08AE58B8;
    return;
L_08AE58B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE58CC:
    ctx.gpr[8] = (2278u << 16u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-6112));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[2] = (ctx.gpr[9] | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    goto L_08AE58E8;
L_08AE58E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE591C;
      }
      goto L_08AE58F0;
    }
L_08AE58F0:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(406)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AE5908;
      }
      goto L_08AE58FC;
    }
L_08AE58FC:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(384)));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AE591C;
      }
      goto L_08AE5908;
    }
L_08AE5908:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(416));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(416));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[3]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE58E8;
      }
      goto L_08AE591C;
    }
L_08AE591C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5B20;
      }
      goto L_08AE5924;
    }
L_08AE5924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(400)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 3u);
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE595C;
      }
      goto L_08AE593C;
    }
L_08AE593C:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(392), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(396), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE5BB4;
      }
      goto L_08AE595C;
    }
L_08AE595C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(388)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(407), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[3] - ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(101) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5B00;
      }
      goto L_08AE597C;
    }
L_08AE597C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(388), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[2]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5AD8;
      }
      goto L_08AE5994;
    }
L_08AE5994:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(404), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[15];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    ctx.fpr[17] = std::sqrt(ctx.fpr[17]);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE5A10;
      }
      goto L_08AE5A08;
    }
L_08AE5A08:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08AE5A1C;
      }
      goto L_08AE5A10;
    }
L_08AE5A10:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = ctx.fpr[18] / ctx.fpr[19];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[19];
    goto L_08AE5A1C;
L_08AE5A1C:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[19];
    ctx.fpr[18] = std::sqrt(ctx.fpr[18]);
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE5A4C;
      }
      goto L_08AE5A3C;
    }
L_08AE5A3C:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08AE5A60;
      }
      goto L_08AE5A4C;
    }
L_08AE5A4C:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[18];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AE5A60;
L_08AE5A60:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08AE5A74;
    }
    goto L_08AE5A74;
L_08AE5A74:
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[5] = (15872u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE5ABC;
      }
      goto L_08AE5AAC;
    }
L_08AE5AAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(260)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(324)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08AE5ABC;
L_08AE5ABC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5AD0;
      }
      goto L_08AE5ACC;
    }
L_08AE5ACC:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08AE5AD0;
L_08AE5AD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5BB4;
      }
      goto L_08AE5AD8;
    }
L_08AE5AD8:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(388), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(392), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20000));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(396), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE5BB4;
      }
      goto L_08AE5B00;
    }
L_08AE5B00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
          goto L_08AE5BB4;
      }
      goto L_08AE5B20;
    }
L_08AE5B20:
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08AE5B28;
L_08AE5B28:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5B4C;
      }
      goto L_08AE5B30;
    }
L_08AE5B30:
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(406)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5B4C;
      }
      goto L_08AE5B3C;
    }
L_08AE5B3C:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(416));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[10]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE5B28;
      }
      goto L_08AE5B4C;
    }
L_08AE5B4C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5BB0;
      }
      goto L_08AE5B54;
    }
L_08AE5B54:
    ctx.gpr[9] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(407), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(404), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1000));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(388), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5BA4;
      }
      goto L_08AE5B98;
    }
L_08AE5B98:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE5BA8;
      }
      goto L_08AE5BA4;
    }
L_08AE5BA4:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(400), ctx.gpr[6]);
    goto L_08AE5BA8;
L_08AE5BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5BB4;
      }
      goto L_08AE5BB0;
    }
L_08AE5BB0:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08AE5BB4;
L_08AE5BB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE5BBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25396)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25400)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] | 14571u);
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-25392), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25372)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[3] = (2230u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-25360)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-25364)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25356), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25348), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2230u << 16u);
    ctx.gpr[12] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-25384), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-25388), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (15744u << 16u);
    ctx.gpr[14] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[7] = (16281u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[15] = (2230u << 16u);
    ctx.gpr[3] = (ctx.gpr[7] | 39322u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-25380), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-25376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[24] = (2230u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-25368), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[25] = (2230u << 16u);
    ctx.gpr[17] = (2278u << 16u);
    ctx.gpr[18] = (2225u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6112));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-19012));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 416u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-25352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE5CCCu);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-25344), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5CCCu) goto L_08AE5CCC;
    return;
L_08AE5CCC:
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
L_08AE5CE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (2278u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25268), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(7200));
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7712));
    goto L_08AE5D1C;
L_08AE5D1C:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE5D1C;
      }
      goto L_08AE5D3C;
    }
L_08AE5D3C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE5D44:
    ctx.gpr[9] = (2232u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(13216));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[16];
    ctx.gpr[6] = (ctx.gpr[10] & 255u);
    ctx.gpr[10] = (16816u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08AE5EEC;
      }
      goto L_08AE5D84;
    }
L_08AE5D84:
    ctx.gpr[10] = (49584u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE5EEC;
      }
      goto L_08AE5D9C;
    }
L_08AE5D9C:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE5EEC;
      }
      goto L_08AE5DB8;
    }
L_08AE5DB8:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE5EEC;
      }
      goto L_08AE5DC8;
    }
L_08AE5DC8:
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-7776)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[11]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5EEC;
      }
      goto L_08AE5DDC;
    }
L_08AE5DDC:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] - ctx.fpr[0];
    ctx.fpr[16] = ctx.fpr[18] + ctx.fpr[16];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[16] + ctx.fpr[19];
    ctx.fpr[18] = std::sqrt(ctx.fpr[18]);
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AE5EEC;
      }
      goto L_08AE5E10;
    }
L_08AE5E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-7776)));
    ctx.gpr[11] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30640));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-7776)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-7776)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (16772u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE5E94;
      }
      goto L_08AE5E78;
    }
L_08AE5E78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-7776)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08AE5EE0;
      }
      goto L_08AE5E94;
    }
L_08AE5E94:
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[17];
    ctx.gpr[5] = (16192u << 16u);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-7776)));
    ctx.gpr[8] = (ctx.gpr[8] << 6u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AE5EE0;
L_08AE5EE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-7776)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-7776), ctx.gpr[4]);
    goto L_08AE5EEC;
L_08AE5EEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE5EF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7776)));
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE60E8;
      }
      goto L_08AE5F58;
    }
L_08AE5F58:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (2275u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(30640));
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[30] = (0u | 4u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (0u | 2u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (2230u << 16u);
    goto L_08AE5F8C;
L_08AE5F8C:
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AE60CC;
      }
      goto L_08AE5FA4;
    }
L_08AE5FA4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08AE60CC;
      }
      goto L_08AE5FB0;
    }
L_08AE5FB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE60CC;
      }
      goto L_08AE5FEC;
    }
L_08AE5FEC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08AE6004;
      }
      goto L_08AE5FF8;
    }
L_08AE5FF8:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08AE60CC;
      }
      goto L_08AE6004;
    }
L_08AE6004:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_08AE6020;
    }
    goto L_08AE6018;
L_08AE6018:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08AE6028;
      }
      goto L_08AE6020;
    }
L_08AE6020:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    goto L_08AE6028;
L_08AE6028:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[28])) && ctx.fpr[13] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE60CC;
      }
      goto L_08AE6038;
    }
L_08AE6038:
    ctx.fpr[13] = ctx.fpr[20] / ctx.fpr[13];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AE6094;
      }
      goto L_08AE605C;
    }
L_08AE605C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_08AE6090;
    }
    goto L_08AE6090;
L_08AE6090:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08AE6094;
L_08AE6094:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE60CC;
      }
      goto L_08AE60A4;
    }
L_08AE60A4:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7680)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE60CCu);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 441u, 0x088CF52Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE60CCu) goto L_08AE60CC;
    return;
L_08AE60CC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7776)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5F8C;
      }
      goto L_08AE60E8;
    }
L_08AE60E8:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE6130:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE6144u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7680)));
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 458u, 0x088CF6C4u>(ctx, &aot_mem) && ctx.pc == 0x08AE6144u) goto L_08AE6144;
    return;
L_08AE6144:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE6150:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    ctx.gpr[18] = (2278u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(7200));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[18]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    goto L_08AE6190;
L_08AE6190:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AE619Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 558u, 0x08927438u>(ctx, &aot_mem) && ctx.pc == 0x08AE619Cu) goto L_08AE619C;
    return;
L_08AE619C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE61BC;
      }
      goto L_08AE61A4;
    }
L_08AE61A4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AE6190;
      }
      goto L_08AE61B4;
    }
L_08AE61B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE61DC;
      }
      goto L_08AE61BC;
    }
L_08AE61BC:
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7712));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE628C;
      }
      goto L_08AE61DC;
    }
L_08AE61DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16800u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08AE621Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE621Cu) goto L_08AE621C;
    return;
L_08AE621C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6288;
      }
      goto L_08AE6224;
    }
L_08AE6224:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25268)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25268)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (2278u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7712));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    ctx.gpr[5] = (0u - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AE6270;
      }
      goto L_08AE6264;
    }
L_08AE6264:
    ctx.gpr[19] = (ctx.gpr[5] & 31u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AE6274;
      }
      goto L_08AE6270;
    }
L_08AE6270:
    ctx.gpr[19] = (ctx.gpr[19] & 31u);
    goto L_08AE6274;
L_08AE6274:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25268), ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE628C;
      }
      goto L_08AE6288;
    }
L_08AE6288:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AE628C;
L_08AE628C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE62B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-448));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(935)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6368;
      }
      goto L_08AE6304;
    }
L_08AE6304:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AE6310u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AE6310u) goto L_08AE6310;
    return;
L_08AE6310:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AE631Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AE631Cu) goto L_08AE631C;
    return;
L_08AE631C:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08AE6328u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AE6328u) goto L_08AE6328;
    return;
L_08AE6328:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08AE6334u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AE6334u) goto L_08AE6334;
    return;
L_08AE6334:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6036)));
    ctx.gpr[31] = (0x08AE6344u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AE6344u) goto L_08AE6344;
    return;
L_08AE6344:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7776)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(332), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2275u << 16u);
      if (branch_taken) {
          goto L_08AE6370;
      }
      goto L_08AE6360;
    }
L_08AE6360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6D6C;
      }
      goto L_08AE6368;
    }
L_08AE6368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6D6C;
      }
      goto L_08AE6370;
    }
L_08AE6370:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30640));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (16688u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (16704u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-25300));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2230u << 16u);
    goto L_08AE63B0;
L_08AE63B0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(332))))));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    ctx.gpr[5] = (16544u << 16u);
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE63E4;
      }
      goto L_08AE63D4;
    }
L_08AE63D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE6D48;
      }
      goto L_08AE63E4;
    }
L_08AE63E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AE63FC;
      }
      goto L_08AE63F0;
    }
L_08AE63F0:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7804)));
      if (branch_taken) {
          goto L_08AE6400;
      }
      goto L_08AE63FC;
    }
L_08AE63FC:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08AE6400;
L_08AE6400:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[26]) || std::isnan(ctx.fpr[12])) && ctx.fpr[26] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE6D40;
      }
      goto L_08AE6414;
    }
L_08AE6414:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AE6958;
      }
      goto L_08AE6420;
    }
L_08AE6420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE648C;
      }
      goto L_08AE6478;
    }
L_08AE6478:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[16];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
      if (branch_taken) {
          goto L_08AE649C;
      }
      goto L_08AE648C;
    }
L_08AE648C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[16];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    goto L_08AE649C;
L_08AE649C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE64C8;
      }
      goto L_08AE64B4;
    }
L_08AE64B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
      if (branch_taken) {
          goto L_08AE64D8;
      }
      goto L_08AE64C8;
    }
L_08AE64C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    goto L_08AE64D8;
L_08AE64D8:
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (ctx.gpr[4] << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE6528;
      }
      goto L_08AE650C;
    }
L_08AE650C:
    ctx.gpr[4] = (0u - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
      if (branch_taken) {
          goto L_08AE6538;
      }
      goto L_08AE6528;
    }
L_08AE6528:
    ctx.gpr[4] = (ctx.gpr[6] & 3u);
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    goto L_08AE6538;
L_08AE6538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6950;
      }
      goto L_08AE6548;
    }
L_08AE6548:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (17182u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[5] << 16u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[5] = (0u - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[5]);
    goto L_08AE65A0;
L_08AE65A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
      if (branch_taken) {
          goto L_08AE65C0;
      }
      goto L_08AE65AC;
    }
L_08AE65AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_08AE65D0;
      }
      goto L_08AE65C0;
    }
L_08AE65C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    goto L_08AE65D0;
L_08AE65D0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6934;
      }
      goto L_08AE65DC;
    }
L_08AE65DC:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 2u));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    goto L_08AE65E8;
L_08AE65E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[19] ^ ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[4] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE691C;
      }
      goto L_08AE6600;
    }
L_08AE6600:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
      if (branch_taken) {
          goto L_08AE691C;
      }
      goto L_08AE6648;
    }
L_08AE6648:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE691C;
      }
      goto L_08AE6658;
    }
L_08AE6658:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16840u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE691C;
      }
      goto L_08AE6684;
    }
L_08AE6684:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08AE66DCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE66DCu) goto L_08AE66DC;
    return;
L_08AE66DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16294u << 16u);
      if (branch_taken) {
          goto L_08AE691C;
      }
      goto L_08AE66E4;
    }
L_08AE66E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[19] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[18];
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE691C;
      }
      goto L_08AE6744;
    }
L_08AE6744:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE691C;
      }
      goto L_08AE6754;
    }
L_08AE6754:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16840u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE691C;
      }
      goto L_08AE6788;
    }
L_08AE6788:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[28];
    ctx.fpr[12] = ctx.fpr[16] / ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[24] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[17] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[16];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[16];
    ctx.gpr[8] = (0u | 1u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[31] = (0x08AE67F4u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 277u, 0x08A25970u>(ctx, &aot_mem) && ctx.pc == 0x08AE67F4u) goto L_08AE67F4;
    return;
L_08AE67F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE691C;
      }
      goto L_08AE67FC;
    }
L_08AE67FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[22]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(370), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(368), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[30] = ctx.fpr[24] / ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[21] = (ctx.gpr[5] & 255u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] & 8191u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[16] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[31] = (0x08AE68A4u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 581u, 0x08AEA7B8u>(ctx, &aot_mem) && ctx.pc == 0x08AE68A4u) goto L_08AE68A4;
    return;
L_08AE68A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25260)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25264)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE68BCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AE68BCu) goto L_08AE68BC;
    return;
L_08AE68BC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE68C8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08AE68C8u) goto L_08AE68C8;
    return;
L_08AE68C8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x08AE68FCu);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 402u, 0x08A274ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE68FCu) goto L_08AE68FC;
    return;
L_08AE68FC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(368))))));
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(370))))));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    goto L_08AE691C;
L_08AE691C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE65E8;
      }
      goto L_08AE6934;
    }
L_08AE6934:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE65A0;
      }
      goto L_08AE6950;
    }
L_08AE6950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6D40;
      }
      goto L_08AE6958;
    }
L_08AE6958:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6984;
      }
      goto L_08AE6964;
    }
L_08AE6964:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE6984;
      }
      goto L_08AE6974;
    }
L_08AE6974:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE6D40;
      }
      goto L_08AE6984;
    }
L_08AE6984:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08AE6998u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    goto L_08AE6150;
L_08AE6998:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6D40;
      }
      goto L_08AE69A0;
    }
L_08AE69A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[21] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE6A0C;
      }
      goto L_08AE69F8;
    }
L_08AE69F8:
    ctx.gpr[4] = (0u - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
      if (branch_taken) {
          goto L_08AE6A18;
      }
      goto L_08AE6A0C;
    }
L_08AE6A0C:
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    goto L_08AE6A18;
L_08AE6A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6D40;
      }
      goto L_08AE6A28;
    }
L_08AE6A28:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (17156u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (16656u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[6] << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[6]);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[5]);
    goto L_08AE6A80;
L_08AE6A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
      if (branch_taken) {
          goto L_08AE6AA0;
      }
      goto L_08AE6A8C;
    }
L_08AE6A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_08AE6AB0;
      }
      goto L_08AE6AA0;
    }
L_08AE6AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    goto L_08AE6AB0;
L_08AE6AB0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 1u));
      if (branch_taken) {
          goto L_08AE6D24;
      }
      goto L_08AE6ABC;
    }
L_08AE6ABC:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[19] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 1u));
    goto L_08AE6AD0;
L_08AE6AD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[19] ^ ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[4] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6D0C;
      }
      goto L_08AE6AF4;
    }
L_08AE6AF4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE6D0C;
      }
      goto L_08AE6B38;
    }
L_08AE6B38:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[22] - ctx.fpr[15];
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[4] = (16816u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE6D0C;
      }
      goto L_08AE6B70;
    }
L_08AE6B70:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = ctx.fpr[20] - ctx.fpr[30];
        goto L_08AE6B88;
    }
    goto L_08AE6B80;
L_08AE6B80:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AE6B90;
      }
      goto L_08AE6B88;
    }
L_08AE6B88:
    ctx.fpr[20] = ctx.fpr[15] / ctx.fpr[30];
    ctx.fpr[20] = ctx.fpr[24] - ctx.fpr[20];
    goto L_08AE6B90;
L_08AE6B90:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (16332u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[9] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[8] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[13];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08AE6BDCu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 277u, 0x08A25970u>(ctx, &aot_mem) && ctx.pc == 0x08AE6BDCu) goto L_08AE6BDC;
    return;
L_08AE6BDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6D04;
      }
      goto L_08AE6BE4;
    }
L_08AE6BE4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[30] = ctx.fpr[24] / ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[22] = (ctx.gpr[5] & 255u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] & 16383u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[31] = (0x08AE6C8Cu);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 581u, 0x08AEA7B8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6C8Cu) goto L_08AE6C8C;
    return;
L_08AE6C8C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25252)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25256)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE6CA4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08AE6CA4u) goto L_08AE6CA4;
    return;
L_08AE6CA4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE6CB0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08AE6CB0u) goto L_08AE6CB0;
    return;
L_08AE6CB0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x08AE6CE4u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 402u, 0x08A274ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE6CE4u) goto L_08AE6CE4;
    return;
L_08AE6CE4:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    goto L_08AE6D04;
L_08AE6D04:
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08AE6D0C;
L_08AE6D0C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6AD0;
      }
      goto L_08AE6D24;
    }
L_08AE6D24:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6A80;
      }
      goto L_08AE6D40;
    }
L_08AE6D40:
    ctx.gpr[31] = (0x08AE6D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 302u, 0x08A25F64u>(ctx, &aot_mem) && ctx.pc == 0x08AE6D48u) goto L_08AE6D48;
    return;
L_08AE6D48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(332))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7776)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(332), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AE63B0;
      }
      goto L_08AE6D6C;
    }
L_08AE6D6C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE6DB4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25332)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25336)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-25308)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[3] = (2230u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-25328), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2230u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-25320), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-25324), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-25316), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-25304), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE6E48:
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
L_08AE6E74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE6E94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6560));
    goto L_08AE6E48;
L_08AE6E94:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25208));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE6F54;
      }
      goto L_08AE6EA8;
    }
L_08AE6EA8:
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08AE6EB0;
L_08AE6EB0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE6F2C;
      }
      goto L_08AE6EC4;
    }
L_08AE6EC4:
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[9] & 2u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6EE8;
      }
      goto L_08AE6ED8;
    }
L_08AE6ED8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
      if (branch_taken) {
          goto L_08AE6EE8;
      }
      goto L_08AE6EE8;
    }
L_08AE6EE8:
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[9] & 2u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6F0C;
      }
      goto L_08AE6EFC;
    }
L_08AE6EFC:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
      if (branch_taken) {
          goto L_08AE6F0C;
      }
      goto L_08AE6F0C;
    }
L_08AE6F0C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE6F1C;
      }
      goto L_08AE6F14;
    }
L_08AE6F14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE6F3C;
      }
      goto L_08AE6F1C;
    }
L_08AE6F1C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE6EC4;
      }
      goto L_08AE6F2C;
    }
L_08AE6F2C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE6F3C;
      }
      goto L_08AE6F34;
    }
L_08AE6F34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE6F3C;
      }
      goto L_08AE6F3C;
    }
L_08AE6F3C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6F68;
      }
      goto L_08AE6F44;
    }
L_08AE6F44:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6EB0;
      }
      goto L_08AE6F54;
    }
L_08AE6F54:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE6F60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6488));
    goto L_08AE6E48;
L_08AE6F60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AE6F78;
      }
      goto L_08AE6F68;
    }
L_08AE6F68:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE6F74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6524));
    goto L_08AE6E48;
L_08AE6F74:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AE6F78;
L_08AE6F78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE6F8C:
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[6] = (0u | 13u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08AE6F98;
L_08AE6F98:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AE6FA8;
      }
      goto L_08AE6FA0;
    }
L_08AE6FA0:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AE6FB4;
      }
      goto L_08AE6FA8;
    }
L_08AE6FA8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE6F98;
      }
      goto L_08AE6FB4;
    }
L_08AE6FB4:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6FC4;
      }
      goto L_08AE6FBC;
    }
L_08AE6FBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6FCC;
      }
      goto L_08AE6FC4;
    }
L_08AE6FC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE7000;
      }
      goto L_08AE6FCC;
    }
L_08AE6FCC:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AE6FF8;
      }
      goto L_08AE6FD4;
    }
L_08AE6FD4:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AE6FF8;
      }
      goto L_08AE6FDC;
    }
L_08AE6FDC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6FF8;
      }
      goto L_08AE6FE4;
    }
L_08AE6FE4:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE6FCC;
      }
      goto L_08AE6FF8;
    }
L_08AE6FF8:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_08AE7000;
L_08AE7000:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE7008:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE7030u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 186u, 0x08AC8F08u>(ctx, &aot_mem) && ctx.pc == 0x08AE7030u) goto L_08AE7030;
    return;
L_08AE7030:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08AE703Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 186u, 0x08AC8F08u>(ctx, &aot_mem) && ctx.pc == 0x08AE703Cu) goto L_08AE703C;
    return;
L_08AE703C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AE7094;
      }
      goto L_08AE7070;
    }
L_08AE7070:
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE7084u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 637u, 0x088B7E18u>(ctx, &aot_mem) && ctx.pc == 0x08AE7084u) goto L_08AE7084;
    return;
L_08AE7084:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7070;
      }
      goto L_08AE7094;
    }
L_08AE7094:
    ctx.gpr[31] = (0x08AE709Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 615u, 0x088B7C24u>(ctx, &aot_mem) && ctx.pc == 0x08AE709Cu) goto L_08AE709C;
    return;
L_08AE709C:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE70B8;
      }
      goto L_08AE70B4;
    }
L_08AE70B4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AE70B8;
L_08AE70B8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08AE70DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17632));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11520));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28680));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE7124u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7124u) goto L_08AE7124;
    return;
L_08AE7124:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE7140;
      }
      goto L_08AE713C;
    }
L_08AE713C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AE7140;
L_08AE7140:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE7178;
      }
      goto L_08AE7154;
    }
L_08AE7154:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AE7164u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6456));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08AE7164u) goto L_08AE7164;
    return;
L_08AE7164:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE7174u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08AE6E48;
L_08AE7174:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AE7178;
L_08AE7178:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE71D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE71F0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 769u, 0x089C7274u>(ctx, &aot_mem) && ctx.pc == 0x08AE71F0u) goto L_08AE71F0;
    return;
L_08AE71F0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 120 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 130 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE72A4;
      }
      goto L_08AE71FC;
    }
L_08AE71FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE72A4;
      }
      goto L_08AE7204;
    }
L_08AE7204:
    ctx.gpr[7] = (ctx.gpr[16] << 5u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (2274u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17632));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-11520));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AE7248;
      }
      goto L_08AE7234;
    }
L_08AE7234:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AE7248;
L_08AE7248:
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE7278;
      }
      goto L_08AE7264;
    }
L_08AE7264:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AE7278;
L_08AE7278:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AE7290u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE7290u) goto L_08AE7290;
    return;
L_08AE7290:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AE72A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AE70DC;
L_08AE72A4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE72B0u);
    ctx.gpr[4] = (0u | 544u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE72B0u) goto L_08AE72B0;
    return;
L_08AE72B0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AE72CC;
      }
      goto L_08AE72BC;
    }
L_08AE72BC:
    ctx.gpr[31] = (0x08AE72C4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 399u, 0x08AB6AB0u>(ctx, &aot_mem) && ctx.pc == 0x08AE72C4u) goto L_08AE72C4;
    return;
L_08AE72C4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AE72CC;
L_08AE72CC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AE72E8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE72E8u) goto L_08AE72E8;
    return;
L_08AE72E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(938)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7300;
      }
      goto L_08AE72F8;
    }
L_08AE72F8:
    ctx.gpr[31] = (0x08AE7300u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 411u, 0x08AB6C14u>(ctx, &aot_mem) && ctx.pc == 0x08AE7300u) goto L_08AE7300;
    return;
L_08AE7300:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24976)));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-18696));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08AE7328u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24976), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 771u, 0x089C7298u>(ctx, &aot_mem) && ctx.pc == 0x08AE7328u) goto L_08AE7328;
    return;
L_08AE7328:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AE7344:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE736Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6420));
    goto L_08AE6E48;
L_08AE736C:
    ctx.gpr[31] = (0x08AE7374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 769u, 0x089C7274u>(ctx, &aot_mem) && ctx.pc == 0x08AE7374u) goto L_08AE7374;
    return;
L_08AE7374:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE7384u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7840));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 506u, 0x0883A3B8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7384u) goto L_08AE7384;
    return;
L_08AE7384:
    ctx.gpr[31] = (0x08AE738Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 771u, 0x089C7298u>(ctx, &aot_mem) && ctx.pc == 0x08AE738Cu) goto L_08AE738C;
    return;
L_08AE738C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08AE7398u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x08AE7398u) goto L_08AE7398;
    return;
L_08AE7398:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27768)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
        goto L_08AE73DC;
    }
    goto L_08AE73D0;
L_08AE73D0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AE73DC;
L_08AE73DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE73F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2278u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE7410u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7840));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 487u, 0x0883A2B0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7410u) goto L_08AE7410;
    return;
L_08AE7410:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE7428:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25000), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25211)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7490;
      }
      goto L_08AE7450;
    }
L_08AE7450:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE7468u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18496));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 344u, 0x088EE3E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7468u) goto L_08AE7468;
    return;
L_08AE7468:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE7474u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 368u, 0x088EE598u>(ctx, &aot_mem) && ctx.pc == 0x08AE7474u) goto L_08AE7474;
    return;
L_08AE7474:
    ctx.gpr[31] = (0x08AE747Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 277u, 0x088EDF38u>(ctx, &aot_mem) && ctx.pc == 0x08AE747Cu) goto L_08AE747C;
    return;
L_08AE747C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE7490u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7490u) goto L_08AE7490;
    return;
L_08AE7490:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE74A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    ctx.gpr[23] = (2233u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(-18496));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24976)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE7668;
      }
      goto L_08AE74FC;
    }
L_08AE74FC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18696));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = (0u | 2u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08AE7518;
L_08AE7518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AE7524u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 339u, 0x089722CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE7524u) goto L_08AE7524;
    return;
L_08AE7524:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7604;
      }
      goto L_08AE7530;
    }
L_08AE7530:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(496)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_08AE755C;
    }
    goto L_08AE7548;
L_08AE7548:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE75F4;
      }
      goto L_08AE755C;
    }
L_08AE755C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 2u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AE7584;
    }
    goto L_08AE7578;
L_08AE7578:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08AE7588;
      }
      goto L_08AE7584;
    }
L_08AE7584:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    goto L_08AE7588;
L_08AE7588:
    ctx.gpr[17] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]));
    ctx.gpr[17] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[17]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[17]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(1u, 0u, 2u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08AE75F4;
L_08AE75F4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE7630;
      }
      goto L_08AE7604;
    }
L_08AE7604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-18496)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08AE7630;
L_08AE7630:
    ctx.gpr[31] = (0x08AE7638u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7638u) goto L_08AE7638;
    return;
L_08AE7638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08AE7654;
      }
      goto L_08AE764C;
    }
L_08AE764C:
    ctx.gpr[31] = (0x08AE7654u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 762u, 0x08A2F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7654u) goto L_08AE7654;
    return;
L_08AE7654:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08AE7518;
      }
      goto L_08AE7668;
    }
L_08AE7668:
    ctx.gpr[31] = (0x08AE7670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 720u, 0x0891B328u>(ctx, &aot_mem) && ctx.pc == 0x08AE7670u) goto L_08AE7670;
    return;
L_08AE7670:
    ctx.gpr[31] = (0x08AE7678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 720u, 0x0891B328u>(ctx, &aot_mem) && ctx.pc == 0x08AE7678u) goto L_08AE7678;
    return;
L_08AE7678:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(935), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24960), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-24956), static_cast<std::uint8_t>(0u));
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
L_08AE76D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25211)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7730;
      }
      goto L_08AE76EC;
    }
L_08AE76EC:
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x08AE76FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 158u, 0x088ED1F8u>(ctx, &aot_mem) && ctx.pc == 0x08AE76FCu) goto L_08AE76FC;
    return;
L_08AE76FC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08AE7714;
      }
      goto L_08AE7708;
    }
L_08AE7708:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AE7714;
L_08AE7714:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE7730u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 212u, 0x088ED9ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE7730u) goto L_08AE7730;
    return;
L_08AE7730:
    ctx.gpr[31] = (0x08AE7738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7738u) goto L_08AE7738;
    return;
L_08AE7738:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE7778u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 261u, 0x089D9164u>(ctx, &aot_mem) && ctx.pc == 0x08AE7778u) goto L_08AE7778;
    return;
L_08AE7778:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE7788:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5616)));
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08AE77C0;
    }
    goto L_08AE77B4;
L_08AE77B4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE77D0;
      }
      goto L_08AE77C0;
    }
L_08AE77C0:
    ctx.gpr[2] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    goto L_08AE77D0;
L_08AE77D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE77D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25211)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7824;
      }
      goto L_08AE77F4;
    }
L_08AE77F4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE7804u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 170u, 0x088ED2F4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7804u) goto L_08AE7804;
    return;
L_08AE7804:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08AE781C;
    }
    goto L_08AE781C;
L_08AE781C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_08AE7828;
      }
      goto L_08AE7824;
    }
L_08AE7824:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AE7828;
L_08AE7828:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE7838:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE7860u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7860u) goto L_08AE7860;
    return;
L_08AE7860:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE786Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x08AE786Cu) goto L_08AE786C;
    return;
L_08AE786C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(500), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(496), ctx.gpr[2]);
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
L_08AE788C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE78A8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 233u, 0x0886504Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE78A8u) goto L_08AE78A8;
    return;
L_08AE78A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(500), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(496), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE78C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(500), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(496), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE78D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[18]);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-24984)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-24984), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (2278u << 16u);
      if (branch_taken) {
          goto L_08AE7A54;
      }
      goto L_08AE7928;
    }
L_08AE7928:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12344));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[19] = (2278u << 16u);
    ctx.gpr[20] = (65528u << 16u);
    ctx.gpr[4] = (16320u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14544));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (8u << 16u);
    goto L_08AE7954;
L_08AE7954:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AE7960u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28BB8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7960u) goto L_08AE7960;
    return;
L_08AE7960:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7A3C;
      }
      goto L_08AE7968;
    }
L_08AE7968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08AE79B8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 226u, 0x088C15D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE79B8u) goto L_08AE79B8;
    return;
L_08AE79B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08AE7A3C;
      }
      goto L_08AE79CC;
    }
L_08AE79CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7A28;
      }
      goto L_08AE79E8;
    }
L_08AE79E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-24984)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE7A00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7A00u) goto L_08AE7A00;
    return;
L_08AE7A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-24984)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-24984)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-24984), ctx.gpr[4]);
    goto L_08AE7A28;
L_08AE7A28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE79CC;
      }
      goto L_08AE7A3C;
    }
L_08AE7A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08AE7954;
      }
      goto L_08AE7A54;
    }
L_08AE7A54:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE7A88:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE7A90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24996)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (2278u << 16u);
      if (branch_taken) {
          goto L_08AE7B34;
      }
      goto L_08AE7ACC;
    }
L_08AE7ACC:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(11120));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28012)));
    goto L_08AE7AD8;
L_08AE7AD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 120 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 130 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE7B14;
      }
      goto L_08AE7AE8;
    }
L_08AE7AE8:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[5] << 4u);
      if (branch_taken) {
          goto L_08AE7B14;
      }
      goto L_08AE7AF0;
    }
L_08AE7AF0:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7B2C;
      }
      goto L_08AE7B14;
    }
L_08AE7B14:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE7AD8;
      }
      goto L_08AE7B24;
    }
L_08AE7B24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7B34;
      }
      goto L_08AE7B2C;
    }
L_08AE7B2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7C10;
      }
      goto L_08AE7B34;
    }
L_08AE7B34:
    ctx.gpr[31] = (0x08AE7B3Cu);
    // nop
    goto L_08AE7C38;
L_08AE7B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24996)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE7BB4;
      }
      goto L_08AE7B50;
    }
L_08AE7B50:
    ctx.gpr[18] = (2278u << 16u);
    ctx.gpr[17] = (2278u << 16u);
    ctx.gpr[20] = (2278u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(7864));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(11120));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(9520));
    goto L_08AE7B68;
L_08AE7B68:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7B84;
      }
      goto L_08AE7B78;
    }
L_08AE7B78:
    ctx.gpr[31] = (0x08AE7B80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AE71D4;
L_08AE7B80:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08AE7B84;
L_08AE7B84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7B9C;
      }
      goto L_08AE7B90;
    }
L_08AE7B90:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AE7B9Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AE7344;
L_08AE7B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24996)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AE7B68;
      }
      goto L_08AE7BB4;
    }
L_08AE7BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-5612)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2278u << 16u);
      if (branch_taken) {
          goto L_08AE7C10;
      }
      goto L_08AE7BC8;
    }
L_08AE7BC8:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(15608));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-18696));
    goto L_08AE7BD4;
L_08AE7BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AE7BFCu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08AE7838;
L_08AE7BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-5612)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AE7BD4;
      }
      goto L_08AE7C10;
    }
L_08AE7C10:
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
L_08AE7C38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE7C70u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 480u, 0x0887AEC4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7C70u) goto L_08AE7C70;
    return;
L_08AE7C70:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7788), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6396));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AE7CA4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7CA4u) goto L_08AE7CA4;
    return;
L_08AE7CA4:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(9432));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-5624));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE7CCCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6380));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08AE7CCCu) goto L_08AE7CCC;
    return;
L_08AE7CCC:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7760)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE7CECu);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 2u, 0x088B8080u>(ctx, &aot_mem) && ctx.pc == 0x08AE7CECu) goto L_08AE7CEC;
    return;
L_08AE7CEC:
    ctx.gpr[23] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[30] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE7D70;
      }
      goto L_08AE7CF8;
    }
L_08AE7CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 10u);
    ctx.gpr[31] = (0x08AE7D08u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7D08u) goto L_08AE7D08;
    return;
L_08AE7D08:
    ctx.gpr[31] = (0x08AE7D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 769u, 0x089C7274u>(ctx, &aot_mem) && ctx.pc == 0x08AE7D10u) goto L_08AE7D10;
    return;
L_08AE7D10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 11u);
    ctx.gpr[31] = (0x08AE7D24u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 542u, 0x08873064u>(ctx, &aot_mem) && ctx.pc == 0x08AE7D24u) goto L_08AE7D24;
    return;
L_08AE7D24:
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AE7D38u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-18952));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 558u, 0x08A8B4E8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7D38u) goto L_08AE7D38;
    return;
L_08AE7D38:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[6] = (2278u << 16u);
    ctx.gpr[7] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7840));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(9520));
    ctx.gpr[31] = (0x08AE7D5Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(7920));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x08839EA0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7D5Cu) goto L_08AE7D5C;
    return;
L_08AE7D5C:
    ctx.gpr[31] = (0x08AE7D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 771u, 0x089C7298u>(ctx, &aot_mem) && ctx.pc == 0x08AE7D64u) goto L_08AE7D64;
    return;
L_08AE7D64:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(934), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AE7D74;
      }
      goto L_08AE7D70;
    }
L_08AE7D70:
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(934), static_cast<std::uint8_t>(0u));
    goto L_08AE7D74;
L_08AE7D74:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE7D80u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 531u, 0x08872FE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7D80u) goto L_08AE7D80;
    return;
L_08AE7D80:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE7D90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6372));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 203u, 0x088B9118u>(ctx, &aot_mem) && ctx.pc == 0x08AE7D90u) goto L_08AE7D90;
    return;
L_08AE7D90:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE7DA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6368));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08AE7DA8u) goto L_08AE7DA8;
    return;
L_08AE7DA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7760)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE7DBCu);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 2u, 0x088B8080u>(ctx, &aot_mem) && ctx.pc == 0x08AE7DBCu) goto L_08AE7DBC;
    return;
L_08AE7DBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7E08;
      }
      goto L_08AE7DC4;
    }
L_08AE7DC4:
    ctx.gpr[31] = (0x08AE7DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 769u, 0x089C7274u>(ctx, &aot_mem) && ctx.pc == 0x08AE7DCCu) goto L_08AE7DCC;
    return;
L_08AE7DCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 11u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE7DE4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 209u, 0x088B91ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE7DE4u) goto L_08AE7DE4;
    return;
L_08AE7DE4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE7DF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 214u, 0x088ED9ECu>(ctx, &aot_mem) && ctx.pc == 0x08AE7DF4u) goto L_08AE7DF4;
    return;
L_08AE7DF4:
    ctx.gpr[31] = (0x08AE7DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 771u, 0x089C7298u>(ctx, &aot_mem) && ctx.pc == 0x08AE7DFCu) goto L_08AE7DFC;
    return;
L_08AE7DFC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(-25211), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AE7E0C;
      }
      goto L_08AE7E08;
    }
L_08AE7E08:
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(-25211), static_cast<std::uint8_t>(0u));
    goto L_08AE7E0C;
L_08AE7E0C:
    ctx.gpr[31] = (0x08AE7E14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 212u, 0x088B9200u>(ctx, &aot_mem) && ctx.pc == 0x08AE7E14u) goto L_08AE7E14;
    return;
L_08AE7E14:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(940), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AE7E2Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5616), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7E2Cu) goto L_08AE7E2C;
    return;
L_08AE7E2C:
    ctx.gpr[31] = (0x08AE7E34u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 394u, 0x08ACD8C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7E34u) goto L_08AE7E34;
    return;
L_08AE7E34:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
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
L_08AE7E68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE7E7Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 755u, 0x0891B674u>(ctx, &aot_mem) && ctx.pc == 0x08AE7E7Cu) goto L_08AE7E7C;
    return;
L_08AE7E7C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(936), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(939), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25212)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7EA8;
      }
      goto L_08AE7EA0;
    }
L_08AE7EA0:
    ctx.gpr[31] = (0x08AE7EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 886u, 0x089C79A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7EA8u) goto L_08AE7EA8;
    return;
L_08AE7EA8:
    ctx.gpr[31] = (0x08AE7EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 526u, 0x089C63D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7EB0u) goto L_08AE7EB0;
    return;
L_08AE7EB0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE7EC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5624));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE7EC0u) goto L_08AE7EC0;
    return;
L_08AE7EC0:
    ctx.gpr[31] = (0x08AE7EC8u);
    // nop
    goto L_08AE7EE0;
L_08AE7EC8:
    ctx.gpr[31] = (0x08AE7ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 757u, 0x0891B698u>(ctx, &aot_mem) && ctx.pc == 0x08AE7ED0u) goto L_08AE7ED0;
    return;
L_08AE7ED0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE7EE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1536));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1500), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-5624));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18496));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1360), ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18952));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1524), ctx.gpr[23]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[23] = (2278u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1512), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6352));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(11120));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1452), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1472), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1476), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1480), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1484), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1488), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1492), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1496), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1504), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1508), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1516), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1520), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1528), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1532), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE7FE8;
      }
      goto L_08AE7F68;
    }
L_08AE7F68:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08AE7F74;
L_08AE7F74:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] & 2u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_08AE7FA0;
    }
    goto L_08AE7F8C;
L_08AE7F8C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
      if (branch_taken) {
          goto L_08AE7FA0;
      }
      goto L_08AE7FA0;
    }
L_08AE7FA0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 2u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
        goto L_08AE7FCC;
    }
    goto L_08AE7FB8;
L_08AE7FB8:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
      if (branch_taken) {
          goto L_08AE7FCC;
      }
      goto L_08AE7FCC;
    }
L_08AE7FCC:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE7FDC;
      }
      goto L_08AE7FD4;
    }
L_08AE7FD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE7FFC;
      }
      goto L_08AE7FDC;
    }
L_08AE7FDC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE7F74;
      }
      goto L_08AE7FE8;
    }
L_08AE7FE8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE7FFC;
      }
      goto L_08AE7FF4;
    }
L_08AE7FF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE7FFC;
      }
      goto L_08AE7FFC;
    }
L_08AE7FFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1364), ctx.gpr[17]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 5u, 0x08AE8040u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 1u, 0x08AE8004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0184(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0184_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_184(Runtime &runtime) {
    runtime.register_generated_unit(184u, 0x08AE4000u, 16384u, &recomp_unit_0184, &recomp_unit_0184_entry);
    runtime.register_function(0x08AE4000u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE400Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4018u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4058u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4080u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4094u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4110u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE412Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE413Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE414Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4158u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE41C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE41E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE41F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE425Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4278u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4288u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE428Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE42BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE42C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE42D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE42DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE42E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE42ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE42FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4314u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE431Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4324u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4330u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4348u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4350u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4358u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE437Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE43CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE43D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE43E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE43E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE440Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE441Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4434u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4444u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE444Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4458u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4464u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE447Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4484u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE448Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4494u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE450Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE451Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4524u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE452Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4534u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4548u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE455Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE457Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4588u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE45E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4630u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE463Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE466Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4684u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4704u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE470Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4714u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE471Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4724u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE472Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4730u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE474Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4764u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4780u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE478Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4800u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4808u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4810u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4818u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4820u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4824u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4840u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4858u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4874u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4880u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4898u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE490Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4964u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4974u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4988u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4990u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4998u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A18u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A30u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A6Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B10u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B60u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B74u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4BBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4BF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C4Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D08u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D28u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D30u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D44u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DD8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E58u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E74u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4ECCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4ED8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F00u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F10u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F18u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F68u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F78u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5004u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5014u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5024u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5030u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5044u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE504Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5054u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5064u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE506Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5074u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5084u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE508Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5094u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE509Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE510Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE511Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5124u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5130u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5260u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE526Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5298u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE52BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE52E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE52F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE52F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5308u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5314u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5318u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5330u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5344u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE537Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5390u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5404u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5410u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE541Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5428u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5430u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5438u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5448u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE544Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5460u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5468u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5484u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5490u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE549Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5504u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE552Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5534u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE553Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5554u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5560u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5568u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5570u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5588u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5594u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE561Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5624u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5650u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5664u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE566Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5678u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5688u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE568Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5834u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5854u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE585Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE587Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5884u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5894u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE58A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE58ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE58B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE58CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE58E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE58F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE58FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5908u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE591Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5924u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE593Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE595Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE597Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5994u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A08u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A10u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A4Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A60u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A74u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5AACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5ABCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5ACCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5AD0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5AD8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B00u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B28u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B30u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B4Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B98u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CCCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D44u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5DB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5DC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5DDCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E10u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E78u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5EE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5EECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5EF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F58u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5FA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5FB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5FECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5FF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6004u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6018u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6020u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6028u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6038u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE605Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6090u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6094u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6130u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6144u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6150u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6190u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE619Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE621Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6224u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6264u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6270u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6274u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6288u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE628Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE62B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6304u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6310u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE631Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6328u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6334u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6344u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6360u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6368u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6370u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE63B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE63D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE63E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE63F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE63FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6400u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6414u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6420u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6478u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE648Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE649Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE64B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE64C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE64D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE650Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6528u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6538u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6548u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE65A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE65ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE65C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE65D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE65DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE65E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6600u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6648u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6658u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6684u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE66DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE66E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6744u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6754u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6788u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE67F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE67FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE68A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE68BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE68C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE68FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE691Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6934u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6950u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6958u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6964u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6974u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6984u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6998u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE69A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE69F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A18u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A28u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A80u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6AA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6AB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6ABCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6AD0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6AF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B80u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BDCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6CA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6CB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6CE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D6Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6DB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E74u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6EA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6EB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6EC4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6ED8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6EE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6EFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F44u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F60u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F68u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F74u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F78u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F98u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FC4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FCCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FDCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7000u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7008u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7030u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE703Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7070u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7084u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7094u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE709Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7124u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE713Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7140u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7154u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7164u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7174u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7178u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7204u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7234u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7248u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7264u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7278u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7290u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE72A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE72B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE72BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE72C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE72CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE72E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE72F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7300u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7328u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7344u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE736Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7374u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7384u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE738Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7398u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7410u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7428u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7450u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7468u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7474u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE747Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7490u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE74A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE74FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7518u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7524u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7530u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7548u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE755Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7578u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7584u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7588u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE75F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7604u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7630u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7638u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE764Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7654u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7668u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7670u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7678u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE76D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE76ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE76FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7708u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7714u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7730u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7738u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7778u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7788u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE77B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE77C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE77D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE77D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE77F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7804u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE781Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7824u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7828u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7838u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7860u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE786Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE788Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7928u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7954u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7960u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7968u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A00u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A28u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7ACCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7AD8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7AE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7AF0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B50u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B68u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B78u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B80u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C10u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7CA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7CCCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7CECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7CF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D08u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D10u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D74u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D80u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DC4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DCCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E08u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E68u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7ED0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F68u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F74u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FCCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FDCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FFCu, &recomp_unit_0184, "recomp_unit_0184");
}
} // namespace psprecomp
