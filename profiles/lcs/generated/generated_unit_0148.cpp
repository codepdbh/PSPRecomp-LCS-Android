#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0148[4084] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0,
    0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0,
    0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 0,
    0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 39, 0, 40, 0, 0, 0, 41, 0, 42, 0, 43,
    0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0,
    55, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 62, 0,
    0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 71,
    0, 0, 0, 0, 0, 0, 72, 73, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86,
    0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 90, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102,
    0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 110, 0,
    111, 0, 0, 112, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 0, 116, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124,
    0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 134, 0, 135,
    0, 136, 0, 137, 0, 138, 0, 139, 0, 0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147,
    0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0,
    162, 0, 0, 0, 0, 163, 0, 164, 0, 165, 0, 166, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0,
    172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0,
    185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0,
    0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0,
    0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0,
    0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 211, 0, 0, 0, 212, 213, 0, 0, 0, 214, 0, 0, 0, 0,
    0, 215, 216, 0, 0, 0, 217, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229,
    0, 230, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238,
    0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 0, 244, 0, 245, 0, 0, 0, 246, 0, 247, 0, 0, 248, 0,
    249, 0, 0, 0, 250, 0, 251, 0, 252, 0, 253, 0, 0, 0, 254, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 260,
    0, 0, 261, 0, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269, 0, 0, 0, 270, 0, 271, 0, 0, 272, 0, 273, 0,
    274, 0, 275, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282,
    0, 283, 0, 0, 284, 0, 285, 0, 286, 0, 0, 287, 0, 288, 0, 289, 0, 0, 290, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293,
    0, 294, 0, 295, 0, 296, 0, 0, 297, 0, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0,
    310, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0,
    323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 340, 341, 0, 0, 0,
    0, 342, 0, 343, 0, 344, 0, 0, 0, 0, 345, 0, 346, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 350, 0, 351, 0, 0, 0, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358,
    0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0,
    365, 0, 366, 0, 0, 0, 0, 367, 0, 368, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 370, 0, 0, 371, 372, 0, 373, 0, 0, 0, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 385, 0, 386, 0, 0, 0, 0, 387, 0, 388, 389, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 392, 0, 393, 0, 0, 0,
    0, 394, 0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0,
    0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 410, 0,
    0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414,
    415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0,
    0, 419, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0,
    0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439,
    0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 442, 0, 443, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 448, 0, 449, 0,
    0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0,
    0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 458, 0, 0, 459, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462,
    0, 0, 0, 0, 0, 463, 464, 0, 465, 466, 0, 0, 0, 467, 0, 468, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0,
    472, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 481, 0, 482, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0,
    487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0,
    494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 498, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 503, 0, 504, 0, 0, 505, 506, 0, 0, 0, 0, 507, 0,
    508, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 512, 0, 513, 514, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0,
    0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 524, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 532, 0,
    0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 535, 536, 0, 537, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0,
    0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 0, 545, 0, 0, 0, 0, 546, 0, 547, 548, 0, 0,
    549, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 552, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0,
    555, 0, 556, 0, 0, 0, 557, 0, 558, 0, 559, 0, 0, 0, 560, 0, 0, 561, 0, 562, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 565, 566, 0, 0, 0, 0, 0, 567, 0, 0,
    0, 0, 0, 568, 0, 569, 0, 570, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 577, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583,
    0, 584, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0,
    0, 590, 0, 0, 0, 591, 0, 0, 592, 0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 595, 596, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0,
    0, 0, 599, 0, 600, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 605, 0, 606, 0, 0, 607, 0, 0,
    0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 612, 0, 613, 0, 0, 0, 614, 0, 0, 615, 0, 616,
    0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618,
    0, 0, 619, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 628, 0, 629, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 632, 0, 633, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 639, 0,
    640, 641, 0, 0, 642, 0, 643, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0,
    649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 652, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 655, 0, 656, 657, 658, 0, 0,
    659, 0, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 666, 0, 667,
    0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 670, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 673, 0, 674, 675, 0, 0, 0, 0,
    676, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 682, 0, 683, 0, 0, 0, 684, 0, 0, 0,
    685, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 687, 0, 688, 0, 689, 0, 0, 0, 690, 0, 0, 691, 0, 692, 0, 0, 0, 0, 693, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 695, 696, 0, 0,
    0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 699, 0, 700, 0, 701, 0, 702, 0, 703, 0, 704, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 707, 0, 708, 709, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 713, 714, 0, 0, 715, 0, 716, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 719,
    0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 0, 724, 0, 725, 0, 726, 0, 0, 0, 0, 0,
    727, 0, 0, 0, 0, 728, 0, 729, 730, 731, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0,
    0, 0, 737, 0, 0, 0, 0, 0, 738, 0, 0, 0, 739, 0, 740, 0, 0, 0, 0, 741, 0, 0, 0, 0, 742, 0, 743, 0, 744, 0, 0, 0,
    0, 0, 745, 0, 0, 0, 0, 746, 0, 747, 748, 0, 0, 0, 0, 749, 0, 750, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 0, 0, 753, 0,
    0, 0, 0, 754, 0, 755, 0, 756, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 760, 0, 761, 0, 762, 0,
    0, 0, 763, 0, 0, 764, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 768, 769, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 771, 0, 772, 0, 773, 0, 774, 0, 775,
    0, 776, 0, 777, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 781, 0, 0, 782, 0, 0, 0, 0,
    0, 783, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786,
};
void recomp_unit_0148_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A54000u;
        entry_id = (entry_delta < 16336u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0148[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A54000;
    case 2u: goto L_08A54038;
    case 3u: goto L_08A5404C;
    case 4u: goto L_08A5405C;
    case 5u: goto L_08A54068;
    case 6u: goto L_08A54078;
    case 7u: goto L_08A54088;
    case 8u: goto L_08A540A0;
    case 9u: goto L_08A540B4;
    case 10u: goto L_08A540C8;
    case 11u: goto L_08A540D4;
    case 12u: goto L_08A540D8;
    case 13u: goto L_08A54104;
    case 14u: goto L_08A541B8;
    case 15u: goto L_08A541C4;
    case 16u: goto L_08A541DC;
    case 17u: goto L_08A541E4;
    case 18u: goto L_08A541F8;
    case 19u: goto L_08A54208;
    case 20u: goto L_08A54210;
    case 21u: goto L_08A54228;
    case 22u: goto L_08A54234;
    case 23u: goto L_08A54240;
    case 24u: goto L_08A54258;
    case 25u: goto L_08A54264;
    case 26u: goto L_08A54274;
    case 27u: goto L_08A54284;
    case 28u: goto L_08A54290;
    case 29u: goto L_08A542AC;
    case 30u: goto L_08A542C0;
    case 31u: goto L_08A542C8;
    case 32u: goto L_08A542D4;
    case 33u: goto L_08A542F4;
    case 34u: goto L_08A54304;
    case 35u: goto L_08A54320;
    case 36u: goto L_08A54328;
    case 37u: goto L_08A54344;
    case 38u: goto L_08A5434C;
    case 39u: goto L_08A54354;
    case 40u: goto L_08A5435C;
    case 41u: goto L_08A5436C;
    case 42u: goto L_08A54374;
    case 43u: goto L_08A5437C;
    case 44u: goto L_08A54394;
    case 45u: goto L_08A5439C;
    case 46u: goto L_08A543A4;
    case 47u: goto L_08A543AC;
    case 48u: goto L_08A543B4;
    case 49u: goto L_08A543BC;
    case 50u: goto L_08A543C8;
    case 51u: goto L_08A543D0;
    case 52u: goto L_08A543E8;
    case 53u: goto L_08A543F0;
    case 54u: goto L_08A543F8;
    case 55u: goto L_08A54400;
    case 56u: goto L_08A54408;
    case 57u: goto L_08A54418;
    case 58u: goto L_08A54424;
    case 59u: goto L_08A54438;
    case 60u: goto L_08A54464;
    case 61u: goto L_08A5446C;
    case 62u: goto L_08A54478;
    case 63u: goto L_08A54488;
    case 64u: goto L_08A54494;
    case 65u: goto L_08A5449C;
    case 66u: goto L_08A544A8;
    case 67u: goto L_08A544B0;
    case 68u: goto L_08A544C0;
    case 69u: goto L_08A544E8;
    case 70u: goto L_08A544F4;
    case 71u: goto L_08A544FC;
    case 72u: goto L_08A54518;
    case 73u: goto L_08A5451C;
    case 74u: goto L_08A54524;
    case 75u: goto L_08A54534;
    case 76u: goto L_08A5453C;
    case 77u: goto L_08A54554;
    case 78u: goto L_08A54570;
    case 79u: goto L_08A545A4;
    case 80u: goto L_08A545C8;
    case 81u: goto L_08A54620;
    case 82u: goto L_08A54638;
    case 83u: goto L_08A5464C;
    case 84u: goto L_08A54664;
    case 85u: goto L_08A54674;
    case 86u: goto L_08A5467C;
    case 87u: goto L_08A54694;
    case 88u: goto L_08A5469C;
    case 89u: goto L_08A546A4;
    case 90u: goto L_08A546AC;
    case 91u: goto L_08A546B0;
    case 92u: goto L_08A5471C;
    case 93u: goto L_08A54728;
    case 94u: goto L_08A5472C;
    case 95u: goto L_08A54734;
    case 96u: goto L_08A5474C;
    case 97u: goto L_08A54754;
    case 98u: goto L_08A5475C;
    case 99u: goto L_08A54764;
    case 100u: goto L_08A5476C;
    case 101u: goto L_08A54774;
    case 102u: goto L_08A5477C;
    case 103u: goto L_08A54784;
    case 104u: goto L_08A547E8;
    case 105u: goto L_08A54834;
    case 106u: goto L_08A5483C;
    case 107u: goto L_08A54854;
    case 108u: goto L_08A5485C;
    case 109u: goto L_08A54870;
    case 110u: goto L_08A54878;
    case 111u: goto L_08A54880;
    case 112u: goto L_08A5488C;
    case 113u: goto L_08A54890;
    case 114u: goto L_08A548A8;
    case 115u: goto L_08A54914;
    case 116u: goto L_08A54920;
    case 117u: goto L_08A54924;
    case 118u: goto L_08A5493C;
    case 119u: goto L_08A54954;
    case 120u: goto L_08A5495C;
    case 121u: goto L_08A54964;
    case 122u: goto L_08A5496C;
    case 123u: goto L_08A54974;
    case 124u: goto L_08A5497C;
    case 125u: goto L_08A54984;
    case 126u: goto L_08A5498C;
    case 127u: goto L_08A549F8;
    case 128u: goto L_08A54A4C;
    case 129u: goto L_08A54A58;
    case 130u: goto L_08A54AC8;
    case 131u: goto L_08A54AD4;
    case 132u: goto L_08A54AE4;
    case 133u: goto L_08A54AEC;
    case 134u: goto L_08A54AF4;
    case 135u: goto L_08A54AFC;
    case 136u: goto L_08A54B04;
    case 137u: goto L_08A54B0C;
    case 138u: goto L_08A54B14;
    case 139u: goto L_08A54B1C;
    case 140u: goto L_08A54B28;
    case 141u: goto L_08A54B30;
    case 142u: goto L_08A54B38;
    case 143u: goto L_08A54B40;
    case 144u: goto L_08A54B50;
    case 145u: goto L_08A54B5C;
    case 146u: goto L_08A54B6C;
    case 147u: goto L_08A54B7C;
    case 148u: goto L_08A54B84;
    case 149u: goto L_08A54B8C;
    case 150u: goto L_08A54B94;
    case 151u: goto L_08A54B9C;
    case 152u: goto L_08A54BA4;
    case 153u: goto L_08A54BAC;
    case 154u: goto L_08A54BB4;
    case 155u: goto L_08A54BC0;
    case 156u: goto L_08A54BC8;
    case 157u: goto L_08A54BE4;
    case 158u: goto L_08A54C18;
    case 159u: goto L_08A54C50;
    case 160u: goto L_08A54C64;
    case 161u: goto L_08A54C74;
    case 162u: goto L_08A54C80;
    case 163u: goto L_08A54C94;
    case 164u: goto L_08A54C9C;
    case 165u: goto L_08A54CA4;
    case 166u: goto L_08A54CAC;
    case 167u: goto L_08A54CB0;
    case 168u: goto L_08A54CB8;
    case 169u: goto L_08A54CE0;
    case 170u: goto L_08A54CE8;
    case 171u: goto L_08A54CF8;
    case 172u: goto L_08A54D00;
    case 173u: goto L_08A54D08;
    case 174u: goto L_08A54D10;
    case 175u: goto L_08A54D18;
    case 176u: goto L_08A54D20;
    case 177u: goto L_08A54D28;
    case 178u: goto L_08A54D30;
    case 179u: goto L_08A54D38;
    case 180u: goto L_08A54D40;
    case 181u: goto L_08A54D50;
    case 182u: goto L_08A54D5C;
    case 183u: goto L_08A54D68;
    case 184u: goto L_08A54D78;
    case 185u: goto L_08A54D80;
    case 186u: goto L_08A54D88;
    case 187u: goto L_08A54D90;
    case 188u: goto L_08A54D98;
    case 189u: goto L_08A54DA0;
    case 190u: goto L_08A54DA8;
    case 191u: goto L_08A54DB0;
    case 192u: goto L_08A54DB8;
    case 193u: goto L_08A54DC4;
    case 194u: goto L_08A54DCC;
    case 195u: goto L_08A54DDC;
    case 196u: goto L_08A54DE8;
    case 197u: goto L_08A54DF8;
    case 198u: goto L_08A54E0C;
    case 199u: goto L_08A54E1C;
    case 200u: goto L_08A54E30;
    case 201u: goto L_08A54E74;
    case 202u: goto L_08A54E94;
    case 203u: goto L_08A54E9C;
    case 204u: goto L_08A54EB8;
    case 205u: goto L_08A54ECC;
    case 206u: goto L_08A54EE8;
    case 207u: goto L_08A54EF8;
    case 208u: goto L_08A54F14;
    case 209u: goto L_08A54F2C;
    case 210u: goto L_08A54F44;
    case 211u: goto L_08A54F48;
    case 212u: goto L_08A54F58;
    case 213u: goto L_08A54F5C;
    case 214u: goto L_08A54F6C;
    case 215u: goto L_08A54F84;
    case 216u: goto L_08A54F88;
    case 217u: goto L_08A54F98;
    case 218u: goto L_08A54F9C;
    case 219u: goto L_08A54FAC;
    case 220u: goto L_08A54FBC;
    case 221u: goto L_08A54FD0;
    case 222u: goto L_08A54FE0;
    case 223u: goto L_08A5500C;
    case 224u: goto L_08A55020;
    case 225u: goto L_08A55030;
    case 226u: goto L_08A55044;
    case 227u: goto L_08A55054;
    case 228u: goto L_08A5506C;
    case 229u: goto L_08A5507C;
    case 230u: goto L_08A55084;
    case 231u: goto L_08A5508C;
    case 232u: goto L_08A5509C;
    case 233u: goto L_08A550AC;
    case 234u: goto L_08A550F0;
    case 235u: goto L_08A55110;
    case 236u: goto L_08A55118;
    case 237u: goto L_08A5515C;
    case 238u: goto L_08A5517C;
    case 239u: goto L_08A55184;
    case 240u: goto L_08A55194;
    case 241u: goto L_08A551A4;
    case 242u: goto L_08A551B8;
    case 243u: goto L_08A551C0;
    case 244u: goto L_08A551CC;
    case 245u: goto L_08A551D4;
    case 246u: goto L_08A551E4;
    case 247u: goto L_08A551EC;
    case 248u: goto L_08A551F8;
    case 249u: goto L_08A55200;
    case 250u: goto L_08A55210;
    case 251u: goto L_08A55218;
    case 252u: goto L_08A55220;
    case 253u: goto L_08A55228;
    case 254u: goto L_08A55238;
    case 255u: goto L_08A55240;
    case 256u: goto L_08A5524C;
    case 257u: goto L_08A55258;
    case 258u: goto L_08A55264;
    case 259u: goto L_08A55270;
    case 260u: goto L_08A5527C;
    case 261u: goto L_08A55288;
    case 262u: goto L_08A55294;
    case 263u: goto L_08A5529C;
    case 264u: goto L_08A552A4;
    case 265u: goto L_08A552AC;
    case 266u: goto L_08A552B4;
    case 267u: goto L_08A552BC;
    case 268u: goto L_08A552C4;
    case 269u: goto L_08A552CC;
    case 270u: goto L_08A552DC;
    case 271u: goto L_08A552E4;
    case 272u: goto L_08A552F0;
    case 273u: goto L_08A552F8;
    case 274u: goto L_08A55300;
    case 275u: goto L_08A55308;
    case 276u: goto L_08A5530C;
    case 277u: goto L_08A55314;
    case 278u: goto L_08A5535C;
    case 279u: goto L_08A55364;
    case 280u: goto L_08A5536C;
    case 281u: goto L_08A55374;
    case 282u: goto L_08A5537C;
    case 283u: goto L_08A55384;
    case 284u: goto L_08A55390;
    case 285u: goto L_08A55398;
    case 286u: goto L_08A553A0;
    case 287u: goto L_08A553AC;
    case 288u: goto L_08A553B4;
    case 289u: goto L_08A553BC;
    case 290u: goto L_08A553C8;
    case 291u: goto L_08A553D0;
    case 292u: goto L_08A553E4;
    case 293u: goto L_08A553FC;
    case 294u: goto L_08A55404;
    case 295u: goto L_08A5540C;
    case 296u: goto L_08A55414;
    case 297u: goto L_08A55420;
    case 298u: goto L_08A55428;
    case 299u: goto L_08A55430;
    case 300u: goto L_08A55448;
    case 301u: goto L_08A55470;
    case 302u: goto L_08A5548C;
    case 303u: goto L_08A55498;
    case 304u: goto L_08A554A4;
    case 305u: goto L_08A554B0;
    case 306u: goto L_08A554B8;
    case 307u: goto L_08A554D0;
    case 308u: goto L_08A554E8;
    case 309u: goto L_08A554F8;
    case 310u: goto L_08A55500;
    case 311u: goto L_08A55508;
    case 312u: goto L_08A55528;
    case 313u: goto L_08A55540;
    case 314u: goto L_08A55558;
    case 315u: goto L_08A55560;
    case 316u: goto L_08A55570;
    case 317u: goto L_08A555A0;
    case 318u: goto L_08A555B0;
    case 319u: goto L_08A555C0;
    case 320u: goto L_08A555D0;
    case 321u: goto L_08A555E0;
    case 322u: goto L_08A555E8;
    case 323u: goto L_08A55600;
    case 324u: goto L_08A55610;
    case 325u: goto L_08A55628;
    case 326u: goto L_08A55634;
    case 327u: goto L_08A55640;
    case 328u: goto L_08A55648;
    case 329u: goto L_08A55668;
    case 330u: goto L_08A55694;
    case 331u: goto L_08A556A0;
    case 332u: goto L_08A556E0;
    case 333u: goto L_08A556E8;
    case 334u: goto L_08A55710;
    case 335u: goto L_08A55718;
    case 336u: goto L_08A55720;
    case 337u: goto L_08A55734;
    case 338u: goto L_08A55748;
    case 339u: goto L_08A55764;
    case 340u: goto L_08A5576C;
    case 341u: goto L_08A55770;
    case 342u: goto L_08A55784;
    case 343u: goto L_08A5578C;
    case 344u: goto L_08A55794;
    case 345u: goto L_08A557A8;
    case 346u: goto L_08A557B0;
    case 347u: goto L_08A557B4;
    case 348u: goto L_08A55820;
    case 349u: goto L_08A5582C;
    case 350u: goto L_08A55830;
    case 351u: goto L_08A55838;
    case 352u: goto L_08A5584C;
    case 353u: goto L_08A55854;
    case 354u: goto L_08A5585C;
    case 355u: goto L_08A55864;
    case 356u: goto L_08A5586C;
    case 357u: goto L_08A55874;
    case 358u: goto L_08A5587C;
    case 359u: goto L_08A55884;
    case 360u: goto L_08A558E8;
    case 361u: goto L_08A55934;
    case 362u: goto L_08A55950;
    case 363u: goto L_08A55964;
    case 364u: goto L_08A55978;
    case 365u: goto L_08A55980;
    case 366u: goto L_08A55988;
    case 367u: goto L_08A5599C;
    case 368u: goto L_08A559A4;
    case 369u: goto L_08A559A8;
    case 370u: goto L_08A55A14;
    case 371u: goto L_08A55A20;
    case 372u: goto L_08A55A24;
    case 373u: goto L_08A55A2C;
    case 374u: goto L_08A55A40;
    case 375u: goto L_08A55A48;
    case 376u: goto L_08A55A50;
    case 377u: goto L_08A55A58;
    case 378u: goto L_08A55A60;
    case 379u: goto L_08A55A68;
    case 380u: goto L_08A55A70;
    case 381u: goto L_08A55A78;
    case 382u: goto L_08A55ADC;
    case 383u: goto L_08A55B28;
    case 384u: goto L_08A55B3C;
    case 385u: goto L_08A55B44;
    case 386u: goto L_08A55B4C;
    case 387u: goto L_08A55B60;
    case 388u: goto L_08A55B68;
    case 389u: goto L_08A55B6C;
    case 390u: goto L_08A55BD8;
    case 391u: goto L_08A55BE4;
    case 392u: goto L_08A55BE8;
    case 393u: goto L_08A55BF0;
    case 394u: goto L_08A55C04;
    case 395u: goto L_08A55C0C;
    case 396u: goto L_08A55C14;
    case 397u: goto L_08A55C1C;
    case 398u: goto L_08A55C24;
    case 399u: goto L_08A55C2C;
    case 400u: goto L_08A55C34;
    case 401u: goto L_08A55C3C;
    case 402u: goto L_08A55CA0;
    case 403u: goto L_08A55CEC;
    case 404u: goto L_08A55D04;
    case 405u: goto L_08A55D2C;
    case 406u: goto L_08A55D38;
    case 407u: goto L_08A55D40;
    case 408u: goto L_08A55D58;
    case 409u: goto L_08A55D64;
    case 410u: goto L_08A55D78;
    case 411u: goto L_08A55D98;
    case 412u: goto L_08A55DA4;
    case 413u: goto L_08A55DD0;
    case 414u: goto L_08A55DFC;
    case 415u: goto L_08A55E00;
    case 416u: goto L_08A55E48;
    case 417u: goto L_08A55E58;
    case 418u: goto L_08A55E70;
    case 419u: goto L_08A55E84;
    case 420u: goto L_08A55E90;
    case 421u: goto L_08A55E9C;
    case 422u: goto L_08A55EC8;
    case 423u: goto L_08A55EF4;
    case 424u: goto L_08A55F0C;
    case 425u: goto L_08A55F54;
    case 426u: goto L_08A55FA4;
    case 427u: goto L_08A55FAC;
    case 428u: goto L_08A55FF8;
    case 429u: goto L_08A56034;
    case 430u: goto L_08A5603C;
    case 431u: goto L_08A56044;
    case 432u: goto L_08A56090;
    case 433u: goto L_08A560CC;
    case 434u: goto L_08A560D4;
    case 435u: goto L_08A560EC;
    case 436u: goto L_08A56130;
    case 437u: goto L_08A56170;
    case 438u: goto L_08A5619C;
    case 439u: goto L_08A561FC;
    case 440u: goto L_08A56210;
    case 441u: goto L_08A56234;
    case 442u: goto L_08A56310;
    case 443u: goto L_08A56318;
    case 444u: goto L_08A56320;
    case 445u: goto L_08A56328;
    case 446u: goto L_08A56350;
    case 447u: goto L_08A5635C;
    case 448u: goto L_08A56370;
    case 449u: goto L_08A56378;
    case 450u: goto L_08A56384;
    case 451u: goto L_08A5638C;
    case 452u: goto L_08A56454;
    case 453u: goto L_08A56464;
    case 454u: goto L_08A56478;
    case 455u: goto L_08A56484;
    case 456u: goto L_08A564A0;
    case 457u: goto L_08A564B0;
    case 458u: goto L_08A564B8;
    case 459u: goto L_08A564C4;
    case 460u: goto L_08A564C8;
    case 461u: goto L_08A564DC;
    case 462u: goto L_08A564FC;
    case 463u: goto L_08A56514;
    case 464u: goto L_08A56518;
    case 465u: goto L_08A56520;
    case 466u: goto L_08A56524;
    case 467u: goto L_08A56534;
    case 468u: goto L_08A5653C;
    case 469u: goto L_08A56548;
    case 470u: goto L_08A5655C;
    case 471u: goto L_08A56570;
    case 472u: goto L_08A56580;
    case 473u: goto L_08A5658C;
    case 474u: goto L_08A5659C;
    case 475u: goto L_08A565B0;
    case 476u: goto L_08A565C0;
    case 477u: goto L_08A565CC;
    case 478u: goto L_08A565E0;
    case 479u: goto L_08A56618;
    case 480u: goto L_08A56620;
    case 481u: goto L_08A56630;
    case 482u: goto L_08A56638;
    case 483u: goto L_08A5663C;
    case 484u: goto L_08A56684;
    case 485u: goto L_08A566F0;
    case 486u: goto L_08A566F8;
    case 487u: goto L_08A56700;
    case 488u: goto L_08A5670C;
    case 489u: goto L_08A56760;
    case 490u: goto L_08A56788;
    case 491u: goto L_08A567A4;
    case 492u: goto L_08A56824;
    case 493u: goto L_08A56864;
    case 494u: goto L_08A56880;
    case 495u: goto L_08A568A8;
    case 496u: goto L_08A568D0;
    case 497u: goto L_08A568D4;
    case 498u: goto L_08A5690C;
    case 499u: goto L_08A56914;
    case 500u: goto L_08A5691C;
    case 501u: goto L_08A569B4;
    case 502u: goto L_08A569C0;
    case 503u: goto L_08A569CC;
    case 504u: goto L_08A569D4;
    case 505u: goto L_08A569E0;
    case 506u: goto L_08A569E4;
    case 507u: goto L_08A569F8;
    case 508u: goto L_08A56A00;
    case 509u: goto L_08A56A0C;
    case 510u: goto L_08A56A24;
    case 511u: goto L_08A56A34;
    case 512u: goto L_08A56A3C;
    case 513u: goto L_08A56A44;
    case 514u: goto L_08A56A48;
    case 515u: goto L_08A56A50;
    case 516u: goto L_08A56A6C;
    case 517u: goto L_08A56A74;
    case 518u: goto L_08A56A90;
    case 519u: goto L_08A56A98;
    case 520u: goto L_08A56AD4;
    case 521u: goto L_08A56B1C;
    case 522u: goto L_08A56B30;
    case 523u: goto L_08A56B44;
    case 524u: goto L_08A56B4C;
    case 525u: goto L_08A56B50;
    case 526u: goto L_08A56B68;
    case 527u: goto L_08A56B9C;
    case 528u: goto L_08A56BB0;
    case 529u: goto L_08A56BC0;
    case 530u: goto L_08A56BD8;
    case 531u: goto L_08A56BE0;
    case 532u: goto L_08A56BF8;
    case 533u: goto L_08A56C1C;
    case 534u: goto L_08A56C34;
    case 535u: goto L_08A56C3C;
    case 536u: goto L_08A56C40;
    case 537u: goto L_08A56C48;
    case 538u: goto L_08A56C54;
    case 539u: goto L_08A56C68;
    case 540u: goto L_08A56C74;
    case 541u: goto L_08A56C8C;
    case 542u: goto L_08A56C9C;
    case 543u: goto L_08A56CB4;
    case 544u: goto L_08A56CC8;
    case 545u: goto L_08A56CD4;
    case 546u: goto L_08A56CE8;
    case 547u: goto L_08A56CF0;
    case 548u: goto L_08A56CF4;
    case 549u: goto L_08A56D00;
    case 550u: goto L_08A56D20;
    case 551u: goto L_08A56D30;
    case 552u: goto L_08A56D54;
    case 553u: goto L_08A56D58;
    case 554u: goto L_08A56D6C;
    case 555u: goto L_08A56D80;
    case 556u: goto L_08A56D88;
    case 557u: goto L_08A56D98;
    case 558u: goto L_08A56DA0;
    case 559u: goto L_08A56DA8;
    case 560u: goto L_08A56DB8;
    case 561u: goto L_08A56DC4;
    case 562u: goto L_08A56DCC;
    case 563u: goto L_08A56DE0;
    case 564u: goto L_08A56E4C;
    case 565u: goto L_08A56E58;
    case 566u: goto L_08A56E5C;
    case 567u: goto L_08A56E74;
    case 568u: goto L_08A56E8C;
    case 569u: goto L_08A56E94;
    case 570u: goto L_08A56E9C;
    case 571u: goto L_08A56EA4;
    case 572u: goto L_08A56EAC;
    case 573u: goto L_08A56EB4;
    case 574u: goto L_08A56EBC;
    case 575u: goto L_08A56EC4;
    case 576u: goto L_08A56F30;
    case 577u: goto L_08A56F84;
    case 578u: goto L_08A56F90;
    case 579u: goto L_08A56FA0;
    case 580u: goto L_08A56FC4;
    case 581u: goto L_08A56FD4;
    case 582u: goto L_08A56FE4;
    case 583u: goto L_08A56FFC;
    case 584u: goto L_08A57004;
    case 585u: goto L_08A57008;
    case 586u: goto L_08A57048;
    case 587u: goto L_08A57054;
    case 588u: goto L_08A57068;
    case 589u: goto L_08A57070;
    case 590u: goto L_08A57084;
    case 591u: goto L_08A57094;
    case 592u: goto L_08A570A0;
    case 593u: goto L_08A570B0;
    case 594u: goto L_08A570BC;
    case 595u: goto L_08A570CC;
    case 596u: goto L_08A570D0;
    case 597u: goto L_08A570DC;
    case 598u: goto L_08A570F4;
    case 599u: goto L_08A57108;
    case 600u: goto L_08A57110;
    case 601u: goto L_08A57118;
    case 602u: goto L_08A57128;
    case 603u: goto L_08A57148;
    case 604u: goto L_08A57158;
    case 605u: goto L_08A57160;
    case 606u: goto L_08A57168;
    case 607u: goto L_08A57174;
    case 608u: goto L_08A57184;
    case 609u: goto L_08A57194;
    case 610u: goto L_08A571AC;
    case 611u: goto L_08A571C8;
    case 612u: goto L_08A571D0;
    case 613u: goto L_08A571D8;
    case 614u: goto L_08A571E8;
    case 615u: goto L_08A571F4;
    case 616u: goto L_08A571FC;
    case 617u: goto L_08A57210;
    case 618u: goto L_08A5727C;
    case 619u: goto L_08A57288;
    case 620u: goto L_08A5728C;
    case 621u: goto L_08A572A4;
    case 622u: goto L_08A572BC;
    case 623u: goto L_08A572C4;
    case 624u: goto L_08A572CC;
    case 625u: goto L_08A572D4;
    case 626u: goto L_08A572DC;
    case 627u: goto L_08A572E4;
    case 628u: goto L_08A572EC;
    case 629u: goto L_08A572F4;
    case 630u: goto L_08A57360;
    case 631u: goto L_08A573B4;
    case 632u: goto L_08A573B8;
    case 633u: goto L_08A573C0;
    case 634u: goto L_08A573CC;
    case 635u: goto L_08A573E4;
    case 636u: goto L_08A573EC;
    case 637u: goto L_08A57420;
    case 638u: goto L_08A57460;
    case 639u: goto L_08A57478;
    case 640u: goto L_08A57480;
    case 641u: goto L_08A57484;
    case 642u: goto L_08A57490;
    case 643u: goto L_08A57498;
    case 644u: goto L_08A574A0;
    case 645u: goto L_08A574B8;
    case 646u: goto L_08A574CC;
    case 647u: goto L_08A574E4;
    case 648u: goto L_08A574F8;
    case 649u: goto L_08A57500;
    case 650u: goto L_08A57514;
    case 651u: goto L_08A57528;
    case 652u: goto L_08A57530;
    case 653u: goto L_08A57538;
    case 654u: goto L_08A57550;
    case 655u: goto L_08A57564;
    case 656u: goto L_08A5756C;
    case 657u: goto L_08A57570;
    case 658u: goto L_08A57574;
    case 659u: goto L_08A57580;
    case 660u: goto L_08A57594;
    case 661u: goto L_08A575A4;
    case 662u: goto L_08A575B0;
    case 663u: goto L_08A575C4;
    case 664u: goto L_08A575CC;
    case 665u: goto L_08A575E4;
    case 666u: goto L_08A575F4;
    case 667u: goto L_08A575FC;
    case 668u: goto L_08A57610;
    case 669u: goto L_08A57624;
    case 670u: goto L_08A5762C;
    case 671u: goto L_08A57634;
    case 672u: goto L_08A5764C;
    case 673u: goto L_08A57660;
    case 674u: goto L_08A57668;
    case 675u: goto L_08A5766C;
    case 676u: goto L_08A57680;
    case 677u: goto L_08A57688;
    case 678u: goto L_08A57698;
    case 679u: goto L_08A576A4;
    case 680u: goto L_08A576BC;
    case 681u: goto L_08A576D0;
    case 682u: goto L_08A576D8;
    case 683u: goto L_08A576E0;
    case 684u: goto L_08A576F0;
    case 685u: goto L_08A57700;
    case 686u: goto L_08A5770C;
    case 687u: goto L_08A5772C;
    case 688u: goto L_08A57734;
    case 689u: goto L_08A5773C;
    case 690u: goto L_08A5774C;
    case 691u: goto L_08A57758;
    case 692u: goto L_08A57760;
    case 693u: goto L_08A57774;
    case 694u: goto L_08A577E4;
    case 695u: goto L_08A577F0;
    case 696u: goto L_08A577F4;
    case 697u: goto L_08A5780C;
    case 698u: goto L_08A57820;
    case 699u: goto L_08A57828;
    case 700u: goto L_08A57830;
    case 701u: goto L_08A57838;
    case 702u: goto L_08A57840;
    case 703u: goto L_08A57848;
    case 704u: goto L_08A57850;
    case 705u: goto L_08A57858;
    case 706u: goto L_08A578C4;
    case 707u: goto L_08A57918;
    case 708u: goto L_08A57920;
    case 709u: goto L_08A57924;
    case 710u: goto L_08A57930;
    case 711u: goto L_08A57954;
    case 712u: goto L_08A579A8;
    case 713u: goto L_08A579B0;
    case 714u: goto L_08A579B4;
    case 715u: goto L_08A579C0;
    case 716u: goto L_08A579C8;
    case 717u: goto L_08A579D0;
    case 718u: goto L_08A579E8;
    case 719u: goto L_08A579FC;
    case 720u: goto L_08A57A14;
    case 721u: goto L_08A57A28;
    case 722u: goto L_08A57A30;
    case 723u: goto L_08A57A44;
    case 724u: goto L_08A57A58;
    case 725u: goto L_08A57A60;
    case 726u: goto L_08A57A68;
    case 727u: goto L_08A57A80;
    case 728u: goto L_08A57A94;
    case 729u: goto L_08A57A9C;
    case 730u: goto L_08A57AA0;
    case 731u: goto L_08A57AA4;
    case 732u: goto L_08A57AB0;
    case 733u: goto L_08A57AC4;
    case 734u: goto L_08A57AD4;
    case 735u: goto L_08A57AE0;
    case 736u: goto L_08A57AF4;
    case 737u: goto L_08A57B08;
    case 738u: goto L_08A57B20;
    case 739u: goto L_08A57B30;
    case 740u: goto L_08A57B38;
    case 741u: goto L_08A57B4C;
    case 742u: goto L_08A57B60;
    case 743u: goto L_08A57B68;
    case 744u: goto L_08A57B70;
    case 745u: goto L_08A57B88;
    case 746u: goto L_08A57B9C;
    case 747u: goto L_08A57BA4;
    case 748u: goto L_08A57BA8;
    case 749u: goto L_08A57BBC;
    case 750u: goto L_08A57BC4;
    case 751u: goto L_08A57BD4;
    case 752u: goto L_08A57BE0;
    case 753u: goto L_08A57BF8;
    case 754u: goto L_08A57C0C;
    case 755u: goto L_08A57C14;
    case 756u: goto L_08A57C1C;
    case 757u: goto L_08A57C2C;
    case 758u: goto L_08A57C3C;
    case 759u: goto L_08A57C48;
    case 760u: goto L_08A57C68;
    case 761u: goto L_08A57C70;
    case 762u: goto L_08A57C78;
    case 763u: goto L_08A57C88;
    case 764u: goto L_08A57C94;
    case 765u: goto L_08A57C9C;
    case 766u: goto L_08A57CB0;
    case 767u: goto L_08A57D20;
    case 768u: goto L_08A57D2C;
    case 769u: goto L_08A57D30;
    case 770u: goto L_08A57D48;
    case 771u: goto L_08A57D5C;
    case 772u: goto L_08A57D64;
    case 773u: goto L_08A57D6C;
    case 774u: goto L_08A57D74;
    case 775u: goto L_08A57D7C;
    case 776u: goto L_08A57D84;
    case 777u: goto L_08A57D8C;
    case 778u: goto L_08A57D94;
    case 779u: goto L_08A57E00;
    case 780u: goto L_08A57E54;
    case 781u: goto L_08A57E60;
    case 782u: goto L_08A57E6C;
    case 783u: goto L_08A57E84;
    case 784u: goto L_08A57E9C;
    case 785u: goto L_08A57F3C;
    case 786u: goto L_08A57FCC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A54000:
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08A54038u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A54038u) goto L_08A54038;
    return;
L_08A54038:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5405C;
      }
      goto L_08A5404C;
    }
