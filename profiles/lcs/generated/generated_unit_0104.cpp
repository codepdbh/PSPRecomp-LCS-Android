#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0104[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0,
    9, 0, 10, 11, 0, 12, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18,
    0, 0, 0, 0, 19, 0, 20, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 26,
    0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 32, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0,
    40, 0, 0, 41, 0, 42, 0, 43, 44, 0, 45, 46, 0, 47, 0, 48, 0, 0, 49, 0, 50, 0, 51, 52, 0, 53, 54, 55, 0, 0, 0, 0,
    56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 79, 0,
    0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0,
    86, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 91, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 95, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 103, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 105, 0, 106, 0, 107, 0, 108, 0, 0, 109, 0, 0, 110, 111, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0,
    0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0,
    0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0,
    0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0,
    0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0,
    0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0,
    0, 0, 0, 0, 0, 188, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 198, 0, 199, 0, 0,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0,
    211, 0, 0, 212, 0, 0, 213, 214, 0, 215, 216, 0, 217, 0, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 221, 222, 0, 0, 0, 0, 0,
    0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235,
    236, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 244, 0, 245, 0, 0, 0, 0, 246, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 250, 0, 251, 0, 252, 253, 0, 0, 0, 254, 0, 255, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 260,
    0, 261, 0, 262, 0, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269,
    0, 0, 270, 0, 271, 0, 0, 272, 0, 273, 0, 0, 274, 0, 275, 0, 0, 276, 0, 277, 0, 0, 278, 0, 279, 0, 0, 280, 0, 281, 0, 0,
    282, 0, 283, 0, 0, 284, 0, 285, 0, 0, 286, 0, 287, 0, 0, 288, 0, 289, 0, 0, 290, 0, 291, 0, 0, 292, 0, 293, 0, 0, 294, 0,
    295, 0, 0, 296, 0, 297, 0, 0, 298, 0, 299, 0, 0, 300, 0, 301, 0, 0, 302, 0, 303, 0, 0, 304, 0, 305, 0, 0, 306, 0, 307, 0,
    0, 308, 0, 309, 0, 0, 310, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314, 0, 315, 0, 0, 316, 317, 0, 0, 318, 0, 319, 0, 0, 320, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 324,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0,
    329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0,
    0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 361, 0, 362, 0, 0, 0, 363, 0, 0,
    0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373, 0, 374, 0, 375, 0,
    0, 376, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 381, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0, 0,
    0, 0, 387, 0, 0, 388, 0, 0, 0, 389, 0, 390, 0, 391, 0, 0, 392, 0, 393, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0,
    397, 0, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 401, 0, 402, 0, 0, 403, 0, 404, 0, 405, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0,
    408, 0, 0, 409, 0, 410, 411, 0, 412, 0, 0, 413, 0, 0, 0, 414, 0, 0, 415, 0, 416, 417, 0, 418, 0, 0, 419, 0, 420, 0, 0, 0,
    0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0,
    0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 0,
    0, 432, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 437, 0, 438, 0, 0, 0, 439, 0, 0, 440, 0,
    0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 446, 0, 447, 0, 0, 0, 0,
    0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 454, 0, 0, 0, 455, 0,
    0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 462,
    0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0,
    468, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 471, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 475, 0, 0, 0, 476,
    0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 480, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0,
    0, 484, 485, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0, 488, 0, 489, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 492, 493, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0,
    499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0,
    505, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 508, 0, 509, 0, 510, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0,
    0, 0, 514, 0, 515, 0, 516, 0, 0, 517, 0, 518, 0, 519, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 0,
    525, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 532, 0, 533, 0, 0, 0, 534, 0, 0, 535, 0, 536, 0, 537, 0, 538, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 0, 545, 0, 546,
    0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 0, 0, 553,
    0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0,
    0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0,
    562, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0,
    0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 574, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 583,
    0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0,
    0, 594, 0, 0, 0, 0, 595, 0, 596, 0, 0, 0, 597, 0, 0, 0, 598, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 603, 0, 604, 0, 605, 0, 0,
    0, 0, 0, 0, 606, 0, 607, 0, 608, 0, 609, 0, 0, 0, 0, 610, 0, 611, 0, 612, 0, 613, 0, 0, 0, 614, 0, 615, 0, 0, 0, 0,
    0, 616, 0, 0, 0, 617, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 619, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    621, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 625, 0, 0, 0, 626, 0, 0, 0, 627, 628, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 0, 0, 0, 631, 0, 0, 0, 632,
    0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 635,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 637, 0,
    0, 0, 638, 0, 0, 0, 0, 639, 0, 640, 0, 0, 0, 641, 0, 0, 0, 642, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 0, 0,
    652, 0, 653, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 669,
};
void recomp_unit_0104_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089A4000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0104[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A4000;
    case 2u: goto L_089A4020;
    case 3u: goto L_089A4040;
    case 4u: goto L_089A4048;
    case 5u: goto L_089A4050;
    case 6u: goto L_089A405C;
    case 7u: goto L_089A406C;
    case 8u: goto L_089A4078;
    case 9u: goto L_089A4080;
    case 10u: goto L_089A4088;
    case 11u: goto L_089A408C;
    case 12u: goto L_089A4094;
    case 13u: goto L_089A4098;
    case 14u: goto L_089A40AC;
    case 15u: goto L_089A40C8;
    case 16u: goto L_089A40D4;
    case 17u: goto L_089A40EC;
    case 18u: goto L_089A40FC;
    case 19u: goto L_089A4110;
    case 20u: goto L_089A4118;
    case 21u: goto L_089A4124;
    case 22u: goto L_089A412C;
    case 23u: goto L_089A4144;
    case 24u: goto L_089A4168;
    case 25u: goto L_089A4170;
    case 26u: goto L_089A417C;
    case 27u: goto L_089A4184;
    case 28u: goto L_089A419C;
    case 29u: goto L_089A41C0;
    case 30u: goto L_089A41D0;
    case 31u: goto L_089A41F8;
    case 32u: goto L_089A4204;
    case 33u: goto L_089A4210;
    case 34u: goto L_089A421C;
    case 35u: goto L_089A4224;
    case 36u: goto L_089A4240;
    case 37u: goto L_089A4258;
    case 38u: goto L_089A4260;
    case 39u: goto L_089A4278;
    case 40u: goto L_089A4280;
    case 41u: goto L_089A428C;
    case 42u: goto L_089A4294;
    case 43u: goto L_089A429C;
    case 44u: goto L_089A42A0;
    case 45u: goto L_089A42A8;
    case 46u: goto L_089A42AC;
    case 47u: goto L_089A42B4;
    case 48u: goto L_089A42BC;
    case 49u: goto L_089A42C8;
    case 50u: goto L_089A42D0;
    case 51u: goto L_089A42D8;
    case 52u: goto L_089A42DC;
    case 53u: goto L_089A42E4;
    case 54u: goto L_089A42E8;
    case 55u: goto L_089A42EC;
    case 56u: goto L_089A4300;
    case 57u: goto L_089A4310;
    case 58u: goto L_089A4328;
    case 59u: goto L_089A4334;
    case 60u: goto L_089A4380;
    case 61u: goto L_089A4388;
    case 62u: goto L_089A4390;
    case 63u: goto L_089A4398;
    case 64u: goto L_089A43B8;
    case 65u: goto L_089A43D8;
    case 66u: goto L_089A445C;
    case 67u: goto L_089A4464;
    case 68u: goto L_089A446C;
    case 69u: goto L_089A44E4;
    case 70u: goto L_089A4508;
    case 71u: goto L_089A4524;
    case 72u: goto L_089A4564;
    case 73u: goto L_089A456C;
    case 74u: goto L_089A458C;
    case 75u: goto L_089A45A8;
    case 76u: goto L_089A45E4;
    case 77u: goto L_089A45EC;
    case 78u: goto L_089A45F4;
    case 79u: goto L_089A45F8;
    case 80u: goto L_089A4618;
    case 81u: goto L_089A4628;
    case 82u: goto L_089A4640;
    case 83u: goto L_089A4648;
    case 84u: goto L_089A465C;
    case 85u: goto L_089A4668;
    case 86u: goto L_089A4680;
    case 87u: goto L_089A468C;
    case 88u: goto L_089A4698;
    case 89u: goto L_089A46B0;
    case 90u: goto L_089A46B8;
    case 91u: goto L_089A46C8;
    case 92u: goto L_089A46CC;
    case 93u: goto L_089A46D4;
    case 94u: goto L_089A46F4;
    case 95u: goto L_089A4704;
    case 96u: goto L_089A4710;
    case 97u: goto L_089A4718;
    case 98u: goto L_089A4728;
    case 99u: goto L_089A4730;
    case 100u: goto L_089A4738;
    case 101u: goto L_089A4740;
    case 102u: goto L_089A476C;
    case 103u: goto L_089A4770;
    case 104u: goto L_089A478C;
    case 105u: goto L_089A479C;
    case 106u: goto L_089A47A4;
    case 107u: goto L_089A47AC;
    case 108u: goto L_089A47B4;
    case 109u: goto L_089A47C0;
    case 110u: goto L_089A47CC;
    case 111u: goto L_089A47D0;
    case 112u: goto L_089A47D8;
    case 113u: goto L_089A47F4;
    case 114u: goto L_089A4808;
    case 115u: goto L_089A4814;
    case 116u: goto L_089A482C;
    case 117u: goto L_089A4844;
    case 118u: goto L_089A4850;
    case 119u: goto L_089A4858;
    case 120u: goto L_089A48D4;
    case 121u: goto L_089A48F4;
    case 122u: goto L_089A4908;
    case 123u: goto L_089A4918;
    case 124u: goto L_089A4920;
    case 125u: goto L_089A492C;
    case 126u: goto L_089A4934;
    case 127u: goto L_089A4964;
    case 128u: goto L_089A4978;
    case 129u: goto L_089A4990;
    case 130u: goto L_089A49A0;
    case 131u: goto L_089A49A8;
    case 132u: goto L_089A49C8;
    case 133u: goto L_089A49D4;
    case 134u: goto L_089A4A08;
    case 135u: goto L_089A4A10;
    case 136u: goto L_089A4A18;
    case 137u: goto L_089A4A2C;
    case 138u: goto L_089A4A38;
    case 139u: goto L_089A4A40;
    case 140u: goto L_089A4A48;
    case 141u: goto L_089A4A50;
    case 142u: goto L_089A4A58;
    case 143u: goto L_089A4A68;
    case 144u: goto L_089A4A78;
    case 145u: goto L_089A4A84;
    case 146u: goto L_089A4A94;
    case 147u: goto L_089A4AA0;
    case 148u: goto L_089A4AA8;
    case 149u: goto L_089A4AB8;
    case 150u: goto L_089A4AC8;
    case 151u: goto L_089A4AD4;
    case 152u: goto L_089A4AE4;
    case 153u: goto L_089A4AF0;
    case 154u: goto L_089A4AF8;
    case 155u: goto L_089A4B08;
    case 156u: goto L_089A4B18;
    case 157u: goto L_089A4B24;
    case 158u: goto L_089A4B34;
    case 159u: goto L_089A4B40;
    case 160u: goto L_089A4B48;
    case 161u: goto L_089A4B58;
    case 162u: goto L_089A4B68;
    case 163u: goto L_089A4B74;
    case 164u: goto L_089A4B84;
    case 165u: goto L_089A4B90;
    case 166u: goto L_089A4B98;
    case 167u: goto L_089A4BA8;
    case 168u: goto L_089A4BB8;
    case 169u: goto L_089A4BC4;
    case 170u: goto L_089A4BD4;
    case 171u: goto L_089A4BE0;
    case 172u: goto L_089A4BE8;
    case 173u: goto L_089A4BF8;
    case 174u: goto L_089A4C08;
    case 175u: goto L_089A4C14;
    case 176u: goto L_089A4C24;
    case 177u: goto L_089A4C30;
    case 178u: goto L_089A4C38;
    case 179u: goto L_089A4C54;
    case 180u: goto L_089A4C90;
    case 181u: goto L_089A4C9C;
    case 182u: goto L_089A4CAC;
    case 183u: goto L_089A4CC8;
    case 184u: goto L_089A4CD4;
    case 185u: goto L_089A4CE8;
    case 186u: goto L_089A4CF0;
    case 187u: goto L_089A4CF8;
    case 188u: goto L_089A4D14;
    case 189u: goto L_089A4D18;
    case 190u: goto L_089A4D20;
    case 191u: goto L_089A4D28;
    case 192u: goto L_089A4D30;
    case 193u: goto L_089A4D38;
    case 194u: goto L_089A4D44;
    case 195u: goto L_089A4D50;
    case 196u: goto L_089A4D5C;
    case 197u: goto L_089A4D68;
    case 198u: goto L_089A4D6C;
    case 199u: goto L_089A4D74;
    case 200u: goto L_089A4D98;
    case 201u: goto L_089A4DA4;
    case 202u: goto L_089A4DCC;
    case 203u: goto L_089A4DD8;
    case 204u: goto L_089A4E00;
    case 205u: goto L_089A4E24;
    case 206u: goto L_089A4E2C;
    case 207u: goto L_089A4E40;
    case 208u: goto L_089A4E50;
    case 209u: goto L_089A4E68;
    case 210u: goto L_089A4E74;
    case 211u: goto L_089A4E80;
    case 212u: goto L_089A4E8C;
    case 213u: goto L_089A4E98;
    case 214u: goto L_089A4E9C;
    case 215u: goto L_089A4EA4;
    case 216u: goto L_089A4EA8;
    case 217u: goto L_089A4EB0;
    case 218u: goto L_089A4EC4;
    case 219u: goto L_089A4ED0;
    case 220u: goto L_089A4ED8;
    case 221u: goto L_089A4EE4;
    case 222u: goto L_089A4EE8;
    case 223u: goto L_089A4F0C;
    case 224u: goto L_089A4F38;
    case 225u: goto L_089A4FC4;
    case 226u: goto L_089A4FDC;
    case 227u: goto L_089A4FEC;
    case 228u: goto L_089A5010;
    case 229u: goto L_089A5030;
    case 230u: goto L_089A503C;
    case 231u: goto L_089A5044;
    case 232u: goto L_089A504C;
    case 233u: goto L_089A5054;
    case 234u: goto L_089A506C;
    case 235u: goto L_089A507C;
    case 236u: goto L_089A5080;
    case 237u: goto L_089A508C;
    case 238u: goto L_089A5098;
    case 239u: goto L_089A50E4;
    case 240u: goto L_089A5118;
    case 241u: goto L_089A5124;
    case 242u: goto L_089A5148;
    case 243u: goto L_089A5150;
    case 244u: goto L_089A5158;
    case 245u: goto L_089A5160;
    case 246u: goto L_089A5174;
    case 247u: goto L_089A51A0;
    case 248u: goto L_089A51AC;
    case 249u: goto L_089A51B4;
    case 250u: goto L_089A51CC;
    case 251u: goto L_089A51D4;
    case 252u: goto L_089A51DC;
    case 253u: goto L_089A51E0;
    case 254u: goto L_089A51F0;
    case 255u: goto L_089A51F8;
    case 256u: goto L_089A5210;
    case 257u: goto L_089A5244;
    case 258u: goto L_089A5264;
    case 259u: goto L_089A526C;
    case 260u: goto L_089A527C;
    case 261u: goto L_089A5284;
    case 262u: goto L_089A528C;
    case 263u: goto L_089A5298;
    case 264u: goto L_089A52AC;
    case 265u: goto L_089A52B4;
    case 266u: goto L_089A52C0;
    case 267u: goto L_089A52CC;
    case 268u: goto L_089A52E4;
    case 269u: goto L_089A52FC;
    case 270u: goto L_089A5308;
    case 271u: goto L_089A5310;
    case 272u: goto L_089A531C;
    case 273u: goto L_089A5324;
    case 274u: goto L_089A5330;
    case 275u: goto L_089A5338;
    case 276u: goto L_089A5344;
    case 277u: goto L_089A534C;
    case 278u: goto L_089A5358;
    case 279u: goto L_089A5360;
    case 280u: goto L_089A536C;
    case 281u: goto L_089A5374;
    case 282u: goto L_089A5380;
    case 283u: goto L_089A5388;
    case 284u: goto L_089A5394;
    case 285u: goto L_089A539C;
    case 286u: goto L_089A53A8;
    case 287u: goto L_089A53B0;
    case 288u: goto L_089A53BC;
    case 289u: goto L_089A53C4;
    case 290u: goto L_089A53D0;
    case 291u: goto L_089A53D8;
    case 292u: goto L_089A53E4;
    case 293u: goto L_089A53EC;
    case 294u: goto L_089A53F8;
    case 295u: goto L_089A5400;
    case 296u: goto L_089A540C;
    case 297u: goto L_089A5414;
    case 298u: goto L_089A5420;
    case 299u: goto L_089A5428;
    case 300u: goto L_089A5434;
    case 301u: goto L_089A543C;
    case 302u: goto L_089A5448;
    case 303u: goto L_089A5450;
    case 304u: goto L_089A545C;
    case 305u: goto L_089A5464;
    case 306u: goto L_089A5470;
    case 307u: goto L_089A5478;
    case 308u: goto L_089A5484;
    case 309u: goto L_089A548C;
    case 310u: goto L_089A5498;
    case 311u: goto L_089A54A0;
    case 312u: goto L_089A54AC;
    case 313u: goto L_089A54B4;
    case 314u: goto L_089A54C0;
    case 315u: goto L_089A54C8;
    case 316u: goto L_089A54D4;
    case 317u: goto L_089A54D8;
    case 318u: goto L_089A54E4;
    case 319u: goto L_089A54EC;
    case 320u: goto L_089A54F8;
    case 321u: goto L_089A5550;
    case 322u: goto L_089A555C;
    case 323u: goto L_089A5570;
    case 324u: goto L_089A557C;
    case 325u: goto L_089A560C;
    case 326u: goto L_089A5614;
    case 327u: goto L_089A5628;
    case 328u: goto L_089A5664;
    case 329u: goto L_089A5680;
    case 330u: goto L_089A56F0;
    case 331u: goto L_089A5724;
    case 332u: goto L_089A573C;
    case 333u: goto L_089A5780;
    case 334u: goto L_089A5988;
    case 335u: goto L_089A599C;
    case 336u: goto L_089A59CC;
    case 337u: goto L_089A59E4;
    case 338u: goto L_089A6090;
    case 339u: goto L_089A60A0;
    case 340u: goto L_089A60B8;
    case 341u: goto L_089A60C8;
    case 342u: goto L_089A60D0;
    case 343u: goto L_089A60F8;
    case 344u: goto L_089A610C;
    case 345u: goto L_089A6120;
    case 346u: goto L_089A6138;
    case 347u: goto L_089A614C;
    case 348u: goto L_089A6198;
    case 349u: goto L_089A61C0;
    case 350u: goto L_089A61DC;
    case 351u: goto L_089A6200;
    case 352u: goto L_089A621C;
    case 353u: goto L_089A6234;
    case 354u: goto L_089A626C;
    case 355u: goto L_089A6290;
    case 356u: goto L_089A629C;
    case 357u: goto L_089A62CC;
    case 358u: goto L_089A6320;
    case 359u: goto L_089A633C;
    case 360u: goto L_089A6350;
    case 361u: goto L_089A635C;
    case 362u: goto L_089A6364;
    case 363u: goto L_089A6374;
    case 364u: goto L_089A6384;
    case 365u: goto L_089A6390;
    case 366u: goto L_089A639C;
    case 367u: goto L_089A63A8;
    case 368u: goto L_089A63BC;
    case 369u: goto L_089A63C8;
    case 370u: goto L_089A63D0;
    case 371u: goto L_089A63D8;
    case 372u: goto L_089A63E0;
    case 373u: goto L_089A63E8;
    case 374u: goto L_089A63F0;
    case 375u: goto L_089A63F8;
    case 376u: goto L_089A6404;
    case 377u: goto L_089A6410;
    case 378u: goto L_089A6424;
    case 379u: goto L_089A6434;
    case 380u: goto L_089A643C;
    case 381u: goto L_089A6450;
    case 382u: goto L_089A6454;
    case 383u: goto L_089A645C;
    case 384u: goto L_089A6464;
    case 385u: goto L_089A646C;
    case 386u: goto L_089A6474;
    case 387u: goto L_089A6488;
    case 388u: goto L_089A6494;
    case 389u: goto L_089A64A4;
    case 390u: goto L_089A64AC;
    case 391u: goto L_089A64B4;
    case 392u: goto L_089A64C0;
    case 393u: goto L_089A64C8;
    case 394u: goto L_089A64D0;
    case 395u: goto L_089A64E0;
    case 396u: goto L_089A64F4;
    case 397u: goto L_089A6500;
    case 398u: goto L_089A6510;
    case 399u: goto L_089A651C;
    case 400u: goto L_089A6528;
    case 401u: goto L_089A6530;
    case 402u: goto L_089A6538;
    case 403u: goto L_089A6544;
    case 404u: goto L_089A654C;
    case 405u: goto L_089A6554;
    case 406u: goto L_089A6564;
    case 407u: goto L_089A6570;
    case 408u: goto L_089A6580;
    case 409u: goto L_089A658C;
    case 410u: goto L_089A6594;
    case 411u: goto L_089A6598;
    case 412u: goto L_089A65A0;
    case 413u: goto L_089A65AC;
    case 414u: goto L_089A65BC;
    case 415u: goto L_089A65C8;
    case 416u: goto L_089A65D0;
    case 417u: goto L_089A65D4;
    case 418u: goto L_089A65DC;
    case 419u: goto L_089A65E8;
    case 420u: goto L_089A65F0;
    case 421u: goto L_089A6604;
    case 422u: goto L_089A6698;
    case 423u: goto L_089A66FC;
    case 424u: goto L_089A67A8;
    case 425u: goto L_089A67F8;
    case 426u: goto L_089A680C;
    case 427u: goto L_089A6828;
    case 428u: goto L_089A6848;
    case 429u: goto L_089A6858;
    case 430u: goto L_089A6864;
    case 431u: goto L_089A6870;
    case 432u: goto L_089A6884;
    case 433u: goto L_089A6888;
    case 434u: goto L_089A68B4;
    case 435u: goto L_089A68C0;
    case 436u: goto L_089A68CC;
    case 437u: goto L_089A68D4;
    case 438u: goto L_089A68DC;
    case 439u: goto L_089A68EC;
    case 440u: goto L_089A68F8;
    case 441u: goto L_089A6908;
    case 442u: goto L_089A6928;
    case 443u: goto L_089A6938;
    case 444u: goto L_089A6954;
    case 445u: goto L_089A695C;
    case 446u: goto L_089A6964;
    case 447u: goto L_089A696C;
    case 448u: goto L_089A6990;
    case 449u: goto L_089A699C;
    case 450u: goto L_089A69AC;
    case 451u: goto L_089A69BC;
    case 452u: goto L_089A69D4;
    case 453u: goto L_089A69DC;
    case 454u: goto L_089A69E8;
    case 455u: goto L_089A69F8;
    case 456u: goto L_089A6A04;
    case 457u: goto L_089A6A18;
    case 458u: goto L_089A6A28;
    case 459u: goto L_089A6A34;
    case 460u: goto L_089A6A60;
    case 461u: goto L_089A6A6C;
    case 462u: goto L_089A6A7C;
    case 463u: goto L_089A6A8C;
    case 464u: goto L_089A6A98;
    case 465u: goto L_089A6AAC;
    case 466u: goto L_089A6AB8;
    case 467u: goto L_089A6ADC;
    case 468u: goto L_089A6B00;
    case 469u: goto L_089A6B08;
    case 470u: goto L_089A6B2C;
    case 471u: goto L_089A6B38;
    case 472u: goto L_089A6B40;
    case 473u: goto L_089A6B48;
    case 474u: goto L_089A6B68;
    case 475u: goto L_089A6B6C;
    case 476u: goto L_089A6B7C;
    case 477u: goto L_089A6B84;
    case 478u: goto L_089A6B98;
    case 479u: goto L_089A6BAC;
    case 480u: goto L_089A6BB0;
    case 481u: goto L_089A6BBC;
    case 482u: goto L_089A6BCC;
    case 483u: goto L_089A6BF4;
    case 484u: goto L_089A6C04;
    case 485u: goto L_089A6C08;
    case 486u: goto L_089A6C1C;
    case 487u: goto L_089A6C24;
    case 488u: goto L_089A6C38;
    case 489u: goto L_089A6C40;
    case 490u: goto L_089A6C48;
    case 491u: goto L_089A6C50;
    case 492u: goto L_089A6C90;
    case 493u: goto L_089A6C94;
    case 494u: goto L_089A6C9C;
    case 495u: goto L_089A6CAC;
    case 496u: goto L_089A6CD4;
    case 497u: goto L_089A6CE8;
    case 498u: goto L_089A6CF4;
    case 499u: goto L_089A6D00;
    case 500u: goto L_089A6D44;
    case 501u: goto L_089A6D80;
    case 502u: goto L_089A6DD4;
    case 503u: goto L_089A6DE0;
    case 504u: goto L_089A6DF0;
    case 505u: goto L_089A6E00;
    case 506u: goto L_089A6E10;
    case 507u: goto L_089A6E20;
    case 508u: goto L_089A6E30;
    case 509u: goto L_089A6E38;
    case 510u: goto L_089A6E40;
    case 511u: goto L_089A6E48;
    case 512u: goto L_089A6E60;
    case 513u: goto L_089A6E70;
    case 514u: goto L_089A6E88;
    case 515u: goto L_089A6E90;
    case 516u: goto L_089A6E98;
    case 517u: goto L_089A6EA4;
    case 518u: goto L_089A6EAC;
    case 519u: goto L_089A6EB4;
    case 520u: goto L_089A6EC0;
    case 521u: goto L_089A6ED0;
    case 522u: goto L_089A6EE0;
    case 523u: goto L_089A6EEC;
    case 524u: goto L_089A6EF4;
    case 525u: goto L_089A6F00;
    case 526u: goto L_089A6F08;
    case 527u: goto L_089A6F20;
    case 528u: goto L_089A6F34;
    case 529u: goto L_089A6F5C;
    case 530u: goto L_089A6F88;
    case 531u: goto L_089A6F9C;
    case 532u: goto L_089A6FAC;
    case 533u: goto L_089A6FB4;
    case 534u: goto L_089A6FC4;
    case 535u: goto L_089A6FD0;
    case 536u: goto L_089A6FD8;
    case 537u: goto L_089A6FE0;
    case 538u: goto L_089A6FE8;
    case 539u: goto L_089A7018;
    case 540u: goto L_089A7020;
    case 541u: goto L_089A7030;
    case 542u: goto L_089A7044;
    case 543u: goto L_089A704C;
    case 544u: goto L_089A7068;
    case 545u: goto L_089A7074;
    case 546u: goto L_089A707C;
    case 547u: goto L_089A708C;
    case 548u: goto L_089A70A0;
    case 549u: goto L_089A70A8;
    case 550u: goto L_089A70C8;
    case 551u: goto L_089A70D8;
    case 552u: goto L_089A70E0;
    case 553u: goto L_089A70FC;
    case 554u: goto L_089A7110;
    case 555u: goto L_089A712C;
    case 556u: goto L_089A7168;
    case 557u: goto L_089A7170;
    case 558u: goto L_089A718C;
    case 559u: goto L_089A71A0;
    case 560u: goto L_089A71BC;
    case 561u: goto L_089A71F8;
    case 562u: goto L_089A7200;
    case 563u: goto L_089A7220;
    case 564u: goto L_089A7248;
    case 565u: goto L_089A7264;
    case 566u: goto L_089A7278;
    case 567u: goto L_089A72E8;
    case 568u: goto L_089A72F8;
    case 569u: goto L_089A7364;
    case 570u: goto L_089A7374;
    case 571u: goto L_089A7384;
    case 572u: goto L_089A7398;
    case 573u: goto L_089A73A8;
    case 574u: goto L_089A73B8;
    case 575u: goto L_089A73BC;
    case 576u: goto L_089A7428;
    case 577u: goto L_089A744C;
    case 578u: goto L_089A7454;
    case 579u: goto L_089A745C;
    case 580u: goto L_089A7464;
    case 581u: goto L_089A746C;
    case 582u: goto L_089A7474;
    case 583u: goto L_089A747C;
    case 584u: goto L_089A7490;
    case 585u: goto L_089A7498;
    case 586u: goto L_089A74AC;
    case 587u: goto L_089A74C8;
    case 588u: goto L_089A74E4;
    case 589u: goto L_089A74F8;
    case 590u: goto L_089A7568;
    case 591u: goto L_089A7578;
    case 592u: goto L_089A75E4;
    case 593u: goto L_089A75F4;
    case 594u: goto L_089A7604;
    case 595u: goto L_089A7618;
    case 596u: goto L_089A7620;
    case 597u: goto L_089A7630;
    case 598u: goto L_089A7640;
    case 599u: goto L_089A7644;
    case 600u: goto L_089A76B0;
    case 601u: goto L_089A76D4;
    case 602u: goto L_089A76DC;
    case 603u: goto L_089A76E4;
    case 604u: goto L_089A76EC;
    case 605u: goto L_089A76F4;
    case 606u: goto L_089A7710;
    case 607u: goto L_089A7718;
    case 608u: goto L_089A7720;
    case 609u: goto L_089A7728;
    case 610u: goto L_089A773C;
    case 611u: goto L_089A7744;
    case 612u: goto L_089A774C;
    case 613u: goto L_089A7754;
    case 614u: goto L_089A7764;
    case 615u: goto L_089A776C;
    case 616u: goto L_089A7784;
    case 617u: goto L_089A7794;
    case 618u: goto L_089A77A0;
    case 619u: goto L_089A7804;
    case 620u: goto L_089A7814;
    case 621u: goto L_089A7880;
    case 622u: goto L_089A7890;
    case 623u: goto L_089A78A0;
    case 624u: goto L_089A78B4;
    case 625u: goto L_089A78BC;
    case 626u: goto L_089A78CC;
    case 627u: goto L_089A78DC;
    case 628u: goto L_089A78E0;
    case 629u: goto L_089A794C;
    case 630u: goto L_089A7954;
    case 631u: goto L_089A796C;
    case 632u: goto L_089A797C;
    case 633u: goto L_089A7988;
    case 634u: goto L_089A79EC;
    case 635u: goto L_089A79FC;
    case 636u: goto L_089A7A68;
    case 637u: goto L_089A7A78;
    case 638u: goto L_089A7A88;
    case 639u: goto L_089A7A9C;
    case 640u: goto L_089A7AA4;
    case 641u: goto L_089A7AB4;
    case 642u: goto L_089A7AC4;
    case 643u: goto L_089A7AC8;
    case 644u: goto L_089A7B34;
    case 645u: goto L_089A7B44;
    case 646u: goto L_089A7B88;
    case 647u: goto L_089A7B9C;
    case 648u: goto L_089A7BB4;
    case 649u: goto L_089A7BC0;
    case 650u: goto L_089A7BD8;
    case 651u: goto L_089A7BE4;
    case 652u: goto L_089A7C00;
    case 653u: goto L_089A7C08;
    case 654u: goto L_089A7C20;
    case 655u: goto L_089A7C28;
    case 656u: goto L_089A7CD4;
    case 657u: goto L_089A7D08;
    case 658u: goto L_089A7D34;
    case 659u: goto L_089A7D60;
    case 660u: goto L_089A7D70;
    case 661u: goto L_089A7DDC;
    case 662u: goto L_089A7E08;
    case 663u: goto L_089A7E24;
    case 664u: goto L_089A7E44;
    case 665u: goto L_089A7E6C;
    case 666u: goto L_089A7EB4;
    case 667u: goto L_089A7EE8;
    case 668u: goto L_089A7FD4;
    case 669u: goto L_089A7FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A4000:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 29u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A4098;
      }
      goto L_089A4040;
    }
