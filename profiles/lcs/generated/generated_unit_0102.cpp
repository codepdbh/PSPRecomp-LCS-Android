#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0102[4092] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    50, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56,
    0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62,
    0, 63, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108,
    0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 125, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 140, 141, 0, 0, 0, 0, 0, 142,
    0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 155, 156,
    0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 169, 0, 170, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 175, 0, 176, 0, 0, 177, 0,
    0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 0, 186, 0, 0,
    0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217,
    0, 218, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0,
    0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 231, 232, 0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 238,
    0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0,
    0, 0, 0, 0, 247, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0,
    0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0,
    0, 0, 0, 261, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0,
    0, 0, 0, 0, 267, 0, 268, 269, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 275,
    0, 276, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 279, 0, 280, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0,
    0, 0, 0, 285, 0, 0, 286, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 292, 0,
    0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 306, 0, 307, 0, 308, 0, 309, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 329, 0, 330, 331, 0, 0,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 334, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 344, 0, 345, 346, 0, 347, 0, 0,
    0, 348, 0, 349, 350, 0, 351, 0, 0, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 357, 0, 358, 0, 0, 0, 359, 0, 360, 0, 361, 0, 362,
    0, 363, 0, 364, 0, 365, 0, 366, 367, 0, 368, 0, 0, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373, 0, 374, 0, 375, 376, 0, 377, 0, 0,
    0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 387, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 390, 391,
    0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 397, 0, 398, 0, 0, 399, 0, 0, 0, 0,
    0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 405, 0, 406, 0,
    0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411,
    0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 414, 0, 415, 0, 416, 0, 417, 0, 418, 0, 419, 0, 420, 421, 0, 0, 0, 0, 422, 0, 0, 0,
    423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0,
    427, 0, 0, 0, 428, 0, 429, 0, 430, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 434, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 439, 0, 440, 0, 441,
    0, 0, 0, 442, 0, 443, 0, 0, 444, 0, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 458, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0,
    0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465,
    0, 466, 0, 467, 0, 468, 0, 469, 0, 470, 0, 471, 0, 472, 0, 0, 0, 473, 0, 474, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    476, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0,
    0, 485, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 489, 0, 490, 0, 491, 0, 0, 492, 0, 493, 0, 494, 0, 495, 0, 0, 496,
    0, 0, 497, 498, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0,
    0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 508, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0,
    0, 511, 0, 512, 0, 0, 0, 513, 0, 0, 0, 514, 515, 0, 516, 0, 517, 0, 0, 0, 0, 0, 518, 519, 520, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 521, 0, 522, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 529, 0, 0, 530, 0, 0, 531, 0, 0, 0, 532, 0, 533, 0, 534, 0, 535, 536, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538,
    0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 547, 0, 548, 0, 0, 0, 0, 549, 0, 0,
    550, 0, 0, 551, 0, 0, 552, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0, 558, 0,
    559, 0, 560, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0, 0, 563, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 566, 0, 567, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 571, 0, 572, 0, 573, 0, 0, 574, 0, 575, 576,
    0, 577, 0, 578, 0, 579, 0, 580, 0, 0, 581, 0, 582, 0, 583, 584, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0,
    586, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 589, 0, 590, 0, 0, 591, 0, 592, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0,
    595, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 601, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0,
    0, 606, 0, 0, 0, 0, 607, 0, 608, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 612, 0, 613, 0, 614, 0, 615, 0, 0, 616,
    0, 0, 617, 0, 618, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 621, 0, 622, 623, 0, 624, 0, 0, 625, 0,
    626, 0, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 631, 0, 0, 632, 633, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 639, 0, 0, 640, 0,
    641, 0, 642, 0, 0, 643, 0, 644, 0, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 648, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 651, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 0, 0,
    0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 658, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 660, 0, 661,
    0, 662, 0, 0, 0, 0, 0, 663, 664, 0, 0, 0, 665, 0, 0, 666, 667, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 669,
    0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 671, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 674, 0, 675, 0, 676, 0, 0, 0,
    0, 0, 677, 678, 0, 0, 0, 679, 0, 0, 680, 681, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 684,
    0, 0, 0, 0, 0, 685, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 0, 690, 0, 0, 691, 0, 692, 0,
    0, 693, 694, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 696, 0, 697, 0, 698, 0, 699, 0, 0, 0, 700, 0, 0, 701, 0, 702, 0, 0,
    0, 0, 0, 0, 703, 0, 0, 704, 0, 0, 705, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0,
    709, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 712, 0, 0, 713, 0, 0, 714, 715, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0,
    717, 0, 718, 0, 719, 0, 0, 0, 720, 0, 721, 0, 722, 0, 723, 0, 0, 0, 0, 0, 0, 0, 724, 0, 725, 0, 0, 726, 0, 0, 0, 0,
    0, 727, 0, 728, 0, 729, 730, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732,
    0, 0, 733, 0, 0, 734, 0, 0, 735, 736, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 0,
    0, 740, 0, 741, 742, 0, 0, 743, 744, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0,
    0, 747, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 750, 0, 751, 0, 0, 752, 0, 753, 754, 0, 0,
    755, 0, 0, 756, 0, 757, 0, 758, 759, 0, 760, 0, 0, 0, 761, 762, 0, 0, 763, 0, 764, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 769, 0,
    770, 0, 0, 0, 771, 772, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 775, 0, 776, 0, 777, 0, 0,
    0, 778, 0, 779, 0, 780, 0, 781, 0, 782, 0, 783, 784, 0, 785, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0,
    788, 0, 789, 0, 790, 0, 0, 0, 0, 791, 0, 792, 0, 0, 0, 793, 0, 0, 0, 794, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797, 798, 0, 799, 0, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 801,
};
void recomp_unit_0102_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0899C000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0102[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0899C000;
    case 2u: goto L_0899C01C;
    case 3u: goto L_0899C03C;
    case 4u: goto L_0899C048;
    case 5u: goto L_0899C050;
    case 6u: goto L_0899C064;
    case 7u: goto L_0899C098;
    case 8u: goto L_0899C0C4;
    case 9u: goto L_0899C0D8;
    case 10u: goto L_0899C10C;
    case 11u: goto L_0899C138;
    case 12u: goto L_0899C140;
    case 13u: goto L_0899C14C;
    case 14u: goto L_0899C154;
    case 15u: goto L_0899C1B8;
    case 16u: goto L_0899C1C0;
    case 17u: goto L_0899C1D0;
    case 18u: goto L_0899C1E8;
    case 19u: goto L_0899C1F4;
    case 20u: goto L_0899C22C;
    case 21u: goto L_0899C230;
    case 22u: goto L_0899C264;
    case 23u: goto L_0899C268;
    case 24u: goto L_0899C2A8;
    case 25u: goto L_0899C2AC;
    case 26u: goto L_0899C308;
    case 27u: goto L_0899C31C;
    case 28u: goto L_0899C32C;
    case 29u: goto L_0899C358;
    case 30u: goto L_0899C360;
    case 31u: goto L_0899C3C4;
    case 32u: goto L_0899C3D0;
    case 33u: goto L_0899C3D8;
    case 34u: goto L_0899C3E4;
    case 35u: goto L_0899C448;
    case 36u: goto L_0899C450;
    case 37u: goto L_0899C460;
    case 38u: goto L_0899C480;
    case 39u: goto L_0899C488;
    case 40u: goto L_0899C4E0;
    case 41u: goto L_0899C4E8;
    case 42u: goto L_0899C4F4;
    case 43u: goto L_0899C550;
    case 44u: goto L_0899C558;
    case 45u: goto L_0899C59C;
    case 46u: goto L_0899C5A8;
    case 47u: goto L_0899C5B0;
    case 48u: goto L_0899C5C8;
    case 49u: goto L_0899C5F4;
    case 50u: goto L_0899C600;
    case 51u: goto L_0899C60C;
    case 52u: goto L_0899C618;
    case 53u: goto L_0899C624;
    case 54u: goto L_0899C66C;
    case 55u: goto L_0899C768;
    case 56u: goto L_0899C77C;
    case 57u: goto L_0899C798;
    case 58u: goto L_0899C7A0;
    case 59u: goto L_0899C7B4;
    case 60u: goto L_0899C7DC;
    case 61u: goto L_0899C7E8;
    case 62u: goto L_0899C7FC;
    case 63u: goto L_0899C804;
    case 64u: goto L_0899C808;
    case 65u: goto L_0899C810;
    case 66u: goto L_0899C840;
    case 67u: goto L_0899C8A4;
    case 68u: goto L_0899C8D4;
    case 69u: goto L_0899C924;
    case 70u: goto L_0899C950;
    case 71u: goto L_0899C994;
    case 72u: goto L_0899C9A4;
    case 73u: goto L_0899C9AC;
    case 74u: goto L_0899C9B8;
    case 75u: goto L_0899C9E4;
    case 76u: goto L_0899CA00;
    case 77u: goto L_0899CA98;
    case 78u: goto L_0899CAA4;
    case 79u: goto L_0899CAB0;
    case 80u: goto L_0899CAC4;
    case 81u: goto L_0899CAD8;
    case 82u: goto L_0899CB48;
    case 83u: goto L_0899CB4C;
    case 84u: goto L_0899CB80;
    case 85u: goto L_0899CBD0;
    case 86u: goto L_0899CBDC;
    case 87u: goto L_0899CBE4;
    case 88u: goto L_0899CC14;
    case 89u: goto L_0899CC28;
    case 90u: goto L_0899CC34;
    case 91u: goto L_0899CC40;
    case 92u: goto L_0899CC58;
    case 93u: goto L_0899CCC4;
    case 94u: goto L_0899CCFC;
    case 95u: goto L_0899CD34;
    case 96u: goto L_0899CD44;
    case 97u: goto L_0899CD5C;
    case 98u: goto L_0899CD7C;
    case 99u: goto L_0899CDA0;
    case 100u: goto L_0899CDBC;
    case 101u: goto L_0899CDCC;
    case 102u: goto L_0899CDF8;
    case 103u: goto L_0899CE20;
    case 104u: goto L_0899CE38;
    case 105u: goto L_0899CE50;
    case 106u: goto L_0899CE6C;
    case 107u: goto L_0899CE88;
    case 108u: goto L_0899CEFC;
    case 109u: goto L_0899CF1C;
    case 110u: goto L_0899CF2C;
    case 111u: goto L_0899CF4C;
    case 112u: goto L_0899CF80;
    case 113u: goto L_0899CFB0;
    case 114u: goto L_0899CFC0;
    case 115u: goto L_0899CFFC;
    case 116u: goto L_0899D010;
    case 117u: goto L_0899D08C;
    case 118u: goto L_0899D0A4;
    case 119u: goto L_0899D0B4;
    case 120u: goto L_0899D0D0;
    case 121u: goto L_0899D0E0;
    case 122u: goto L_0899D10C;
    case 123u: goto L_0899D12C;
    case 124u: goto L_0899D140;
    case 125u: goto L_0899D184;
    case 126u: goto L_0899D194;
    case 127u: goto L_0899D19C;
    case 128u: goto L_0899D1A4;
    case 129u: goto L_0899D1E0;
    case 130u: goto L_0899D208;
    case 131u: goto L_0899D224;
    case 132u: goto L_0899D230;
    case 133u: goto L_0899D248;
    case 134u: goto L_0899D264;
    case 135u: goto L_0899D280;
    case 136u: goto L_0899D298;
    case 137u: goto L_0899D2A4;
    case 138u: goto L_0899D2C8;
    case 139u: goto L_0899D2D4;
    case 140u: goto L_0899D2E0;
    case 141u: goto L_0899D2E4;
    case 142u: goto L_0899D2FC;
    case 143u: goto L_0899D314;
    case 144u: goto L_0899D31C;
    case 145u: goto L_0899D328;
    case 146u: goto L_0899D330;
    case 147u: goto L_0899D338;
    case 148u: goto L_0899D340;
    case 149u: goto L_0899D34C;
    case 150u: goto L_0899D354;
    case 151u: goto L_0899D35C;
    case 152u: goto L_0899D364;
    case 153u: goto L_0899D36C;
    case 154u: goto L_0899D374;
    case 155u: goto L_0899D378;
    case 156u: goto L_0899D37C;
    case 157u: goto L_0899D390;
    case 158u: goto L_0899D3A0;
    case 159u: goto L_0899D3A8;
    case 160u: goto L_0899D3BC;
    case 161u: goto L_0899D3D0;
    case 162u: goto L_0899D3DC;
    case 163u: goto L_0899D400;
    case 164u: goto L_0899D40C;
    case 165u: goto L_0899D418;
    case 166u: goto L_0899D428;
    case 167u: goto L_0899D44C;
    case 168u: goto L_0899D460;
    case 169u: goto L_0899D464;
    case 170u: goto L_0899D46C;
    case 171u: goto L_0899D478;
    case 172u: goto L_0899D494;
    case 173u: goto L_0899D4D4;
    case 174u: goto L_0899D4DC;
    case 175u: goto L_0899D4E4;
    case 176u: goto L_0899D4EC;
    case 177u: goto L_0899D4F8;
    case 178u: goto L_0899D504;
    case 179u: goto L_0899D50C;
    case 180u: goto L_0899D514;
    case 181u: goto L_0899D520;
    case 182u: goto L_0899D544;
    case 183u: goto L_0899D558;
    case 184u: goto L_0899D560;
    case 185u: goto L_0899D568;
    case 186u: goto L_0899D574;
    case 187u: goto L_0899D588;
    case 188u: goto L_0899D590;
    case 189u: goto L_0899D5A0;
    case 190u: goto L_0899D5A8;
    case 191u: goto L_0899D5C0;
    case 192u: goto L_0899D5C8;
    case 193u: goto L_0899D5D0;
    case 194u: goto L_0899D5E4;
    case 195u: goto L_0899D600;
    case 196u: goto L_0899D60C;
    case 197u: goto L_0899D624;
    case 198u: goto L_0899D63C;
    case 199u: goto L_0899D654;
    case 200u: goto L_0899D65C;
    case 201u: goto L_0899D674;
    case 202u: goto L_0899D6B8;
    case 203u: goto L_0899D6C4;
    case 204u: goto L_0899D6F4;
    case 205u: goto L_0899D700;
    case 206u: goto L_0899D728;
    case 207u: goto L_0899D740;
    case 208u: goto L_0899D750;
    case 209u: goto L_0899D764;
    case 210u: goto L_0899D78C;
    case 211u: goto L_0899D7A0;
    case 212u: goto L_0899D7B0;
    case 213u: goto L_0899D7C8;
    case 214u: goto L_0899D828;
    case 215u: goto L_0899D83C;
    case 216u: goto L_0899D868;
    case 217u: goto L_0899D87C;
    case 218u: goto L_0899D884;
    case 219u: goto L_0899D88C;
    case 220u: goto L_0899D898;
    case 221u: goto L_0899D8A4;
    case 222u: goto L_0899D8B4;
    case 223u: goto L_0899D8BC;
    case 224u: goto L_0899D8C8;
    case 225u: goto L_0899D8D4;
    case 226u: goto L_0899D8E4;
    case 227u: goto L_0899D8EC;
    case 228u: goto L_0899D904;
    case 229u: goto L_0899D920;
    case 230u: goto L_0899D928;
    case 231u: goto L_0899D930;
    case 232u: goto L_0899D934;
    case 233u: goto L_0899D93C;
    case 234u: goto L_0899D948;
    case 235u: goto L_0899D950;
    case 236u: goto L_0899D964;
    case 237u: goto L_0899D974;
    case 238u: goto L_0899D97C;
    case 239u: goto L_0899D990;
    case 240u: goto L_0899D998;
    case 241u: goto L_0899D9AC;
    case 242u: goto L_0899D9B8;
    case 243u: goto L_0899D9D0;
    case 244u: goto L_0899D9DC;
    case 245u: goto L_0899D9EC;
    case 246u: goto L_0899D9F8;
    case 247u: goto L_0899DA10;
    case 248u: goto L_0899DA18;
    case 249u: goto L_0899DA24;
    case 250u: goto L_0899DA50;
    case 251u: goto L_0899DA5C;
    case 252u: goto L_0899DA74;
    case 253u: goto L_0899DA84;
    case 254u: goto L_0899DA90;
    case 255u: goto L_0899DA9C;
    case 256u: goto L_0899DAA8;
    case 257u: goto L_0899DAC8;
    case 258u: goto L_0899DAD0;
    case 259u: goto L_0899DAD8;
    case 260u: goto L_0899DAE8;
    case 261u: goto L_0899DB0C;
    case 262u: goto L_0899DB18;
    case 263u: goto L_0899DB20;
    case 264u: goto L_0899DB34;
    case 265u: goto L_0899DB50;
    case 266u: goto L_0899DB78;
    case 267u: goto L_0899DB90;
    case 268u: goto L_0899DB98;
    case 269u: goto L_0899DB9C;
    case 270u: goto L_0899DBA8;
    case 271u: goto L_0899DBBC;
    case 272u: goto L_0899DBC8;
    case 273u: goto L_0899DBEC;
    case 274u: goto L_0899DBF4;
    case 275u: goto L_0899DBFC;
    case 276u: goto L_0899DC04;
    case 277u: goto L_0899DC14;
    case 278u: goto L_0899DC1C;
    case 279u: goto L_0899DC34;
    case 280u: goto L_0899DC3C;
    case 281u: goto L_0899DC44;
    case 282u: goto L_0899DC54;
    case 283u: goto L_0899DC68;
    case 284u: goto L_0899DC78;
    case 285u: goto L_0899DC8C;
    case 286u: goto L_0899DC98;
    case 287u: goto L_0899DC9C;
    case 288u: goto L_0899DCA8;
    case 289u: goto L_0899DCC4;
    case 290u: goto L_0899DCE4;
    case 291u: goto L_0899DCF0;
    case 292u: goto L_0899DCF8;
    case 293u: goto L_0899DD04;
    case 294u: goto L_0899DD0C;
    case 295u: goto L_0899DD14;
    case 296u: goto L_0899DD1C;
    case 297u: goto L_0899DD24;
    case 298u: goto L_0899DD28;
    case 299u: goto L_0899DD38;
    case 300u: goto L_0899DD94;
    case 301u: goto L_0899DDC4;
    case 302u: goto L_0899DE0C;
    case 303u: goto L_0899DE48;
    case 304u: goto L_0899DE50;
    case 305u: goto L_0899DE58;
    case 306u: goto L_0899DE90;
    case 307u: goto L_0899DE98;
    case 308u: goto L_0899DEA0;
    case 309u: goto L_0899DEA8;
    case 310u: goto L_0899DEAC;
    case 311u: goto L_0899DEB8;
    case 312u: goto L_0899DEE8;
    case 313u: goto L_0899DF64;
    case 314u: goto L_0899DF6C;
    case 315u: goto L_0899DF74;
    case 316u: goto L_0899DFB8;
    case 317u: goto L_0899DFC8;
    case 318u: goto L_0899DFD0;
    case 319u: goto L_0899E014;
    case 320u: goto L_0899E024;
    case 321u: goto L_0899E030;
    case 322u: goto L_0899E054;
    case 323u: goto L_0899E05C;
    case 324u: goto L_0899E070;
    case 325u: goto L_0899E084;
    case 326u: goto L_0899E0A0;
    case 327u: goto L_0899E0D0;
    case 328u: goto L_0899E0E0;
    case 329u: goto L_0899E0E8;
    case 330u: goto L_0899E0F0;
    case 331u: goto L_0899E0F4;
    case 332u: goto L_0899E118;
    case 333u: goto L_0899E124;
    case 334u: goto L_0899E138;
    case 335u: goto L_0899E13C;
    case 336u: goto L_0899E15C;
    case 337u: goto L_0899E16C;
    case 338u: goto L_0899E180;
    case 339u: goto L_0899E194;
    case 340u: goto L_0899E1A0;
    case 341u: goto L_0899E1B0;
    case 342u: goto L_0899E1C0;
    case 343u: goto L_0899E1C8;
    case 344u: goto L_0899E1E0;
    case 345u: goto L_0899E1E8;
    case 346u: goto L_0899E1EC;
    case 347u: goto L_0899E1F4;
    case 348u: goto L_0899E204;
    case 349u: goto L_0899E20C;
    case 350u: goto L_0899E210;
    case 351u: goto L_0899E218;
    case 352u: goto L_0899E228;
    case 353u: goto L_0899E230;
    case 354u: goto L_0899E238;
    case 355u: goto L_0899E240;
    case 356u: goto L_0899E248;
    case 357u: goto L_0899E24C;
    case 358u: goto L_0899E254;
    case 359u: goto L_0899E264;
    case 360u: goto L_0899E26C;
    case 361u: goto L_0899E274;
    case 362u: goto L_0899E27C;
    case 363u: goto L_0899E284;
    case 364u: goto L_0899E28C;
    case 365u: goto L_0899E294;
    case 366u: goto L_0899E29C;
    case 367u: goto L_0899E2A0;
    case 368u: goto L_0899E2A8;
    case 369u: goto L_0899E2B8;
    case 370u: goto L_0899E2C0;
    case 371u: goto L_0899E2C8;
    case 372u: goto L_0899E2D0;
    case 373u: goto L_0899E2D8;
    case 374u: goto L_0899E2E0;
    case 375u: goto L_0899E2E8;
    case 376u: goto L_0899E2EC;
    case 377u: goto L_0899E2F4;
    case 378u: goto L_0899E304;
    case 379u: goto L_0899E30C;
    case 380u: goto L_0899E314;
    case 381u: goto L_0899E31C;
    case 382u: goto L_0899E324;
    case 383u: goto L_0899E32C;
    case 384u: goto L_0899E334;
    case 385u: goto L_0899E33C;
    case 386u: goto L_0899E344;
    case 387u: goto L_0899E348;
    case 388u: goto L_0899E350;
    case 389u: goto L_0899E370;
    case 390u: goto L_0899E378;
    case 391u: goto L_0899E37C;
    case 392u: goto L_0899E398;
    case 393u: goto L_0899E3A4;
    case 394u: goto L_0899E3B0;
    case 395u: goto L_0899E3C0;
    case 396u: goto L_0899E3D0;
    case 397u: goto L_0899E3D8;
    case 398u: goto L_0899E3E0;
    case 399u: goto L_0899E3EC;
    case 400u: goto L_0899E40C;
    case 401u: goto L_0899E414;
    case 402u: goto L_0899E444;
    case 403u: goto L_0899E454;
    case 404u: goto L_0899E460;
    case 405u: goto L_0899E470;
    case 406u: goto L_0899E478;
    case 407u: goto L_0899E498;
    case 408u: goto L_0899E4A0;
    case 409u: goto L_0899E4C4;
    case 410u: goto L_0899E4F0;
    case 411u: goto L_0899E4FC;
    case 412u: goto L_0899E50C;
    case 413u: goto L_0899E518;
    case 414u: goto L_0899E528;
    case 415u: goto L_0899E530;
    case 416u: goto L_0899E538;
    case 417u: goto L_0899E540;
    case 418u: goto L_0899E548;
    case 419u: goto L_0899E550;
    case 420u: goto L_0899E558;
    case 421u: goto L_0899E55C;
    case 422u: goto L_0899E570;
    case 423u: goto L_0899E580;
    case 424u: goto L_0899E598;
    case 425u: goto L_0899E5EC;
    case 426u: goto L_0899E5F8;
    case 427u: goto L_0899E600;
    case 428u: goto L_0899E610;
    case 429u: goto L_0899E618;
    case 430u: goto L_0899E620;
    case 431u: goto L_0899E62C;
    case 432u: goto L_0899E640;
    case 433u: goto L_0899E654;
    case 434u: goto L_0899E688;
    case 435u: goto L_0899E690;
    case 436u: goto L_0899E69C;
    case 437u: goto L_0899E6CC;
    case 438u: goto L_0899E6D4;
    case 439u: goto L_0899E6EC;
    case 440u: goto L_0899E6F4;
    case 441u: goto L_0899E6FC;
    case 442u: goto L_0899E70C;
    case 443u: goto L_0899E714;
    case 444u: goto L_0899E720;
    case 445u: goto L_0899E730;
    case 446u: goto L_0899E73C;
    case 447u: goto L_0899E748;
    case 448u: goto L_0899E784;
    case 449u: goto L_0899E830;
    case 450u: goto L_0899E84C;
    case 451u: goto L_0899E888;
    case 452u: goto L_0899E944;
    case 453u: goto L_0899E950;
    case 454u: goto L_0899E958;
    case 455u: goto L_0899E9C4;
    case 456u: goto L_0899E9D8;
    case 457u: goto L_0899E9E0;
    case 458u: goto L_0899E9F8;
    case 459u: goto L_0899EA34;
    case 460u: goto L_0899EA4C;
    case 461u: goto L_0899EA78;
    case 462u: goto L_0899EA90;
    case 463u: goto L_0899EAA8;
    case 464u: goto L_0899EAF4;
    case 465u: goto L_0899EAFC;
    case 466u: goto L_0899EB04;
    case 467u: goto L_0899EB0C;
    case 468u: goto L_0899EB14;
    case 469u: goto L_0899EB1C;
    case 470u: goto L_0899EB24;
    case 471u: goto L_0899EB2C;
    case 472u: goto L_0899EB34;
    case 473u: goto L_0899EB44;
    case 474u: goto L_0899EB4C;
    case 475u: goto L_0899EB54;
    case 476u: goto L_0899EB80;
    case 477u: goto L_0899EB90;
    case 478u: goto L_0899EB98;
    case 479u: goto L_0899EBB0;
    case 480u: goto L_0899EBC0;
    case 481u: goto L_0899EBC8;
    case 482u: goto L_0899EBD4;
    case 483u: goto L_0899EBE0;
    case 484u: goto L_0899EBEC;
    case 485u: goto L_0899EC04;
    case 486u: goto L_0899EC08;
    case 487u: goto L_0899EC18;
    case 488u: goto L_0899EC34;
    case 489u: goto L_0899EC3C;
    case 490u: goto L_0899EC44;
    case 491u: goto L_0899EC4C;
    case 492u: goto L_0899EC58;
    case 493u: goto L_0899EC60;
    case 494u: goto L_0899EC68;
    case 495u: goto L_0899EC70;
    case 496u: goto L_0899EC7C;
    case 497u: goto L_0899EC88;
    case 498u: goto L_0899EC8C;
    case 499u: goto L_0899EC9C;
    case 500u: goto L_0899ECB0;
    case 501u: goto L_0899ECB8;
    case 502u: goto L_0899ECC0;
    case 503u: goto L_0899ECE4;
    case 504u: goto L_0899ECF8;
    case 505u: goto L_0899ED08;
    case 506u: goto L_0899ED3C;
    case 507u: goto L_0899ED44;
    case 508u: goto L_0899ED4C;
    case 509u: goto L_0899ED58;
    case 510u: goto L_0899ED68;
    case 511u: goto L_0899ED84;
    case 512u: goto L_0899ED8C;
    case 513u: goto L_0899ED9C;
    case 514u: goto L_0899EDAC;
    case 515u: goto L_0899EDB0;
    case 516u: goto L_0899EDB8;
    case 517u: goto L_0899EDC0;
    case 518u: goto L_0899EDD8;
    case 519u: goto L_0899EDDC;
    case 520u: goto L_0899EDE0;
    case 521u: goto L_0899EE10;
    case 522u: goto L_0899EE18;
    case 523u: goto L_0899EE20;
    case 524u: goto L_0899EE28;
    case 525u: goto L_0899EE44;
    case 526u: goto L_0899EE4C;
    case 527u: goto L_0899EE58;
    case 528u: goto L_0899EE60;
    case 529u: goto L_0899EE88;
    case 530u: goto L_0899EE94;
    case 531u: goto L_0899EEA0;
    case 532u: goto L_0899EEB0;
    case 533u: goto L_0899EEB8;
    case 534u: goto L_0899EEC0;
    case 535u: goto L_0899EEC8;
    case 536u: goto L_0899EECC;
    case 537u: goto L_0899EEE8;
    case 538u: goto L_0899EEFC;
    case 539u: goto L_0899EF04;
    case 540u: goto L_0899EF18;
    case 541u: goto L_0899EF30;
    case 542u: goto L_0899EF40;
    case 543u: goto L_0899EF68;
    case 544u: goto L_0899EF90;
    case 545u: goto L_0899EFBC;
    case 546u: goto L_0899EFD0;
    case 547u: goto L_0899EFD8;
    case 548u: goto L_0899EFE0;
    case 549u: goto L_0899EFF4;
    case 550u: goto L_0899F000;
    case 551u: goto L_0899F00C;
    case 552u: goto L_0899F018;
    case 553u: goto L_0899F024;
    case 554u: goto L_0899F034;
    case 555u: goto L_0899F048;
    case 556u: goto L_0899F060;
    case 557u: goto L_0899F06C;
    case 558u: goto L_0899F078;
    case 559u: goto L_0899F080;
    case 560u: goto L_0899F088;
    case 561u: goto L_0899F09C;
    case 562u: goto L_0899F0A8;
    case 563u: goto L_0899F0C0;
    case 564u: goto L_0899F0C4;
    case 565u: goto L_0899F0E4;
    case 566u: goto L_0899F110;
    case 567u: goto L_0899F118;
    case 568u: goto L_0899F120;
    case 569u: goto L_0899F138;
    case 570u: goto L_0899F14C;
    case 571u: goto L_0899F154;
    case 572u: goto L_0899F15C;
    case 573u: goto L_0899F164;
    case 574u: goto L_0899F170;
    case 575u: goto L_0899F178;
    case 576u: goto L_0899F17C;
    case 577u: goto L_0899F184;
    case 578u: goto L_0899F18C;
    case 579u: goto L_0899F194;
    case 580u: goto L_0899F19C;
    case 581u: goto L_0899F1A8;
    case 582u: goto L_0899F1B0;
    case 583u: goto L_0899F1B8;
    case 584u: goto L_0899F1BC;
    case 585u: goto L_0899F1DC;
    case 586u: goto L_0899F200;
    case 587u: goto L_0899F224;
    case 588u: goto L_0899F22C;
    case 589u: goto L_0899F238;
    case 590u: goto L_0899F240;
    case 591u: goto L_0899F24C;
    case 592u: goto L_0899F254;
    case 593u: goto L_0899F25C;
    case 594u: goto L_0899F264;
    case 595u: goto L_0899F280;
    case 596u: goto L_0899F2A0;
    case 597u: goto L_0899F2AC;
    case 598u: goto L_0899F2C4;
    case 599u: goto L_0899F2D8;
    case 600u: goto L_0899F2E4;
    case 601u: goto L_0899F2F4;
    case 602u: goto L_0899F328;
    case 603u: goto L_0899F34C;
    case 604u: goto L_0899F364;
    case 605u: goto L_0899F36C;
    case 606u: goto L_0899F384;
    case 607u: goto L_0899F398;
    case 608u: goto L_0899F3A0;
    case 609u: goto L_0899F3AC;
    case 610u: goto L_0899F3C4;
    case 611u: goto L_0899F3D0;
    case 612u: goto L_0899F3D8;
    case 613u: goto L_0899F3E0;
    case 614u: goto L_0899F3E8;
    case 615u: goto L_0899F3F0;
    case 616u: goto L_0899F3FC;
    case 617u: goto L_0899F408;
    case 618u: goto L_0899F410;
    case 619u: goto L_0899F418;
    case 620u: goto L_0899F444;
    case 621u: goto L_0899F458;
    case 622u: goto L_0899F460;
    case 623u: goto L_0899F464;
    case 624u: goto L_0899F46C;
    case 625u: goto L_0899F478;
    case 626u: goto L_0899F480;
    case 627u: goto L_0899F490;
    case 628u: goto L_0899F49C;
    case 629u: goto L_0899F4A8;
    case 630u: goto L_0899F4C4;
    case 631u: goto L_0899F4D0;
    case 632u: goto L_0899F4DC;
    case 633u: goto L_0899F4E0;
    case 634u: goto L_0899F50C;
    case 635u: goto L_0899F520;
    case 636u: goto L_0899F52C;
    case 637u: goto L_0899F558;
    case 638u: goto L_0899F560;
    case 639u: goto L_0899F56C;
    case 640u: goto L_0899F578;
    case 641u: goto L_0899F580;
    case 642u: goto L_0899F588;
    case 643u: goto L_0899F594;
    case 644u: goto L_0899F59C;
    case 645u: goto L_0899F5A8;
    case 646u: goto L_0899F5B0;
    case 647u: goto L_0899F5DC;
    case 648u: goto L_0899F5E4;
    case 649u: goto L_0899F610;
    case 650u: goto L_0899F624;
    case 651u: goto L_0899F628;
    case 652u: goto L_0899F648;
    case 653u: goto L_0899F658;
    case 654u: goto L_0899F668;
    case 655u: goto L_0899F68C;
    case 656u: goto L_0899F69C;
    case 657u: goto L_0899F6C0;
    case 658u: goto L_0899F6C8;
    case 659u: goto L_0899F6E0;
    case 660u: goto L_0899F6F4;
    case 661u: goto L_0899F6FC;
    case 662u: goto L_0899F704;
    case 663u: goto L_0899F71C;
    case 664u: goto L_0899F720;
    case 665u: goto L_0899F730;
    case 666u: goto L_0899F73C;
    case 667u: goto L_0899F740;
    case 668u: goto L_0899F758;
    case 669u: goto L_0899F77C;
    case 670u: goto L_0899F78C;
    case 671u: goto L_0899F7AC;
    case 672u: goto L_0899F7B4;
    case 673u: goto L_0899F7CC;
    case 674u: goto L_0899F7E0;
    case 675u: goto L_0899F7E8;
    case 676u: goto L_0899F7F0;
    case 677u: goto L_0899F808;
    case 678u: goto L_0899F80C;
    case 679u: goto L_0899F81C;
    case 680u: goto L_0899F828;
    case 681u: goto L_0899F82C;
    case 682u: goto L_0899F844;
    case 683u: goto L_0899F864;
    case 684u: goto L_0899F87C;
    case 685u: goto L_0899F894;
    case 686u: goto L_0899F8A0;
    case 687u: goto L_0899F8B4;
    case 688u: goto L_0899F8D0;
    case 689u: goto L_0899F8D8;
    case 690u: goto L_0899F8E4;
    case 691u: goto L_0899F8F0;
    case 692u: goto L_0899F8F8;
    case 693u: goto L_0899F904;
    case 694u: goto L_0899F908;
    case 695u: goto L_0899F918;
    case 696u: goto L_0899F938;
    case 697u: goto L_0899F940;
    case 698u: goto L_0899F948;
    case 699u: goto L_0899F950;
    case 700u: goto L_0899F960;
    case 701u: goto L_0899F96C;
    case 702u: goto L_0899F974;
    case 703u: goto L_0899F990;
    case 704u: goto L_0899F99C;
    case 705u: goto L_0899F9A8;
    case 706u: goto L_0899F9BC;
    case 707u: goto L_0899F9D4;
    case 708u: goto L_0899F9DC;
    case 709u: goto L_0899FA00;
    case 710u: goto L_0899FA0C;
    case 711u: goto L_0899FA2C;
    case 712u: goto L_0899FA38;
    case 713u: goto L_0899FA44;
    case 714u: goto L_0899FA50;
    case 715u: goto L_0899FA54;
    case 716u: goto L_0899FA68;
    case 717u: goto L_0899FA80;
    case 718u: goto L_0899FA88;
    case 719u: goto L_0899FA90;
    case 720u: goto L_0899FAA0;
    case 721u: goto L_0899FAA8;
    case 722u: goto L_0899FAB0;
    case 723u: goto L_0899FAB8;
    case 724u: goto L_0899FAD8;
    case 725u: goto L_0899FAE0;
    case 726u: goto L_0899FAEC;
    case 727u: goto L_0899FB04;
    case 728u: goto L_0899FB0C;
    case 729u: goto L_0899FB14;
    case 730u: goto L_0899FB18;
    case 731u: goto L_0899FB28;
    case 732u: goto L_0899FB7C;
    case 733u: goto L_0899FB88;
    case 734u: goto L_0899FB94;
    case 735u: goto L_0899FBA0;
    case 736u: goto L_0899FBA4;
    case 737u: goto L_0899FBAC;
    case 738u: goto L_0899FBD8;
    case 739u: goto L_0899FBF4;
    case 740u: goto L_0899FC04;
    case 741u: goto L_0899FC0C;
    case 742u: goto L_0899FC10;
    case 743u: goto L_0899FC1C;
    case 744u: goto L_0899FC20;
    case 745u: goto L_0899FC44;
    case 746u: goto L_0899FC78;
    case 747u: goto L_0899FC84;
    case 748u: goto L_0899FCA0;
    case 749u: goto L_0899FCCC;
    case 750u: goto L_0899FCD4;
    case 751u: goto L_0899FCDC;
    case 752u: goto L_0899FCE8;
    case 753u: goto L_0899FCF0;
    case 754u: goto L_0899FCF4;
    case 755u: goto L_0899FD00;
    case 756u: goto L_0899FD0C;
    case 757u: goto L_0899FD14;
    case 758u: goto L_0899FD1C;
    case 759u: goto L_0899FD20;
    case 760u: goto L_0899FD28;
    case 761u: goto L_0899FD38;
    case 762u: goto L_0899FD3C;
    case 763u: goto L_0899FD48;
    case 764u: goto L_0899FD50;
    case 765u: goto L_0899FD70;
    case 766u: goto L_0899FDA8;
    case 767u: goto L_0899FDC4;
    case 768u: goto L_0899FDD8;
    case 769u: goto L_0899FDF8;
    case 770u: goto L_0899FE00;
    case 771u: goto L_0899FE10;
    case 772u: goto L_0899FE14;
    case 773u: goto L_0899FE24;
    case 774u: goto L_0899FE48;
    case 775u: goto L_0899FE64;
    case 776u: goto L_0899FE6C;
    case 777u: goto L_0899FE74;
    case 778u: goto L_0899FE84;
    case 779u: goto L_0899FE8C;
    case 780u: goto L_0899FE94;
    case 781u: goto L_0899FE9C;
    case 782u: goto L_0899FEA4;
    case 783u: goto L_0899FEAC;
    case 784u: goto L_0899FEB0;
    case 785u: goto L_0899FEB8;
    case 786u: goto L_0899FED4;
    case 787u: goto L_0899FEE8;
    case 788u: goto L_0899FF00;
    case 789u: goto L_0899FF08;
    case 790u: goto L_0899FF10;
    case 791u: goto L_0899FF24;
    case 792u: goto L_0899FF2C;
    case 793u: goto L_0899FF3C;
    case 794u: goto L_0899FF4C;
    case 795u: goto L_0899FF58;
    case 796u: goto L_0899FF88;
    case 797u: goto L_0899FFB0;
    case 798u: goto L_0899FFB4;
    case 799u: goto L_0899FFBC;
    case 800u: goto L_0899FFD8;
    case 801u: goto L_0899FFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0899C000:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[31] = (0x0899C01Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899C01Cu) goto L_0899C01C;
    return;
L_0899C01C:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(132)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0899C03C;
L_0899C03C:
    ctx.gpr[4] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899C140;
      }
      goto L_0899C048;
    }