L_08A5404C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A540D8;
      }
      goto L_08A5405C;
    }
L_08A5405C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x08A54068u);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A54068u) goto L_08A54068;
    return;
L_08A54068:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A54078u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A54078u) goto L_08A54078;
    return;
L_08A54078:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A54088u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A54088u) goto L_08A54088;
    return;
L_08A54088:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9644)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9648)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A540A0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08A540A0u) goto L_08A540A0;
    return;
L_08A540A0:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A540B4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08A540B4u) goto L_08A540B4;
    return;
L_08A540B4:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A540C8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08A540C8u) goto L_08A540C8;
    return;
L_08A540C8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A540D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08A540D4u) goto L_08A540D4;
    return;
L_08A540D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A540D8;
L_08A540D8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54104:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9780)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-9784)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-9712)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (17096u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[6] = (16014u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 14571u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-9776), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[8] = (16672u << 16u);
    ctx.gpr[9] = (15744u << 16u);
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    ctx.gpr[13] = (2230u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-9768), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-9772), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-9760), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-9764), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-9748), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-5908), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A541B8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A541DC;
      }
      goto L_08A541C4;
    }
L_08A541C4:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A541C4;
      }
      goto L_08A541DC;
    }
L_08A541DC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A541E4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A54208;
      }
      goto L_08A541F8;
    }