L_089A4040:
    ctx.gpr[31] = (0x089A4048u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089A4048u) goto L_089A4048;
    return;
L_089A4048:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4098;
      }
      goto L_089A4050;
    }
L_089A4050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4098;
      }
      goto L_089A405C;
    }
L_089A405C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[17]);
        goto L_089A4098;
    }
    goto L_089A406C;
L_089A406C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A408C;
      }
      goto L_089A4078;
    }
L_089A4078:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A408C;
    }
    goto L_089A4080;
L_089A4080:
    ctx.gpr[31] = (0x089A4088u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A4088u) goto L_089A4088;
    return;
L_089A4088:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A408C;
L_089A408C:
    ctx.gpr[31] = (0x089A4094u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4094u) goto L_089A4094;
    return;
L_089A4094:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[17]);
    goto L_089A4098;
L_089A4098:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A40AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4170;
      }
      goto L_089A40C8;
    }
L_089A40C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4118;
      }
      goto L_089A40D4;
    }
L_089A40D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4118;
      }
      goto L_089A40EC;
    }
L_089A40EC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A40FCu);
    ctx.gpr[6] = (0u | 8000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 625u, 0x089A2A7Cu>(ctx, &aot_mem) && ctx.pc == 0x089A40FCu) goto L_089A40FC;
    return;