L_0899C048:
    ctx.gpr[31] = (0x0899C050u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 273u, 0x08A2590Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C050u) goto L_0899C050;
    return;
L_0899C050:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
        goto L_0899C098;
    }
    goto L_0899C064;
L_0899C064:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0899C0C4;
      }
      goto L_0899C098;
    }
L_0899C098:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    goto L_0899C0C4;
L_0899C0C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
        goto L_0899C10C;
    }
    goto L_0899C0D8;
L_0899C0D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0899C138;
      }
      goto L_0899C10C;
    }
L_0899C10C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    goto L_0899C138;
L_0899C138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899C59C;
      }
      goto L_0899C140;
    }
L_0899C140:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 77u);
      if (branch_taken) {
          goto L_0899C1C0;
      }
      goto L_0899C14C;
    }
L_0899C14C:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899C1C0;
      }
      goto L_0899C154;
    }
L_0899C154:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(64))))));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[9] = (17204u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(45)));
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.fpr[18] = ctx.fpr[18] / ctx.fpr[19];
    ctx.gpr[31] = (0x0899C1B8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 433u, 0x08A279D8u>(ctx, &aot_mem) && ctx.pc == 0x0899C1B8u) goto L_0899C1B8;
    return;
L_0899C1B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899C59C;
      }
      goto L_0899C1C0;
    }