L_08A541F8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A541F8;
      }
      goto L_08A54208;
    }
L_08A54208:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54228;
      }
      goto L_08A54210;
    }
L_08A54210:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A54210;
      }
      goto L_08A54228;
    }
L_08A54228:
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54234:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A54258;
      }
      goto L_08A54240;
    }
L_08A54240:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A54240;
      }
      goto L_08A54258;
    }
L_08A54258:
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54264:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A542C8;
      }
      goto L_08A54274;
    }
L_08A54274:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < 97 ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A542AC;
      }
      goto L_08A54284;
    }
L_08A54284:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 123 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A542AC;
      }
      goto L_08A54290;
    }
L_08A54290:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A542C0;
      }
      goto L_08A542AC;
    }
L_08A542AC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A542C0;
L_08A542C0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54274;
      }
      goto L_08A542C8;
    }
L_08A542C8:
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A542D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A542F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6968));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892F99Cu>(ctx, &aot_mem) && ctx.pc == 0x08A542F4u) goto L_08A542F4;
    return;
L_08A542F4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A54304u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A54DF8;
L_08A54304:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A54320u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_08A54E1C;
L_08A54320:
    ctx.gpr[31] = (0x08A54328u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A54E0C;
L_08A54328:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08A54344u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08A54344u) goto L_08A54344;
    return;