L_089A40FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x089A4110u);
    ctx.gpr[6] = (0u | 8000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 625u, 0x089A2A7Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4110u) goto L_089A4110;
    return;
L_089A4110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A41C0;
      }
      goto L_089A4118;
    }
L_089A4118:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A4124u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x089A4124u) goto L_089A4124;
    return;
L_089A4124:
    ctx.gpr[31] = (0x089A412Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089A412Cu) goto L_089A412C;
    return;
L_089A412C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28716)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28720)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A4144u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089A4144u) goto L_089A4144;
    return;
L_089A4144:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089A4168u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x089A4168u) goto L_089A4168;
    return;
L_089A4168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A41C0;
      }
      goto L_089A4170;
    }
L_089A4170:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A417Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x089A417Cu) goto L_089A417C;
    return;
L_089A417C:
    ctx.gpr[31] = (0x089A4184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089A4184u) goto L_089A4184;
    return;
L_089A4184:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28716)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28720)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A419Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089A419Cu) goto L_089A419C;
    return;
L_089A419C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089A41C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x089A41C0u) goto L_089A41C0;
    return;
L_089A41C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A41D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A42EC;
      }
      goto L_089A41F8;
    }
L_089A41F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A42EC;
      }
      goto L_089A4204;
    }
L_089A4204:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[17] = (0u | 11u);
      if (branch_taken) {
          goto L_089A4258;
      }
      goto L_089A4210;
    }
L_089A4210:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(504), 0u);
    ctx.gpr[31] = (0x089A421Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089A421Cu) goto L_089A421C;
    return;
L_089A421C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4260;
      }
      goto L_089A4224;
    }
L_089A4224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 496u);
    ctx.gpr[6] = (ctx.gpr[6] >> 4u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A4260;
      }
      goto L_089A4240;
    }
L_089A4240:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A4260;
      }
      goto L_089A4258;
    }
L_089A4258:
    ctx.gpr[31] = (0x089A4260u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 667u, 0x0889F3D8u>(ctx, &aot_mem) && ctx.pc == 0x089A4260u) goto L_089A4260;
    return;
L_089A4260:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
      if (branch_taken) {
          goto L_089A42B4;
      }
      goto L_089A4278;
    }
L_089A4278:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[4] = (0u | 55u);
      if (branch_taken) {
          goto L_089A42AC;
      }
      goto L_089A4280;
    }
L_089A4280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A42A0;
      }
      goto L_089A428C;
    }
L_089A428C:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A42A0;
    }
    goto L_089A4294;
L_089A4294:
    ctx.gpr[31] = (0x089A429Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A429Cu) goto L_089A429C;
    return;
L_089A429C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A42A0;
L_089A42A0:
    ctx.gpr[31] = (0x089A42A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089A42A8u) goto L_089A42A8;
    return;
L_089A42A8:
    ctx.gpr[4] = (0u | 55u);
    goto L_089A42AC;
L_089A42AC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A42E8;
      }
      goto L_089A42B4;
    }
L_089A42B4:
    if (ctx.gpr[4] != ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), 0u);
        goto L_089A42E8;
    }
    goto L_089A42BC;
L_089A42BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A42DC;
      }
      goto L_089A42C8;
    }
L_089A42C8:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A42DC;
    }
    goto L_089A42D0;
L_089A42D0:
    ctx.gpr[31] = (0x089A42D8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A42D8u) goto L_089A42D8;
    return;
L_089A42D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A42DC;
L_089A42DC:
    ctx.gpr[31] = (0x089A42E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089A42E4u) goto L_089A42E4;
    return;
L_089A42E4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), 0u);
    goto L_089A42E8;
L_089A42E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    goto L_089A42EC;
L_089A42EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4300:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(628), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A4328;
      }
      goto L_089A4310;
    }
L_089A4310:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (ctx.gpr[6] | 512u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(408), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(628));
    ctx.gpr[31] = (0x089A4328u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(628)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A4328u) goto L_089A4328;
    return;
L_089A4328:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4334:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(325)));
    ctx.gpr[8] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089A4390;
      }
      goto L_089A4380;
    }
L_089A4380:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4398;
      }
      goto L_089A4388;
    }
L_089A4388:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (15897u << 16u);
      if (branch_taken) {
          goto L_089A458C;
      }
      goto L_089A4390;
    }
L_089A4390:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089A45F8;
      }
      goto L_089A4398;
    }
L_089A4398:
    ctx.gpr[6] = (15918u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 5243u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (15897u << 16u);
        goto L_089A456C;
    }
    goto L_089A43B8;
L_089A43B8:
    ctx.gpr[6] = (16230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A4464;
      }
      goto L_089A43D8;
    }
L_089A43D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (15692u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[17] = (0u | 1u);
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089A446C;
      }
      goto L_089A445C;
    }
L_089A445C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4524;
      }
      goto L_089A4464;
    }
L_089A4464:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A45F8;
      }
      goto L_089A446C;
    }
L_089A446C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
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
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089A44E4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089A44E4u) goto L_089A44E4;
    return;
L_089A44E4:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[13] / ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089A4508;
    }
    goto L_089A4508;
L_089A4508:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4564;
      }
      goto L_089A4524;
    }
L_089A4524:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089A4564u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089A4564u) goto L_089A4564;
    return;
L_089A4564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A45A8;
      }
      goto L_089A456C;
    }
L_089A456C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A45A8;
      }
      goto L_089A458C;
    }
L_089A458C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A45A8;
L_089A45A8:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089A45E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 328u, 0x088C5AA4u>(ctx, &aot_mem) && ctx.pc == 0x089A45E4u) goto L_089A45E4;
    return;
L_089A45E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A45F4;
      }
      goto L_089A45EC;
    }
L_089A45EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089A45F8;
      }
      goto L_089A45F4;
    }
L_089A45F4:
    ctx.gpr[2] = (0u | 0u);
    goto L_089A45F8;
L_089A45F8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4618:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A4640;
      }
      goto L_089A4628;
    }
L_089A4628:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[11] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4648;
      }
      goto L_089A4640;
    }
L_089A4640:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A46CC;
      }
      goto L_089A4648;
    }
L_089A4648:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A46C8;
      }
      goto L_089A465C;
    }
L_089A465C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    goto L_089A4668;
L_089A4668:
    ctx.gpr[8] = (ctx.gpr[10] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089A4698;
      }
      goto L_089A4680;
    }
L_089A4680:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A4698;
      }
      goto L_089A468C;
    }
L_089A468C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A46B8;
      }
      goto L_089A4698;
    }
L_089A4698:
    ctx.gpr[8] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[8] << 16u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4668;
      }
      goto L_089A46B0;
    }
L_089A46B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A46C8;
      }
      goto L_089A46B8;
    }
L_089A46B8:
    ctx.gpr[5] = (ctx.gpr[11] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1780), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A46CC;
      }
      goto L_089A46C8;
    }
L_089A46C8:
    ctx.gpr[2] = (0u | 1u);
    goto L_089A46CC;
L_089A46CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A46D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A4738;
      }
      goto L_089A46F4;
    }