L_0899C1C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899C31C;
      }
      goto L_0899C1D0;
    }
L_0899C1D0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[26])) && ctx.fpr[13] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
      if (branch_taken) {
          goto L_0899C1F4;
      }
      goto L_0899C1E8;
    }
L_0899C1E8:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0899C2AC;
      }
      goto L_0899C1F4;
    }
L_0899C1F4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[18];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[26])) && ctx.fpr[13] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899C230;
      }
      goto L_0899C22C;
    }
L_0899C22C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_0899C230;
L_0899C230:
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899C268;
      }
      goto L_0899C264;
    }
L_0899C264:
    ctx.fpr[14] = ctx.fpr[30] - ctx.fpr[14];
    goto L_0899C268;
L_0899C268:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
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
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899C2AC;
      }
      goto L_0899C2A8;
    }
L_0899C2A8:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0899C2AC;
L_0899C2AC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(45)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[14];
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[13];
    ctx.gpr[31] = (0x0899C308u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 433u, 0x08A279D8u>(ctx, &aot_mem) && ctx.pc == 0x0899C308u) goto L_0899C308;
    return;
L_0899C308:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0899C59C;
      }
      goto L_0899C31C;
    }
L_0899C31C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899C450;
      }
      goto L_0899C32C;
    }
L_0899C32C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[31] = (0x0899C358u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 277u, 0x08A25970u>(ctx, &aot_mem) && ctx.pc == 0x0899C358u) goto L_0899C358;
    return;
L_0899C358:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899C3D8;
      }
      goto L_0899C360;
    }
L_0899C360:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[13] = std::sqrt(ctx.fpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899C3D0;
      }
      goto L_0899C3C4;
    }
L_0899C3C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0899C3D0;
L_0899C3D0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0899C3E4;
      }
      goto L_0899C3D8;
    }
L_0899C3D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    goto L_0899C3E4;
L_0899C3E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[18];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(45)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[19];
    ctx.gpr[31] = (0x0899C448u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 433u, 0x08A279D8u>(ctx, &aot_mem) && ctx.pc == 0x0899C448u) goto L_0899C448;
    return;
L_0899C448:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899C59C;
      }
      goto L_0899C450;
    }
L_0899C450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899C4E8;
      }
      goto L_0899C460;
    }
L_0899C460:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
        goto L_0899C488;
    }
    goto L_0899C480;
L_0899C480:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    goto L_0899C488;
L_0899C488:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[18];
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(45)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x0899C4E0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 386u, 0x08A27098u>(ctx, &aot_mem) && ctx.pc == 0x0899C4E0u) goto L_0899C4E0;
    return;
L_0899C4E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899C59C;
      }
      goto L_0899C4E8;
    }
L_0899C4E8:
    ctx.gpr[4] = (0u | 35u);
    if (ctx.gpr[20] != ctx.gpr[4]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_0899C558;
    }
    goto L_0899C4F4;
L_0899C4F4:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (15692u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[18];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(45)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[31] = (0x0899C550u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 386u, 0x08A27098u>(ctx, &aot_mem) && ctx.pc == 0x0899C550u) goto L_0899C550;
    return;
L_0899C550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899C59C;
      }
      goto L_0899C558;
    }
L_0899C558:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[17] = ctx.fpr[22] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(45)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[31] = (0x0899C59Cu);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 386u, 0x08A27098u>(ctx, &aot_mem) && ctx.pc == 0x0899C59Cu) goto L_0899C59C;
    return;
L_0899C59C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 636u, 0x0899BB88u>(ctx, &aot_mem); return;
      }
      goto L_0899C5A8;
    }
L_0899C5A8:
    ctx.gpr[31] = (0x0899C5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 302u, 0x08A25F64u>(ctx, &aot_mem) && ctx.pc == 0x0899C5B0u) goto L_0899C5B0;
    return;
L_0899C5B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(148));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < 82 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 615u, 0x0899BA80u>(ctx, &aot_mem); return;
      }
      goto L_0899C5C8;
    }
L_0899C5C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0899C5F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899C5F4u) goto L_0899C5F4;
    return;
L_0899C5F4:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x0899C600u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899C600u) goto L_0899C600;
    return;
L_0899C600:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x0899C60Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899C60Cu) goto L_0899C60C;
    return;
L_0899C60C:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x0899C618u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899C618u) goto L_0899C618;
    return;
L_0899C618:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x0899C624u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0899C624u) goto L_0899C624;
    return;
L_0899C624:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899C66C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24332)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24336)));
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[6] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24328), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2228u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-24308)));
    ctx.gpr[3] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24296)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24300)));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24292), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24284), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2228u << 16u);
    ctx.gpr[12] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-24320), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-24324), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (15744u << 16u);
    ctx.gpr[14] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[8] = (16281u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[15] = (2228u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-24316), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-24312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[24] = (2228u << 16u);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-24304), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[25] = (2228u << 16u);
    ctx.gpr[17] = (2229u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-29240));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-24288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899C768u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24280), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0899C768u) goto L_0899C768;
    return;
L_0899C768:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899C77C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899C798u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x0899C798u) goto L_0899C798;
    return;