L_08A54344:
    ctx.gpr[31] = (0x08A5434Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A54E30;
L_08A5434C:
    ctx.gpr[31] = (0x08A54354u);
    // nop
    goto L_08A54EB8;
L_08A54354:
    ctx.gpr[31] = (0x08A5435Cu);
    // nop
    goto L_08A54EE8;
L_08A5435C:
    ctx.gpr[4] = (17440u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A5436Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A54F6C;
L_08A5436C:
    ctx.gpr[31] = (0x08A54374u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A54FAC;
L_08A54374:
    ctx.gpr[31] = (0x08A5437Cu);
    // nop
    goto L_08A54FD0;
L_08A5437C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (0u | 128u);
    ctx.gpr[31] = (0x08A54394u);
    ctx.gpr[8] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08A54394u) goto L_08A54394;
    return;
L_08A54394:
    ctx.gpr[31] = (0x08A5439Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A54FE0;
L_08A5439C:
    ctx.gpr[31] = (0x08A543A4u);
    // nop
    goto L_08A55020;
L_08A543A4:
    ctx.gpr[31] = (0x08A543ACu);
    // nop
    goto L_08A55030;
L_08A543AC:
    ctx.gpr[31] = (0x08A543B4u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A55054;
L_08A543B4:
    ctx.gpr[31] = (0x08A543BCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A54F2C;
L_08A543BC:
    ctx.gpr[4] = (17279u << 16u);
    ctx.gpr[31] = (0x08A543C8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A5508C;
L_08A543C8:
    ctx.gpr[31] = (0x08A543D0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A5509C;
L_08A543D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A543E8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08A543E8u) goto L_08A543E8;
    return;
L_08A543E8:
    ctx.gpr[31] = (0x08A543F0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A55118;
L_08A543F0:
    ctx.gpr[31] = (0x08A543F8u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A55184;
L_08A543F8:
    ctx.gpr[31] = (0x08A54400u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A55194;
L_08A54400:
    ctx.gpr[31] = (0x08A54408u);
    ctx.gpr[4] = (0u | 2u);
    goto L_08A55194;
L_08A54408:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5453C;
      }
      goto L_08A54418;
    }
L_08A54418:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A54424u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A54424u) goto L_08A54424;
    return;
L_08A54424:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
      if (branch_taken) {
          goto L_08A54464;
      }
      goto L_08A54438;
    }
L_08A54438:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9476));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9460));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (2213u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(21616));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    goto L_08A54464;
L_08A54464:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A54478;
      }
      goto L_08A5446C;
    }
L_08A5446C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08A54478;
L_08A54478:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A544C0;
      }
      goto L_08A54488;
    }
L_08A54488:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08A544B0;
      }
      goto L_08A54494;
    }
L_08A54494:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A544A8;
      }
      goto L_08A5449C;
    }
L_08A5449C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A544A8;
L_08A544A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    goto L_08A544B0;
L_08A544B0:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(304), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(297)));
      if (branch_taken) {
          goto L_08A544F4;
      }
      goto L_08A544C0;
    }
L_08A544C0:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(300));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A544E8u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 139u, 0x08B0098Cu>(ctx, &aot_mem) && ctx.pc == 0x08A544E8u) goto L_08A544E8;
    return;
L_08A544E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(297)));
    goto L_08A544F4;
L_08A544F4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5451C;
      }
      goto L_08A544FC;
    }
L_08A544FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A54518u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54518u) goto L_08A54518;
    return;
L_08A54518:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08A5451C;
L_08A5451C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5453C;
      }
      goto L_08A54524;
    }
L_08A54524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5453C;
      }
      goto L_08A54534;
    }
L_08A54534:
    ctx.gpr[31] = (0x08A5453Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08A5453Cu) goto L_08A5453C;
    return;
L_08A5453C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54554:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A54570u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A5509C;
L_08A54570:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5904), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22912));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25328));
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-24304), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A545A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A545C8u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A57420;
L_08A545C8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (16896u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[18] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[18])) && ctx.fpr[13] == ctx.fpr[18]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
      if (branch_taken) {
          goto L_08A54638;
      }
      goto L_08A54620;
    }
L_08A54620:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_08A54638;
L_08A54638:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5464Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A56AD4;
L_08A5464C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54664:
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A5469C;
      }
      goto L_08A54674;
    }
L_08A54674:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5469C;
      }
      goto L_08A5467C;
    }
L_08A5467C:
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22912));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(42)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.gpr[6] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A546B0;
      }
      goto L_08A54694;
    }
L_08A54694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A546A4;
      }
      goto L_08A5469C;
    }
L_08A5469C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A54834;
      }
      goto L_08A546A4;
    }
L_08A546A4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54734;
      }
      goto L_08A546AC;
    }
L_08A546AC:
    ctx.gpr[6] = (2277u << 16u);
    goto L_08A546B0;
L_08A546B0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22912));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(418))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9640));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 192 ? 1u : 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A54728;
      }
      goto L_08A5471C;
    }
L_08A5471C:
    ctx.gpr[4] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5472C;
      }
      goto L_08A54728;
    }
L_08A54728:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08A5472C;
L_08A5472C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[13] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08A54834;
      }
      goto L_08A54734;
    }
L_08A54734:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 63u);
      if (branch_taken) {
          goto L_08A54774;
      }
      goto L_08A5474C;
    }
L_08A5474C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_08A54774;
      }
      goto L_08A54754;
    }
L_08A54754:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 44u);
      if (branch_taken) {
          goto L_08A54774;
      }
      goto L_08A5475C;
    }
L_08A5475C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_08A54774;
      }
      goto L_08A54764;
    }
L_08A54764:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 59u);
      if (branch_taken) {
          goto L_08A54774;
      }
      goto L_08A5476C;
    }
L_08A5476C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5477C;
      }
      goto L_08A54774;
    }
L_08A54774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5477C;
      }
      goto L_08A5477C;
    }
L_08A5477C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A547E8;
      }
      goto L_08A54784;
    }
L_08A54784:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22912));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[6] = (16332u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.gpr[7] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[0] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9640));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08A54834;
      }
      goto L_08A547E8;
    }
L_08A547E8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22912));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9640));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[0] = ctx.fpr[13] + ctx.fpr[0];
    goto L_08A54834;
L_08A54834:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5483C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 209 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54878;
      }
      goto L_08A54854;
    }
L_08A54854:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A54878;
      }
      goto L_08A5485C;
    }
L_08A5485C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(58)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54880;
      }
      goto L_08A54870;
    }
L_08A54870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54890;
      }
      goto L_08A54878;
    }
L_08A54878:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A54A4C;
      }
      goto L_08A54880;
    }
L_08A54880:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x08A5488Cu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    goto L_08A551A4;
L_08A5488C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    goto L_08A54890;
L_08A54890:
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(29)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A5493C;
      }
      goto L_08A548A8;
    }
L_08A548A8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(418))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9640));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 192 ? 1u : 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A54920;
      }
      goto L_08A54914;
    }
L_08A54914:
    ctx.gpr[4] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A54924;
      }
      goto L_08A54920;
    }
L_08A54920:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08A54924;
L_08A54924:
    ctx.fpr[0] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_08A54A4C;
      }
      goto L_08A5493C;
    }
L_08A5493C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 63u);
      if (branch_taken) {
          goto L_08A5497C;
      }
      goto L_08A54954;
    }
L_08A54954:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_08A5497C;
      }
      goto L_08A5495C;
    }
L_08A5495C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 44u);
      if (branch_taken) {
          goto L_08A5497C;
      }
      goto L_08A54964;
    }
L_08A54964:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_08A5497C;
      }
      goto L_08A5496C;
    }
L_08A5496C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 59u);
      if (branch_taken) {
          goto L_08A5497C;
      }
      goto L_08A54974;
    }
L_08A54974:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54984;
      }
      goto L_08A5497C;
    }
L_08A5497C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54984;
      }
      goto L_08A54984;
    }
L_08A54984:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A549F8;
      }
      goto L_08A5498C;
    }
L_08A5498C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9640));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[0] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_08A54A4C;
      }
      goto L_08A549F8;
    }
L_08A549F8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9640));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    goto L_08A54A4C;
L_08A54A4C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54A58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (17392u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (0u | 126u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (0u | 33u);
    ctx.gpr[23] = (0u | 63u);
    ctx.gpr[22] = (0u | 46u);
    ctx.gpr[21] = (0u | 44u);
    ctx.gpr[20] = (0u | 58u);
    ctx.gpr[19] = (0u | 59u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    goto L_08A54AC8;
L_08A54AC8:
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A54B28;
      }
      goto L_08A54AD4;
    }
L_08A54AD4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A54B0C;
      }
      goto L_08A54AE4;
    }
L_08A54AE4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A54B0C;
      }
      goto L_08A54AEC;
    }
L_08A54AEC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A54B0C;
      }
      goto L_08A54AF4;
    }
L_08A54AF4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A54B0C;
      }
      goto L_08A54AFC;
    }
L_08A54AFC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A54B0C;
      }
      goto L_08A54B04;
    }
L_08A54B04:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54B14;
      }
      goto L_08A54B0C;
    }
L_08A54B0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54B14;
      }
      goto L_08A54B14;
    }
L_08A54B14:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54B28;
      }
      goto L_08A54B1C;
    }
L_08A54B1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54BC0;
      }
      goto L_08A54B28;
    }
L_08A54B28:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54BC0;
      }
      goto L_08A54B30;
    }
L_08A54B30:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54BC0;
      }
      goto L_08A54B38;
    }
L_08A54B38:
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27340)));
        goto L_08A54BC8;
    }
    goto L_08A54B40;
L_08A54B40:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A54B5C;
      }
      goto L_08A54B50;
    }
L_08A54B50:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A54B50;
      }
      goto L_08A54B5C;
    }
L_08A54B5C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27340)));
        goto L_08A54BC8;
    }
    goto L_08A54B6C;
L_08A54B6C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A54BA4;
      }
      goto L_08A54B7C;
    }
L_08A54B7C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A54BA4;
      }
      goto L_08A54B84;
    }
L_08A54B84:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A54BA4;
      }
      goto L_08A54B8C;
    }
L_08A54B8C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A54BA4;
      }
      goto L_08A54B94;
    }
L_08A54B94:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A54BA4;
      }
      goto L_08A54B9C;
    }
L_08A54B9C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54BAC;
      }
      goto L_08A54BA4;
    }
L_08A54BA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54BAC;
      }
      goto L_08A54BAC;
    }
L_08A54BAC:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27340)));
        goto L_08A54BC8;
    }
    goto L_08A54BB4;
L_08A54BB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27340)));
        goto L_08A54BC8;
    }
    goto L_08A54BC0;
L_08A54BC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54C18;
      }
      goto L_08A54BC8;
    }
L_08A54BC8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[31] = (0x08A54BE4u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08A5483C;
L_08A54BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[14]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[20] / ctx.fpr[13];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[22] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_08A54AC8;
      }
      goto L_08A54C18;
    }
L_08A54C18:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_08A54C50:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A54C74;
      }
      goto L_08A54C64;
    }
L_08A54C64:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A54C64;
      }
      goto L_08A54C74;
    }
L_08A54C74:
    ctx.gpr[4] = (0u | 126u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A54CAC;
      }
      goto L_08A54C80;
    }
L_08A54C80:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 78u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 110u);
      if (branch_taken) {
          goto L_08A54C9C;
      }
      goto L_08A54C94;
    }
L_08A54C94:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A54CA4;
      }
      goto L_08A54C9C;
    }
L_08A54C9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54CB0;
      }
      goto L_08A54CA4;
    }
L_08A54CA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54CB0;
      }
      goto L_08A54CAC;
    }
L_08A54CAC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A54CB0;
L_08A54CB0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54CB8:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 126u);
    ctx.gpr[11] = (0u | 32u);
    ctx.gpr[10] = (0u | 33u);
    ctx.gpr[9] = (0u | 63u);
    ctx.gpr[8] = (0u | 46u);
    ctx.gpr[7] = (0u | 44u);
    ctx.gpr[6] = (0u | 58u);
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A54CE0;
L_08A54CE0:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A54D30;
      }
      goto L_08A54CE8;
    }
L_08A54CE8:
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[12] = (ctx.gpr[12] & 65535u);
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08A54D20;
      }
      goto L_08A54CF8;
    }
L_08A54CF8:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A54D20;
      }
      goto L_08A54D00;
    }
L_08A54D00:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A54D20;
      }
      goto L_08A54D08;
    }
L_08A54D08:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A54D20;
      }
      goto L_08A54D10;
    }
L_08A54D10:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A54D20;
      }
      goto L_08A54D18;
    }
L_08A54D18:
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[5];
    ctx.gpr[12] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54D28;
      }
      goto L_08A54D20;
    }
L_08A54D20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54D28;
      }
      goto L_08A54D28;
    }
L_08A54D28:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54DB0;
      }
      goto L_08A54D30;
    }
L_08A54D30:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54DB0;
      }
      goto L_08A54D38;
    }
L_08A54D38:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A54DB8;
      }
      goto L_08A54D40;
    }
L_08A54D40:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A54D5C;
      }
      goto L_08A54D50;
    }
L_08A54D50:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A54D50;
      }
      goto L_08A54D5C;
    }
L_08A54D5C:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A54DB8;
      }
      goto L_08A54D68;
    }
L_08A54D68:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[3] = (ctx.gpr[3] & 65535u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08A54DA0;
      }
      goto L_08A54D78;
    }
L_08A54D78:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A54DA0;
      }
      goto L_08A54D80;
    }
L_08A54D80:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A54DA0;
      }
      goto L_08A54D88;
    }
L_08A54D88:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A54DA0;
      }
      goto L_08A54D90;
    }
L_08A54D90:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A54DA0;
      }
      goto L_08A54D98;
    }
L_08A54D98:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    ctx.gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54DA8;
      }
      goto L_08A54DA0;
    }
L_08A54DA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54DA8;
      }
      goto L_08A54DA8;
    }
L_08A54DA8:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54DB8;
      }
      goto L_08A54DB0;
    }
L_08A54DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54DC4;
      }
      goto L_08A54DB8;
    }
L_08A54DB8:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A54CE0;
      }
      goto L_08A54DC4;
    }
L_08A54DC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54DCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A54DDCu);
    // nop
    goto L_08A5619C;
L_08A54DDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54DE8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54DF8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54E0C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54E1C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54E30:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-4760), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4760));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A54E94;
      }
      goto L_08A54E74;
    }
L_08A54E74:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A54E94;
L_08A54E94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54E9C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54EB8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54ECC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54EE8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54EF8:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54F14:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54F2C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (17392u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A54F48;
      }
      goto L_08A54F44;
    }
L_08A54F44:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A54F48;
L_08A54F48:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A54F5C;
      }
      goto L_08A54F58;
    }