L_089A46F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[17] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A4738;
      }
      goto L_089A4704;
    }
L_089A4704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A4710u);
    ctx.gpr[5] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A4710u) goto L_089A4710;
    return;
L_089A4710:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4730;
      }
      goto L_089A4718;
    }
L_089A4718:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089A4740;
      }
      goto L_089A4728;
    }
L_089A4728:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
      if (branch_taken) {
          goto L_089A4770;
      }
      goto L_089A4730;
    }
L_089A4730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4814;
      }
      goto L_089A4738;
    }
L_089A4738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4814;
      }
      goto L_089A4740;
    }
L_089A4740:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A47A4;
      }
      goto L_089A476C;
    }
L_089A476C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    goto L_089A4770;
L_089A4770:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1244)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[31] = (0x089A478Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x089A478Cu) goto L_089A478C;
    return;
L_089A478C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
        goto L_089A47AC;
    }
    goto L_089A479C;
L_089A479C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A47D8;
      }
      goto L_089A47A4;
    }
L_089A47A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4814;
      }
      goto L_089A47AC;
    }
L_089A47AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A47D0;
      }
      goto L_089A47B4;
    }
L_089A47B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A47D0;
    }
    goto L_089A47C0;
L_089A47C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089A47CCu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A47CCu) goto L_089A47CC;
    return;
L_089A47CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A47D0;
L_089A47D0:
    ctx.gpr[31] = (0x089A47D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089A47D8u) goto L_089A47D8;
    return;
L_089A47D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (16640u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A47F4u);
    ctx.gpr[6] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089A47F4u) goto L_089A47F4;
    return;
L_089A47F4:
    ctx.gpr[5] = (2204u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A4808u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10280));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x089A4808u) goto L_089A4808;
    return;
L_089A4808:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A4814;
L_089A4814:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A482C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4850;
      }
      goto L_089A4844;
    }
L_089A4844:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(904))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4858;
      }
      goto L_089A4850;
    }
L_089A4850:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A492C;
      }
      goto L_089A4858;
    }
L_089A4858:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(872)));
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31760));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31760)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1340)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A4908;
      }
      goto L_089A48D4;
    }
L_089A48D4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4908;
      }
      goto L_089A48F4;
    }
L_089A48F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(872)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1080), ctx.gpr[5]);
    goto L_089A4908;
L_089A4908:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(904))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A4920;
      }
      goto L_089A4918;
    }
L_089A4918:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A492C;
      }
      goto L_089A4920;
    }
L_089A4920:
    ctx.gpr[2] = (2232u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-31760));
      if (branch_taken) {
          goto L_089A492C;
      }
      goto L_089A492C;
    }
L_089A492C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4934:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(408)));
    ctx.gpr[7] = (4u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(408), ctx.gpr[6]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(404), ctx.gpr[6]);
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4964:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089A4990;
      }
      goto L_089A4978;
    }
L_089A4978:
    ctx.gpr[5] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089A4990;
L_089A4990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A49A8;
      }
      goto L_089A49A0;
    }
L_089A49A0:
    ctx.gpr[31] = (0x089A49A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089A49A8u) goto L_089A49A8;
    return;
L_089A49A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A49C8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1352)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A49D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089A4A10;
      }
      goto L_089A4A08;
    }
L_089A4A08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1352), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_089A4A10;
L_089A4A10:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A4C38;
      }
      goto L_089A4A18;
    }
L_089A4A18:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (20224u << 16u);
      if (branch_taken) {
          goto L_089A4C38;
      }
      goto L_089A4A2C;
    }
L_089A4A2C:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089A4AA8;
      }
      goto L_089A4A38;
    }
L_089A4A38:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089A4AF8;
      }
      goto L_089A4A40;
    }
L_089A4A40:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A4B48;
      }
      goto L_089A4A48;
    }
L_089A4A48:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089A4B98;
      }
      goto L_089A4A50;
    }
L_089A4A50:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089A4BE8;
      }
      goto L_089A4A58;
    }
L_089A4A58:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A4A68u);
    ctx.gpr[5] = (0u | 39u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 460u, 0x0888682Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4A68u) goto L_089A4A68;
    return;
L_089A4A68:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_089A4A84;
    }
    goto L_089A4A78;
L_089A4A78:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A4A94;
      }
      goto L_089A4A84;
    }
L_089A4A84:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A4A94;
L_089A4A94:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A4AA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 530u, 0x08886B78u>(ctx, &aot_mem) && ctx.pc == 0x089A4AA0u) goto L_089A4AA0;
    return;
L_089A4AA0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1356), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089A4C38;
      }
      goto L_089A4AA8;
    }
L_089A4AA8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A4AB8u);
    ctx.gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 460u, 0x0888682Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4AB8u) goto L_089A4AB8;
    return;
L_089A4AB8:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_089A4AD4;
    }
    goto L_089A4AC8;
L_089A4AC8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A4AE4;
      }
      goto L_089A4AD4;
    }
L_089A4AD4:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A4AE4;
L_089A4AE4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A4AF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 530u, 0x08886B78u>(ctx, &aot_mem) && ctx.pc == 0x089A4AF0u) goto L_089A4AF0;
    return;
L_089A4AF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1356), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089A4C38;
      }
      goto L_089A4AF8;
    }
L_089A4AF8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A4B08u);
    ctx.gpr[5] = (0u | 43u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 460u, 0x0888682Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4B08u) goto L_089A4B08;
    return;
L_089A4B08:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_089A4B24;
    }
    goto L_089A4B18;
L_089A4B18:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A4B34;
      }
      goto L_089A4B24;
    }
L_089A4B24:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A4B34;
L_089A4B34:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A4B40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 530u, 0x08886B78u>(ctx, &aot_mem) && ctx.pc == 0x089A4B40u) goto L_089A4B40;
    return;
L_089A4B40:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1356), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089A4C38;
      }
      goto L_089A4B48;
    }
L_089A4B48:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A4B58u);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 460u, 0x0888682Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4B58u) goto L_089A4B58;
    return;
L_089A4B58:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_089A4B74;
    }
    goto L_089A4B68;
L_089A4B68:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A4B84;
      }
      goto L_089A4B74;
    }
L_089A4B74:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A4B84;
L_089A4B84:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A4B90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 530u, 0x08886B78u>(ctx, &aot_mem) && ctx.pc == 0x089A4B90u) goto L_089A4B90;
    return;
L_089A4B90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1356), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089A4C38;
      }
      goto L_089A4B98;
    }
L_089A4B98:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A4BA8u);
    ctx.gpr[5] = (0u | 45u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 460u, 0x0888682Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4BA8u) goto L_089A4BA8;
    return;
L_089A4BA8:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_089A4BC4;
    }
    goto L_089A4BB8;
L_089A4BB8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A4BD4;
      }
      goto L_089A4BC4;
    }
L_089A4BC4:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A4BD4;
L_089A4BD4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A4BE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 530u, 0x08886B78u>(ctx, &aot_mem) && ctx.pc == 0x089A4BE0u) goto L_089A4BE0;
    return;
L_089A4BE0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1356), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089A4C38;
      }
      goto L_089A4BE8;
    }
L_089A4BE8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A4BF8u);
    ctx.gpr[5] = (0u | 53u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 460u, 0x0888682Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4BF8u) goto L_089A4BF8;
    return;
L_089A4BF8:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_089A4C14;
    }
    goto L_089A4C08;
L_089A4C08:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A4C24;
      }
      goto L_089A4C14;
    }
L_089A4C14:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A4C24;
L_089A4C24:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A4C30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 530u, 0x08886B78u>(ctx, &aot_mem) && ctx.pc == 0x089A4C30u) goto L_089A4C30;
    return;
L_089A4C30:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1356), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089A4C38;
      }
      goto L_089A4C38;
    }
L_089A4C38:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4C54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[7] & 65535u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089A4CF0;
      }
      goto L_089A4C90;
    }
L_089A4C90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4CE8;
      }
      goto L_089A4C9C;
    }
L_089A4C9C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1924), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1924));
    ctx.gpr[31] = (0x089A4CACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A4CACu) goto L_089A4CAC;
    return;
L_089A4CAC:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1936));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(1952), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1956), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089A4CC8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089A4CC8u) goto L_089A4CC8;
    return;
L_089A4CC8:
    ctx.gpr[20] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (0u | 45u);
      if (branch_taken) {
          goto L_089A4CF8;
      }
      goto L_089A4CD4;
    }
L_089A4CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A4D18;
      }
      goto L_089A4CE8;
    }
L_089A4CE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A4EE8;
      }
      goto L_089A4CF0;
    }
L_089A4CF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A4EE8;
      }
      goto L_089A4CF8;
    }
L_089A4CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4D18;
      }
      goto L_089A4D14;
    }
L_089A4D14:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1412), ctx.gpr[17]);
    goto L_089A4D18;
L_089A4D18:
    ctx.gpr[31] = (0x089A4D20u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089A4D20u) goto L_089A4D20;
    return;
L_089A4D20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4D30;
      }
      goto L_089A4D28;
    }
L_089A4D28:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(592), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(596), 0u);
    goto L_089A4D30;
L_089A4D30:
    ctx.gpr[31] = (0x089A4D38u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x089A4D38u) goto L_089A4D38;
    return;
L_089A4D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089A4D74;
      }
      goto L_089A4D44;
    }
L_089A4D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4D6C;
      }
      goto L_089A4D50;
    }
L_089A4D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A4D6C;
    }
    goto L_089A4D5C;
L_089A4D5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089A4D68u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A4D68u) goto L_089A4D68;
    return;
L_089A4D68:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A4D6C;
L_089A4D6C:
    ctx.gpr[31] = (0x089A4D74u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4D74u) goto L_089A4D74;
    return;
L_089A4D74:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (17530u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089A4D98u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089A4D98u) goto L_089A4D98;
    return;
L_089A4D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1708)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089A4DCC;
      }
      goto L_089A4DA4;
    }
L_089A4DA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1708), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1960), ctx.gpr[4]);
    goto L_089A4DCC;
L_089A4DCC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089A4DD8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 652u, 0x0899F648u>(ctx, &aot_mem) && ctx.pc == 0x089A4DD8u) goto L_089A4DD8;
    return;
L_089A4DD8:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1964), ctx.gpr[5]);
    ctx.gpr[31] = (0x089A4E00u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 652u, 0x0899F648u>(ctx, &aot_mem) && ctx.pc == 0x089A4E00u) goto L_089A4E00;
    return;
L_089A4E00:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089A4E24u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(1968), static_cast<std::uint16_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089A4E24u) goto L_089A4E24;
    return;
L_089A4E24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4EB0;
      }
      goto L_089A4E2C;
    }
L_089A4E2C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 30000u);
    ctx.gpr[31] = (0x089A4E40u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x089A4E40u) goto L_089A4E40;
    return;
L_089A4E40:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089A4E50u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 10u, 0x089440A0u>(ctx, &aot_mem) && ctx.pc == 0x089A4E50u) goto L_089A4E50;
    return;
L_089A4E50:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089A4E68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 313u, 0x088EE22Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4E68u) goto L_089A4E68;
    return;
L_089A4E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[4] = (0u | 12u);
      if (branch_taken) {
          goto L_089A4EA8;
      }
      goto L_089A4E74;
    }
L_089A4E74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4E9C;
      }
      goto L_089A4E80;
    }
L_089A4E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A4E9C;
    }
    goto L_089A4E8C;
L_089A4E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089A4E98u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A4E98u) goto L_089A4E98;
    return;
L_089A4E98:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A4E9C;
L_089A4E9C:
    ctx.gpr[31] = (0x089A4EA4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4EA4u) goto L_089A4EA4;
    return;
L_089A4EA4:
    ctx.gpr[4] = (0u | 12u);
    goto L_089A4EA8;
L_089A4EA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A4EC4;
      }
      goto L_089A4EB0;
    }
L_089A4EB0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 30000u);
    ctx.gpr[31] = (0x089A4EC4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x089A4EC4u) goto L_089A4EC4;
    return;
L_089A4EC4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089A4ED0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x089A4ED0u) goto L_089A4ED0;
    return;
L_089A4ED0:
    ctx.gpr[31] = (0x089A4ED8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 382u, 0x089BDEF0u>(ctx, &aot_mem) && ctx.pc == 0x089A4ED8u) goto L_089A4ED8;
    return;
L_089A4ED8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089A4EE4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 256u, 0x088D52C4u>(ctx, &aot_mem) && ctx.pc == 0x089A4EE4u) goto L_089A4EE4;
    return;
L_089A4EE4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_089A4EE8;
L_089A4EE8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_089A4F0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1924), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A4FDC;
      }
      goto L_089A4F38;
    }
L_089A4F38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    ctx.gpr[5] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089A4FC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x089A4FC4u) goto L_089A4FC4;
    return;
L_089A4FC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5160;
      }
      goto L_089A4FDC;
    }
L_089A4FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A5160;
      }
      goto L_089A4FEC;
    }
L_089A4FEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 45u);
      if (branch_taken) {
          goto L_089A503C;
      }
      goto L_089A5010;
    }
L_089A5010:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089A5030u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5030u) goto L_089A5030;
    return;
L_089A5030:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089A503Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 565u, 0x0899F0E4u>(ctx, &aot_mem) && ctx.pc == 0x089A503Cu) goto L_089A503C;
    return;
L_089A503C:
    ctx.gpr[31] = (0x089A5044u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089A5044u) goto L_089A5044;
    return;
L_089A5044:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A507C;
      }
      goto L_089A504C;
    }