L_0899C798:
    ctx.gpr[31] = (0x0899C7A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 576u, 0x08973B64u>(ctx, &aot_mem) && ctx.pc == 0x0899C7A0u) goto L_0899C7A0;
    return;
L_0899C7A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899C7B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899C7DCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C7DCu) goto L_0899C7DC;
    return;
L_0899C7DC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0899C7E8u);
    ctx.gpr[4] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0899C7E8u) goto L_0899C7E8;
    return;
L_0899C7E8:
    ctx.gpr[19] = (2229u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-29212));
      if (branch_taken) {
          goto L_0899C808;
      }
      goto L_0899C7FC;
    }
L_0899C7FC:
    ctx.gpr[31] = (0x0899C804u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 582u, 0x088063D8u>(ctx, &aot_mem) && ctx.pc == 0x0899C804u) goto L_0899C804;
    return;
L_0899C804:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0899C808;
L_0899C808:
    ctx.gpr[31] = (0x0899C810u);
    ctx.gpr[4] = (0u | 320u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x0899C810u) goto L_0899C810;
    return;
L_0899C810:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[11] = (0u | 17u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    goto L_0899C840;
L_0899C840:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[12] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0899C840;
      }
      goto L_0899C8A4;
    }
L_0899C8A4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899C8D4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 315u, 0x08869F20u>(ctx, &aot_mem) && ctx.pc == 0x0899C8D4u) goto L_0899C8D4;
    return;
L_0899C8D4:
    ctx.gpr[5] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (49049u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (16281u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0899C924u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 269u, 0x08A7D68Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C924u) goto L_0899C924;
    return;
L_0899C924:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899C950:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0899C9AC;
      }
      goto L_0899C994;
    }
L_0899C994:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0899C9A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0899C7B4;
L_0899C9A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_0899CB4C;
      }
      goto L_0899C9AC;
    }
L_0899C9AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (0x0899C9B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x0899C9B8u) goto L_0899C9B8;
    return;
L_0899C9B8:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0899C9E4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 276u, 0x08A1D818u>(ctx, &aot_mem) && ctx.pc == 0x0899C9E4u) goto L_0899C9E4;
    return;
L_0899C9E4:
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-29212));
    goto L_0899CA00;
L_0899CA00:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[31] = (0x0899CA98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 201u, 0x08930F64u>(ctx, &aot_mem) && ctx.pc == 0x0899CA98u) goto L_0899CA98;
    return;
L_0899CA98:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0899CAA4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x0899CAA4u) goto L_0899CAA4;
    return;
L_0899CAA4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0899CAB0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x0899CAB0u) goto L_0899CAB0;
    return;
L_0899CAB0:
    ctx.gpr[5] = (ctx.gpr[23] << 6u);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0899CAC4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 266u, 0x08A1D5BCu>(ctx, &aot_mem) && ctx.pc == 0x0899CAC4u) goto L_0899CAC4;
    return;
L_0899CAC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0899CAD8u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 643u, 0x088B7F1Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CAD8u) goto L_0899CAD8;
    return;
L_0899CAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
      if (branch_taken) {
          goto L_0899CA00;
      }
      goto L_0899CB48;
    }
L_0899CB48:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    goto L_0899CB4C;
L_0899CB4C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CB80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(-29212));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[30]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[8]);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0899CBDC;
      }
      goto L_0899CBD0;
    }
L_0899CBD0:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0899CBDCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_0899C7B4;
L_0899CBDC:
    ctx.gpr[31] = (0x0899CBE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CBE4u) goto L_0899CBE4;
    return;
L_0899CBE4:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (0u | 0u);
    goto L_0899CC14;
L_0899CC14:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0899CC28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 201u, 0x08930F64u>(ctx, &aot_mem) && ctx.pc == 0x0899CC28u) goto L_0899CC28;
    return;
L_0899CC28:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0899CC34u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x0899CC34u) goto L_0899CC34;
    return;
L_0899CC34:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0899CC40u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x0899CC40u) goto L_0899CC40;
    return;
L_0899CC40:
    ctx.gpr[7] = (ctx.gpr[23] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899CC58u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 643u, 0x088B7F1Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CC58u) goto L_0899CC58;
    return;
L_0899CC58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_0899CC14;
      }
      goto L_0899CCC4;
    }
L_0899CCC4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(60)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
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
L_0899CCFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899CD34u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x0899CD34u) goto L_0899CD34;
    return;
L_0899CD34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0899CD44u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 603u, 0x08973D2Cu>(ctx, &aot_mem) && ctx.pc == 0x0899CD44u) goto L_0899CD44;
    return;
L_0899CD44:
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
L_0899CD5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6872));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899CD7Cu);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 232u, 0x08A7D3ECu>(ctx, &aot_mem) && ctx.pc == 0x0899CD7Cu) goto L_0899CD7C;
    return;
L_0899CD7C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16780));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[31] = (0x0899CDA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28972));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0899CDA0u) goto L_0899CDA0;
    return;
L_0899CDA0:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 36u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6800));
    ctx.gpr[31] = (0x0899CDBCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18376));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 553u, 0x0886AEF4u>(ctx, &aot_mem) && ctx.pc == 0x0899CDBCu) goto L_0899CDBC;
    return;
L_0899CDBC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CDCC:
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
L_0899CDF8:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CE20:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CE38:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CE50:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CE6C:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CE88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    ctx.gpr[5] = (0u | 32u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[23] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0899CFC0;
      }
      goto L_0899CEFC;
    }
L_0899CEFC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    ctx.gpr[4] = (48460u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (0u | 200u);
    goto L_0899CF1C;
L_0899CF1C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x0899CF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899CF2Cu) goto L_0899CF2C;
    return;
L_0899CF2C:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0899CF4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899CF4Cu) goto L_0899CF4C;
    return;
L_0899CF4C:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0899CF80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0899CF80u) goto L_0899CF80;
    return;
L_0899CF80:
    ctx.gpr[11] = (ctx.gpr[2] & 65535u);
    ctx.gpr[11] = (ctx.gpr[11] & 1u);
    ctx.gpr[4] = (0u | 38u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0899CFB0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x0899CFB0u) goto L_0899CFB0;
    return;
L_0899CFB0:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899CF1C;
      }
      goto L_0899CFC0;
    }
L_0899CFC0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899CFFC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D010:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(325)));
    ctx.gpr[7] = (15820u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.gpr[8] = (15267u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] | 55050u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(34) ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0899D1A4;
      }
      goto L_0899D08C;
    }
L_0899D08C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17872)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D0A4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D19C;
      }
      goto L_0899D0B4;
    }
L_0899D0B4:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]) ^ 0x80000000u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_0899D0D0;
L_0899D0D0:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x0899D0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899D0E0u) goto L_0899D0E0;
    return;
L_0899D0E0:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0899D10Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899D10Cu) goto L_0899D10C;
    return;
L_0899D10C:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0899D12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899D12Cu) goto L_0899D12C;
    return;
L_0899D12C:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.fpr[28] = ctx.fpr[20] + ctx.fpr[28];
    ctx.gpr[31] = (0x0899D140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0899D140u) goto L_0899D140;
    return;
L_0899D140:
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.fpr[26] = ctx.fpr[20] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (0u | 51u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0899D184u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x0899D184u) goto L_0899D184;
    return;
L_0899D184:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899D0D0;
      }
      goto L_0899D194;
    }
L_0899D194:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_0899D19C;
L_0899D19C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D1A4;
      }
      goto L_0899D1A4;
    }
L_0899D1A4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D1E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899D208u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D208u) goto L_0899D208;
    return;
L_0899D208:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(668)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x0899D224u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x0899D224u) goto L_0899D224;
    return;
L_0899D224:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899D230u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x0899D230u) goto L_0899D230;
    return;
L_0899D230:
    ctx.gpr[7] = (ctx.gpr[16] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0899D248u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 643u, 0x088B7F1Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D248u) goto L_0899D248;
    return;
L_0899D248:
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
L_0899D264:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0899D298;
      }
      goto L_0899D280;
    }
L_0899D280:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0899D298u);
    ctx.gpr[6] = (0u | 162u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x0899D298u) goto L_0899D298;
    return;
L_0899D298:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D2A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1708)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 45u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0899D2E4;
      }
      goto L_0899D2C8;
    }
L_0899D2C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899D2D4u);
    ctx.gpr[5] = (0u | 258u);
    goto L_0899F0E4;
L_0899D2D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1708)));
    ctx.gpr[31] = (0x0899D2E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0899F2C4;
L_0899D2E0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1708), ctx.gpr[16]);
    goto L_0899D2E4;
L_0899D2E4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1780), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D2FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899D314u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0899D390;
L_0899D314:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D330;
      }
      goto L_0899D31C;
    }
L_0899D31C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
        goto L_0899D338;
    }
    goto L_0899D328;
L_0899D328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D340;
      }
      goto L_0899D330;
    }
L_0899D330:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899D37C;
      }
      goto L_0899D338;
    }
L_0899D338:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899D354;
      }
      goto L_0899D340;
    }
L_0899D340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0899D374;
      }
      goto L_0899D34C;
    }
L_0899D34C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D364;
      }
      goto L_0899D354;
    }
L_0899D354:
    ctx.gpr[31] = (0x0899D35Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 568u, 0x08A2E9FCu>(ctx, &aot_mem) && ctx.pc == 0x0899D35Cu) goto L_0899D35C;
    return;
L_0899D35C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D37C;
      }
      goto L_0899D364;
    }
L_0899D364:
    ctx.gpr[31] = (0x0899D36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0899D36Cu) goto L_0899D36C;
    return;
L_0899D36C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899D378;
      }
      goto L_0899D374;
    }
L_0899D374:
    ctx.gpr[17] = (0u | 1u);
    goto L_0899D378;
L_0899D378:
    ctx.gpr[2] = (ctx.gpr[17] & 255u);
    goto L_0899D37C;
L_0899D37C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D390:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899D3A8;
      }
      goto L_0899D3A0;
    }
L_0899D3A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899D3D0;
      }
      goto L_0899D3A8;
    }
L_0899D3A8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0899D3BCu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x0899D3BCu) goto L_0899D3BC;
    return;
L_0899D3BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 8u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 61 ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[4]);
    goto L_0899D3D0;
L_0899D3D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D3DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899D400u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x0899D400u) goto L_0899D400;
    return;
L_0899D400:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0899D40Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 339u, 0x089722CCu>(ctx, &aot_mem) && ctx.pc == 0x0899D40Cu) goto L_0899D40C;
    return;
L_0899D40C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (50298u << 16u);
      if (branch_taken) {
          goto L_0899D478;
      }
      goto L_0899D418;
    }
L_0899D418:
    ctx.gpr[16] = (0u | 36u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7792)));
    goto L_0899D428;
L_0899D428:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899D464;
      }
      goto L_0899D44C;
    }
L_0899D44C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D464;
      }
      goto L_0899D460;
    }
L_0899D460:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0899D464;
L_0899D464:
    ctx.gpr[31] = (0x0899D46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 342u, 0x088658A8u>(ctx, &aot_mem) && ctx.pc == 0x0899D46Cu) goto L_0899D46C;
    return;
L_0899D46C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7792)));
        goto L_0899D428;
    }
    goto L_0899D478;
L_0899D478:
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
L_0899D494:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899D4D4u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_0899E1A0;
L_0899D4D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D50C;
      }
      goto L_0899D4DC;
    }
L_0899D4DC:
    ctx.gpr[31] = (0x0899D4E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 520u, 0x08A8B1A4u>(ctx, &aot_mem) && ctx.pc == 0x0899D4E4u) goto L_0899D4E4;
    return;
L_0899D4E4:
    ctx.gpr[31] = (0x0899D4ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x0899D4ECu) goto L_0899D4EC;
    return;
L_0899D4EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0899D4F8u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 339u, 0x089722CCu>(ctx, &aot_mem) && ctx.pc == 0x0899D4F8u) goto L_0899D4F8;
    return;
L_0899D4F8:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[23] = (2230u << 16u);
      if (branch_taken) {
          goto L_0899D514;
      }
      goto L_0899D504;
    }
L_0899D504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D574;
      }
      goto L_0899D50C;
    }
L_0899D50C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D6C4;
      }
      goto L_0899D514;
    }
L_0899D514:
    ctx.gpr[30] = (0u | 36u);
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7792)));
    goto L_0899D520;
L_0899D520:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899D560;
      }
      goto L_0899D544;
    }
L_0899D544:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D560;
      }
      goto L_0899D558;
    }
L_0899D558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D574;
      }
      goto L_0899D560;
    }
L_0899D560:
    ctx.gpr[31] = (0x0899D568u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 342u, 0x088658A8u>(ctx, &aot_mem) && ctx.pc == 0x0899D568u) goto L_0899D568;
    return;
L_0899D568:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[22] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7792)));
        goto L_0899D520;
    }
    goto L_0899D574;
L_0899D574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D5A0;
      }
      goto L_0899D588;
    }
L_0899D588:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D5A0;
      }
      goto L_0899D590;
    }
L_0899D590:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0899D5A0;
L_0899D5A0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D5C0;
      }
      goto L_0899D5A8;
    }
L_0899D5A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899D6C4;
      }
      goto L_0899D5C0;
    }
L_0899D5C0:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 31u));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    goto L_0899D5C8;
L_0899D5C8:
    ctx.gpr[31] = (0x0899D5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0899D5D0u) goto L_0899D5D0;
    return;
L_0899D5D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0899D5E4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0899D5E4u) goto L_0899D5E4;
    return;
L_0899D5E4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0899D60C;
      }
      goto L_0899D600;
    }
L_0899D600:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899D5C8;
      }
      goto L_0899D60C;
    }
L_0899D60C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (16448u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0899D624u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x0899D624u) goto L_0899D624;
    return;
L_0899D624:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899D63Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12848));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x0899D63Cu) goto L_0899D63C;
    return;
L_0899D63C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D6B8;
      }
      goto L_0899D654;
    }
L_0899D654:
    ctx.gpr[31] = (0x0899D65Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0899D65Cu) goto L_0899D65C;
    return;
L_0899D65C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28856)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0899D674u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0899D674u) goto L_0899D674;
    return;
L_0899D674:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28844)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28848)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0899D6C4;
      }
      goto L_0899D6B8;
    }
L_0899D6B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_0899D6C4;
L_0899D6C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D6F4:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D700:
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
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D728:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D740:
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
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D750:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D764:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0899D78Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0899D78Cu) goto L_0899D78C;
    return;
L_0899D78C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0899D7A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x0899D7A0u) goto L_0899D7A0;
    return;
L_0899D7A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D7B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D7C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D828:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(320), static_cast<std::uint16_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(300), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D83C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0899D87C;
      }
      goto L_0899D868;
    }
L_0899D868:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0899D87C;
L_0899D87C:
    ctx.gpr[31] = (0x0899D884u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0899D884u) goto L_0899D884;
    return;
L_0899D884:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899D950;
      }
      goto L_0899D88C;
    }
L_0899D88C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D950;
      }
      goto L_0899D898;
    }
L_0899D898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0899D950;
      }
      goto L_0899D8A4;
    }
L_0899D8A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 91u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 92u);
      if (branch_taken) {
          goto L_0899D8BC;
      }
      goto L_0899D8B4;
    }
L_0899D8B4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0899D8D4;
      }
      goto L_0899D8BC;
    }