L_08A54F58:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A54F5C;
L_08A54F5C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54F6C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (17392u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A54F88;
      }
      goto L_08A54F84;
    }
L_08A54F84:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A54F88;
L_08A54F88:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A54F9C;
      }
      goto L_08A54F98;
    }
L_08A54F98:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A54F9C;
L_08A54F9C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54FAC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54FBC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54FD0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54FE0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4760));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5500C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55020:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55030:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55044:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55054:
    ctx.gpr[5] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
      if (branch_taken) {
          goto L_08A5507C;
      }
      goto L_08A5506C;
    }
L_08A5506C:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A55084;
      }
      goto L_08A5507C;
    }
L_08A5507C:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(0u));
    goto L_08A55084;
L_08A55084:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5508C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5509C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A550AC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A55110;
      }
      goto L_08A550F0;
    }
L_08A550F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A55110;
L_08A55110:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55118:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A5517C;
      }
      goto L_08A5515C;
    }
L_08A5515C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(91)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A5517C;
L_08A5517C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55184:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55194:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A551A4:
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 33 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 59 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A551C0;
      }
      goto L_08A551B8;
    }
L_08A551B8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A551D4;
      }
      goto L_08A551C0;
    }
L_08A551C0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 91 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A551E4;
      }
      goto L_08A551CC;
    }
L_08A551CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A551EC;
      }
      goto L_08A551D4;
    }
L_08A551D4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A5530C;
      }
      goto L_08A551E4;
    }
L_08A551E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55200;
      }
      goto L_08A551EC;
    }
L_08A551EC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < 96 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 128 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A55210;
      }
      goto L_08A551F8;
    }
L_08A551F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55218;
      }
      goto L_08A55200;
    }
L_08A55200:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-38));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A5530C;
      }
      goto L_08A55210;
    }
L_08A55210:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55228;
      }
      goto L_08A55218;
    }
L_08A55218:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 160 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A55238;
      }
      goto L_08A55220;
    }
L_08A55220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55240;
      }
      goto L_08A55228;
    }
L_08A55228:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-43));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A5530C;
      }
      goto L_08A55238;
    }
L_08A55238:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A552CC;
      }
      goto L_08A55240;
    }
L_08A55240:
    ctx.gpr[4] = (0u | 190u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A552C4;
      }
      goto L_08A5524C;
    }
L_08A5524C:
    ctx.gpr[4] = (0u | 175u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A552BC;
      }
      goto L_08A55258;
    }
L_08A55258:
    ctx.gpr[4] = (0u | 184u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A552B4;
      }
      goto L_08A55264;
    }
L_08A55264:
    ctx.gpr[4] = (0u | 187u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A552AC;
      }
      goto L_08A55270;
    }
L_08A55270:
    ctx.gpr[4] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A552A4;
      }
      goto L_08A5527C;
    }
L_08A5527C:
    ctx.gpr[4] = (0u | 87u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5529C;
      }
      goto L_08A55288;
    }
L_08A55288:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 27 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 31 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A552DC;
      }
      goto L_08A55294;
    }
L_08A55294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A552E4;
      }
      goto L_08A5529C;
    }
L_08A5529C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5530C;
      }
      goto L_08A552A4;
    }
L_08A552A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 88u);
      if (branch_taken) {
          goto L_08A5530C;
      }
      goto L_08A552AC;
    }
L_08A552AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 89u);
      if (branch_taken) {
          goto L_08A5530C;
      }
      goto L_08A552B4;
    }
L_08A552B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 88u);
      if (branch_taken) {
          goto L_08A5530C;
      }
      goto L_08A552BC;
    }
L_08A552BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 87u);
      if (branch_taken) {
          goto L_08A5530C;
      }
      goto L_08A552C4;
    }
L_08A552C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 90u);
      if (branch_taken) {
          goto L_08A5530C;
      }
      goto L_08A552CC;
    }
L_08A552CC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-75));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A5530C;
      }
      goto L_08A552DC;
    }
L_08A552DC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55300;
      }
      goto L_08A552E4;
    }
L_08A552E4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 180 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A552F8;
      }
      goto L_08A552F0;
    }
L_08A552F0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55308;
      }
      goto L_08A552F8;
    }
L_08A552F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5530C;
      }
      goto L_08A55300;
    }
L_08A55300:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08A5530C;
      }
      goto L_08A55308;
    }
L_08A55308:
    ctx.gpr[2] = (0u | 2u);
    goto L_08A5530C;
L_08A5530C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55314:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5535Cu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    goto L_08A54DF8;
L_08A5535C:
    ctx.gpr[31] = (0x08A55364u);
    // nop
    goto L_08A55030;
L_08A55364:
    ctx.gpr[31] = (0x08A5536Cu);
    // nop
    goto L_08A54FD0;
L_08A5536C:
    ctx.gpr[31] = (0x08A55374u);
    // nop
    goto L_08A54EE8;
L_08A55374:
    ctx.gpr[31] = (0x08A5537Cu);
    // nop
    goto L_08A54F14;
L_08A5537C:
    ctx.gpr[31] = (0x08A55384u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08A54F2C;
L_08A55384:
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A553A0;
      }
      goto L_08A55390;
    }
L_08A55390:
    ctx.gpr[31] = (0x08A55398u);
    // nop
    goto L_08A54ECC;
L_08A55398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A553B4;
      }
      goto L_08A553A0;
    }
L_08A553A0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A553B4;
      }
      goto L_08A553AC;
    }
L_08A553AC:
    ctx.gpr[31] = (0x08A553B4u);
    // nop
    goto L_08A54EF8;
L_08A553B4:
    ctx.gpr[31] = (0x08A553BCu);
    // nop
    goto L_08A55020;
L_08A553BC:
    ctx.gpr[4] = (ctx.gpr[16] << 16u);
    ctx.gpr[31] = (0x08A553C8u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    goto L_08A55054;
L_08A553C8:
    ctx.gpr[31] = (0x08A553D0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A54F6C;
L_08A553D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A553E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A54E30;
L_08A553E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A553FCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08A553FCu) goto L_08A553FC;
    return;
L_08A553FC:
    ctx.gpr[31] = (0x08A55404u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A550AC;
L_08A55404:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A55420;
      }
      goto L_08A5540C;
    }
L_08A5540C:
    ctx.gpr[31] = (0x08A55414u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A5509C;
L_08A55414:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A55430;
      }
      goto L_08A55420;
    }
L_08A55420:
    ctx.gpr[31] = (0x08A55428u);
    ctx.gpr[4] = (0u | 2u);
    goto L_08A5509C;
L_08A55428:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08A55430;
L_08A55430:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A55448u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A56AD4;
L_08A55448:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55470:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5548Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6968));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892F99Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5548Cu) goto L_08A5548C;
    return;
L_08A5548C:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A554A4;
      }
      goto L_08A55498;
    }
L_08A55498:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A554B8;
      }
      goto L_08A554A4;
    }
L_08A554A4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A554B0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 603u, 0x0892FAACu>(ctx, &aot_mem) && ctx.pc == 0x08A554B0u) goto L_08A554B0;
    return;
L_08A554B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55560;
      }
      goto L_08A554B8;
    }
L_08A554B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7108)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A554D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08A554D0u) goto L_08A554D0;
    return;
L_08A554D0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7112)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A554E8u);
    ctx.gpr[6] = (16u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 538u, 0x08AD6900u>(ctx, &aot_mem) && ctx.pc == 0x08A554E8u) goto L_08A554E8;
    return;
L_08A554E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A554F8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 407u, 0x089C9CDCu>(ctx, &aot_mem) && ctx.pc == 0x08A554F8u) goto L_08A554F8;
    return;
L_08A554F8:
    ctx.gpr[31] = (0x08A55500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC30u>(ctx, &aot_mem) && ctx.pc == 0x08A55500u) goto L_08A55500;
    return;
L_08A55500:
    ctx.gpr[31] = (0x08A55508u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 619u, 0x0892FBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A55508u) goto L_08A55508;
    return;
L_08A55508:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(22896));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6976));
    ctx.gpr[31] = (0x08A55528u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6984));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 887u, 0x08AD395Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55528u) goto L_08A55528;
    return;
L_08A55528:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6992));
    ctx.gpr[31] = (0x08A55540u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7000));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 887u, 0x08AD395Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55540u) goto L_08A55540;
    return;
L_08A55540:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7008));
    ctx.gpr[31] = (0x08A55558u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7016));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 887u, 0x08AD395Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55558u) goto L_08A55558;
    return;
L_08A55558:
    ctx.gpr[31] = (0x08A55560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 626u, 0x0892FC54u>(ctx, &aot_mem) && ctx.pc == 0x08A55560u) goto L_08A55560;
    return;
L_08A55560:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55570:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-4144));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4124), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4116), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4132), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4136), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A555B0;
      }
      goto L_08A555A0;
    }
L_08A555A0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A555A0;
      }
      goto L_08A555B0;
    }
L_08A555B0:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A555E0;
      }
      goto L_08A555C0;
    }
L_08A555C0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 159u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A555E8;
      }
      goto L_08A555D0;
    }
L_08A555D0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A555C0;
      }
      goto L_08A555E0;
    }
L_08A555E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A55648;
      }
      goto L_08A555E8;
    }
L_08A555E8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(4112));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A55600u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7024));
    goto L_08A541B8;
L_08A55600:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A55610u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A54234;
L_08A55610:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A55628u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A541E4;
L_08A55628:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A55634u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A541E4;
L_08A55634:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[31] = (0x08A55640u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A541E4;
L_08A55640:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A55648;
      }
      goto L_08A55648;
    }
L_08A55648:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4128)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(4144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55668:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22896));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A55694u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(13940));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x08A55694u) goto L_08A55694;
    return;
L_08A55694:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A556A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 209 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A55718;
      }
      goto L_08A556E0;
    }
L_08A556E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55718;
      }
      goto L_08A556E8;
    }
L_08A556E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22912));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55720;
      }
      goto L_08A55710;
    }
L_08A55710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56170;
      }
      goto L_08A55718;
    }
L_08A55718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56170;
      }
      goto L_08A55720;
    }
L_08A55720:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[30] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (49472u << 16u);
      if (branch_taken) {
          goto L_08A56170;
      }
      goto L_08A55734;
    }
L_08A55734:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A56170;
      }
      goto L_08A55748;
    }
L_08A55748:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A56170;
      }
      goto L_08A55764;
    }
L_08A55764:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55770;
      }
      goto L_08A5576C;
    }
L_08A5576C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A55770;
L_08A55770:
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5578C;
      }
      goto L_08A55784;
    }
L_08A55784:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[8] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55794;
      }
      goto L_08A5578C;
    }
L_08A5578C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A55934;
      }
      goto L_08A55794;
    }
L_08A55794:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(22912));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(42)));
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    ctx.gpr[7] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A557B4;
      }
      goto L_08A557A8;
    }
L_08A557A8:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
        goto L_08A55838;
    }
    goto L_08A557B0;
L_08A557B0:
    ctx.gpr[7] = (2277u << 16u);
    goto L_08A557B4;
L_08A557B4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22912));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(418))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-9640));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 192 ? 1u : 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[20];
      if (branch_taken) {
          goto L_08A5582C;
      }
      goto L_08A55820;
    }
L_08A55820:
    ctx.gpr[5] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A55830;
      }
      goto L_08A5582C;
    }
L_08A5582C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08A55830;
L_08A55830:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08A55934;
      }
      goto L_08A55838;
    }
L_08A55838:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 63u);
      if (branch_taken) {
          goto L_08A55874;
      }
      goto L_08A5584C;
    }
L_08A5584C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 46u);
      if (branch_taken) {
          goto L_08A55874;
      }
      goto L_08A55854;
    }
L_08A55854:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 44u);
      if (branch_taken) {
          goto L_08A55874;
      }
      goto L_08A5585C;
    }
L_08A5585C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 58u);
      if (branch_taken) {
          goto L_08A55874;
      }
      goto L_08A55864;
    }
L_08A55864:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 59u);
      if (branch_taken) {
          goto L_08A55874;
      }
      goto L_08A5586C;
    }
L_08A5586C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5587C;
      }
      goto L_08A55874;
    }
L_08A55874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5587C;
      }
      goto L_08A5587C;
    }
L_08A5587C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A558E8;
      }
      goto L_08A55884;
    }
L_08A55884:
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22912));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[7] = (16332u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.gpr[8] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9640));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08A55934;
      }
      goto L_08A558E8;
    }
L_08A558E8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22912));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9640));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[20] = ctx.fpr[13] + ctx.fpr[20];
    goto L_08A55934;
L_08A55934:
    ctx.gpr[5] = (15616u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22912));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08A55D04;
      }
      goto L_08A55950;
    }
L_08A55950:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22912));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55D04;
      }
      goto L_08A55964;
    }
L_08A55964:
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55980;
      }
      goto L_08A55978;
    }
L_08A55978:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[8] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55988;
      }
      goto L_08A55980;
    }
L_08A55980:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A55B28;
      }
      goto L_08A55988;
    }
L_08A55988:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(22912));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(42)));
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    ctx.gpr[7] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A559A8;
      }
      goto L_08A5599C;
    }
L_08A5599C:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
        goto L_08A55A2C;
    }
    goto L_08A559A4;
L_08A559A4:
    ctx.gpr[7] = (2277u << 16u);
    goto L_08A559A8;
L_08A559A8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22912));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(418))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-9640));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 192 ? 1u : 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A55A20;
      }
      goto L_08A55A14;
    }
L_08A55A14:
    ctx.gpr[5] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A55A24;
      }
      goto L_08A55A20;
    }
L_08A55A20:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    goto L_08A55A24;
L_08A55A24:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08A55B28;
      }
      goto L_08A55A2C;
    }
L_08A55A2C:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 63u);
      if (branch_taken) {
          goto L_08A55A68;
      }
      goto L_08A55A40;
    }
L_08A55A40:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 46u);
      if (branch_taken) {
          goto L_08A55A68;
      }
      goto L_08A55A48;
    }