L_089A504C:
    ctx.gpr[31] = (0x089A5054u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5054u) goto L_089A5054;
    return;
L_089A5054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (17530u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089A506Cu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089A506Cu) goto L_089A506C;
    return;
L_089A506C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A5080;
      }
      goto L_089A507C;
    }
L_089A507C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    goto L_089A5080;
L_089A5080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A5148;
      }
      goto L_089A508C;
    }
L_089A508C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1964)));
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_089A50E4;
    }
    goto L_089A5098;
L_089A5098:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1964)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1968)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1964), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1968), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089A5118;
      }
      goto L_089A50E4;
    }
L_089A50E4:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_089A5118;
L_089A5118:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    ctx.gpr[31] = (0x089A5124u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x089A5124u) goto L_089A5124;
    return;
L_089A5124:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1708), ctx.gpr[17]);
    goto L_089A5148;
L_089A5148:
    ctx.gpr[31] = (0x089A5150u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089A5150u) goto L_089A5150;
    return;
L_089A5150:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5160;
      }
      goto L_089A5158;
    }
L_089A5158:
    ctx.gpr[31] = (0x089A5160u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A46D4;
L_089A5160:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5174:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A51A0u);
    ctx.gpr[5] = (0u | 161u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A51A0u) goto L_089A51A0;
    return;
L_089A51A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A51B4;
      }
      goto L_089A51AC;
    }
L_089A51AC:
    ctx.gpr[31] = (0x089A51B4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 137u, 0x0899D2A4u>(ctx, &aot_mem) && ctx.pc == 0x089A51B4u) goto L_089A51B4;
    return;
L_089A51B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089A51CCu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A51CCu) goto L_089A51CC;
    return;
L_089A51CC:
    ctx.gpr[31] = (0x089A51D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089A51D4u) goto L_089A51D4;
    return;
L_089A51D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A51E0;
      }
      goto L_089A51DC;
    }
L_089A51DC:
    ctx.gpr[18] = (0u | 0u);
    goto L_089A51E0;
L_089A51E0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A51F0u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 660u, 0x089C6C8Cu>(ctx, &aot_mem) && ctx.pc == 0x089A51F0u) goto L_089A51F0;
    return;
L_089A51F0:
    ctx.gpr[31] = (0x089A51F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x089A51F8u) goto L_089A51F8;
    return;
L_089A51F8:
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
L_089A5210:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089A5244u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A5244u) goto L_089A5244;
    return;
L_089A5244:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(864), 0u);
    ctx.gpr[31] = (0x089A5264u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x089A5264u) goto L_089A5264;
    return;
L_089A5264:
    ctx.gpr[31] = (0x089A526Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 879u, 0x089A3B74u>(ctx, &aot_mem) && ctx.pc == 0x089A526Cu) goto L_089A526C;
    return;
L_089A526C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A527C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(1914), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5284:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1914)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A528C:
    ctx.gpr[5] = (0u | 2u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1084), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5298:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1084)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089A52B4;
      }
      goto L_089A52AC;
    }
L_089A52AC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1084), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089A52B4;
L_089A52B4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A52C0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1088));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x089A52C0u) goto L_089A52C0;
    return;
L_089A52C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A52CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-36));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(50) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A52E4;
    }
L_089A52E4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17736)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A52FC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5308u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18228));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5308u) goto L_089A5308;
    return;
L_089A5308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A5310;
    }
L_089A5310:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A531Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18220));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A531Cu) goto L_089A531C;
    return;
L_089A531C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A5324;
    }
L_089A5324:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5330u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18212));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5330u) goto L_089A5330;
    return;
L_089A5330:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A5338;
    }
L_089A5338:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5344u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18204));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5344u) goto L_089A5344;
    return;
L_089A5344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A534C;
    }
L_089A534C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5358u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18196));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5358u) goto L_089A5358;
    return;
L_089A5358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A5360;
    }
L_089A5360:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A536Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18188));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A536Cu) goto L_089A536C;
    return;
L_089A536C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A5374;
    }
L_089A5374:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5380u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18180));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5380u) goto L_089A5380;
    return;
L_089A5380:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A5388;
    }
L_089A5388:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5394u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18172));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5394u) goto L_089A5394;
    return;
L_089A5394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A539C;
    }
L_089A539C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A53A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18164));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A53A8u) goto L_089A53A8;
    return;
L_089A53A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A53B0;
    }
L_089A53B0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A53BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18156));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A53BCu) goto L_089A53BC;
    return;
L_089A53BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A53C4;
    }
L_089A53C4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A53D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18148));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A53D0u) goto L_089A53D0;
    return;
L_089A53D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A53D8;
    }
L_089A53D8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A53E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18140));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A53E4u) goto L_089A53E4;
    return;
L_089A53E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A53EC;
    }
L_089A53EC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A53F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18132));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A53F8u) goto L_089A53F8;
    return;
L_089A53F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A5400;
    }
L_089A5400:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A540Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18124));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A540Cu) goto L_089A540C;
    return;
L_089A540C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A5414;
    }
L_089A5414:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5420u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18116));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5420u) goto L_089A5420;
    return;
L_089A5420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A5428;
    }
L_089A5428:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5434u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18108));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5434u) goto L_089A5434;
    return;
L_089A5434:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A543C;
    }
L_089A543C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5448u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18100));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5448u) goto L_089A5448;
    return;
L_089A5448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A5450;
    }
L_089A5450:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A545Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18092));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A545Cu) goto L_089A545C;
    return;
L_089A545C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A5464;
    }
L_089A5464:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5470u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18084));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5470u) goto L_089A5470;
    return;
L_089A5470:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A5478;
    }
L_089A5478:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5484u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18076));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5484u) goto L_089A5484;
    return;
L_089A5484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A548C;
    }
L_089A548C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A5498u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18068));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5498u) goto L_089A5498;
    return;
L_089A5498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A54A0;
    }
L_089A54A0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A54ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18060));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A54ACu) goto L_089A54AC;
    return;
L_089A54AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A54B4;
    }
L_089A54B4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A54C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18052));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A54C0u) goto L_089A54C0;
    return;
L_089A54C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A54D8;
      }
      goto L_089A54C8;
    }
L_089A54C8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089A54D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18044));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089A54D4u) goto L_089A54D4;
    return;
L_089A54D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089A54D8;
L_089A54D8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6115));
    ctx.gpr[31] = (0x089A54E4u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089A54E4u) goto L_089A54E4;
    return;
L_089A54E4:
    ctx.gpr[31] = (0x089A54ECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x089A54ECu) goto L_089A54EC;
    return;
L_089A54EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A54F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (18804u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 9214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089A5550u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 369u, 0x0897572Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5550u) goto L_089A5550;
    return;
L_089A5550:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A5664;
      }
      goto L_089A555C;
    }
L_089A555C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x089A5570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 132u, 0x089149C8u>(ctx, &aot_mem) && ctx.pc == 0x089A5570u) goto L_089A5570;
    return;
L_089A5570:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5664;
      }
      goto L_089A557C;
    }
L_089A557C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] << 4u);
    ctx.gpr[7] = (ctx.gpr[17] << 2u);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A5664;
      }
      goto L_089A560C;
    }
L_089A560C:
    ctx.gpr[31] = (0x089A5614u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 431u, 0x088A6D9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5614u) goto L_089A5614;
    return;
L_089A5614:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x089A5628u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x089A5628u) goto L_089A5628;
    return;
L_089A5628:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2036), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2040), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089A5664;
L_089A5664:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5680:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17096u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (65535u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A56F0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 168u, 0x08A0D43Cu>(ctx, &aot_mem) && ctx.pc == 0x089A56F0u) goto L_089A56F0;
    return;
L_089A56F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16684));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(528), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(532), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[21] = (ctx.gpr[30] + static_cast<std::uint32_t>(768));
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(784));
    ctx.gpr[31] = (0x089A5724u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 37u, 0x08AA82E0u>(ctx, &aot_mem) && ctx.pc == 0x089A5724u) goto L_089A5724;
    return;
L_089A5724:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(920));
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(13472));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x089A573Cu);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A573Cu) goto L_089A573C;
    return;
L_089A573C:
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1084), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1152), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1156), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(1184));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[22] = (ctx.gpr[30] + static_cast<std::uint32_t>(1280));
    ctx.gpr[23] = (ctx.gpr[30] + static_cast<std::uint32_t>(1312));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1376), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1428));
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(13492));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x089A5780u);
    ctx.gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5780u) goto L_089A5780;
    return;
L_089A5780:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1992), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1996), 0u);
    ctx.gpr[4] = (0u | 209u);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(2000), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(2002), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(2004), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(2016));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(2044), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-15));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] | 6u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[19]);
    ctx.gpr[7] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(592), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(628), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(600), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(604), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1332), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(748), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1352), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1356), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(632), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1408), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(840), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1368), 0u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1416), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1772), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1776), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1788), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1420), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1780), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1784), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1792), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1796), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1800), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1804), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1808), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1812), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (16752u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (0u | 15u);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1264), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1328), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1721), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1340), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1344), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1204), 0u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1360), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1362), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1372), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1392), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1396), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1400), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(2032), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(864), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(868), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1412), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(848), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(856), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1756), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1724), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1760), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1764), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1296), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1424), 0u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(664), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_089A5988;
L_089A5988:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A5988;
      }
      goto L_089A599C;
    }
L_089A599C:
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1172), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1176), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(908), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(912), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(916), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1080), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1972), 0u);
    ctx.gpr[31] = (0x089A59CCu);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1976), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089A59CCu) goto L_089A59CC;
    return;
L_089A59CC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28708)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28712)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A59E4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089A59E4u) goto L_089A59E4;
    return;
L_089A59E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[14] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[24] = (17036u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[15]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[25] = (16076u << 16u);
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[25] = (ctx.gpr[25] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[25]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[24]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[2] = (ctx.gpr[2] >> 31u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[2] = (ctx.gpr[1] | ctx.gpr[2]);
    ctx.gpr[25] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(-28700)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(-28704)));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[31] = (ctx.gpr[2] + ctx.gpr[16]);
    ctx.gpr[18] = (ctx.gpr[31] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[25] = (ctx.gpr[25] & ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[18] + ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[25]);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[16] = (ctx.gpr[31] | 0u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[25] = (ctx.gpr[25] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1980), ctx.gpr[2]);
    ctx.gpr[31] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[25]);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1228), static_cast<std::uint16_t>(ctx.gpr[31]));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1230), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-16385));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1232), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1234), static_cast<std::uint16_t>(0u));
    ctx.gpr[25] = (ctx.gpr[25] & ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[25] = (65535u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(32767));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (15692u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] | 52429u);
    ctx.gpr[17] = (ctx.gpr[17] & ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1816), 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[16] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1820), 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1826), static_cast<std::uint8_t>(ctx.gpr[31]));
    ctx.gpr[31] = (ctx.gpr[17] & ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[18] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[31] = (2u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[17] | ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[17] = (ctx.gpr[17] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[17]);
    ctx.gpr[17] = (4u << 16u);
    ctx.gpr[17] = (ctx.gpr[18] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[17]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[17] = (65528u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[9]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[19] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[19] = (65520u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[20] & ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    ctx.gpr[18] = (65504u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[18]);
    ctx.gpr[21] = (ctx.gpr[21] & ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[21]);
    ctx.gpr[20] = (65472u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[21] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[21] = (ctx.gpr[21] & ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[21]);
    ctx.gpr[21] = (65408u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[23] = (65024u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[8] = (64512u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[3] = (63488u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[2]);
    ctx.gpr[2] = (61440u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (57344u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[22] = (ctx.gpr[22] | ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[7] = (49152u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[6]);
    ctx.gpr[6] = (65532u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[9] = (32768u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[18] = (ctx.gpr[22] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[22] = (65280u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[8] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(418), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(420)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[3]);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[3]);
    ctx.gpr[3] = (1024u << 16u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[10]);
    ctx.gpr[10] = (2048u << 16u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[9]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(420)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(420), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(416), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 100u);
    ctx.gpr[31] = (0x089A6090u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(422), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089A6090u) goto L_089A6090;
    return;
L_089A6090:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A60B8;
      }
      goto L_089A60A0;
    }
L_089A60A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A60C8;
      }
      goto L_089A60B8;
    }
L_089A60B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089A60C8;
L_089A60C8:
    ctx.gpr[31] = (0x089A60D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089A60D0u) goto L_089A60D0;
    return;
L_089A60D0:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A610C;
      }
      goto L_089A60F8;
    }
L_089A60F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A6120;
      }
      goto L_089A610C;
    }
L_089A610C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089A6120;
L_089A6120:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A6138u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 95u, 0x08864708u>(ctx, &aot_mem) && ctx.pc == 0x089A6138u) goto L_089A6138;
    return;
L_089A6138:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A614Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 99u, 0x08864748u>(ctx, &aot_mem) && ctx.pc == 0x089A614Cu) goto L_089A614C;
    return;
L_089A614C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11468)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(640), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(636), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(656), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(652), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1868), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1912), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    goto L_089A6198;
L_089A6198:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1828), 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1872), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6198;
      }
      goto L_089A61C0;
    }
L_089A61C0:
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1914), static_cast<std::uint16_t>(0u));
    ctx.gpr[17] = (0u | 45u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1720), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1708), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1712), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_089A61DC;
L_089A61DC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1428), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1432), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1436), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1440), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1444), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089A61DC;
      }
      goto L_089A6200;
    }
L_089A6200:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1748), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1744), 0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089A621Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x089A621Cu) goto L_089A621C;
    return;