L_0899D8BC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0899D8C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 160u, 0x08864B68u>(ctx, &aot_mem) && ctx.pc == 0x0899D8C8u) goto L_0899D8C8;
    return;
L_0899D8C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_0899D950;
      }
      goto L_0899D8D4;
    }
L_0899D8D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(672)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899D928;
      }
      goto L_0899D8E4;
    }
L_0899D8E4:
    ctx.gpr[31] = (0x0899D8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0899D8ECu) goto L_0899D8EC;
    return;
L_0899D8EC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28836)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28840)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0899D904u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0899D904u) goto L_0899D904;
    return;
L_0899D904:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0899D930;
      }
      goto L_0899D920;
    }
L_0899D920:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0899D934;
      }
      goto L_0899D928;
    }
L_0899D928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D950;
      }
      goto L_0899D930;
    }
L_0899D930:
    ctx.gpr[4] = (0u | 0u);
    goto L_0899D934;
L_0899D934:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D948;
      }
      goto L_0899D93C;
    }
L_0899D93C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0899D950;
      }
      goto L_0899D948;
    }
L_0899D948:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(65))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0899D950;
L_0899D950:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D964:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_0899D97C;
      }
      goto L_0899D974;
    }
L_0899D974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899D990;
      }
      goto L_0899D97C;
    }
L_0899D97C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1984), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1988), ctx.gpr[5]);
    goto L_0899D990;
L_0899D990:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D998:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899D9ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 731u, 0x08B034C4u>(ctx, &aot_mem) && ctx.pc == 0x0899D9ACu) goto L_0899D9AC;
    return;
L_0899D9AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D9B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899D9D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 739u, 0x08B03584u>(ctx, &aot_mem) && ctx.pc == 0x0899D9D0u) goto L_0899D9D0;
    return;
L_0899D9D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D9DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899D9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 695u, 0x08A2F11Cu>(ctx, &aot_mem) && ctx.pc == 0x0899D9ECu) goto L_0899D9EC;
    return;
L_0899D9EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899D9F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899DA10u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 598u, 0x08A2EB48u>(ctx, &aot_mem) && ctx.pc == 0x0899DA10u) goto L_0899DA10;
    return;
L_0899DA10:
    ctx.gpr[31] = (0x0899DA18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 304u, 0x088656A0u>(ctx, &aot_mem) && ctx.pc == 0x0899DA18u) goto L_0899DA18;
    return;
L_0899DA18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0899DA24u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(668));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 273u, 0x08865350u>(ctx, &aot_mem) && ctx.pc == 0x0899DA24u) goto L_0899DA24;
    return;
L_0899DA24:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21204)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_0899DA5C;
      }
      goto L_0899DA50;
    }
L_0899DA50:
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_0899DA5C;
L_0899DA5C:
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899DA9C;
      }
      goto L_0899DA74;
    }
L_0899DA74:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0899DA90;
      }
      goto L_0899DA84;
    }
L_0899DA84:
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_0899DA90;
L_0899DA90:
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0899DA9C;
L_0899DA9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x0899DAA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0899DB34;
L_0899DAA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[6] = (0u | 3u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x0899DAC8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899DAC8u) goto L_0899DAC8;
    return;
L_0899DAC8:
    ctx.gpr[31] = (0x0899DAD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 59u, 0x089A0464u>(ctx, &aot_mem) && ctx.pc == 0x0899DAD0u) goto L_0899DAD0;
    return;
L_0899DAD0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_0899DAE8;
    }
    goto L_0899DAD8;
L_0899DAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_0899DAE8;
L_0899DAE8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27768)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(752));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899DB18;
      }
      goto L_0899DB0C;
    }
L_0899DB0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0899DB18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0899C7B4;
L_0899DB18:
    ctx.gpr[31] = (0x0899DB20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 762u, 0x08A2F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0899DB20u) goto L_0899DB20;
    return;
L_0899DB20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DB34:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7860)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1380), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DB50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899DB78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0899DB78u) goto L_0899DB78;
    return;
L_0899DB78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899DB98;
      }
      goto L_0899DB90;
    }
L_0899DB90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0899DB9C;
      }
      goto L_0899DB98;
    }
L_0899DB98:
    ctx.gpr[2] = (0u | 0u);
    goto L_0899DB9C;
L_0899DB9C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DBA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899DBBCu);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0899DBBCu) goto L_0899DBBC;
    return;
L_0899DBBC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DBC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899DBECu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0899DBECu) goto L_0899DBEC;
    return;
L_0899DBEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[24] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0899DC3C;
      }
      goto L_0899DBF4;
    }
L_0899DBF4:
    ctx.gpr[31] = (0x0899DBFCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0899DBFCu) goto L_0899DBFC;
    return;
L_0899DBFC:
    ctx.gpr[31] = (0x0899DC04u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 859u, 0x08A97538u>(ctx, &aot_mem) && ctx.pc == 0x0899DC04u) goto L_0899DC04;
    return;
L_0899DC04:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0899DC14u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0899DC14u) goto L_0899DC14;
    return;
L_0899DC14:
    ctx.gpr[31] = (0x0899DC1Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 868u, 0x08A9759Cu>(ctx, &aot_mem) && ctx.pc == 0x0899DC1Cu) goto L_0899DC1C;
    return;
L_0899DC1C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899DC44;
      }
      goto L_0899DC34;
    }
L_0899DC34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899DC8C;
      }
      goto L_0899DC3C;
    }
L_0899DC3C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_0899DCA8;
      }
      goto L_0899DC44;
    }
L_0899DC44:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899DC68;
      }
      goto L_0899DC54;
    }
L_0899DC54:
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0899DC9C;
      }
      goto L_0899DC68;
    }
L_0899DC68:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899DC9C;
      }
      goto L_0899DC78;
    }
L_0899DC78:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0899DC9C;
      }
      goto L_0899DC8C;
    }
L_0899DC8C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x0899DC98u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0899DC98u) goto L_0899DC98;
    return;
L_0899DC98:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3188), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0899DC9C;
L_0899DC9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3188)));
    ctx.gpr[31] = (0x0899DCA8u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x0899DCA8u) goto L_0899DCA8;
    return;
L_0899DCA8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DCC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899DCE4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x0899DCE4u) goto L_0899DCE4;
    return;
L_0899DCE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 8u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 60 ? 1u : 0u);
      if (branch_taken) {
          goto L_0899DD1C;
      }
      goto L_0899DCF0;
    }
L_0899DCF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899DD1C;
      }
      goto L_0899DCF8;
    }
L_0899DCF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899DD14;
      }
      goto L_0899DD04;
    }
L_0899DD04:
    ctx.gpr[31] = (0x0899DD0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0899DD0Cu) goto L_0899DD0C;
    return;
L_0899DD0C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899DD24;
      }
      goto L_0899DD14;
    }
L_0899DD14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0899DD28;
      }
      goto L_0899DD1C;
    }
L_0899DD1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899DD28;
      }
      goto L_0899DD24;
    }
L_0899DD24:
    ctx.gpr[2] = (0u | 0u);
    goto L_0899DD28;
L_0899DD28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DD38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_0899DEA8;
      }
      goto L_0899DD94;
    }
L_0899DD94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[7] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899DEA8;
      }
      goto L_0899DDC4;
    }
L_0899DDC4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899DE58;
      }
      goto L_0899DE0C;
    }
L_0899DE0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x0899DE48u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 478u, 0x088C68F4u>(ctx, &aot_mem) && ctx.pc == 0x0899DE48u) goto L_0899DE48;
    return;
L_0899DE48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899DEA0;
      }
      goto L_0899DE50;
    }
L_0899DE50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899DEAC;
      }
      goto L_0899DE58;
    }
L_0899DE58:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0899DE90u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 478u, 0x088C68F4u>(ctx, &aot_mem) && ctx.pc == 0x0899DE90u) goto L_0899DE90;
    return;
L_0899DE90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899DEA0;
      }
      goto L_0899DE98;
    }
L_0899DE98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899DEAC;
      }
      goto L_0899DEA0;
    }
L_0899DEA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0899DEAC;
      }
      goto L_0899DEA8;
    }
L_0899DEA8:
    ctx.gpr[2] = (0u | 0u);
    goto L_0899DEAC;
L_0899DEAC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899DEB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0899E084;
      }
      goto L_0899DEE8;
    }
L_0899DEE8:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[8] = (ctx.gpr[19] << 2u);
    ctx.gpr[8] = (ctx.gpr[17] + ctx.gpr[8]);
    ctx.gpr[2] = (ctx.gpr[5] << 2u);
    ctx.gpr[2] = (ctx.gpr[17] + ctx.gpr[2]);
    goto L_0899DF64;
L_0899DF64:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    goto L_0899DF6C;
L_0899DF6C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899DFC8;
      }
      goto L_0899DF74;
    }
L_0899DF74:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899DFC8;
      }
      goto L_0899DFB8;
    }
L_0899DFB8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0899DF6C;
      }
      goto L_0899DFC8;
    }
L_0899DFC8:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E024;
      }
      goto L_0899DFD0;
    }
L_0899DFD0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899E024;
      }
      goto L_0899E014;
    }
L_0899E014:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0899DFC8;
      }
      goto L_0899E024;
    }
L_0899E024:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899E054;
      }
      goto L_0899E030;
    }
L_0899E030:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    goto L_0899E054;
L_0899E054:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899DF64;
      }
      goto L_0899E05C;
    }
L_0899E05C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899E070u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0899DEB8;
L_0899E070:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0899E084u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_0899DEB8;
L_0899E084:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E0A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0899E0E8;
      }
      goto L_0899E0D0;
    }
L_0899E0D0:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[22])) && ctx.fpr[13] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899E0E8;
      }
      goto L_0899E0E0;
    }
L_0899E0E0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_0899E0F4;
      }
      goto L_0899E0E8;
    }
L_0899E0E8:
    ctx.gpr[31] = (0x0899E0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0899E0F0u) goto L_0899E0F0;
    return;
L_0899E0F0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0899E0F4;
L_0899E0F4:
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (16201u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16329u << 16u);
      if (branch_taken) {
          goto L_0899E13C;
      }
      goto L_0899E118;
    }
L_0899E118:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0899E124;
L_0899E124:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899E124;
      }
      goto L_0899E138;
    }
L_0899E138:
    ctx.gpr[4] = (16329u << 16u);
    goto L_0899E13C;
L_0899E13C:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899E16C;
      }
      goto L_0899E15C;
    }
L_0899E15C:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E15C;
      }
      goto L_0899E16C;
    }
L_0899E16C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E180:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899E194u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_0899E0A0;
L_0899E194:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E1A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 39 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E1E0;
      }
      goto L_0899E1B0;
    }
L_0899E1B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
      if (branch_taken) {
          goto L_0899E1E0;
      }
      goto L_0899E1C0;
    }
L_0899E1C0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899E1E0;
      }
      goto L_0899E1C8;
    }
L_0899E1C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899E1E8;
      }
      goto L_0899E1E0;
    }
L_0899E1E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899E1EC;
      }
      goto L_0899E1E8;
    }
L_0899E1E8:
    ctx.gpr[2] = (0u | 1u);
    goto L_0899E1EC;
L_0899E1EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E1F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 47 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899E20C;
      }
      goto L_0899E204;
    }
L_0899E204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899E210;
      }
      goto L_0899E20C;
    }
L_0899E20C:
    ctx.gpr[2] = (0u | 1u);
    goto L_0899E210;
L_0899E210:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 45u);
      if (branch_taken) {
          goto L_0899E240;
      }
      goto L_0899E228;
    }
L_0899E228:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 54u);
      if (branch_taken) {
          goto L_0899E240;
      }
      goto L_0899E230;
    }
L_0899E230:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 55u);
      if (branch_taken) {
          goto L_0899E240;
      }
      goto L_0899E238;
    }
L_0899E238:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899E248;
      }
      goto L_0899E240;
    }
L_0899E240:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0899E24C;
      }
      goto L_0899E248;
    }
L_0899E248:
    ctx.gpr[2] = (0u | 0u);
    goto L_0899E24C;
L_0899E24C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 39 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 22u);
      if (branch_taken) {
          goto L_0899E294;
      }
      goto L_0899E264;
    }
L_0899E264:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_0899E294;
      }
      goto L_0899E26C;
    }
L_0899E26C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 17u);
      if (branch_taken) {
          goto L_0899E294;
      }
      goto L_0899E274;
    }
L_0899E274:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 31u);
      if (branch_taken) {
          goto L_0899E294;
      }
      goto L_0899E27C;
    }
L_0899E27C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_0899E294;
      }
      goto L_0899E284;
    }
L_0899E284:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0899E294;
      }
      goto L_0899E28C;
    }
L_0899E28C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899E29C;
      }
      goto L_0899E294;
    }
L_0899E294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899E2A0;
      }
      goto L_0899E29C;
    }
L_0899E29C:
    ctx.gpr[2] = (0u | 1u);
    goto L_0899E2A0;
L_0899E2A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E2A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 55u);
      if (branch_taken) {
          goto L_0899E2E0;
      }
      goto L_0899E2B8;
    }
L_0899E2B8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 62u);
      if (branch_taken) {
          goto L_0899E2E0;
      }
      goto L_0899E2C0;
    }
L_0899E2C0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_0899E2E0;
      }
      goto L_0899E2C8;
    }
L_0899E2C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 56u);
      if (branch_taken) {
          goto L_0899E2E0;
      }
      goto L_0899E2D0;
    }
L_0899E2D0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 59u);
      if (branch_taken) {
          goto L_0899E2E0;
      }
      goto L_0899E2D8;
    }
L_0899E2D8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899E2E8;
      }
      goto L_0899E2E0;
    }
L_0899E2E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899E2EC;
      }
      goto L_0899E2E8;
    }
L_0899E2E8:
    ctx.gpr[2] = (0u | 1u);
    goto L_0899E2EC;
L_0899E2EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E2F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_0899E33C;
      }
      goto L_0899E304;
    }
L_0899E304:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_0899E33C;
      }
      goto L_0899E30C;
    }
L_0899E30C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899E33C;
      }
      goto L_0899E314;
    }
L_0899E314:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 22u);
      if (branch_taken) {
          goto L_0899E33C;
      }
      goto L_0899E31C;
    }
L_0899E31C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_0899E33C;
      }
      goto L_0899E324;
    }
L_0899E324:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 17u);
      if (branch_taken) {
          goto L_0899E33C;
      }
      goto L_0899E32C;
    }
L_0899E32C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 41u);
      if (branch_taken) {
          goto L_0899E33C;
      }
      goto L_0899E334;
    }
L_0899E334:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899E344;
      }
      goto L_0899E33C;
    }
L_0899E33C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0899E348;
      }
      goto L_0899E344;
    }
L_0899E344:
    ctx.gpr[2] = (0u | 0u);
    goto L_0899E348;
L_0899E348:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E350:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0899E378;
      }
      goto L_0899E370;
    }
L_0899E370:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 2000u);
      if (branch_taken) {
          goto L_0899E37C;
      }
      goto L_0899E378;
    }
L_0899E378:
    ctx.gpr[7] = (0u | 250u);
    goto L_0899E37C;
L_0899E37C:
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0899E398u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1312));
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 432u, 0x089AE34Cu>(ctx, &aot_mem) && ctx.pc == 0x0899E398u) goto L_0899E398;
    return;