L_08A55A48:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 44u);
      if (branch_taken) {
          goto L_08A55A68;
      }
      goto L_08A55A50;
    }
L_08A55A50:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 58u);
      if (branch_taken) {
          goto L_08A55A68;
      }
      goto L_08A55A58;
    }
L_08A55A58:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 59u);
      if (branch_taken) {
          goto L_08A55A68;
      }
      goto L_08A55A60;
    }
L_08A55A60:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55A70;
      }
      goto L_08A55A68;
    }
L_08A55A68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A55A70;
      }
      goto L_08A55A70;
    }
L_08A55A70:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55ADC;
      }
      goto L_08A55A78;
    }
L_08A55A78:
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22912));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[7] = (16332u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.gpr[8] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9640));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08A55B28;
      }
      goto L_08A55ADC;
    }
L_08A55ADC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22912));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9640));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    goto L_08A55B28;
L_08A55B28:
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A55B44;
      }
      goto L_08A55B3C;
    }
L_08A55B3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[8] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55B4C;
      }
      goto L_08A55B44;
    }
L_08A55B44:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A55CEC;
      }
      goto L_08A55B4C;
    }
L_08A55B4C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(22912));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(42)));
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    ctx.gpr[7] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55B6C;
      }
      goto L_08A55B60;
    }
L_08A55B60:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
        goto L_08A55BF0;
    }
    goto L_08A55B68;
L_08A55B68:
    ctx.gpr[7] = (2277u << 16u);
    goto L_08A55B6C;
L_08A55B6C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22912));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(418))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-9640));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 192 ? 1u : 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
      if (branch_taken) {
          goto L_08A55BE4;
      }
      goto L_08A55BD8;
    }
L_08A55BD8:
    ctx.gpr[5] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A55BE8;
      }
      goto L_08A55BE4;
    }
L_08A55BE4:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    goto L_08A55BE8;
L_08A55BE8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A55CEC;
      }
      goto L_08A55BF0;
    }
L_08A55BF0:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 63u);
      if (branch_taken) {
          goto L_08A55C2C;
      }
      goto L_08A55C04;
    }
L_08A55C04:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 46u);
      if (branch_taken) {
          goto L_08A55C2C;
      }
      goto L_08A55C0C;
    }
L_08A55C0C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 44u);
      if (branch_taken) {
          goto L_08A55C2C;
      }
      goto L_08A55C14;
    }
L_08A55C14:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 58u);
      if (branch_taken) {
          goto L_08A55C2C;
      }
      goto L_08A55C1C;
    }
L_08A55C1C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 59u);
      if (branch_taken) {
          goto L_08A55C2C;
      }
      goto L_08A55C24;
    }
L_08A55C24:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55C34;
      }
      goto L_08A55C2C;
    }
L_08A55C2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A55C34;
      }
      goto L_08A55C34;
    }
L_08A55C34:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55CA0;
      }
      goto L_08A55C3C;
    }
L_08A55C3C:
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22912));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[7] = (16332u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.gpr[8] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9640));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A55CEC;
      }
      goto L_08A55CA0;
    }
L_08A55CA0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22912));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9640));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    goto L_08A55CEC;
L_08A55CEC:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22912));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_08A55D04;
L_08A55D04:
    ctx.gpr[5] = (ctx.gpr[16] & 15u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (15744u << 16u);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 4u));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
      if (branch_taken) {
          goto L_08A55D38;
      }
      goto L_08A55D2C;
    }
L_08A55D2C:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A560D4;
      }
      goto L_08A55D38;
    }
L_08A55D38:
    ctx.gpr[31] = (0x08A55D40u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A55D40u) goto L_08A55D40;
    return;
L_08A55D40:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7104)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A55D58u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 481u, 0x08AF656Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55D58u) goto L_08A55D58;
    return;
L_08A55D58:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A55D64u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08A55D64u) goto L_08A55D64;
    return;
L_08A55D64:
    ctx.gpr[4] = (16245u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5603C;
      }
      goto L_08A55D78;
    }
L_08A55D78:
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22912));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5603C;
      }
      goto L_08A55D98;
    }
L_08A55D98:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 192 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55FAC;
      }
      goto L_08A55DA4;
    }
L_08A55DA4:
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22912));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16204u << 16u);
      if (branch_taken) {
          goto L_08A55E00;
      }
      goto L_08A55DD0;
    }
L_08A55DD0:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22912));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55E9C;
      }
      goto L_08A55DFC;
    }
L_08A55DFC:
    ctx.gpr[4] = (16204u << 16u);
    goto L_08A55E00;
L_08A55E00:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22912));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (16091u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 8914u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[31] = (0x08A55E48u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A55E48u) goto L_08A55E48;
    return;
L_08A55E48:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A55E58u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A55E58u) goto L_08A55E58;
    return;
L_08A55E58:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7092)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7096)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A55E70u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08A55E70u) goto L_08A55E70;
    return;
L_08A55E70:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A55E84u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x08A55E84u) goto L_08A55E84;
    return;
L_08A55E84:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A55E90u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08A55E90u) goto L_08A55E90;
    return;
L_08A55E90:
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08A55F0C;
      }
      goto L_08A55E9C;
    }
L_08A55E9C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22912));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55EF4;
      }
      goto L_08A55EC8;
    }
L_08A55EC8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22912));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A55F0C;
      }
      goto L_08A55EF4;
    }
L_08A55EF4:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22912));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08A55F0C;
L_08A55F0C:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16128u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[14] = ctx.fpr[30] + ctx.fpr[15];
    ctx.gpr[31] = (0x08A55F54u);
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08A55F54u) goto L_08A55F54;
    return;
L_08A55F54:
    ctx.gpr[4] = (15776u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (15488u << 16u);
    ctx.fpr[17] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[26] + ctx.fpr[14];
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(22912));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A55FA4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 867u, 0x08AD3788u>(ctx, &aot_mem) && ctx.pc == 0x08A55FA4u) goto L_08A55FA4;
    return;
L_08A55FA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56170;
      }
      goto L_08A55FAC;
    }
L_08A55FAC:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(22912));
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16928u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16128u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[14] = ctx.fpr[30] + ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[22] + ctx.fpr[15];
    ctx.gpr[31] = (0x08A55FF8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08A55FF8u) goto L_08A55FF8;
    return;
L_08A55FF8:
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (15776u << 16u);
    ctx.fpr[14] = ctx.fpr[26] + ctx.fpr[14];
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = ctx.fpr[24] + ctx.fpr[17];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A56034u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 867u, 0x08AD3788u>(ctx, &aot_mem) && ctx.pc == 0x08A56034u) goto L_08A56034;
    return;
L_08A56034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56170;
      }
      goto L_08A5603C;
    }
L_08A5603C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A56170;
      }
      goto L_08A56044;
    }
L_08A56044:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(22912));
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16928u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16128u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[14] = ctx.fpr[30] + ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[22] + ctx.fpr[15];
    ctx.gpr[31] = (0x08A56090u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08A56090u) goto L_08A56090;
    return;
L_08A56090:
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (15776u << 16u);
    ctx.fpr[14] = ctx.fpr[26] + ctx.fpr[14];
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = ctx.fpr[24] + ctx.fpr[17];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A560CCu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 867u, 0x08AD3788u>(ctx, &aot_mem) && ctx.pc == 0x08A560CCu) goto L_08A560CC;
    return;
L_08A560CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56170;
      }
      goto L_08A560D4;
    }
L_08A560D4:
    ctx.gpr[4] = (16588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A56170;
      }
      goto L_08A560EC;
    }
L_08A560EC:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(22912));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = ctx.fpr[30] + ctx.fpr[14];
    ctx.gpr[31] = (0x08A56130u);
    ctx.fpr[15] = ctx.fpr[22] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08A56130u) goto L_08A56130;
    return;
L_08A56130:
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (15904u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.fpr[17] = ctx.fpr[24] + ctx.fpr[17];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = ctx.fpr[26] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A56170u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 867u, 0x08AD3788u>(ctx, &aot_mem) && ctx.pc == 0x08A56170u) goto L_08A56170;
    return;
L_08A56170:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5619C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(297)));
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-25328));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A56320;
      }
      goto L_08A561FC;
    }
L_08A561FC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-24304)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A56318;
      }
      goto L_08A56210;
    }
L_08A56210:
    ctx.gpr[22] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[22] + static_cast<std::uint32_t>(22912));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22896));
    ctx.gpr[31] = (0x08A56234u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 930u, 0x08AD3D90u>(ctx, &aot_mem) && ctx.pc == 0x08A56234u) goto L_08A56234;
    return;
L_08A56234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(22912), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(21)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(41)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(42)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(44))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-24304)));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A56328;
      }
      goto L_08A56310;
    }
L_08A56310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56630;
      }
      goto L_08A56318;
    }
L_08A56318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5663C;
      }
      goto L_08A56320;
    }
L_08A56320:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-24304), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A5663C;
      }
      goto L_08A56328;
    }
L_08A56328:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (0u | 201u);
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-4760));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[21] = (2229u << 16u);
    goto L_08A56350;
L_08A56350:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56454;
      }
      goto L_08A5635C;
    }
L_08A5635C:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] & 3u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56378;
      }
      goto L_08A56370;
    }
L_08A56370:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_08A56378;
L_08A56378:
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A5638C;
    }
    goto L_08A56384;
L_08A56384:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56630;
      }
      goto L_08A5638C;
    }
L_08A5638C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(22912), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(41)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(42)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(44))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(60));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A56454;
L_08A56454:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 126u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A564FC;
      }
      goto L_08A56464;
    }
L_08A56464:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08A56478u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 31u, 0x08A58308u>(ctx, &aot_mem) && ctx.pc == 0x08A56478u) goto L_08A56478;
    return;
L_08A56478:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A564C8;
      }
      goto L_08A56484;
    }
L_08A56484:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(301) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08A564B0;
      }
      goto L_08A564A0;
    }
L_08A564A0:
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    goto L_08A564B0;
L_08A564B0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A564C4;
      }
      goto L_08A564B8;
    }
L_08A564B8:
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A564C8;
      }
      goto L_08A564C4;
    }
L_08A564C4:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_08A564C8;
L_08A564C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A564FC;
      }
      goto L_08A564DC;
    }
L_08A564DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A564FC;
L_08A564FC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 200u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A56518;
      }
      goto L_08A56514;
    }
L_08A56514:
    ctx.gpr[19] = (0u | 94u);
    goto L_08A56518;
L_08A56518:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A56524;
      }
      goto L_08A56520;
    }
L_08A56520:
    ctx.gpr[19] = (0u | 62u);
    goto L_08A56524;
L_08A56524:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(41)));
    ctx.gpr[18] = (ctx.gpr[19] << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
      if (branch_taken) {
          goto L_08A56548;
      }
      goto L_08A56534;
    }
L_08A56534:
    ctx.gpr[31] = (0x08A5653Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A551A4;
L_08A5653C:
    ctx.gpr[19] = (ctx.gpr[2] & 65535u);
    ctx.gpr[18] = (ctx.gpr[19] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    goto L_08A56548;
L_08A56548:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A56570;
      }
      goto L_08A5655C;
    }
L_08A5655C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[22];
    goto L_08A56570;
L_08A56570:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A56580u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A556A0;
L_08A56580:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A565C0;
      }
      goto L_08A5658C;
    }
L_08A5658C:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5659Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A556A0;
L_08A5659C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[28];
    ctx.gpr[31] = (0x08A565B0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A556A0;
L_08A565B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A565CC;
      }
      goto L_08A565C0;
    }
L_08A565C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_08A565CC;
L_08A565CC:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[30];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A565E0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A54664;
L_08A565E0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27340)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[30];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = ctx.fpr[30] / ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-24304)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[19] != 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08A56620;
      }
      goto L_08A56618;
    }
L_08A56618:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08A56620;
L_08A56620:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56350;
      }
      goto L_08A56630;
    }
L_08A56630:
    ctx.gpr[31] = (0x08A56638u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 873u, 0x08AD3870u>(ctx, &aot_mem) && ctx.pc == 0x08A56638u) goto L_08A56638;
    return;
L_08A56638:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-24304), ctx.gpr[16]);
    goto L_08A5663C;
L_08A5663C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_08A56684:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    ctx.gpr[21] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(22912));
    ctx.gpr[20] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[19] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A56700;
      }
      goto L_08A566F0;
    }
L_08A566F0:
    ctx.gpr[31] = (0x08A566F8u);
    // nop
    goto L_08A5619C;
L_08A566F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A56700;
L_08A56700:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(91)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(64))))));
        goto L_08A56788;
    }
    goto L_08A5670C;
L_08A5670C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4760)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-4760), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56760u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08A56684;
L_08A56760:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-4760), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A568D0;
      }
      goto L_08A56788;
    }
L_08A56788:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A568D4;
      }
      goto L_08A567A4;
    }
L_08A567A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4760)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(69)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-4760), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(70)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(71)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.gpr[6] = (2229u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[17]) || std::isnan(ctx.fpr[16])) && ctx.fpr[17] == ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (17392u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A56880;
      }
      goto L_08A56824;
    }
L_08A56824:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[26];
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[26];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A56864u);
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[13];
    goto L_08A56684;
L_08A56864:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A568A8;
      }
      goto L_08A56880;
    }
L_08A56880:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A568A8u);
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[13];
    goto L_08A56684;
L_08A568A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-4760), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    goto L_08A568D0;
L_08A568D0:
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[16]);
    goto L_08A568D4;
L_08A568D4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25328));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24304)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1024));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A5691C;
    }
    goto L_08A5690C;
L_08A5690C:
    ctx.gpr[31] = (0x08A56914u);
    // nop
    goto L_08A5619C;
L_08A56914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24304)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A5691C;
L_08A5691C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-4760)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(58)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(29)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-24304), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A56A74;
      }
      goto L_08A569B4;
    }