L_089A621C:
    ctx.gpr[4] = (17046u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_089A6234;
    }
    goto L_089A6234;
L_089A6234:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1918), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1920), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1924), 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1960), 0u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1968), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1964), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(384), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089A626Cu);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1768), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089A626Cu) goto L_089A626C;
    return;
L_089A626C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (0u | 25u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (0u | 23u);
    ctx.gpr[5] = (ctx.hi);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(1916)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1755), static_cast<std::uint8_t>(0u));
        goto L_089A629C;
    }
    goto L_089A6290;
L_089A6290:
    ctx.gpr[4] = (0u | 400u);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1755), static_cast<std::uint8_t>(0u));
    goto L_089A629C;
L_089A629C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1216), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1348), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1352), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1356), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1220), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1224), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(740), 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1984), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1376)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1988), 0u);
    ctx.gpr[31] = (0x089A62CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 595u, 0x08A9EBF4u>(ctx, &aot_mem) && ctx.pc == 0x089A62CCu) goto L_089A62CC;
    return;
L_089A62CC:
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(2048), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(2008), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(2036), 0u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(2040), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[30] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6320:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089A65F0;
      }
      goto L_089A633C;
    }
L_089A633C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16684));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A6350u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x089A6350u) goto L_089A6350;
    return;
L_089A6350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6374;
      }
      goto L_089A635C;
    }
L_089A635C:
    ctx.gpr[31] = (0x089A6364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x089A6364u) goto L_089A6364;
    return;
L_089A6364:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A6374u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089A6374u) goto L_089A6374;
    return;
L_089A6374:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x089A6384u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x089A6384u) goto L_089A6384;
    return;
L_089A6384:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x089A6390u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 20u, 0x08968154u>(ctx, &aot_mem) && ctx.pc == 0x089A6390u) goto L_089A6390;
    return;
L_089A6390:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6494;
      }
      goto L_089A639C;
    }
L_089A639C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6494;
      }
      goto L_089A63A8;
    }
L_089A63A8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[9] = (0u | 60u);
      if (branch_taken) {
          goto L_089A63E8;
      }
      goto L_089A63BC;
    }
L_089A63BC:
    ctx.gpr[7] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 12u);
      if (branch_taken) {
          goto L_089A63E0;
      }
      goto L_089A63C8;
    }
L_089A63C8:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 11u);
      if (branch_taken) {
          goto L_089A63F0;
      }
      goto L_089A63D0;
    }
L_089A63D0:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089A63F8;
      }
      goto L_089A63D8;
    }
L_089A63D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_089A63F8;
      }
      goto L_089A63E0;
    }
L_089A63E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_089A63F8;
      }
      goto L_089A63E8;
    }
L_089A63E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089A63F8;
      }
      goto L_089A63F0;
    }
L_089A63F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_089A63F8;
      }
      goto L_089A63F8;
    }
L_089A63F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089A6410;
      }
      goto L_089A6404;
    }
L_089A6404:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(504), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
      if (branch_taken) {
          goto L_089A6454;
      }
      goto L_089A6410;
    }
L_089A6410:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089A6450;
      }
      goto L_089A6424;
    }
L_089A6424:
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089A643C;
      }
      goto L_089A6434;
    }
L_089A6434:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(508), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    goto L_089A643C;
L_089A643C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A6424;
      }
      goto L_089A6450;
    }
L_089A6450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    goto L_089A6454;
L_089A6454:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[9];
    ctx.gpr[6] = (0u | 57u);
      if (branch_taken) {
          goto L_089A6464;
      }
      goto L_089A645C;
    }
L_089A645C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A6488;
      }
      goto L_089A6464;
    }
L_089A6464:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[9];
    ctx.gpr[6] = (0u | 57u);
      if (branch_taken) {
          goto L_089A6474;
      }
      goto L_089A646C;
    }
L_089A646C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A6488;
      }
      goto L_089A6474;
    }
L_089A6474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (~(ctx.gpr[5] | 0u));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089A6488;
L_089A6488:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
      if (branch_taken) {
          goto L_089A64B4;
      }
      goto L_089A6494;
    }
L_089A6494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 56u);
      if (branch_taken) {
          goto L_089A64AC;
      }
      goto L_089A64A4;
    }
L_089A64A4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A64B4;
      }
      goto L_089A64AC;
    }
L_089A64AC:
    ctx.gpr[31] = (0x089A64B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 618u, 0x0888F080u>(ctx, &aot_mem) && ctx.pc == 0x089A64B4u) goto L_089A64B4;
    return;
L_089A64B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A64C8;
      }
      goto L_089A64C0;
    }
L_089A64C0:
    ctx.gpr[31] = (0x089A64C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 545u, 0x0884E1D0u>(ctx, &aot_mem) && ctx.pc == 0x089A64C8u) goto L_089A64C8;
    return;
L_089A64C8:
    ctx.gpr[31] = (0x089A64D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 682u, 0x0899F844u>(ctx, &aot_mem) && ctx.pc == 0x089A64D0u) goto L_089A64D0;
    return;
L_089A64D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A64F4;
      }
      goto L_089A64E0;
    }
L_089A64E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6016)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6016), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    goto L_089A64F4;
L_089A64F4:
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6510;
      }
      goto L_089A6500;
    }
L_089A6500:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26148)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26148), ctx.gpr[5]);
    goto L_089A6510;
L_089A6510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[31] = (0x089A651Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 595u, 0x08A9EBF4u>(ctx, &aot_mem) && ctx.pc == 0x089A651Cu) goto L_089A651C;
    return;
L_089A651C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6538;
      }
      goto L_089A6528;
    }
L_089A6528:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6538;
      }
      goto L_089A6530;
    }
L_089A6530:
    ctx.gpr[31] = (0x089A6538u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A6538u) goto L_089A6538;
    return;
L_089A6538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(908)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6554;
      }
      goto L_089A6544;
    }
L_089A6544:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6554;
      }
      goto L_089A654C;
    }
L_089A654C:
    ctx.gpr[31] = (0x089A6554u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(908));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A6554u) goto L_089A6554;
    return;
L_089A6554:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089A6564u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 97u, 0x08864728u>(ctx, &aot_mem) && ctx.pc == 0x089A6564u) goto L_089A6564;
    return;
L_089A6564:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1088));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
      if (branch_taken) {
          goto L_089A6598;
      }
      goto L_089A6570;
    }
L_089A6570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
      if (branch_taken) {
          goto L_089A6598;
      }
      goto L_089A6580;
    }
L_089A6580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
        goto L_089A6598;
    }
    goto L_089A658C;
L_089A658C:
    ctx.gpr[31] = (0x089A6594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089A6594u) goto L_089A6594;
    return;
L_089A6594:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
    goto L_089A6598;
L_089A6598:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089A65D4;
      }
      goto L_089A65A0;
    }
L_089A65A0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(464));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089A65D4;
      }
      goto L_089A65AC;
    }
L_089A65AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089A65D4;
      }
      goto L_089A65BC;
    }
L_089A65BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(528)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_089A65D4;
    }
    goto L_089A65C8;
L_089A65C8:
    ctx.gpr[31] = (0x089A65D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089A65D0u) goto L_089A65D0;
    return;
L_089A65D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A65D4;
L_089A65D4:
    ctx.gpr[31] = (0x089A65DCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 187u, 0x08A0D74Cu>(ctx, &aot_mem) && ctx.pc == 0x089A65DCu) goto L_089A65DC;
    return;
L_089A65DC:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A65F0;
      }
      goto L_089A65E8;
    }
L_089A65E8:
    ctx.gpr[31] = (0x089A65F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 242u, 0x0899D9B8u>(ctx, &aot_mem) && ctx.pc == 0x089A65F0u) goto L_089A65F0;
    return;
L_089A65F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6604:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-624));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(15730))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (2230u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7820)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[16]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[16]);
      if (branch_taken) {
          goto L_089A6C1C;
      }
      goto L_089A6698;
    }
L_089A6698:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089A66FCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 132u, 0x089FD348u>(ctx, &aot_mem) && ctx.pc == 0x089A66FCu) goto L_089A66FC;
    return;
L_089A66FC:
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[16];
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[16];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A6B08;
      }
      goto L_089A67A8;
    }
L_089A67A8:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18268));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[6] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5992));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(465));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(466));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(467));
    ctx.gpr[21] = (0u | 55u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[4]);
    goto L_089A67F8;
L_089A67F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A6ADC;
      }
      goto L_089A680C;
    }
L_089A680C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[4]);
    goto L_089A6828;
L_089A6828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A68F8;
      }
      goto L_089A6848;
    }
L_089A6848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A68EC;
      }
      goto L_089A6858;
    }
L_089A6858:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089A6888;
      }
      goto L_089A6864;
    }
L_089A6864:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A68EC;
      }
      goto L_089A6870;
    }
L_089A6870:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A68EC;
      }
      goto L_089A6884;
    }
L_089A6884:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    goto L_089A6888;
L_089A6888:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[26] = ctx.fpr[26] - ctx.fpr[22];
    ctx.fpr[28] = ctx.fpr[28] - ctx.fpr[24];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A68EC;
      }
      goto L_089A68B4;
    }
L_089A68B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089A68DC;
      }
      goto L_089A68C0;
    }
L_089A68C0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A68D4;
      }
      goto L_089A68CC;
    }
L_089A68CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089A68DC;
      }
      goto L_089A68D4;
    }
L_089A68D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A68EC;
      }
      goto L_089A68DC;
    }
L_089A68DC:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_089A68EC;
L_089A68EC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6848;
      }
      goto L_089A68F8;
    }
L_089A68F8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6AB8;
      }
      goto L_089A6908;
    }
L_089A6908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6AB8;
      }
      goto L_089A6928;
    }
L_089A6928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A695C;
      }
      goto L_089A6938;
    }
L_089A6938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089A6954u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6954u) goto L_089A6954;
    return;
L_089A6954:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6964;
      }
      goto L_089A695C;
    }
L_089A695C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089A6964;
      }
      goto L_089A6964;
    }
L_089A6964:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A69D4;
      }
      goto L_089A696C;
    }
L_089A696C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A69D4;
      }
      goto L_089A6990;
    }
L_089A6990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_089A69BC;
    }
    goto L_089A699C;
L_089A699C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[31] = (0x089A69ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089A69ACu) goto L_089A69AC;
    return;
L_089A69AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_089A69BC;
L_089A69BC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 65535u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A69DC;
      }
      goto L_089A69D4;
    }
L_089A69D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6AAC;
      }
      goto L_089A69DC;
    }
L_089A69DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6A04;
      }
      goto L_089A69E8;
    }
L_089A69E8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A69F8u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089A69F8u) goto L_089A69F8;
    return;
L_089A69F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(465)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089A6A04;
L_089A6A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[26] = ctx.fpr[26] - ctx.fpr[22];
      if (branch_taken) {
          goto L_089A6A34;
      }
      goto L_089A6A18;
    }
L_089A6A18:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A6A28u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089A6A28u) goto L_089A6A28;
    return;
L_089A6A28:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(466)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089A6A34;
L_089A6A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[28] = ctx.fpr[28] - ctx.fpr[24];
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A6AAC;
      }
      goto L_089A6A60;
    }
L_089A6A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_089A6A8C;
    }
    goto L_089A6A6C;
L_089A6A6C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A6A7Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089A6A7Cu) goto L_089A6A7C;
    return;
L_089A6A7C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(467)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_089A6A8C;
L_089A6A8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089A6AAC;
      }
      goto L_089A6A98;
    }
L_089A6A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    goto L_089A6AAC;
L_089A6AAC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6928;
      }
      goto L_089A6AB8;
    }
L_089A6AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(44));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A6828;
      }
      goto L_089A6ADC;
    }
L_089A6ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A67F8;
      }
      goto L_089A6B00;
    }
L_089A6B00:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_089A6B08;
L_089A6B08:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A6B2Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 311u, 0x0899DEB8u>(ctx, &aot_mem) && ctx.pc == 0x089A6B2Cu) goto L_089A6B2C;
    return;
L_089A6B2C:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1868), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (0u | 10u);
    goto L_089A6B38;
L_089A6B38:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089A6B68;
      }
      goto L_089A6B40;
    }
L_089A6B40:
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1868), static_cast<std::uint16_t>(ctx.gpr[4]));
        goto L_089A6B6C;
    }
    goto L_089A6B48;
L_089A6B48:
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1828), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_089A6B38;
      }
      goto L_089A6B68;
    }
L_089A6B68:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1868), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089A6B6C;
L_089A6B6C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 10u);
      if (branch_taken) {
          goto L_089A6B98;
      }
      goto L_089A6B7C;
    }
L_089A6B7C:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    goto L_089A6B84;
L_089A6B84:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1828), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A6B84;
      }
      goto L_089A6B98;
    }
L_089A6B98:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.gpr[7] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A6BACu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 311u, 0x0899DEB8u>(ctx, &aot_mem) && ctx.pc == 0x089A6BACu) goto L_089A6BAC;
    return;
L_089A6BAC:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1912), static_cast<std::uint16_t>(0u));
    goto L_089A6BB0;
L_089A6BB0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089A6BF4;
      }
      goto L_089A6BBC;
    }
L_089A6BBC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6BF4;
      }
      goto L_089A6BCC;
    }
L_089A6BCC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1872), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(1912), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A6BB0;
      }
      goto L_089A6BF4;
    }
L_089A6BF4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_089A6C1C;
      }
      goto L_089A6C04;
    }