L_0899E398:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E3A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E3D8;
      }
      goto L_0899E3B0;
    }
L_0899E3B0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(836)));
    ctx.gpr[8] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0899E3D8;
      }
      goto L_0899E3C0;
    }
L_0899E3C0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[8] = (0u | 21u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
        goto L_0899E3E0;
    }
    goto L_0899E3D0;
L_0899E3D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E3EC;
      }
      goto L_0899E3D8;
    }
L_0899E3D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E498;
      }
      goto L_0899E3E0;
    }
L_0899E3E0:
    ctx.gpr[8] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    ctx.gpr[4] = (15841u << 16u);
      if (branch_taken) {
          goto L_0899E414;
      }
      goto L_0899E3EC;
    }
L_0899E3EC:
    ctx.gpr[4] = (ctx.gpr[7] ^ 20u);
    ctx.gpr[7] = (ctx.gpr[7] ^ 5u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899E444;
      }
      goto L_0899E40C;
    }
L_0899E40C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E498;
      }
      goto L_0899E414;
    }
L_0899E414:
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0899E498;
      }
      goto L_0899E444;
    }
L_0899E444:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28832));
    goto L_0899E454;
L_0899E454:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_0899E478;
    }
    goto L_0899E460;
L_0899E460:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0899E454;
      }
      goto L_0899E470;
    }
L_0899E470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E498;
      }
      goto L_0899E478;
    }
L_0899E478:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0899E498;
      }
      goto L_0899E498;
    }
L_0899E498:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E4A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 4096u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E4F0;
      }
      goto L_0899E4C4;
    }
L_0899E4C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[6] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0899E4F0;
L_0899E4F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E600;
      }
      goto L_0899E4FC;
    }
L_0899E4FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(543)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E600;
      }
      goto L_0899E50C;
    }
L_0899E50C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E600;
      }
      goto L_0899E518;
    }
L_0899E518:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_0899E550;
      }
      goto L_0899E528;
    }
L_0899E528:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_0899E548;
      }
      goto L_0899E530;
    }
L_0899E530:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_0899E558;
      }
      goto L_0899E538;
    }
L_0899E538:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899E55C;
      }
      goto L_0899E540;
    }
L_0899E540:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_0899E55C;
      }
      goto L_0899E548;
    }
L_0899E548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0899E55C;
      }
      goto L_0899E550;
    }
L_0899E550:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0899E55C;
      }
      goto L_0899E558;
    }
L_0899E558:
    ctx.gpr[4] = (0u | 8u);
    goto L_0899E55C;
L_0899E55C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(543)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E600;
      }
      goto L_0899E570;
    }
L_0899E570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899E600;
      }
      goto L_0899E580;
    }
L_0899E580:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899E598u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 469u, 0x0888E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0899E598u) goto L_0899E598;
    return;
L_0899E598:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899E600;
      }
      goto L_0899E5EC;
    }
L_0899E5EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899E5F8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0899E5F8u) goto L_0899E5F8;
    return;
L_0899E5F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E640;
      }
      goto L_0899E600;
    }
L_0899E600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899E62C;
      }
      goto L_0899E610;
    }
L_0899E610:
    ctx.gpr[31] = (0x0899E618u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0899E618u) goto L_0899E618;
    return;
L_0899E618:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899E62C;
      }
      goto L_0899E620;
    }
L_0899E620:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899E62Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0899E62Cu) goto L_0899E62C;
    return;
L_0899E62C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0899E640;
L_0899E640:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E654:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1772)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E690;
      }
      goto L_0899E688;
    }
L_0899E688:
    ctx.gpr[31] = (0x0899E690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 96u, 0x089A0718u>(ctx, &aot_mem) && ctx.pc == 0x0899E690u) goto L_0899E690;
    return;
L_0899E690:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899E69C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 51 ? 1u : 0u);
      if (branch_taken) {
          goto L_0899E6D4;
      }
      goto L_0899E6CC;
    }
L_0899E6CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899E6F4;
      }
      goto L_0899E6D4;
    }
L_0899E6D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899E6FC;
      }
      goto L_0899E6EC;
    }
L_0899E6EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EA34;
      }
      goto L_0899E6F4;
    }
L_0899E6F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EA34;
      }
      goto L_0899E6FC;
    }
L_0899E6FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899EA34;
      }
      goto L_0899E70C;
    }
L_0899E70C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EA34;
      }
      goto L_0899E714;
    }
L_0899E714:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EA34;
      }
      goto L_0899E720;
    }
L_0899E720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899EA34;
      }
      goto L_0899E730;
    }
L_0899E730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899EA34;
      }
      goto L_0899E73C;
    }
L_0899E73C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899EA34;
      }
      goto L_0899E748;
    }
L_0899E748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11468)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EA34;
      }
      goto L_0899E784;
    }
L_0899E784:
    ctx.fpr[17] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (15502u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64012u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (16288u << 16u);
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0899E84C;
      }
      goto L_0899E830;
    }
L_0899E830:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0899E888;
      }
      goto L_0899E84C;
    }
L_0899E84C:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_0899E888;
L_0899E888:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = ctx.fpr[19] - ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[18];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0899EA34;
      }
      goto L_0899E944;
    }
L_0899E944:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0899E950u);
    ctx.gpr[6] = (0u | 0u);
    goto L_0899DD38;
L_0899E950:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EA34;
      }
      goto L_0899E958;
    }
L_0899E958:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (16201u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (ctx.gpr[6] & 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0899EA34;
      }
      goto L_0899E9C4;
    }
L_0899E9C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0899E9D8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x0899E9D8u) goto L_0899E9D8;
    return;
L_0899E9D8:
    ctx.gpr[31] = (0x0899E9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0899E9E0u) goto L_0899E9E0;
    return;
L_0899E9E0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28756)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28760)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0899E9F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0899E9F8u) goto L_0899E9F8;
    return;
L_0899E9F8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28748)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28752)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0899EA34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0899FEE8;
L_0899EA34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899EA4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(916)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(872)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1080), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0899EA90;
      }
      goto L_0899EA78;
    }
L_0899EA78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(916)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899EB1C;
      }
      goto L_0899EA90;
    }
L_0899EA90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EB04;
      }
      goto L_0899EAA8;
    }
L_0899EAA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0899EAF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 508u, 0x089AA458u>(ctx, &aot_mem) && ctx.pc == 0x0899EAF4u) goto L_0899EAF4;
    return;
L_0899EAF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899EB34;
      }
      goto L_0899EAFC;
    }
L_0899EAFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EB80;
      }
      goto L_0899EB04;
    }
L_0899EB04:
    ctx.gpr[31] = (0x0899EB0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x0899EB0Cu) goto L_0899EB0C;
    return;
L_0899EB0C:
    ctx.gpr[31] = (0x0899EB14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899EB14u) goto L_0899EB14;
    return;
L_0899EB14:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(916), 0u);
      if (branch_taken) {
          goto L_0899EB80;
      }
      goto L_0899EB1C;
    }
L_0899EB1C:
    ctx.gpr[31] = (0x0899EB24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x0899EB24u) goto L_0899EB24;
    return;
L_0899EB24:
    ctx.gpr[31] = (0x0899EB2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899EB2Cu) goto L_0899EB2C;
    return;
L_0899EB2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(916), 0u);
      if (branch_taken) {
          goto L_0899EB80;
      }
      goto L_0899EB34;
    }
L_0899EB34:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(904))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899EB80;
      }
      goto L_0899EB44;
    }
L_0899EB44:
    ctx.gpr[31] = (0x0899EB4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x0899EB4Cu) goto L_0899EB4C;
    return;
L_0899EB4C:
    ctx.gpr[31] = (0x0899EB54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899EB54u) goto L_0899EB54;
    return;
L_0899EB54:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(916)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1200)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1204)));
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(908)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1184));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0899EB80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 432u, 0x089AE34Cu>(ctx, &aot_mem) && ctx.pc == 0x0899EB80u) goto L_0899EB80;
    return;
L_0899EB80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899EB90:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899EB98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1972)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0899EC08;
      }
      goto L_0899EBB0;
    }
L_0899EBB0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(640), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(656), 0u);
    ctx.gpr[31] = (0x0899EBC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 743u, 0x089AB604u>(ctx, &aot_mem) && ctx.pc == 0x0899EBC0u) goto L_0899EBC0;
    return;
L_0899EBC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1972), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0899EC04;
      }
      goto L_0899EBC8;
    }
L_0899EBC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899EBEC;
      }
      goto L_0899EBD4;
    }
L_0899EBD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899EBEC;
      }
      goto L_0899EBE0;
    }
L_0899EBE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1972), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1976), 0u);
      if (branch_taken) {
          goto L_0899EC08;
      }
      goto L_0899EBEC;
    }
L_0899EBEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1980)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1976), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0899EC08;
      }
      goto L_0899EC04;
    }
L_0899EC04:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1976), 0u);
    goto L_0899EC08;
L_0899EC08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899EC18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EC4C;
      }
      goto L_0899EC34;
    }
L_0899EC34:
    ctx.gpr[31] = (0x0899EC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 568u, 0x08A2E9FCu>(ctx, &aot_mem) && ctx.pc == 0x0899EC3Cu) goto L_0899EC3C;
    return;
L_0899EC3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899EC4C;
      }
      goto L_0899EC44;
    }
L_0899EC44:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1972), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(640), 0u);
    goto L_0899EC4C;
L_0899EC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EC70;
      }
      goto L_0899EC58;
    }
L_0899EC58:
    ctx.gpr[31] = (0x0899EC60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 568u, 0x08A2E9FCu>(ctx, &aot_mem) && ctx.pc == 0x0899EC60u) goto L_0899EC60;
    return;
L_0899EC60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899EC70;
      }
      goto L_0899EC68;
    }
L_0899EC68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1972), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(656), 0u);
    goto L_0899EC70;
L_0899EC70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899EC8C;
      }
      goto L_0899EC7C;
    }
L_0899EC7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899EC8C;
      }
      goto L_0899EC88;
    }
L_0899EC88:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1972), 0u);
    goto L_0899EC8C;
L_0899EC8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899EC9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899ECB0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0899E1A0;
L_0899ECB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899ECC0;
      }
      goto L_0899ECB8;
    }
L_0899ECB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899ECF8;
      }
      goto L_0899ECC0;
    }
L_0899ECC0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899ECE4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0899ECE4u) goto L_0899ECE4;
    return;
L_0899ECE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0899ECF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x0899ECF8u) goto L_0899ECF8;
    return;
L_0899ECF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899ED08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0899ED44;
      }
      goto L_0899ED3C;
    }
L_0899ED3C:
    ctx.gpr[31] = (0x0899ED44u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1724));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0899ED44u) goto L_0899ED44;
    return;
L_0899ED44:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1724), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0899ED58;
      }
      goto L_0899ED4C;
    }
L_0899ED4C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1724));
    ctx.gpr[31] = (0x0899ED58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0899ED58u) goto L_0899ED58;
    return;
L_0899ED58:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2232u << 16u);
      if (branch_taken) {
          goto L_0899EF40;
      }
      goto L_0899ED68;
    }
L_0899ED68:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0899EDB8;
      }
      goto L_0899ED84;
    }
L_0899ED84:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_0899ED8C;
L_0899ED8C:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
        goto L_0899EDAC;
    }
    goto L_0899ED9C;
L_0899ED9C:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0899EDB0;
      }
      goto L_0899EDAC;
    }
L_0899EDAC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_0899EDB0;
L_0899EDB0:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_0899ED8C;
    }
    goto L_0899EDB8;
L_0899EDB8:
    if (ctx.gpr[6] == ctx.gpr[5]) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_0899EDDC;
    }
    goto L_0899EDC0;
L_0899EDC0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
        goto L_0899EDE0;
    }
    goto L_0899EDD8;
L_0899EDD8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_0899EDDC;
L_0899EDDC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    goto L_0899EDE0;
L_0899EDE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
        goto L_0899EE18;
    }
    goto L_0899EE10;
L_0899EE10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0899EE18;
      }
      goto L_0899EE18;
    }
L_0899EE18:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EE58;
      }
      goto L_0899EE20;
    }
L_0899EE20:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EE4C;
      }
      goto L_0899EE28;
    }
L_0899EE28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
        goto L_0899EE60;
    }
    goto L_0899EE44;
L_0899EE44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EF40;
      }
      goto L_0899EE4C;
    }
L_0899EE4C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(664), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0899EF40;
      }
      goto L_0899EE58;
    }
L_0899EE58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EF40;
      }
      goto L_0899EE60;
    }
L_0899EE60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0899EF40;
      }
      goto L_0899EE88;
    }
L_0899EE88:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0899EE94u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x0899EE94u) goto L_0899EE94;
    return;
L_0899EE94:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
        goto L_0899EECC;
    }
    goto L_0899EEA0;
L_0899EEA0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0899EEB0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x0899EEB0u) goto L_0899EEB0;
    return;
L_0899EEB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0899EEC8;
      }
      goto L_0899EEB8;
    }
L_0899EEB8:
    ctx.gpr[31] = (0x0899EEC0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x0899EEC0u) goto L_0899EEC0;
    return;
L_0899EEC0:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899EEE8;
      }
      goto L_0899EEC8;
    }
L_0899EEC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    goto L_0899EECC;
L_0899EECC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 2u));
      if (branch_taken) {
          goto L_0899EF30;
      }
      goto L_0899EEE8;
    }
L_0899EEE8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0899EEFCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x0899EEFCu) goto L_0899EEFC;
    return;
L_0899EEFC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[22];
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_0899EF18;
      }
      goto L_0899EF04;
    }
L_0899EF04:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(664), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    goto L_0899EF18;
L_0899EF18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[20]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 2u));
    goto L_0899EF30;
L_0899EF30:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899EE88;
      }
      goto L_0899EF40;
    }
L_0899EF40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899EF68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
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
L_0899EF90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0899EFD8;
      }
      goto L_0899EFBC;
    }
L_0899EFBC:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0899EFE0;
      }
      goto L_0899EFD0;
    }
L_0899EFD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899EFF4;
      }
      goto L_0899EFD8;
    }
L_0899EFD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F0C4;
      }
      goto L_0899EFE0;
    }
L_0899EFE0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0899EFF4;
L_0899EFF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(740)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0899F00C;
      }
      goto L_0899F000;
    }
L_0899F000:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899F00Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0899F0E4;
L_0899F00C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F048;
      }
      goto L_0899F018;
    }
L_0899F018:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18312));
    goto L_0899F024;
L_0899F024:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x0899F034u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0899EF68;
L_0899F034:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0899F024;
      }
      goto L_0899F048;
    }
L_0899F048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0899F060u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899F060u) goto L_0899F060;
    return;
L_0899F060:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(740), ctx.gpr[2]);
    ctx.gpr[31] = (0x0899F06Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 235u, 0x08A7D460u>(ctx, &aot_mem) && ctx.pc == 0x0899F06Cu) goto L_0899F06C;
    return;
L_0899F06C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1768), ctx.gpr[18]);
    ctx.gpr[31] = (0x0899F078u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0899F078u) goto L_0899F078;
    return;
L_0899F078:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 290u);
      if (branch_taken) {
          goto L_0899F0C4;
      }
      goto L_0899F080;
    }
L_0899F080:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899F0C4;
      }
      goto L_0899F088;
    }