L_08A569B4:
    ctx.gpr[21] = (0u | 126u);
    ctx.gpr[23] = (0u | 255u);
    ctx.gpr[22] = (2230u << 16u);
    goto L_08A569C0;
L_08A569C0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A56A50;
      }
      goto L_08A569CC;
    }
L_08A569CC:
    ctx.gpr[31] = (0x08A569D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 3u, 0x08A58074u>(ctx, &aot_mem) && ctx.pc == 0x08A569D4u) goto L_08A569D4;
    return;
L_08A569D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A56A00;
      }
      goto L_08A569E0;
    }
L_08A569E0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24304)));
    goto L_08A569E4;
L_08A569E4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A569E4;
      }
      goto L_08A569F8;
    }
L_08A569F8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-24304), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    goto L_08A56A00;
L_08A56A00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56A48;
      }
      goto L_08A56A0C;
    }
L_08A56A0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(301) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08A56A34;
      }
      goto L_08A56A24;
    }
L_08A56A24:
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    goto L_08A56A34;
L_08A56A34:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56A44;
      }
      goto L_08A56A3C;
    }
L_08A56A3C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[23]));
      if (branch_taken) {
          goto L_08A56A48;
      }
      goto L_08A56A44;
    }
L_08A56A44:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_08A56A48;
L_08A56A48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56A6C;
      }
      goto L_08A56A50;
    }
L_08A56A50:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24304)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-24304), ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[20] = (ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    goto L_08A56A6C;
L_08A56A6C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A569C0;
      }
      goto L_08A56A74;
    }
L_08A56A74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24304)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-24304), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56A98;
      }
      goto L_08A56A90;
    }
L_08A56A90:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-24304), ctx.gpr[4]);
    goto L_08A56A98;
L_08A56A98:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56AD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A56B1Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 132u, 0x089FD348u>(ctx, &aot_mem) && ctx.pc == 0x08A56B1Cu) goto L_08A56B1C;
    return;
L_08A56B1C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08A56B30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A54DE8;
L_08A56B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A56B50;
      }
      goto L_08A56B44;
    }
L_08A56B44:
    ctx.gpr[31] = (0x08A56B4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A55570;
L_08A56B4C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08A56B50;
L_08A56B50:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A56BF8;
      }
      goto L_08A56B68;
    }
L_08A56B68:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-4760)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22912));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A56B9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A57420;
L_08A56B9C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A56BB0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A57954;
L_08A56BB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A56BE0;
      }
      goto L_08A56BC0;
    }
L_08A56BC0:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A56BD8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x08A56BD8u) goto L_08A56BD8;
    return;
L_08A56BD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56BF8;
      }
      goto L_08A56BE0;
    }
L_08A56BE0:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A56BF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x08A56BF8u) goto L_08A56BF8;
    return;
L_08A56BF8:
    ctx.gpr[5] = (2233u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A56C34;
      }
      goto L_08A56C1C;
    }
L_08A56C1C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A56C3C;
      }
      goto L_08A56C34;
    }
L_08A56C34:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A56C40;
      }
      goto L_08A56C3C;
    }
L_08A56C3C:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A56C40;
L_08A56C40:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56C54;
      }
      goto L_08A56C48;
    }
L_08A56C48:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A56C54;
L_08A56C54:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5904), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A573CC;
      }
      goto L_08A56C68;
    }
L_08A56C68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56C74u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A54A58;
L_08A56C74:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A56C9C;
      }
      goto L_08A56C8C;
    }
L_08A56C8C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A56CD4;
      }
      goto L_08A56C9C;
    }
L_08A56C9C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A56CC8;
      }
      goto L_08A56CB4;
    }
L_08A56CB4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08A56CD4;
      }
      goto L_08A56CC8;
    }
L_08A56CC8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    goto L_08A56CD4;
L_08A56CD4:
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A56CF4;
      }
      goto L_08A56CE8;
    }
L_08A56CE8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56D00;
      }
      goto L_08A56CF0;
    }
L_08A56CF0:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08A56CF4;
L_08A56CF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-5904))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57068;
      }
      goto L_08A56D00;
    }
L_08A56D00:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5904), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56D20;
    }
L_08A56D20:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56D30;
    }
L_08A56D30:
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = ctx.fpr[13] - ctx.fpr[24];
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56D58;
      }
      goto L_08A56D54;
    }
L_08A56D54:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    goto L_08A56D58;
L_08A56D58:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56F90;
      }
      goto L_08A56D6C;
    }
L_08A56D6C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56D88;
      }
      goto L_08A56D80;
    }
L_08A56D80:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A56FA0;
      }
      goto L_08A56D88;
    }
L_08A56D88:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56DA0;
      }
      goto L_08A56D98;
    }
L_08A56D98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A56DA8;
      }
      goto L_08A56DA0;
    }
L_08A56DA0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A56F84;
      }
      goto L_08A56DA8;
    }
L_08A56DA8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(58)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A56DCC;
      }
      goto L_08A56DB8;
    }
L_08A56DB8:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x08A56DC4u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    goto L_08A551A4;
L_08A56DC4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[6] = (2233u << 16u);
    goto L_08A56DCC;
L_08A56DCC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(29)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A56E74;
      }
      goto L_08A56DE0;
    }
L_08A56DE0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(418))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9640));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 192 ? 1u : 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A56E58;
      }
      goto L_08A56E4C;
    }
L_08A56E4C:
    ctx.gpr[4] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A56E5C;
      }
      goto L_08A56E58;
    }
L_08A56E58:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    goto L_08A56E5C;
L_08A56E5C:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A56F84;
      }
      goto L_08A56E74;
    }
L_08A56E74:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 63u);
      if (branch_taken) {
          goto L_08A56EB4;
      }
      goto L_08A56E8C;
    }
L_08A56E8C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_08A56EB4;
      }
      goto L_08A56E94;
    }
L_08A56E94:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 44u);
      if (branch_taken) {
          goto L_08A56EB4;
      }
      goto L_08A56E9C;
    }
L_08A56E9C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_08A56EB4;
      }
      goto L_08A56EA4;
    }
L_08A56EA4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 59u);
      if (branch_taken) {
          goto L_08A56EB4;
      }
      goto L_08A56EAC;
    }
L_08A56EAC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56EBC;
      }
      goto L_08A56EB4;
    }
L_08A56EB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A56EBC;
      }
      goto L_08A56EBC;
    }
L_08A56EBC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A56F30;
      }
      goto L_08A56EC4;
    }
L_08A56EC4:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9640));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A56F84;
      }
      goto L_08A56F30;
    }
L_08A56F30:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9640));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A56F84;
L_08A56F84:
    ctx.fpr[26] = ctx.fpr[20] - ctx.fpr[26];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08A56FA0;
      }
      goto L_08A56F90;
    }
L_08A56F90:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.fpr[26] = ctx.fpr[20] - ctx.fpr[26];
    goto L_08A56FA0;
L_08A56FA0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A56FC4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A56684;
L_08A56FC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x08A56FD4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    goto L_08A55118;
L_08A56FD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A56FFC;
      }
      goto L_08A56FE4;
    }
L_08A56FE4:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A57004;
      }
      goto L_08A56FFC;
    }
L_08A56FFC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A57008;
      }
      goto L_08A57004;
    }
L_08A57004:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A57008;
L_08A57008:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (16896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16128u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[22];
      if (branch_taken) {
          goto L_08A57054;
      }
      goto L_08A57048;
    }
L_08A57048:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A57054;
L_08A57054:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A573C0;
      }
      goto L_08A57068;
    }
L_08A57068:
    ctx.gpr[31] = (0x08A57070u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A54C50;
L_08A57070:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-5904), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A57084u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A54CB8;
L_08A57084:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A570B0;
      }
      goto L_08A57094;
    }
L_08A57094:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57160;
      }
      goto L_08A570A0;
    }
L_08A570A0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57160;
      }
      goto L_08A570B0;
    }
L_08A570B0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A570D0;
      }
      goto L_08A570BC;
    }
L_08A570BC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A570D0;
      }
      goto L_08A570CC;
    }
L_08A570CC:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08A570D0;
L_08A570D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A570DCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A54A58;
L_08A570DC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A57118;
      }
      goto L_08A570F4;
    }
L_08A570F4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57110;
      }
      goto L_08A57108;
    }
L_08A57108:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A57128;
      }
      goto L_08A57110;
    }
L_08A57110:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[26];
      if (branch_taken) {
          goto L_08A57128;
      }
      goto L_08A57118;
    }
L_08A57118:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    goto L_08A57128;
L_08A57128:
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A57148u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A56684;
L_08A57148:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x08A57158u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    goto L_08A55118;
L_08A57158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A573C0;
      }
      goto L_08A57160;
    }
L_08A57160:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57174;
      }
      goto L_08A57168;
    }
L_08A57168:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    goto L_08A57174;
L_08A57174:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A57184u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A54A58;
L_08A57184:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[0];
    ctx.gpr[31] = (0x08A57194u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A54C50;
L_08A57194:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-5904), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-5904))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A573B8;
      }
      goto L_08A571AC;
    }
L_08A571AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A571D0;
      }
      goto L_08A571C8;
    }
L_08A571C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A571D8;
      }
      goto L_08A571D0;
    }
L_08A571D0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A573B4;
      }
      goto L_08A571D8;
    }
L_08A571D8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(58)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A571FC;
      }
      goto L_08A571E8;
    }
L_08A571E8:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x08A571F4u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    goto L_08A551A4;
L_08A571F4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[6] = (2233u << 16u);
    goto L_08A571FC;
L_08A571FC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(29)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A572A4;
      }
      goto L_08A57210;
    }
L_08A57210:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(418))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9640));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 192 ? 1u : 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A57288;
      }
      goto L_08A5727C;
    }
L_08A5727C:
    ctx.gpr[4] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5728C;
      }
      goto L_08A57288;
    }
L_08A57288:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    goto L_08A5728C;
L_08A5728C:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A573B4;
      }
      goto L_08A572A4;
    }
L_08A572A4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 63u);
      if (branch_taken) {
          goto L_08A572E4;
      }
      goto L_08A572BC;
    }
L_08A572BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_08A572E4;
      }
      goto L_08A572C4;
    }
L_08A572C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 44u);
      if (branch_taken) {
          goto L_08A572E4;
      }
      goto L_08A572CC;
    }
L_08A572CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_08A572E4;
      }
      goto L_08A572D4;
    }
L_08A572D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 59u);
      if (branch_taken) {
          goto L_08A572E4;
      }
      goto L_08A572DC;
    }
L_08A572DC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A572EC;
      }
      goto L_08A572E4;
    }
L_08A572E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A572EC;
      }
      goto L_08A572EC;
    }
L_08A572EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57360;
      }
      goto L_08A572F4;
    }
L_08A572F4:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9640));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A573B4;
      }
      goto L_08A57360;
    }
L_08A57360:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9640));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A573B4;
L_08A573B4:
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[12];
    goto L_08A573B8;
L_08A573B8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    goto L_08A573C0;
L_08A573C0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56C68;
      }
      goto L_08A573CC;
    }
L_08A573CC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A573E4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08A573E4u) goto L_08A573E4;
    return;
L_08A573E4:
    ctx.gpr[31] = (0x08A573ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A55118;
L_08A573EC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57420:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A57478;
      }
      goto L_08A57460;
    }
L_08A57460:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A57480;
      }
      goto L_08A57478;
    }
L_08A57478:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A57484;
      }
      goto L_08A57480;
    }
L_08A57480:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A57484;
L_08A57484:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57930;
      }
      goto L_08A57490;
    }
L_08A57490:
    ctx.gpr[31] = (0x08A57498u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A54C50;
L_08A57498:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57574;
      }
      goto L_08A574A0;
    }
L_08A574A0:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
      if (branch_taken) {
          goto L_08A574CC;
      }
      goto L_08A574B8;
    }
L_08A574B8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A574B8;
      }
      goto L_08A574CC;
    }
L_08A574CC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08A57500;
      }
      goto L_08A574E4;
    }
L_08A574E4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57500;
      }
      goto L_08A574F8;
    }
L_08A574F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57500;
      }
      goto L_08A57500;
    }
L_08A57500:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57538;
      }
      goto L_08A57514;
    }
L_08A57514:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57530;
      }
      goto L_08A57528;
    }
L_08A57528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57538;
      }
      goto L_08A57530;
    }
L_08A57530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57538;
      }
      goto L_08A57538;
    }
L_08A57538:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57564;
      }
      goto L_08A57550;
    }
L_08A57550:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5756C;
      }
      goto L_08A57564;
    }
L_08A57564:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A57570;
      }
      goto L_08A5756C;
    }
L_08A5756C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A57570;
L_08A57570:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A57574;
L_08A57574:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A57580u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A54A58;
L_08A57580:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A575A4;
      }
      goto L_08A57594;
    }
L_08A57594:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08A575B0;
      }
      goto L_08A575A4;
    }
L_08A575A4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    goto L_08A575B0;
L_08A575B0:
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57680;
      }
      goto L_08A575C4;
    }
L_08A575C4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57680;
      }
      goto L_08A575CC;
    }
L_08A575CC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A575FC;
      }
      goto L_08A575E4;
    }
L_08A575E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A575FC;
      }
      goto L_08A575F4;
    }
L_08A575F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A575FC;
      }
      goto L_08A575FC;
    }
L_08A575FC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57634;
      }
      goto L_08A57610;
    }
L_08A57610:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5762C;
      }
      goto L_08A57624;
    }
L_08A57624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57634;
      }
      goto L_08A5762C;
    }
L_08A5762C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57634;
      }
      goto L_08A57634;
    }
L_08A57634:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57660;
      }
      goto L_08A5764C;
    }
L_08A5764C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A57668;
      }
      goto L_08A57660;
    }
L_08A57660:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A5766C;
      }
      goto L_08A57668;
    }
L_08A57668:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A5766C;
L_08A5766C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A57924;
      }
      goto L_08A57680;
    }