L_089A6C04:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    goto L_089A6C08;
L_089A6C08:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1872), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A6C08;
      }
      goto L_089A6C1C;
    }
L_089A6C1C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    goto L_089A6C24;
L_089A6C24:
    ctx.gpr[18] = (ctx.gpr[16] << 2u);
    ctx.gpr[18] = (ctx.gpr[19] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1828)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089A6C94;
      }
      goto L_089A6C38;
    }
L_089A6C38:
    ctx.gpr[31] = (0x089A6C40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 289u, 0x0899DCC4u>(ctx, &aot_mem) && ctx.pc == 0x089A6C40u) goto L_089A6C40;
    return;
L_089A6C40:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
        goto L_089A6C50;
    }
    goto L_089A6C48;
L_089A6C48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089A6C94;
      }
      goto L_089A6C50;
    }
L_089A6C50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1828)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A6C94;
      }
      goto L_089A6C90;
    }
L_089A6C90:
    ctx.gpr[17] = (0u | 1u);
    goto L_089A6C94;
L_089A6C94:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6CE8;
      }
      goto L_089A6C9C;
    }
L_089A6C9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6CD4;
      }
      goto L_089A6CAC;
    }
L_089A6CAC:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1832)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1828), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6CAC;
      }
      goto L_089A6CD4;
    }
L_089A6CD4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1868)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1864), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(1868), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A6CF4;
      }
      goto L_089A6CE8;
    }
L_089A6CE8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    goto L_089A6CF4;
L_089A6CF4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6C24;
      }
      goto L_089A6D00;
    }
L_089A6D00:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6D44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(816), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(800), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(804), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(808), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(812), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(820), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(824), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(828), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(832), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(836), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(840), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A6D80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 339u, 0x089722CCu>(ctx, &aot_mem) && ctx.pc == 0x089A6D80u) goto L_089A6D80;
    return;
L_089A6D80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7860)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(156)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[19] = (ctx.gpr[5] ^ ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 64u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089A6E10;
      }
      goto L_089A6DD4;
    }
L_089A6DD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6E10;
      }
      goto L_089A6DE0;
    }
L_089A6DE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(300) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6E10;
      }
      goto L_089A6DF0;
    }
L_089A6DF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A6E10;
      }
      goto L_089A6E00;
    }
L_089A6E00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
    goto L_089A6E10;
L_089A6E10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6E38;
      }
      goto L_089A6E20;
    }
L_089A6E20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A6E40;
      }
      goto L_089A6E30;
    }
L_089A6E30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6EAC;
      }
      goto L_089A6E38;
    }
L_089A6E38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7EB4;
      }
      goto L_089A6E40;
    }
L_089A6E40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6F00;
      }
      goto L_089A6E48;
    }
L_089A6E48:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 256u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6E70;
      }
      goto L_089A6E60;
    }
L_089A6E60:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_089A6E90;
      }
      goto L_089A6E70;
    }
L_089A6E70:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 1024u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6E90;
      }
      goto L_089A6E88;
    }
L_089A6E88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_089A6E90;
L_089A6E90:
    ctx.gpr[31] = (0x089A6E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 342u, 0x088658A8u>(ctx, &aot_mem) && ctx.pc == 0x089A6E98u) goto L_089A6E98;
    return;
L_089A6E98:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6E48;
      }
      goto L_089A6EA4;
    }
L_089A6EA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6F00;
      }
      goto L_089A6EAC;
    }
L_089A6EAC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6F00;
      }
      goto L_089A6EB4;
    }
L_089A6EB4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6EE0;
      }
      goto L_089A6EC0;
    }
L_089A6EC0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A6EE0;
      }
      goto L_089A6ED0;
    }
L_089A6ED0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A6EEC;
      }
      goto L_089A6EE0;
    }
L_089A6EE0:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089A6EEC;
L_089A6EEC:
    ctx.gpr[31] = (0x089A6EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 342u, 0x088658A8u>(ctx, &aot_mem) && ctx.pc == 0x089A6EF4u) goto L_089A6EF4;
    return;
L_089A6EF4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6EB4;
      }
      goto L_089A6F00;
    }
L_089A6F00:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A773C;
      }
      goto L_089A6F08;
    }
L_089A6F08:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_089A773C;
      }
      goto L_089A6F20;
    }
L_089A6F20:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A773C;
      }
      goto L_089A6F34;
    }
L_089A6F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (15752u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 34953u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[14];
      if (branch_taken) {
          goto L_089A7200;
      }
      goto L_089A6F5C;
    }
L_089A6F5C:
    ctx.gpr[4] = (0u | 170u);
    ctx.gpr[5] = (0u | 165u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 140u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(241), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(242), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(243), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6F9C;
      }
      goto L_089A6F88;
    }
L_089A6F88:
    ctx.gpr[4] = (16136u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 34953u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A6FAC;
      }
      goto L_089A6F9C;
    }
L_089A6F9C:
    ctx.gpr[4] = (16042u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 43691u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089A6FAC;
L_089A6FAC:
    ctx.gpr[31] = (0x089A6FB4u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x089A6FB4u) goto L_089A6FB4;
    return;
L_089A6FB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A6FD8;
      }
      goto L_089A6FC4;
    }
L_089A6FC4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A70D8;
      }
      goto L_089A6FD0;
    }
L_089A6FD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7018;
      }
      goto L_089A6FD8;
    }
L_089A6FD8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A7074;
      }
      goto L_089A6FE0;
    }
L_089A6FE0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_089A70D8;
      }
      goto L_089A6FE8;
    }
L_089A6FE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A70E0;
      }
      goto L_089A7018;
    }
L_089A7018:
    ctx.gpr[31] = (0x089A7020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089A7020u) goto L_089A7020;
    return;
L_089A7020:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 127u);
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
        goto L_089A704C;
    }
    goto L_089A7030;
L_089A7030:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 27u);
    ctx.gpr[31] = (0x089A7044u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x089A7044u) goto L_089A7044;
    return;
L_089A7044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7068;
      }
      goto L_089A704C;
    }
L_089A704C:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089A7068;
L_089A7068:
    ctx.gpr[4] = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A70E0;
      }
      goto L_089A7074;
    }
L_089A7074:
    ctx.gpr[31] = (0x089A707Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089A707Cu) goto L_089A707C;
    return;
L_089A707C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_089A70A8;
      }
      goto L_089A708C;
    }
L_089A708C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 27u);
    ctx.gpr[31] = (0x089A70A0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x089A70A0u) goto L_089A70A0;
    return;
L_089A70A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A70C8;
      }
      goto L_089A70A8;
    }
L_089A70A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(752)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089A70C8;
L_089A70C8:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A70E0;
      }
      goto L_089A70D8;
    }
L_089A70D8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089A70E0;
L_089A70E0:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7170;
      }
      goto L_089A70FC;
    }
L_089A70FC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7170;
      }
      goto L_089A7110;
    }
L_089A7110:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17150u << 16u);
      if (branch_taken) {
          goto L_089A7170;
      }
      goto L_089A712C;
    }
L_089A712C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[6] = (0u | 189u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089A7168u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089A7168u) goto L_089A7168;
    return;
L_089A7168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A71F8;
      }
      goto L_089A7170;
    }
L_089A7170:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A71F8;
      }
      goto L_089A718C;
    }
L_089A718C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A71F8;
      }
      goto L_089A71A0;
    }
L_089A71A0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17150u << 16u);
      if (branch_taken) {
          goto L_089A71F8;
      }
      goto L_089A71BC;
    }
L_089A71BC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[6] = (0u | 189u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089A71F8u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089A71F8u) goto L_089A71F8;
    return;
L_089A71F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A773C;
      }
      goto L_089A7200;
    }
L_089A7200:
    ctx.gpr[4] = (15752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 34953u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7498;
      }
      goto L_089A7220;
    }
L_089A7220:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (15752u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 34953u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7498;
      }
      goto L_089A7248;
    }
L_089A7248:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089A7264u);
    ctx.gpr[6] = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089A7264u) goto L_089A7264;
    return;
L_089A7264:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089A7278u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 129u, 0x0899D1E0u>(ctx, &aot_mem) && ctx.pc == 0x089A7278u) goto L_089A7278;
    return;
L_089A7278:
    ctx.gpr[17] = (0u | 1u);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (15948u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089A72E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089A72E8u) goto L_089A72E8;
    return;
L_089A72E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16005u << 16u);
      if (branch_taken) {
          goto L_089A7398;
      }
      goto L_089A72F8;
    }
L_089A72F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15887u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27944)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 3000u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[31] = (0x089A7364u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 142u, 0x08929268u>(ctx, &aot_mem) && ctx.pc == 0x089A7364u) goto L_089A7364;
    return;
L_089A7364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7384;
      }
      goto L_089A7374;
    }
L_089A7374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A7398;
      }
      goto L_089A7384;
    }
L_089A7384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089A7398;
L_089A7398:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (48773u << 16u);
      if (branch_taken) {
          goto L_089A73BC;
      }
      goto L_089A73A8;
    }
L_089A73A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A7428;
      }
      goto L_089A73B8;
    }
L_089A73B8:
    ctx.gpr[4] = (48773u << 16u);
    goto L_089A73BC;
L_089A73BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27908)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[8] = (0u | 250u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[9] = (0u | 250u);
    ctx.gpr[10] = (0u | 50u);
    ctx.gpr[11] = (0u | 5000u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[31] = (0x089A7428u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 142u, 0x08929268u>(ctx, &aot_mem) && ctx.pc == 0x089A7428u) goto L_089A7428;
    return;
L_089A7428:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7808)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A746C;
      }
      goto L_089A744C;
    }
L_089A744C:
    ctx.gpr[31] = (0x089A7454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 421u, 0x08ACA8D4u>(ctx, &aot_mem) && ctx.pc == 0x089A7454u) goto L_089A7454;
    return;
L_089A7454:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A746C;
      }
      goto L_089A745C;
    }
L_089A745C:
    ctx.gpr[31] = (0x089A7464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 425u, 0x08ACA8FCu>(ctx, &aot_mem) && ctx.pc == 0x089A7464u) goto L_089A7464;
    return;
L_089A7464:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7490;
      }
      goto L_089A746C;
    }
L_089A746C:
    ctx.gpr[31] = (0x089A7474u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089A7474u) goto L_089A7474;
    return;
L_089A7474:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7490;
      }
      goto L_089A747C;
    }
L_089A747C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A7490u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 116u, 0x0899D010u>(ctx, &aot_mem) && ctx.pc == 0x089A7490u) goto L_089A7490;
    return;
L_089A7490:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A773C;
      }
      goto L_089A7498;
    }
L_089A7498:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A773C;
      }
      goto L_089A74AC;
    }
L_089A74AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A773C;
      }
      goto L_089A74C8;
    }
L_089A74C8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089A74E4u);
    ctx.gpr[6] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089A74E4u) goto L_089A74E4;
    return;
L_089A74E4:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089A74F8u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 129u, 0x0899D1E0u>(ctx, &aot_mem) && ctx.pc == 0x089A74F8u) goto L_089A74F8;
    return;
L_089A74F8:
    ctx.gpr[18] = (0u | 1u);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (15948u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089A7568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089A7568u) goto L_089A7568;
    return;
L_089A7568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16005u << 16u);
      if (branch_taken) {
          goto L_089A7618;
      }
      goto L_089A7578;
    }
L_089A7578:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27944)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 3000u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[31] = (0x089A75E4u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 142u, 0x08929268u>(ctx, &aot_mem) && ctx.pc == 0x089A75E4u) goto L_089A75E4;
    return;
L_089A75E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7604;
      }
      goto L_089A75F4;
    }
L_089A75F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A7618;
      }
      goto L_089A7604;
    }
L_089A7604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089A7618;
L_089A7618:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A76B0;
      }
      goto L_089A7620;
    }
L_089A7620:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (48773u << 16u);
      if (branch_taken) {
          goto L_089A7644;
      }
      goto L_089A7630;
    }
L_089A7630:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A76B0;
      }
      goto L_089A7640;
    }
L_089A7640:
    ctx.gpr[4] = (48773u << 16u);
    goto L_089A7644;
L_089A7644:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15887u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27908)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[8] = (0u | 250u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[9] = (0u | 250u);
    ctx.gpr[10] = (0u | 50u);
    ctx.gpr[11] = (0u | 5000u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[31] = (0x089A76B0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 142u, 0x08929268u>(ctx, &aot_mem) && ctx.pc == 0x089A76B0u) goto L_089A76B0;
    return;
L_089A76B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7808)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7718;
      }
      goto L_089A76D4;
    }
L_089A76D4:
    ctx.gpr[31] = (0x089A76DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 421u, 0x08ACA8D4u>(ctx, &aot_mem) && ctx.pc == 0x089A76DCu) goto L_089A76DC;
    return;
L_089A76DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7718;
      }
      goto L_089A76E4;
    }
L_089A76E4:
    ctx.gpr[31] = (0x089A76ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 425u, 0x08ACA8FCu>(ctx, &aot_mem) && ctx.pc == 0x089A76ECu) goto L_089A76EC;
    return;
L_089A76EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7718;
      }
      goto L_089A76F4;
    }
L_089A76F4:
    ctx.gpr[7] = (15897u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 39322u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A7710u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 107u, 0x0899CE88u>(ctx, &aot_mem) && ctx.pc == 0x089A7710u) goto L_089A7710;
    return;
L_089A7710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A773C;
      }
      goto L_089A7718;
    }