L_0899F088:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (0u | 294u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0899F0A8;
      }
      goto L_0899F09C;
    }
L_0899F09C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1176)));
    goto L_0899F0A8;
L_0899F0A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0899F0C0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899F0C0u) goto L_0899F0C0;
    return;
L_0899F0C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3196), ctx.gpr[2]);
    goto L_0899F0C4;
L_0899F0C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F0E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(740)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0899F17C;
      }
      goto L_0899F110;
    }
L_0899F110:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0899F154;
      }
      goto L_0899F118;
    }
L_0899F118:
    ctx.gpr[31] = (0x0899F120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 303u, 0x08925E94u>(ctx, &aot_mem) && ctx.pc == 0x0899F120u) goto L_0899F120;
    return;
L_0899F120:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0899F14C;
      }
      goto L_0899F138;
    }
L_0899F138:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0899F14C;
L_0899F14C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899F17C;
      }
      goto L_0899F154;
    }
L_0899F154:
    ctx.gpr[31] = (0x0899F15Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(740)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 303u, 0x08925E94u>(ctx, &aot_mem) && ctx.pc == 0x0899F15Cu) goto L_0899F15C;
    return;
L_0899F15C:
    ctx.gpr[31] = (0x0899F164u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 237u, 0x08A7D484u>(ctx, &aot_mem) && ctx.pc == 0x0899F164u) goto L_0899F164;
    return;
L_0899F164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(740)));
    ctx.gpr[31] = (0x0899F170u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 178u, 0x08AC8E78u>(ctx, &aot_mem) && ctx.pc == 0x0899F170u) goto L_0899F170;
    return;
L_0899F170:
    ctx.gpr[31] = (0x0899F178u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 155u, 0x08A5D294u>(ctx, &aot_mem) && ctx.pc == 0x0899F178u) goto L_0899F178;
    return;
L_0899F178:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(740), 0u);
    goto L_0899F17C;
L_0899F17C:
    ctx.gpr[31] = (0x0899F184u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0899F184u) goto L_0899F184;
    return;
L_0899F184:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F1BC;
      }
      goto L_0899F18C;
    }
L_0899F18C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (0u | 290u);
      if (branch_taken) {
          goto L_0899F19C;
      }
      goto L_0899F194;
    }
L_0899F194:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899F1BC;
      }
      goto L_0899F19C;
    }
L_0899F19C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F1BC;
      }
      goto L_0899F1A8;
    }
L_0899F1A8:
    ctx.gpr[31] = (0x0899F1B0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 178u, 0x08AC8E78u>(ctx, &aot_mem) && ctx.pc == 0x0899F1B0u) goto L_0899F1B0;
    return;
L_0899F1B0:
    ctx.gpr[31] = (0x0899F1B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 155u, 0x08A5D294u>(ctx, &aot_mem) && ctx.pc == 0x0899F1B8u) goto L_0899F1B8;
    return;
L_0899F1B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3196), 0u);
    goto L_0899F1BC;
L_0899F1BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1768), ctx.gpr[17]);
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
L_0899F1DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0899F2AC;
      }
      goto L_0899F200;
    }
L_0899F200:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F238;
      }
      goto L_0899F224;
    }
L_0899F224:
    ctx.gpr[31] = (0x0899F22Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0899F22Cu) goto L_0899F22C;
    return;
L_0899F22C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0899F238u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0899F0E4;
L_0899F238:
    ctx.gpr[31] = (0x0899F240u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1720), static_cast<std::uint8_t>(ctx.gpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0899F240u) goto L_0899F240;
    return;
L_0899F240:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F264;
      }
      goto L_0899F24C;
    }
L_0899F24C:
    ctx.gpr[31] = (0x0899F254u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0899F254u) goto L_0899F254;
    return;
L_0899F254:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F264;
      }
      goto L_0899F25C;
    }
L_0899F25C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0899F264;
L_0899F264:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F2AC;
      }
      goto L_0899F280;
    }
L_0899F280:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0899F2A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0899F2A0u) goto L_0899F2A0;
    return;
L_0899F2A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0899F2ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0899EF90;
L_0899F2AC:
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
L_0899F2C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899F2D8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0899F648;
L_0899F2D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899F2E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0899F1DC;
L_0899F2E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F2F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899F328u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0899F648;
L_0899F328:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(1428));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[22] = (0u | 3u);
      if (branch_taken) {
          goto L_0899F410;
      }
      goto L_0899F34C;
    }
L_0899F34C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 37 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1440), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(1440));
      if (branch_taken) {
          goto L_0899F3AC;
      }
      goto L_0899F364;
    }
L_0899F364:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_0899F3AC;
      }
      goto L_0899F36C;
    }
L_0899F36C:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29784));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0899F3AC;
      }
      goto L_0899F384;
    }
L_0899F384:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F3A0;
      }
      goto L_0899F398;
    }
L_0899F398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0899F3A0;
      }
      goto L_0899F3A0;
    }
L_0899F3A0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1440), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10000 ? 1u : 0u);
      if (branch_taken) {
          goto L_0899F3D0;
      }
      goto L_0899F3AC;
    }
L_0899F3AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (2u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-31073));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_0899F3C4;
    }
    goto L_0899F3C4;
L_0899F3C4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1440), ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10000 ? 1u : 0u);
    goto L_0899F3D0;
L_0899F3D0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 20000 ? 1u : 0u);
      if (branch_taken) {
          goto L_0899F3E8;
      }
      goto L_0899F3D8;
    }
L_0899F3D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F3E8;
      }
      goto L_0899F3E0;
    }
L_0899F3E0:
    ctx.gpr[4] = (0u | 9999u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1440), ctx.gpr[4]);
    goto L_0899F3E8;
L_0899F3E8:
    ctx.gpr[31] = (0x0899F3F0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 191u, 0x0885103Cu>(ctx, &aot_mem) && ctx.pc == 0x0899F3F0u) goto L_0899F3F0;
    return;
L_0899F3F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1432)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0899F4D0;
      }
      goto L_0899F3FC;
    }
L_0899F3FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0899F4D0;
      }
      goto L_0899F408;
    }
L_0899F408:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1432), 0u);
      if (branch_taken) {
          goto L_0899F4D0;
      }
      goto L_0899F410;
    }
L_0899F410:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F480;
      }
      goto L_0899F418;
    }
L_0899F418:
    ctx.gpr[5] = (ctx.gpr[19] ^ 4u);
    ctx.gpr[6] = (ctx.gpr[19] ^ 5u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[19] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F464;
      }
      goto L_0899F444;
    }
L_0899F444:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] < static_cast<std::uint32_t>(10000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[18] < static_cast<std::uint32_t>(20000) ? 1u : 0u);
      if (branch_taken) {
          goto L_0899F464;
      }
      goto L_0899F458;
    }
L_0899F458:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F464;
      }
      goto L_0899F460;
    }
L_0899F460:
    ctx.gpr[18] = (0u | 9999u);
    goto L_0899F464;
L_0899F464:
    ctx.gpr[31] = (0x0899F46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0899F46Cu) goto L_0899F46C;
    return;
L_0899F46C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0899F478u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0899F0E4;
L_0899F478:
    ctx.gpr[31] = (0x0899F480u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 136u, 0x08850D60u>(ctx, &aot_mem) && ctx.pc == 0x0899F480u) goto L_0899F480;
    return;
L_0899F480:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899F490u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 123u, 0x08850C6Cu>(ctx, &aot_mem) && ctx.pc == 0x0899F490u) goto L_0899F490;
    return;
L_0899F490:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0899F4D0;
      }
      goto L_0899F49C;
    }
L_0899F49C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F4D0;
      }
      goto L_0899F4A8;
    }
L_0899F4A8:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0899F4C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0899F4C4u) goto L_0899F4C4;
    return;
L_0899F4C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0899F4D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0899EF90;
L_0899F4D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1432)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0899F4E0;
      }
      goto L_0899F4DC;
    }
L_0899F4DC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1432), 0u);
    goto L_0899F4E0;
L_0899F4E0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_0899F50C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1712), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899F520u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1716), ctx.gpr[6]);
    goto L_0899F52C;
L_0899F520:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F52C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1712)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 45u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0899F580;
      }
      goto L_0899F558;
    }
L_0899F558:
    ctx.gpr[31] = (0x0899F560u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0899F560u) goto L_0899F560;
    return;
L_0899F560:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0899F56Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0899F56Cu) goto L_0899F56C;
    return;
L_0899F56C:
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_0899F588;
      }
      goto L_0899F578;
    }
L_0899F578:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F594;
      }
      goto L_0899F580;
    }
L_0899F580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F628;
      }
      goto L_0899F588;
    }
L_0899F588:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0899F594u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x0899F594u) goto L_0899F594;
    return;
L_0899F594:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0899F5A8;
      }
      goto L_0899F59C;
    }
L_0899F59C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0899F5A8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x0899F5A8u) goto L_0899F5A8;
    return;
L_0899F5A8:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
      if (branch_taken) {
          goto L_0899F5DC;
      }
      goto L_0899F5B0;
    }
L_0899F5B0:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F628;
      }
      goto L_0899F5DC;
    }
L_0899F5DC:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
      if (branch_taken) {
          goto L_0899F610;
      }
      goto L_0899F5E4;
    }
L_0899F5E4:
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F628;
      }
      goto L_0899F610;
    }
L_0899F610:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899F624u);
    ctx.gpr[7] = (0u | 1u);
    goto L_0899F2F4;
L_0899F624:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1712), ctx.gpr[20]);
    goto L_0899F628;
L_0899F628:
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
L_0899F648:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899F658u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0899F658u) goto L_0899F658;
    return;
L_0899F658:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F668:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899F68Cu);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_0899F648;
L_0899F68C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_0899F740;
      }
      goto L_0899F69C;
    }
L_0899F69C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 37 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1440), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1440));
      if (branch_taken) {
          goto L_0899F704;
      }
      goto L_0899F6C0;
    }
L_0899F6C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_0899F704;
      }
      goto L_0899F6C8;
    }
L_0899F6C8:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29784));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0899F704;
      }
      goto L_0899F6E0;
    }
L_0899F6E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F6FC;
      }
      goto L_0899F6F4;
    }
L_0899F6F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0899F6FC;
      }
      goto L_0899F6FC;
    }
L_0899F6FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1440), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0899F720;
      }
      goto L_0899F704;
    }
L_0899F704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31073));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_0899F71C;
    }
    goto L_0899F71C;
L_0899F71C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1440), ctx.gpr[5]);
    goto L_0899F720;
L_0899F720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1432)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899F740;
      }
      goto L_0899F730;
    }
L_0899F730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0899F740;
      }
      goto L_0899F73C;
    }
L_0899F73C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1432), 0u);
    goto L_0899F740;
L_0899F740:
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
L_0899F758:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899F77Cu);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_0899F648;
L_0899F77C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899F82C;
      }
      goto L_0899F78C;
    }
L_0899F78C:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1440), ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 37 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1440));
      if (branch_taken) {
          goto L_0899F7F0;
      }
      goto L_0899F7AC;
    }
L_0899F7AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_0899F7F0;
      }
      goto L_0899F7B4;
    }
L_0899F7B4:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29784));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0899F7F0;
      }
      goto L_0899F7CC;
    }
L_0899F7CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F7E8;
      }
      goto L_0899F7E0;
    }
L_0899F7E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0899F7E8;
      }
      goto L_0899F7E8;
    }
L_0899F7E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1440), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0899F80C;
      }
      goto L_0899F7F0;
    }
L_0899F7F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31073));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_0899F808;
    }
    goto L_0899F808;
L_0899F808:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1440), ctx.gpr[5]);
    goto L_0899F80C;
L_0899F80C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1432)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899F82C;
      }
      goto L_0899F81C;
    }
L_0899F81C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0899F82C;
      }
      goto L_0899F828;
    }
L_0899F828:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1432), 0u);
    goto L_0899F82C;
L_0899F82C:
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
L_0899F844:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899F864u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0899F0E4;
L_0899F864:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0899F87Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 136u, 0x08850D60u>(ctx, &aot_mem) && ctx.pc == 0x0899F87Cu) goto L_0899F87C;
    return;
L_0899F87C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899F864;
      }
      goto L_0899F894;
    }
L_0899F894:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899F8A0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0899F2C4;
L_0899F8A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F8B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899F8D0u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0899F8D0u) goto L_0899F8D0;
    return;
L_0899F8D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F908;
      }
      goto L_0899F8D8;
    }
L_0899F8D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1568)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F908;
      }
      goto L_0899F8E4;
    }
L_0899F8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1580)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0899F908;
      }
      goto L_0899F8F0;
    }
L_0899F8F0:
    ctx.gpr[31] = (0x0899F8F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 257u, 0x089451DCu>(ctx, &aot_mem) && ctx.pc == 0x0899F8F8u) goto L_0899F8F8;
    return;
L_0899F8F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(363)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F908;
      }
      goto L_0899F904;
    }
L_0899F904:
    ctx.gpr[17] = (0u | 1u);
    goto L_0899F908;
L_0899F908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899F938;
      }
      goto L_0899F918;
    }
L_0899F918:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1708), ctx.gpr[4]);
    goto L_0899F938;
L_0899F938:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_0899F974;
    }
    goto L_0899F940;
L_0899F940:
    ctx.gpr[31] = (0x0899F948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 78u, 0x089184E0u>(ctx, &aot_mem) && ctx.pc == 0x0899F948u) goto L_0899F948;
    return;
L_0899F948:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0899F960;
      }
      goto L_0899F950;
    }
L_0899F950:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6792)));
    ctx.gpr[4] = (0u | 42u);
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_0899F974;
    }
    goto L_0899F960;
L_0899F960:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1568)));
    ctx.gpr[31] = (0x0899F96Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0899F2C4;
L_0899F96C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899F9A8;
      }
      goto L_0899F974;
    }
L_0899F974:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0899F990u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0899F990u) goto L_0899F990;
    return;
L_0899F990:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0899F99Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0899F0E4;
L_0899F99C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899F9A8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0899F2C4;
L_0899F9A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899F9BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899F9D4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0899F9D4u) goto L_0899F9D4;
    return;
L_0899F9D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 45u);
      if (branch_taken) {
          goto L_0899FA0C;
      }
      goto L_0899F9DC;
    }
L_0899F9DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0899FA00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0899F648;
L_0899FA00:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899FA38;
      }
      goto L_0899FA0C;
    }
L_0899FA0C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0899FA2Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FA2Cu) goto L_0899FA2C;
    return;
L_0899FA2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0899FA38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0899EF90;
L_0899FA38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0899FA54;
      }
      goto L_0899FA44;
    }
L_0899FA44:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0899FA50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0899F2C4;
L_0899FA50:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1708), ctx.gpr[17]);
    goto L_0899FA54;
L_0899FA54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FA68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0899FAB0;
      }
      goto L_0899FA80;
    }
L_0899FA80:
    ctx.gpr[31] = (0x0899FA88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0899E254;
L_0899FA88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FAA8;
      }
      goto L_0899FA90;
    }
L_0899FA90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899FAB8;
      }
      goto L_0899FAA0;
    }
L_0899FAA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FAE0;
      }
      goto L_0899FAA8;
    }
L_0899FAA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FB18;
      }
      goto L_0899FAB0;
    }
L_0899FAB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FB18;
      }
      goto L_0899FAB8;
    }