L_08A57680:
    ctx.gpr[31] = (0x08A57688u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A54CB8;
L_08A57688:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A576F0;
      }
      goto L_08A57698;
    }
L_08A57698:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A576A4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A54A58;
L_08A576A4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A576E0;
      }
      goto L_08A576BC;
    }
L_08A576BC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A576D8;
      }
      goto L_08A576D0;
    }
L_08A576D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A576E0;
      }
      goto L_08A576D8;
    }
L_08A576D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A576E0;
      }
      goto L_08A576E0;
    }
L_08A576E0:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
      if (branch_taken) {
          goto L_08A57920;
      }
      goto L_08A576F0;
    }
L_08A576F0:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[20])) && ctx.fpr[22] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57700;
      }
      goto L_08A57700;
    }
L_08A57700:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5770Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A54A58;
L_08A5770C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[17] = (ctx.gpr[4] & 65535u);
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08A57734;
      }
      goto L_08A5772C;
    }
L_08A5772C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A5773C;
      }
      goto L_08A57734;
    }
L_08A57734:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A57918;
      }
      goto L_08A5773C;
    }
L_08A5773C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(58)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57760;
      }
      goto L_08A5774C;
    }
L_08A5774C:
    ctx.gpr[4] = (ctx.gpr[17] << 16u);
    ctx.gpr[31] = (0x08A57758u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    goto L_08A551A4;
L_08A57758:
    ctx.gpr[17] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (2233u << 16u);
    goto L_08A57760;
L_08A57760:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A5780C;
      }
      goto L_08A57774;
    }
L_08A57774:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(418))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9640));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 192 ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A577F0;
      }
      goto L_08A577E4;
    }
L_08A577E4:
    ctx.gpr[4] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A577F4;
      }
      goto L_08A577F0;
    }
L_08A577F0:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    goto L_08A577F4;
L_08A577F4:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A57918;
      }
      goto L_08A5780C;
    }
L_08A5780C:
    ctx.gpr[17] = (ctx.gpr[4] & 65535u);
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 63u);
      if (branch_taken) {
          goto L_08A57848;
      }
      goto L_08A57820;
    }
L_08A57820:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 46u);
      if (branch_taken) {
          goto L_08A57848;
      }
      goto L_08A57828;
    }
L_08A57828:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 44u);
      if (branch_taken) {
          goto L_08A57848;
      }
      goto L_08A57830;
    }
L_08A57830:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 58u);
      if (branch_taken) {
          goto L_08A57848;
      }
      goto L_08A57838;
    }
L_08A57838:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 59u);
      if (branch_taken) {
          goto L_08A57848;
      }
      goto L_08A57840;
    }
L_08A57840:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A57850;
      }
      goto L_08A57848;
    }
L_08A57848:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A57850;
      }
      goto L_08A57850;
    }
L_08A57850:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A578C4;
      }
      goto L_08A57858;
    }
L_08A57858:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9640));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A57918;
      }
      goto L_08A578C4;
    }
L_08A578C4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9640));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A57918;
L_08A57918:
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    goto L_08A57920;
L_08A57920:
    ctx.gpr[17] = (0u | 0u);
    goto L_08A57924;
L_08A57924:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57490;
      }
      goto L_08A57930;
    }
L_08A57930:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57954:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A579B0;
      }
      goto L_08A579A8;
    }
L_08A579A8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A579B4;
      }
      goto L_08A579B0;
    }
L_08A579B0:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A579B4;
L_08A579B4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57E6C;
      }
      goto L_08A579C0;
    }
L_08A579C0:
    ctx.gpr[31] = (0x08A579C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A54C50;
L_08A579C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57AA4;
      }
      goto L_08A579D0;
    }
L_08A579D0:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
      if (branch_taken) {
          goto L_08A579FC;
      }
      goto L_08A579E8;
    }
L_08A579E8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A579E8;
      }
      goto L_08A579FC;
    }
L_08A579FC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08A57A30;
      }
      goto L_08A57A14;
    }
L_08A57A14:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57A30;
      }
      goto L_08A57A28;
    }
L_08A57A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57A30;
      }
      goto L_08A57A30;
    }
L_08A57A30:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57A68;
      }
      goto L_08A57A44;
    }
L_08A57A44:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57A60;
      }
      goto L_08A57A58;
    }
L_08A57A58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57A68;
      }
      goto L_08A57A60;
    }
L_08A57A60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57A68;
      }
      goto L_08A57A68;
    }
L_08A57A68:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57A94;
      }
      goto L_08A57A80;
    }
L_08A57A80:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A57A9C;
      }
      goto L_08A57A94;
    }
L_08A57A94:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A57AA0;
      }
      goto L_08A57A9C;
    }
L_08A57A9C:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A57AA0;
L_08A57AA0:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    goto L_08A57AA4;
L_08A57AA4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A57AB0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A54A58;
L_08A57AB0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A57AD4;
      }
      goto L_08A57AC4;
    }
L_08A57AC4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08A57AE0;
      }
      goto L_08A57AD4;
    }
L_08A57AD4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    goto L_08A57AE0;
L_08A57AE0:
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57BBC;
      }
      goto L_08A57AF4;
    }
L_08A57AF4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[12])) && ctx.fpr[24] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57BBC;
      }
      goto L_08A57B08;
    }
L_08A57B08:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57B38;
      }
      goto L_08A57B20;
    }
L_08A57B20:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57B38;
      }
      goto L_08A57B30;
    }
L_08A57B30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57B38;
      }
      goto L_08A57B38;
    }
L_08A57B38:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57B70;
      }
      goto L_08A57B4C;
    }
L_08A57B4C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57B68;
      }
      goto L_08A57B60;
    }
L_08A57B60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57B70;
      }
      goto L_08A57B68;
    }
L_08A57B68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57B70;
      }
      goto L_08A57B70;
    }
L_08A57B70:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57B9C;
      }
      goto L_08A57B88;
    }
L_08A57B88:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A57BA4;
      }
      goto L_08A57B9C;
    }
L_08A57B9C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A57BA8;
      }
      goto L_08A57BA4;
    }
L_08A57BA4:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A57BA8;
L_08A57BA8:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
      if (branch_taken) {
          goto L_08A57E60;
      }
      goto L_08A57BBC;
    }
L_08A57BBC:
    ctx.gpr[31] = (0x08A57BC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A54CB8;
L_08A57BC4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C2C;
      }
      goto L_08A57BD4;
    }
L_08A57BD4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A57BE0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A54A58;
L_08A57BE0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A57C1C;
      }
      goto L_08A57BF8;
    }
L_08A57BF8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C14;
      }
      goto L_08A57C0C;
    }
L_08A57C0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C1C;
      }
      goto L_08A57C14;
    }
L_08A57C14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C1C;
      }
      goto L_08A57C1C;
    }
L_08A57C1C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
      if (branch_taken) {
          goto L_08A57E60;
      }
      goto L_08A57C2C;
    }
L_08A57C2C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[26]) || std::isnan(ctx.fpr[20])) && ctx.fpr[26] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57C3C;
      }
      goto L_08A57C3C;
    }
L_08A57C3C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A57C48u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A54A58;
L_08A57C48:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[19] = (ctx.gpr[4] & 65535u);
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08A57C70;
      }
      goto L_08A57C68;
    }
L_08A57C68:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57C78;
      }
      goto L_08A57C70;
    }
L_08A57C70:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A57E54;
      }
      goto L_08A57C78;
    }
L_08A57C78:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(58)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57C9C;
      }
      goto L_08A57C88;
    }
L_08A57C88:
    ctx.gpr[4] = (ctx.gpr[19] << 16u);
    ctx.gpr[31] = (0x08A57C94u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    goto L_08A551A4;
L_08A57C94:
    ctx.gpr[19] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (2233u << 16u);
    goto L_08A57C9C;
L_08A57C9C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A57D48;
      }
      goto L_08A57CB0;
    }
L_08A57CB0:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(418))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9640));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 192 ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[24];
      if (branch_taken) {
          goto L_08A57D2C;
      }
      goto L_08A57D20;
    }
L_08A57D20:
    ctx.gpr[4] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A57D30;
      }
      goto L_08A57D2C;
    }
L_08A57D2C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08A57D30;
L_08A57D30:
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08A57E54;
      }
      goto L_08A57D48;
    }
L_08A57D48:
    ctx.gpr[19] = (ctx.gpr[4] & 65535u);
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 63u);
      if (branch_taken) {
          goto L_08A57D84;
      }
      goto L_08A57D5C;
    }
L_08A57D5C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 46u);
      if (branch_taken) {
          goto L_08A57D84;
      }
      goto L_08A57D64;
    }
L_08A57D64:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 44u);
      if (branch_taken) {
          goto L_08A57D84;
      }
      goto L_08A57D6C;
    }
L_08A57D6C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 58u);
      if (branch_taken) {
          goto L_08A57D84;
      }
      goto L_08A57D74;
    }
L_08A57D74:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 59u);
      if (branch_taken) {
          goto L_08A57D84;
      }
      goto L_08A57D7C;
    }
L_08A57D7C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A57D8C;
      }
      goto L_08A57D84;
    }
L_08A57D84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A57D8C;
      }
      goto L_08A57D8C;
    }
L_08A57D8C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57E00;
      }
      goto L_08A57D94;
    }
L_08A57D94:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9640));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[24] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08A57E54;
      }
      goto L_08A57E00;
    }
L_08A57E00:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9640));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9628));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08A57E54;
L_08A57E54:
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[24];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08A57E60;
L_08A57E60:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A579C0;
      }
      goto L_08A57E6C;
    }
L_08A57E6C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (16512u << 16u);
      if (branch_taken) {
          goto L_08A57FCC;
      }
      goto L_08A57E84;
    }
L_08A57E84:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57F3C;
      }
      goto L_08A57E9C;
    }
L_08A57E9C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16896u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[14] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[22] - ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A58048u>(ctx, &aot_mem); return;
      }
      goto L_08A57F3C;
    }
L_08A57F3C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[5] = (16896u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.gpr[4] = (16384u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[22] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A58048u>(ctx, &aot_mem); return;
      }
      goto L_08A57FCC;
    }
L_08A57FCC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[5] = (16896u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08A58000u; return;
}

void recomp_unit_0148(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0148_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_148(Runtime &runtime) {
    runtime.register_generated_unit(148u, 0x08A54000u, 16384u, &recomp_unit_0148, &recomp_unit_0148_entry);
    runtime.register_function(0x08A54000u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54038u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5404Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5405Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54068u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54078u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54088u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A540A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A540B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A540C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A540D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A540D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54104u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54208u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54210u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54228u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54234u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54240u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54258u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54264u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54274u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54284u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54290u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54304u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54320u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54328u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54344u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5434Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54354u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5435Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5436Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54374u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5437Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54394u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5439Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54400u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54408u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54418u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54424u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54438u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54464u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5446Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54478u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54488u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54494u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5449Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54518u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5451Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54524u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54534u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5453Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54554u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54570u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54620u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54638u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5464Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54664u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54674u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5467Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54694u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5469Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5471Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54728u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5472Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54734u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5474Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54754u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5475Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54764u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5476Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54774u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5477Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54784u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54834u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5483Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54854u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5485Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54870u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54878u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54880u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5488Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54890u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54914u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54920u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54924u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5493Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54954u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5495Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54964u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5496Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54974u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5497Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54984u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5498Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A4Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AFCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B8Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CB8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D10u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D20u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DB8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EB8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54ECCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FD0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5500Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55020u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55030u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55044u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55054u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5506Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5507Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55084u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5508Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5509Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55110u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55118u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5515Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5517Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55184u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55194u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55200u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55210u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55218u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55220u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55228u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55238u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55240u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5524Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55258u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55264u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55270u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5527Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55288u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55294u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5529Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55300u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55308u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5530Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55314u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5535Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55364u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5536Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55374u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5537Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55384u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55390u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55398u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55404u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5540Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55414u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55420u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55428u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55430u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55448u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55470u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5548Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55498u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55500u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55508u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55528u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55540u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55558u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55560u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55570u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55600u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55610u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55628u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55634u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55640u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55648u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55668u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55694u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55710u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55718u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55720u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55734u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55748u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55764u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5576Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55770u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55784u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5578Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55794u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55820u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5582Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55830u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55838u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5584Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55854u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5585Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55864u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5586Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55874u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5587Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55884u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A558E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55934u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55950u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55964u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55978u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55980u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55988u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5599Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A559A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A559A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A20u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55ADCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B4Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BD8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C34u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55CA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55CECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DD0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DFCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55EC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55EF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56034u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5603Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56044u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56090u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56130u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56170u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5619Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A561FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56210u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56234u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56310u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56318u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56320u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56328u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56350u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5635Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56370u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56378u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56384u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5638Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56454u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56464u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56478u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56484u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56514u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56518u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56520u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56524u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56534u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5653Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56548u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5655Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56570u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56580u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5658Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5659Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56618u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56620u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56630u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56638u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5663Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56684u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56700u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5670Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56760u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56788u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A567A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56824u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56864u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56880u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A568A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A568D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A568D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5690Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56914u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5691Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A34u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B4Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BD8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C34u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C8Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D20u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DB8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E4Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E8Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FFCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57004u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57008u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57048u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57054u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57068u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57070u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57084u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57094u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57108u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57110u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57118u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57128u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57148u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57158u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57160u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57168u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57174u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57184u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57194u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57210u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5727Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57288u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5728Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57360u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57420u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57460u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57478u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57480u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57484u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57490u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57498u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57500u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57514u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57528u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57530u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57538u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57550u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57564u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5756Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57570u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57574u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57580u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57594u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57610u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57624u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5762Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57634u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5764Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57660u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57668u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5766Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57680u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57688u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57698u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57700u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5770Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5772Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57734u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5773Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5774Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57758u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57760u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57774u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5780Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57820u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57828u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57830u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57838u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57840u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57848u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57850u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57858u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A578C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57918u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57920u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57924u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57930u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57954u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B20u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B4Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D20u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D8Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57FCCu, &recomp_unit_0148, "recomp_unit_0148");
}
} // namespace psprecomp