L_089A7718:
    ctx.gpr[31] = (0x089A7720u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089A7720u) goto L_089A7720;
    return;
L_089A7720:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A773C;
      }
      goto L_089A7728;
    }
L_089A7728:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A773Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 116u, 0x0899D010u>(ctx, &aot_mem) && ctx.pc == 0x089A773Cu) goto L_089A773C;
    return;
L_089A773C:
    ctx.gpr[31] = (0x089A7744u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089A7744u) goto L_089A7744;
    return;
L_089A7744:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7B34;
      }
      goto L_089A774C;
    }
L_089A774C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7B34;
      }
      goto L_089A7754;
    }
L_089A7754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7B34;
      }
      goto L_089A7764;
    }
L_089A7764:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_089A7784;
      }
      goto L_089A776C;
    }
L_089A776C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A77A0;
      }
      goto L_089A7784;
    }
L_089A7784:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A7794u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 129u, 0x0899D1E0u>(ctx, &aot_mem) && ctx.pc == 0x089A7794u) goto L_089A7794;
    return;
L_089A7794:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089A77A0;
L_089A77A0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[6] = (15948u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089A7804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089A7804u) goto L_089A7804;
    return;
L_089A7804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16005u << 16u);
      if (branch_taken) {
          goto L_089A78B4;
      }
      goto L_089A7814;
    }
L_089A7814:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15887u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27944)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 3000u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[31] = (0x089A7880u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 142u, 0x08929268u>(ctx, &aot_mem) && ctx.pc == 0x089A7880u) goto L_089A7880;
    return;
L_089A7880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A78A0;
      }
      goto L_089A7890;
    }
L_089A7890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A78B4;
      }
      goto L_089A78A0;
    }
L_089A78A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089A78B4;
L_089A78B4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A794C;
      }
      goto L_089A78BC;
    }
L_089A78BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (48773u << 16u);
      if (branch_taken) {
          goto L_089A78E0;
      }
      goto L_089A78CC;
    }
L_089A78CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A794C;
      }
      goto L_089A78DC;
    }
L_089A78DC:
    ctx.gpr[4] = (48773u << 16u);
    goto L_089A78E0;
L_089A78E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15887u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27908)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[8] = (0u | 250u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[9] = (0u | 250u);
    ctx.gpr[10] = (0u | 50u);
    ctx.gpr[11] = (0u | 5000u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[31] = (0x089A794Cu);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 142u, 0x08929268u>(ctx, &aot_mem) && ctx.pc == 0x089A794Cu) goto L_089A794C;
    return;
L_089A794C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089A796C;
      }
      goto L_089A7954;
    }
L_089A7954:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7988;
      }
      goto L_089A796C;
    }
L_089A796C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A797Cu);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 129u, 0x0899D1E0u>(ctx, &aot_mem) && ctx.pc == 0x089A797Cu) goto L_089A797C;
    return;
L_089A797C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089A7988;
L_089A7988:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[6] = (15948u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089A79ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089A79ECu) goto L_089A79EC;
    return;
L_089A79EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16005u << 16u);
      if (branch_taken) {
          goto L_089A7A9C;
      }
      goto L_089A79FC;
    }
L_089A79FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27944)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 3000u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[31] = (0x089A7A68u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 142u, 0x08929268u>(ctx, &aot_mem) && ctx.pc == 0x089A7A68u) goto L_089A7A68;
    return;
L_089A7A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7A88;
      }
      goto L_089A7A78;
    }
L_089A7A78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A7A9C;
      }
      goto L_089A7A88;
    }
L_089A7A88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089A7A9C;
L_089A7A9C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7B34;
      }
      goto L_089A7AA4;
    }
L_089A7AA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (48773u << 16u);
      if (branch_taken) {
          goto L_089A7AC8;
      }
      goto L_089A7AB4;
    }
L_089A7AB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A7B34;
      }
      goto L_089A7AC4;
    }
L_089A7AC4:
    ctx.gpr[4] = (48773u << 16u);
    goto L_089A7AC8;
L_089A7AC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15887u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27908)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[8] = (0u | 250u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[9] = (0u | 250u);
    ctx.gpr[10] = (0u | 50u);
    ctx.gpr[11] = (0u | 5000u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[31] = (0x089A7B34u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 142u, 0x08929268u>(ctx, &aot_mem) && ctx.pc == 0x089A7B34u) goto L_089A7B34;
    return;
L_089A7B34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A7EB4;
      }
      goto L_089A7B44;
    }
L_089A7B44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (0u | 255u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(512), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(513), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(514), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (14955u << 16u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 60922u);
    ctx.gpr[5] = (0u | 196u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(515), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089A7D60;
      }
      goto L_089A7B88;
    }
L_089A7B88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15498u << 16u);
      if (branch_taken) {
          goto L_089A7D60;
      }
      goto L_089A7B9C;
    }
L_089A7B9C:
    ctx.gpr[4] = (ctx.gpr[4] | 29150u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7D60;
      }
      goto L_089A7BB4;
    }
L_089A7BB4:
    ctx.fpr[12] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[31] = (0x089A7BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089A7BC0u) goto L_089A7BC0;
    return;
L_089A7BC0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28684)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28688)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089A7BD8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x089A7BD8u) goto L_089A7BD8;
    return;
L_089A7BD8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089A7BE4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x089A7BE4u) goto L_089A7BE4;
    return;
L_089A7BE4:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7C08;
      }
      goto L_089A7C00;
    }
L_089A7C00:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089A7C08;
L_089A7C08:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7C28;
      }
      goto L_089A7C20;
    }
L_089A7C20:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089A7C28;
L_089A7C28:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[5] = (16281u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (48960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[31] = (0x089A7CD4u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089A7CD4u) goto L_089A7CD4;
    return;
L_089A7CD4:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089A7D08u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089A7D08u) goto L_089A7D08;
    return;
L_089A7D08:
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089A7D34u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089A7D34u) goto L_089A7D34;
    return;
L_089A7D34:
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089A7D60u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089A7D60u) goto L_089A7D60;
    return;
L_089A7D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A7EB4;
      }
      goto L_089A7D70;
    }
L_089A7D70:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15769u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089A7DDCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089A7DDCu) goto L_089A7DDC;
    return;
L_089A7DDC:
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089A7E08u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089A7E08u) goto L_089A7E08;
    return;
L_089A7E08:
    ctx.gpr[4] = (48460u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x089A7E24u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089A7E24u) goto L_089A7E24;
    return;
L_089A7E24:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089A7E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089A7E44u) goto L_089A7E44;
    return;
L_089A7E44:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15564u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x089A7E6Cu);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089A7E6Cu) goto L_089A7E6C;
    return;
L_089A7E6C:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089A7EB4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089A7EB4u) goto L_089A7EB4;
    return;
L_089A7EB4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(800)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(804)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(808)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(812)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(816)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(820)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(824)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(828)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(832)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(836)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(840)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A7EE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-784));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(716), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(732), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(760), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(764), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x089A7FD4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 481u, 0x08A05DFCu>(ctx, &aot_mem) && ctx.pc == 0x089A7FD4u) goto L_089A7FD4;
    return;
L_089A7FD4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[13])) && ctx.fpr[22] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 3u, 0x089A8010u>(ctx, &aot_mem); return;
      }
      goto L_089A7FF4;
    }
L_089A7FF4:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    ctx.pc = 0x089A8000u; return;
}

void recomp_unit_0104(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0104_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_104(Runtime &runtime) {
    runtime.register_generated_unit(104u, 0x089A4000u, 16384u, &recomp_unit_0104, &recomp_unit_0104_entry);
    runtime.register_function(0x089A4000u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4020u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4040u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4048u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4050u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A405Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A406Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4078u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4080u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4088u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A408Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4094u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4098u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A40ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A40C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A40D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A40ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A40FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4110u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4118u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4124u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A412Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4144u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4168u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4170u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A417Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4184u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A419Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A41C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A41D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A41F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4204u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4210u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A421Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4224u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4240u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4258u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4260u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4278u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4280u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A428Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4294u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A429Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42E8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4300u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4310u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4328u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4334u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4380u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4388u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4390u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4398u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A43B8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A43D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A445Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4464u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A446Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A44E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4508u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4524u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4564u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A456Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A458Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A45A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A45E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A45ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A45F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A45F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4618u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4628u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4640u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4648u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A465Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4668u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4680u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A468Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4698u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46B0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46B8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4704u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4710u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4718u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4728u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4730u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4738u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4740u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A476Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4770u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A478Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A479Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47A4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4808u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4814u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A482Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4844u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4850u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4858u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A48D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A48F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4908u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4918u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4920u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A492Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4934u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4964u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4978u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4990u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A49A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A49A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A49C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A49D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A10u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A18u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A2Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A38u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A40u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A48u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A58u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A68u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A78u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A84u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A94u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4AA0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4AA8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4AB8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4AC8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4AD4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4AE4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4AF0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4AF8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B18u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B24u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B34u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B40u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B48u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B58u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B68u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B74u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B84u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B90u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B98u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BA8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BB8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BC4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BD4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BE0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BE8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BF8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C14u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C24u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C30u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C38u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C54u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C90u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C9Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4CACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4CC8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4CD4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4CE8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4CF0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4CF8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D14u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D18u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D20u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D28u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D30u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D38u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D44u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D5Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D68u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D6Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D74u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D98u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DCCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DD8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E00u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E24u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E2Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E40u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E68u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E74u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E80u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E8Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E98u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E9Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4EA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4EA8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4EB0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4EC4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4ED0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4ED8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4EE4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4EE8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F0Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F38u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4FC4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4FDCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4FECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5010u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5030u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A503Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5044u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A504Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5054u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A506Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A507Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5080u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A508Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5098u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A50E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5118u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5124u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5148u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5150u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5158u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5160u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5174u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A51A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A51ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A51B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A51CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A51D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A51DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A51E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A51F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A51F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5210u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5244u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5264u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A526Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A527Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5284u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A528Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5298u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A52ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A52B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A52C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A52CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A52E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A52FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5308u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5310u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A531Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5324u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5330u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5338u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5344u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A534Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5358u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5360u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A536Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5374u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5380u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5388u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5394u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A539Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53B0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5400u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A540Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5414u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5420u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5428u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5434u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A543Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5448u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5450u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A545Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5464u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5470u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5478u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5484u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A548Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5498u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5550u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A555Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5570u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A557Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A560Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5614u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5628u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5664u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5680u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A56F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5724u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A573Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5780u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5988u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A599Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A59CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A59E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6090u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A60A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A60B8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A60C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A60D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A60F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A610Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6120u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6138u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A614Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6198u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A61C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A61DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6200u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A621Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6234u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A626Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6290u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A629Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A62CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6320u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A633Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6350u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A635Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6364u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6374u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6384u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6390u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A639Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A63A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A63BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A63C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A63D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A63D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A63E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A63E8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A63F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A63F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6404u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6410u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6424u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6434u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A643Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6450u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6454u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A645Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6464u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A646Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6474u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6488u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6494u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64A4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6500u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6510u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A651Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6528u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6530u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6538u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6544u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A654Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6554u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6564u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6570u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6580u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A658Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6594u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6598u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65E8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6604u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6698u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A66FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A67A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A67F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A680Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6828u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6848u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6858u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6864u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6870u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6884u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6888u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A68B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A68C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A68CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A68D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A68DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A68ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A68F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6908u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6928u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6938u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6954u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A695Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6964u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A696Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6990u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A699Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A69ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A69BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A69D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A69DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A69E8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A69F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A04u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A18u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A28u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A34u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A60u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A6Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A7Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A8Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A98u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6AACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6AB8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6ADCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B00u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B2Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B38u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B40u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B48u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B68u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B6Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B7Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B84u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B98u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6BACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6BB0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6BBCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6BCCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6BF4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C04u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C1Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C24u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C38u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C40u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C48u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C90u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C94u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C9Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6CACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6CD4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6CE8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6CF4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6D00u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6D44u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6D80u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6DD4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6DE0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6DF0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E00u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E10u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E20u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E30u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E38u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E40u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E48u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E60u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E70u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E88u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E90u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E98u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6EA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6EACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6EB4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6EC0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6ED0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6EE0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6EECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6EF4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F00u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F20u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F34u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F5Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F88u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F9Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6FACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6FB4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6FC4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6FD0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6FD8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6FE0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6FE8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7018u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7020u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7030u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7044u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A704Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7068u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7074u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A707Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A708Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A70A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A70A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A70C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A70D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A70E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A70FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7110u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A712Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7168u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7170u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A718Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A71A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A71BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A71F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7200u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7220u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7248u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7264u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7278u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A72E8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A72F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7364u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7374u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7384u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7398u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A73A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A73B8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A73BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7428u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A744Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7454u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A745Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7464u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A746Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7474u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A747Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7490u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7498u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A74ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A74C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A74E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A74F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7568u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7578u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A75E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A75F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7604u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7618u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7620u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7630u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7640u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7644u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A76B0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A76D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A76DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A76E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A76ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A76F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7710u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7718u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7720u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7728u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A773Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7744u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A774Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7754u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7764u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A776Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7784u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7794u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A77A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7804u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7814u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7880u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7890u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A78A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A78B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A78BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A78CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A78DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A78E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A794Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7954u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A796Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A797Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7988u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A79ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A79FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7A68u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7A78u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7A88u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7A9Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7AA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7AB4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7AC4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7AC8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7B34u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7B44u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7B88u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7B9Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7BB4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7BC0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7BD8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7BE4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7C00u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7C08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7C20u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7C28u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7CD4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7D08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7D34u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7D60u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7D70u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7DDCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7E08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7E24u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7E44u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7E6Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7EB4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7EE8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7FD4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7FF4u, &recomp_unit_0104, "recomp_unit_0104");
}
} // namespace psprecomp