L_0899FAB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (128u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FAE0;
      }
      goto L_0899FAD8;
    }
L_0899FAD8:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[5]);
    goto L_0899FAE0;
L_0899FAE0:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899FB0C;
      }
      goto L_0899FAEC;
    }
L_0899FAEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FB14;
      }
      goto L_0899FB04;
    }
L_0899FB04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FB18;
      }
      goto L_0899FB0C;
    }
L_0899FB0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FB18;
      }
      goto L_0899FB14;
    }
L_0899FB14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), ctx.gpr[4]);
    goto L_0899FB18;
L_0899FB18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FB28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(420), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(429), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(432), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(420), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 100u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(422), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0899FBAC;
      }
      goto L_0899FB7C;
    }
L_0899FB7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FBA4;
      }
      goto L_0899FB88;
    }
L_0899FB88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_0899FBA4;
    }
    goto L_0899FB94;
L_0899FB94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0899FBA0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0899FBA0u) goto L_0899FBA0;
    return;
L_0899FBA0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_0899FBA4;
L_0899FBA4:
    ctx.gpr[31] = (0x0899FBACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FBACu) goto L_0899FBAC;
    return;
L_0899FBAC:
    ctx.gpr[4] = (0u | 64u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(464));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x0899FBD8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(448), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FBD8u) goto L_0899FBD8;
    return;
L_0899FBD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0899FC0C;
      }
      goto L_0899FBF4;
    }
L_0899FBF4:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0899FC10;
    }
    goto L_0899FC04;
L_0899FC04:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0899FC20;
      }
      goto L_0899FC0C;
    }
L_0899FC0C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0899FC10;
L_0899FC10:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x0899FC1Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FC1Cu) goto L_0899FC1C;
    return;
L_0899FC1C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0899FC20;
L_0899FC20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 15u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899FC44u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 563u, 0x0888EBECu>(ctx, &aot_mem) && ctx.pc == 0x0899FC44u) goto L_0899FC44;
    return;
L_0899FC44:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(560));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(576), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899FC84;
      }
      goto L_0899FC78;
    }
L_0899FC78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1012)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(580), ctx.gpr[4]);
    goto L_0899FC84;
L_0899FC84:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FCA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[5] = (0u | 21u);
      if (branch_taken) {
          goto L_0899FD3C;
      }
      goto L_0899FCCC;
    }
L_0899FCCC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_0899FD3C;
      }
      goto L_0899FCD4;
    }
L_0899FCD4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899FD3C;
      }
      goto L_0899FCDC;
    }
L_0899FCDC:
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899FCF4;
      }
      goto L_0899FCE8;
    }
L_0899FCE8:
    ctx.gpr[31] = (0x0899FCF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 311u, 0x088D55F0u>(ctx, &aot_mem) && ctx.pc == 0x0899FCF0u) goto L_0899FCF0;
    return;
L_0899FCF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    goto L_0899FCF4;
L_0899FCF4:
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899FD28;
      }
      goto L_0899FD00;
    }
L_0899FD00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FD20;
      }
      goto L_0899FD0C;
    }
L_0899FD0C:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_0899FD20;
    }
    goto L_0899FD14;
L_0899FD14:
    ctx.gpr[31] = (0x0899FD1Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0899FD1Cu) goto L_0899FD1C;
    return;
L_0899FD1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_0899FD20;
L_0899FD20:
    ctx.gpr[31] = (0x0899FD28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FD28u) goto L_0899FD28;
    return;
L_0899FD28:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899FD38u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FD38u) goto L_0899FD38;
    return;
L_0899FD38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    goto L_0899FD3C;
L_0899FD3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899FDA8;
      }
      goto L_0899FD48;
    }
L_0899FD48:
    ctx.gpr[31] = (0x0899FD50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0899FD50u) goto L_0899FD50;
    return;
L_0899FD50:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28740)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28744)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0899FD70u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0899FD70u) goto L_0899FD70;
    return;
L_0899FD70:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_0899FDA8;
L_0899FDA8:
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
L_0899FDC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899FDD8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0899FCA0;
L_0899FDD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27768)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FE14;
      }
      goto L_0899FDF8;
    }
L_0899FDF8:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_0899FE00;
L_0899FE00:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899FE00;
      }
      goto L_0899FE10;
    }
L_0899FE10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_0899FE14;
L_0899FE14:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0899FE24u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FE24u) goto L_0899FE24;
    return;
L_0899FE24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-241));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FE48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899FE64u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_0899E1A0;
L_0899FE64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FE8C;
      }
      goto L_0899FE6C;
    }
L_0899FE6C:
    ctx.gpr[31] = (0x0899FE74u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0899FA68;
L_0899FE74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
        goto L_0899FE94;
    }
    goto L_0899FE84;
L_0899FE84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FEB8;
      }
      goto L_0899FE8C;
    }
L_0899FE8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FED4;
      }
      goto L_0899FE94;
    }
L_0899FE94:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FEB0;
      }
      goto L_0899FE9C;
    }
L_0899FE9C:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_0899FEB0;
    }
    goto L_0899FEA4;
L_0899FEA4:
    ctx.gpr[31] = (0x0899FEACu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0899FEACu) goto L_0899FEAC;
    return;
L_0899FEAC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_0899FEB0;
L_0899FEB0:
    ctx.gpr[31] = (0x0899FEB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FEB8u) goto L_0899FEB8;
    return;
L_0899FEB8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0899FED4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x0899FED4u) goto L_0899FED4;
    return;
L_0899FED4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FEE8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899FF08;
      }
      goto L_0899FF00;
    }
L_0899FF00:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1780), ctx.gpr[5]);
    goto L_0899FF08;
L_0899FF08:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FF10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899FF24u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FF24u) goto L_0899FF24;
    return;
L_0899FF24:
    ctx.gpr[31] = (0x0899FF2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x0899FF2Cu) goto L_0899FF2C;
    return;
L_0899FF2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FF3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899FF4Cu);
    // nop
    goto L_0899FF58;
L_0899FF4C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899FF58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0899FFB4;
      }
      goto L_0899FF88;
    }
L_0899FF88:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x0899FFB0u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0899FFB0u) goto L_0899FFB0;
    return;
L_0899FFB0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1764), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0899FFB4;
L_0899FFB4:
    ctx.gpr[31] = (0x0899FFBCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1764)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x0899FFBCu) goto L_0899FFBC;
    return;
L_0899FFBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0899FFEC;
      }
      goto L_0899FFD8;
    }
L_0899FFD8:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A0010u>(ctx, &aot_mem); return;
      }
      goto L_0899FFEC;
    }
L_0899FFEC:
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 2u, 0x089A0010u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 1u, 0x089A0000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0102(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0102_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_102(Runtime &runtime) {
    runtime.register_generated_unit(102u, 0x0899C000u, 16384u, &recomp_unit_0102, &recomp_unit_0102_entry);
    runtime.register_function(0x0899C000u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C01Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C03Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C048u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C050u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C064u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C098u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C0C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C0D8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C10Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C138u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C140u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C14Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C154u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C1B8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C1C0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C1D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C1E8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C1F4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C22Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C230u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C264u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C268u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C2A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C2ACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C308u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C31Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C32Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C358u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C360u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C3C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C3D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C3D8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C3E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C448u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C450u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C460u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C480u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C488u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C4E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C4E8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C4F4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C550u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C558u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C59Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C5A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C5B0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C5C8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C5F4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C600u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C60Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C618u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C624u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C66Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C768u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C77Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C798u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C7A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C7B4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C7DCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C7E8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C7FCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C804u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C808u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C810u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C840u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C8A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C8D4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C924u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C950u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C994u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C9A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C9ACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C9B8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899C9E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CA00u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CA98u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CAA4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CAB0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CAC4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CAD8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CB48u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CB4Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CB80u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CBD0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CBDCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CBE4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CC14u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CC28u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CC34u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CC40u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CC58u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CCC4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CCFCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CD34u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CD44u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CD5Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CD7Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CDA0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CDBCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CDCCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CDF8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CE20u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CE38u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CE50u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CE6Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CE88u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CEFCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CF1Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CF2Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CF4Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CF80u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CFB0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CFC0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899CFFCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D010u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D08Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D0A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D0B4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D0D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D0E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D10Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D12Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D140u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D184u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D194u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D19Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D1A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D1E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D208u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D224u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D230u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D248u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D264u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D280u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D298u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D2A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D2C8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D2D4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D2E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D2E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D2FCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D314u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D31Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D328u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D330u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D338u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D340u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D34Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D354u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D35Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D364u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D36Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D374u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D378u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D37Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D390u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D3A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D3A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D3BCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D3D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D3DCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D400u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D40Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D418u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D428u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D44Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D460u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D464u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D46Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D478u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D494u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D4D4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D4DCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D4E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D4ECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D4F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D504u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D50Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D514u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D520u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D544u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D558u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D560u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D568u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D574u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D588u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D590u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D5A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D5A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D5C0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D5C8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D5D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D5E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D600u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D60Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D624u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D63Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D654u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D65Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D674u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D6B8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D6C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D6F4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D700u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D728u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D740u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D750u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D764u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D78Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D7A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D7B0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D7C8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D828u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D83Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D868u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D87Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D884u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D88Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D898u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D8A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D8B4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D8BCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D8C8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D8D4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D8E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D8ECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D904u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D920u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D928u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D930u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D934u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D93Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D948u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D950u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D964u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D974u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D97Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D990u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D998u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D9ACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D9B8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D9D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D9DCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D9ECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899D9F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DA10u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DA18u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DA24u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DA50u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DA5Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DA74u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DA84u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DA90u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DA9Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DAA8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DAC8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DAD0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DAD8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DAE8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DB0Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DB18u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DB20u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DB34u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DB50u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DB78u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DB90u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DB98u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DB9Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DBA8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DBBCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DBC8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DBECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DBF4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DBFCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC04u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC14u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC1Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC34u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC3Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC44u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC54u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC68u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC78u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC8Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC98u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DC9Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DCA8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DCC4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DCE4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DCF0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DCF8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DD04u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DD0Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DD14u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DD1Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DD24u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DD28u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DD38u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DD94u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DDC4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DE0Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DE48u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DE50u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DE58u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DE90u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DE98u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DEA0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DEA8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DEACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DEB8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DEE8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DF64u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DF6Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DF74u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DFB8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DFC8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899DFD0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E014u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E024u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E030u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E054u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E05Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E070u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E084u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E0A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E0D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E0E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E0E8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E0F0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E0F4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E118u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E124u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E138u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E13Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E15Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E16Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E180u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E194u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E1A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E1B0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E1C0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E1C8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E1E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E1E8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E1ECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E1F4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E204u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E20Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E210u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E218u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E228u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E230u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E238u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E240u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E248u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E24Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E254u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E264u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E26Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E274u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E27Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E284u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E28Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E294u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E29Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E2A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E2A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E2B8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E2C0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E2C8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E2D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E2D8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E2E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E2E8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E2ECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E2F4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E304u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E30Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E314u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E31Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E324u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E32Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E334u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E33Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E344u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E348u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E350u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E370u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E378u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E37Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E398u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E3A4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E3B0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E3C0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E3D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E3D8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E3E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E3ECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E40Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E414u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E444u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E454u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E460u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E470u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E478u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E498u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E4A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E4C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E4F0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E4FCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E50Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E518u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E528u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E530u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E538u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E540u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E548u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E550u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E558u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E55Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E570u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E580u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E598u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E5ECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E5F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E600u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E610u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E618u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E620u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E62Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E640u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E654u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E688u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E690u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E69Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E6CCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E6D4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E6ECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E6F4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E6FCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E70Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E714u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E720u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E730u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E73Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E748u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E784u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E830u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E84Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E888u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E944u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E950u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E958u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E9C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E9D8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E9E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899E9F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EA34u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EA4Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EA78u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EA90u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EAA8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EAF4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EAFCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB04u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB0Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB14u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB1Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB24u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB2Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB34u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB44u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB4Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB54u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB80u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB90u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EB98u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EBB0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EBC0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EBC8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EBD4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EBE0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EBECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC04u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC08u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC18u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC34u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC3Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC44u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC4Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC58u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC60u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC68u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC70u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC7Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC88u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC8Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EC9Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ECB0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ECB8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ECC0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ECE4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ECF8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED08u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED3Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED44u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED4Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED58u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED68u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED84u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED8Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899ED9Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EDACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EDB0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EDB8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EDC0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EDD8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EDDCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EDE0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE10u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE18u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE20u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE28u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE44u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE4Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE58u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE60u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE88u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EE94u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EEA0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EEB0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EEB8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EEC0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EEC8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EECCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EEE8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EEFCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF04u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF18u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF30u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF40u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF68u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EF90u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EFBCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EFD0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EFD8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EFE0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899EFF4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F000u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F00Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F018u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F024u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F034u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F048u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F060u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F06Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F078u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F080u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F088u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F09Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F0A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F0C0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F0C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F0E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F110u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F118u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F120u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F138u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F14Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F154u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F15Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F164u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F170u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F178u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F17Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F184u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F18Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F194u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F19Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F1A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F1B0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F1B8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F1BCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F1DCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F200u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F224u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F22Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F238u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F240u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F24Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F254u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F25Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F264u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F280u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F2A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F2ACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F2C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F2D8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F2E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F2F4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F328u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F34Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F364u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F36Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F384u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F398u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F3A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F3ACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F3C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F3D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F3D8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F3E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F3E8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F3F0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F3FCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F408u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F410u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F418u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F444u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F458u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F460u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F464u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F46Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F478u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F480u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F490u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F49Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F4A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F4C4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F4D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F4DCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F4E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F50Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F520u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F52Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F558u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F560u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F56Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F578u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F580u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F588u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F594u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F59Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F5A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F5B0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F5DCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F5E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F610u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F624u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F628u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F648u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F658u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F668u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F68Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F69Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F6C0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F6C8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F6E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F6F4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F6FCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F704u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F71Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F720u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F730u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F73Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F740u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F758u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F77Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F78Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F7ACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F7B4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F7CCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F7E0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F7E8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F7F0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F808u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F80Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F81Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F828u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F82Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F844u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F864u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F87Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F894u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F8A0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F8B4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F8D0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F8D8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F8E4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F8F0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F8F8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F904u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F908u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F918u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F938u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F940u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F948u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F950u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F960u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F96Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F974u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F990u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F99Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F9A8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F9BCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F9D4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899F9DCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA00u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA0Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA2Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA38u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA44u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA50u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA54u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA68u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA80u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA88u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FA90u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FAA0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FAA8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FAB0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FAB8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FAD8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FAE0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FAECu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FB04u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FB0Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FB14u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FB18u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FB28u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FB7Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FB88u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FB94u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FBA0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FBA4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FBACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FBD8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FBF4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC04u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC0Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC10u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC1Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC20u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC44u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC78u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FC84u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FCA0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FCCCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FCD4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FCDCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FCE8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FCF0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FCF4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD00u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD0Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD14u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD1Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD20u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD28u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD38u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD3Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD48u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD50u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FD70u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FDA8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FDC4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FDD8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FDF8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE00u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE10u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE14u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE24u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE48u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE64u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE6Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE74u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE84u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE8Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE94u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FE9Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FEA4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FEACu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FEB0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FEB8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FED4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FEE8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF00u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF08u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF10u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF24u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF2Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF3Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF4Cu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF58u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FF88u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FFB0u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FFB4u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FFBCu, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FFD8u, &recomp_unit_0102, "recomp_unit_0102");
    runtime.register_function(0x0899FFECu, &recomp_unit_0102, "recomp_unit_0102");
}
} // namespace psprecomp
