#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0068[4092] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 9, 0, 10,
    0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0,
    0, 21, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 0,
    0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 54, 0, 0, 55, 0, 56, 0, 57, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0,
    0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 0,
    0, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 92, 0, 0, 93,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 98, 0, 99, 100, 0,
    0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 103, 0, 104, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107,
    0, 108, 109, 0, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0,
    0, 0, 118, 0, 0, 119, 0, 120, 121, 0, 0, 122, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 127,
    0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0,
    0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 149, 0, 150, 0, 0,
    0, 0, 0, 151, 0, 152, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 158, 0, 159, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174, 0, 0,
    0, 175, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0,
    184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203,
    204, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0,
    0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 223, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0,
    227, 0, 0, 228, 0, 0, 229, 0, 230, 231, 0, 232, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 239, 240,
    0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252,
    0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 257, 258, 0, 259, 0, 0, 260, 0, 0, 261, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0,
    265, 0, 266, 267, 0, 268, 0, 0, 269, 0, 0, 270, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 275, 276, 0, 277, 0, 0, 278, 0,
    0, 279, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 284, 285, 0, 286, 0, 0, 287, 0, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292,
    0, 293, 0, 294, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 299, 300, 0, 301, 0, 0, 302, 0, 0, 303, 0, 304, 0, 0, 305, 0,
    0, 306, 0, 0, 307, 0, 308, 309, 0, 310, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0, 317, 318, 0, 319,
    0, 0, 320, 0, 0, 321, 0, 322, 0, 323, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 330, 0, 331, 0,
    332, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0,
    0, 0, 340, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 352, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 356, 0, 357, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0,
    363, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 0, 373, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 381, 0,
    382, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0,
    0, 0, 390, 0, 391, 0, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397,
    0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0,
    0, 404, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410,
    0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415,
    0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 419, 0, 420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0,
    423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432,
    0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0,
    0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0,
    446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 461, 0, 462, 0, 463, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 465, 0, 0, 0, 466, 0, 467, 0, 0, 468, 0, 469, 0, 0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 473, 474, 0, 0, 0, 0, 475, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 479,
    0, 0, 480, 0, 0, 481, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    484, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 492, 493, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 498, 0, 499, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0,
    0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 506, 507, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 508, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 0, 511, 0, 512, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    520, 0, 0, 0, 0, 0, 0, 0, 521, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 525, 0, 0, 0, 0, 0, 0,
    0, 526, 0, 527, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0,
    0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 539, 0,
    0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 543, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 547,
    0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    552, 0, 0, 0, 553, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 556, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 561, 0, 562, 0,
    563, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 572, 0, 0, 0,
    0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 577, 578, 0, 0, 579, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0,
    0, 0, 582, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 587, 0, 588, 0, 589, 0, 0, 590, 0, 591, 0, 592,
    0, 593, 0, 594, 0, 595, 0, 596, 0, 0, 597, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603, 604, 0, 0, 0, 0, 605, 0, 0, 0,
    606, 0, 607, 0, 608, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 611, 0, 0, 612, 0, 0, 613, 0, 614, 0, 0, 615, 0, 616, 0,
    0, 0, 617, 0, 618, 0, 0, 619, 0, 620, 0, 621, 0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 631,
    0, 632, 0, 633, 0, 0, 634, 635, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 637, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 641, 0, 642, 0, 643, 0, 644, 0, 645, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 647, 0, 0, 648, 0, 649, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0,
    0, 652, 0, 653, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0,
    0, 659, 0, 0, 660, 0, 0, 0, 661, 662, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 666, 0, 0, 667, 0,
    0, 668, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 672, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0,
    677, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0,
    0, 683, 0, 684, 0, 685, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 689, 0, 0, 690, 0, 691, 692, 693, 0, 0, 0,
    694, 0, 0, 0, 0, 0, 695, 0, 0, 0, 696, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 700, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 703, 0, 704,
    0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 708, 0, 0, 709, 0, 710,
    711, 0, 712, 0, 0, 0, 713, 0, 714, 0, 0, 715, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717,
    0, 0, 718, 0, 719, 0, 0, 720, 0, 0, 721, 0, 722, 0, 723, 0, 0, 724, 0, 725, 0, 726, 0, 727, 0, 0, 0, 0, 0, 0, 0, 728,
    0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 733, 0, 734,
    0, 735, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0, 0, 738, 0, 739, 0, 0, 740, 0, 741, 0, 0, 742, 0, 743, 0, 744, 0, 745, 0, 746,
    0, 0, 747, 0, 748, 0, 749, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 752, 0,
    0, 0, 0, 753, 0, 0, 0, 754, 0, 755, 0, 756, 0, 0, 0, 757, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 760, 0, 0, 761, 0, 0, 762, 0, 763, 764, 765, 0, 0, 0, 766, 0, 767, 0, 0, 768, 769, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 774,
};
void recomp_unit_0068_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08914000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0068[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08914000;
    case 2u: goto L_08914018;
    case 3u: goto L_08914028;
    case 4u: goto L_08914030;
    case 5u: goto L_08914038;
    case 6u: goto L_08914054;
    case 7u: goto L_0891405C;
    case 8u: goto L_08914068;
    case 9u: goto L_08914074;
    case 10u: goto L_0891407C;
    case 11u: goto L_08914090;
    case 12u: goto L_08914098;
    case 13u: goto L_089140A4;
    case 14u: goto L_089140B8;
    case 15u: goto L_089140C4;
    case 16u: goto L_089140CC;
    case 17u: goto L_089140D4;
    case 18u: goto L_089140DC;
    case 19u: goto L_089140EC;
    case 20u: goto L_089140F4;
    case 21u: goto L_08914104;
    case 22u: goto L_0891410C;
    case 23u: goto L_0891411C;
    case 24u: goto L_08914124;
    case 25u: goto L_08914134;
    case 26u: goto L_0891413C;
    case 27u: goto L_0891414C;
    case 28u: goto L_08914154;
    case 29u: goto L_0891415C;
    case 30u: goto L_08914188;
    case 31u: goto L_0891419C;
    case 32u: goto L_089141A4;
    case 33u: goto L_089141B8;
    case 34u: goto L_089141D8;
    case 35u: goto L_089141EC;
    case 36u: goto L_089141F4;
    case 37u: goto L_08914208;
    case 38u: goto L_08914228;
    case 39u: goto L_08914230;
    case 40u: goto L_08914238;
    case 41u: goto L_0891424C;
    case 42u: goto L_08914258;
    case 43u: goto L_08914268;
    case 44u: goto L_08914270;
    case 45u: goto L_08914284;
    case 46u: goto L_08914290;
    case 47u: goto L_089142A0;
    case 48u: goto L_089142A8;
    case 49u: goto L_089142BC;
    case 50u: goto L_089142C4;
    case 51u: goto L_089142D4;
    case 52u: goto L_089142E4;
    case 53u: goto L_08914308;
    case 54u: goto L_08914310;
    case 55u: goto L_0891431C;
    case 56u: goto L_08914324;
    case 57u: goto L_0891432C;
    case 58u: goto L_08914338;
    case 59u: goto L_08914344;
    case 60u: goto L_0891434C;
    case 61u: goto L_0891437C;
    case 62u: goto L_08914444;
    case 63u: goto L_08914470;
    case 64u: goto L_08914498;
    case 65u: goto L_089144A0;
    case 66u: goto L_089144B0;
    case 67u: goto L_089144B8;
    case 68u: goto L_089144C8;
    case 69u: goto L_089144DC;
    case 70u: goto L_089144E4;
    case 71u: goto L_089144F0;
    case 72u: goto L_08914504;
    case 73u: goto L_08914514;
    case 74u: goto L_0891451C;
    case 75u: goto L_0891453C;
    case 76u: goto L_08914560;
    case 77u: goto L_08914574;
    case 78u: goto L_08914588;
    case 79u: goto L_089145C8;
    case 80u: goto L_089146AC;
    case 81u: goto L_089146C8;
    case 82u: goto L_089146E0;
    case 83u: goto L_089146EC;
    case 84u: goto L_089146F4;
    case 85u: goto L_08914708;
    case 86u: goto L_08914718;
    case 87u: goto L_08914724;
    case 88u: goto L_08914738;
    case 89u: goto L_08914740;
    case 90u: goto L_08914754;
    case 91u: goto L_08914760;
    case 92u: goto L_08914770;
    case 93u: goto L_0891477C;
    case 94u: goto L_089147B0;
    case 95u: goto L_089147CC;
    case 96u: goto L_089147D4;
    case 97u: goto L_089147DC;
    case 98u: goto L_089147EC;
    case 99u: goto L_089147F4;
    case 100u: goto L_089147F8;
    case 101u: goto L_08914810;
    case 102u: goto L_0891481C;
    case 103u: goto L_0891482C;
    case 104u: goto L_08914834;
    case 105u: goto L_08914838;
    case 106u: goto L_08914850;
    case 107u: goto L_0891487C;
    case 108u: goto L_08914884;
    case 109u: goto L_08914888;
    case 110u: goto L_08914894;
    case 111u: goto L_089148A0;
    case 112u: goto L_089148A8;
    case 113u: goto L_089148B0;
    case 114u: goto L_089148D4;
    case 115u: goto L_089148E8;
    case 116u: goto L_089148F0;
    case 117u: goto L_089148F8;
    case 118u: goto L_08914908;
    case 119u: goto L_08914914;
    case 120u: goto L_0891491C;
    case 121u: goto L_08914920;
    case 122u: goto L_0891492C;
    case 123u: goto L_08914938;
    case 124u: goto L_08914940;
    case 125u: goto L_08914968;
    case 126u: goto L_08914974;
    case 127u: goto L_0891497C;
    case 128u: goto L_08914988;
    case 129u: goto L_089149AC;
    case 130u: goto L_089149B8;
    case 131u: goto L_089149C0;
    case 132u: goto L_089149C8;
    case 133u: goto L_089149DC;
    case 134u: goto L_08914A10;
    case 135u: goto L_08914A2C;
    case 136u: goto L_08914A38;
    case 137u: goto L_08914AA0;
    case 138u: goto L_08914AC0;
    case 139u: goto L_08914ADC;
    case 140u: goto L_08914AEC;
    case 141u: goto L_08914B08;
    case 142u: goto L_08914B14;
    case 143u: goto L_08914B7C;
    case 144u: goto L_08914B9C;
    case 145u: goto L_08914BB8;
    case 146u: goto L_08914BC0;
    case 147u: goto L_08914BC8;
    case 148u: goto L_08914BE8;
    case 149u: goto L_08914BEC;
    case 150u: goto L_08914BF4;
    case 151u: goto L_08914C0C;
    case 152u: goto L_08914C14;
    case 153u: goto L_08914C20;
    case 154u: goto L_08914C28;
    case 155u: goto L_08914C34;
    case 156u: goto L_08914C48;
    case 157u: goto L_08914C58;
    case 158u: goto L_08914C60;
    case 159u: goto L_08914C68;
    case 160u: goto L_08914C74;
    case 161u: goto L_08914CC8;
    case 162u: goto L_08914CD4;
    case 163u: goto L_08914CDC;
    case 164u: goto L_08914CE4;
    case 165u: goto L_08914CFC;
    case 166u: goto L_08914D34;
    case 167u: goto L_08914D58;
    case 168u: goto L_08914D78;
    case 169u: goto L_08914DA0;
    case 170u: goto L_08914DA4;
    case 171u: goto L_08914DCC;
    case 172u: goto L_08914DD8;
    case 173u: goto L_08914DE4;
    case 174u: goto L_08914DF4;
    case 175u: goto L_08914E04;
    case 176u: goto L_08914E08;
    case 177u: goto L_08914E40;
    case 178u: goto L_08914E4C;
    case 179u: goto L_08914E58;
    case 180u: goto L_08914E60;
    case 181u: goto L_08914E8C;
    case 182u: goto L_08914E94;
    case 183u: goto L_08914EF8;
    case 184u: goto L_08914F00;
    case 185u: goto L_08914F0C;
    case 186u: goto L_08914F40;
    case 187u: goto L_08914F54;
    case 188u: goto L_08914F60;
    case 189u: goto L_08914F74;
    case 190u: goto L_08914F98;
    case 191u: goto L_08914FAC;
    case 192u: goto L_08914FBC;
    case 193u: goto L_08914FCC;
    case 194u: goto L_08914FDC;
    case 195u: goto L_08914FE4;
    case 196u: goto L_08914FEC;
    case 197u: goto L_08915014;
    case 198u: goto L_0891501C;
    case 199u: goto L_08915024;
    case 200u: goto L_08915048;
    case 201u: goto L_08915050;
    case 202u: goto L_0891506C;
    case 203u: goto L_0891507C;
    case 204u: goto L_08915080;
    case 205u: goto L_08915088;
    case 206u: goto L_0891509C;
    case 207u: goto L_089150A8;
    case 208u: goto L_089150BC;
    case 209u: goto L_089150E0;
    case 210u: goto L_089150F4;
    case 211u: goto L_08915104;
    case 212u: goto L_08915114;
    case 213u: goto L_08915124;
    case 214u: goto L_0891512C;
    case 215u: goto L_08915134;
    case 216u: goto L_0891515C;
    case 217u: goto L_08915164;
    case 218u: goto L_0891516C;
    case 219u: goto L_08915190;
    case 220u: goto L_08915198;
    case 221u: goto L_089151B4;
    case 222u: goto L_089151C4;
    case 223u: goto L_089151C8;
    case 224u: goto L_089151D0;
    case 225u: goto L_089151D8;
    case 226u: goto L_089151F4;
    case 227u: goto L_08915200;
    case 228u: goto L_0891520C;
    case 229u: goto L_08915218;
    case 230u: goto L_08915220;
    case 231u: goto L_08915224;
    case 232u: goto L_0891522C;
    case 233u: goto L_08915238;
    case 234u: goto L_08915244;
    case 235u: goto L_0891524C;
    case 236u: goto L_08915258;
    case 237u: goto L_08915264;
    case 238u: goto L_08915270;
    case 239u: goto L_08915278;
    case 240u: goto L_0891527C;
    case 241u: goto L_08915284;
    case 242u: goto L_08915290;
    case 243u: goto L_0891529C;
    case 244u: goto L_089152B0;
    case 245u: goto L_089152BC;
    case 246u: goto L_089152C8;
    case 247u: goto L_089152D4;
    case 248u: goto L_089152DC;
    case 249u: goto L_089152E4;
    case 250u: goto L_089152EC;
    case 251u: goto L_089152F4;
    case 252u: goto L_089152FC;
    case 253u: goto L_08915304;
    case 254u: goto L_08915310;
    case 255u: goto L_0891531C;
    case 256u: goto L_08915328;
    case 257u: goto L_08915330;
    case 258u: goto L_08915334;
    case 259u: goto L_0891533C;
    case 260u: goto L_08915348;
    case 261u: goto L_08915354;
    case 262u: goto L_0891535C;
    case 263u: goto L_08915368;
    case 264u: goto L_08915374;
    case 265u: goto L_08915380;
    case 266u: goto L_08915388;
    case 267u: goto L_0891538C;
    case 268u: goto L_08915394;
    case 269u: goto L_089153A0;
    case 270u: goto L_089153AC;
    case 271u: goto L_089153B4;
    case 272u: goto L_089153C0;
    case 273u: goto L_089153CC;
    case 274u: goto L_089153D8;
    case 275u: goto L_089153E0;
    case 276u: goto L_089153E4;
    case 277u: goto L_089153EC;
    case 278u: goto L_089153F8;
    case 279u: goto L_08915404;
    case 280u: goto L_0891540C;
    case 281u: goto L_08915418;
    case 282u: goto L_08915424;
    case 283u: goto L_08915430;
    case 284u: goto L_08915438;
    case 285u: goto L_0891543C;
    case 286u: goto L_08915444;
    case 287u: goto L_08915450;
    case 288u: goto L_0891545C;
    case 289u: goto L_08915464;
    case 290u: goto L_0891546C;
    case 291u: goto L_08915474;
    case 292u: goto L_0891547C;
    case 293u: goto L_08915484;
    case 294u: goto L_0891548C;
    case 295u: goto L_08915494;
    case 296u: goto L_089154A0;
    case 297u: goto L_089154AC;
    case 298u: goto L_089154B8;
    case 299u: goto L_089154C0;
    case 300u: goto L_089154C4;
    case 301u: goto L_089154CC;
    case 302u: goto L_089154D8;
    case 303u: goto L_089154E4;
    case 304u: goto L_089154EC;
    case 305u: goto L_089154F8;
    case 306u: goto L_08915504;
    case 307u: goto L_08915510;
    case 308u: goto L_08915518;
    case 309u: goto L_0891551C;
    case 310u: goto L_08915524;
    case 311u: goto L_08915530;
    case 312u: goto L_0891553C;
    case 313u: goto L_08915544;
    case 314u: goto L_08915550;
    case 315u: goto L_0891555C;
    case 316u: goto L_08915568;
    case 317u: goto L_08915570;
    case 318u: goto L_08915574;
    case 319u: goto L_0891557C;
    case 320u: goto L_08915588;
    case 321u: goto L_08915594;
    case 322u: goto L_0891559C;
    case 323u: goto L_089155A4;
    case 324u: goto L_089155AC;
    case 325u: goto L_089155C0;
    case 326u: goto L_0891560C;
    case 327u: goto L_08915614;
    case 328u: goto L_0891565C;
    case 329u: goto L_08915668;
    case 330u: goto L_08915670;
    case 331u: goto L_08915678;
    case 332u: goto L_08915680;
    case 333u: goto L_08915688;
    case 334u: goto L_089156A4;
    case 335u: goto L_089156AC;
    case 336u: goto L_089156B4;
    case 337u: goto L_089156CC;
    case 338u: goto L_089156D4;
    case 339u: goto L_089156EC;
    case 340u: goto L_08915708;
    case 341u: goto L_0891570C;
    case 342u: goto L_08915730;
    case 343u: goto L_0891573C;
    case 344u: goto L_08915748;
    case 345u: goto L_08915758;
    case 346u: goto L_08915768;
    case 347u: goto L_08915798;
    case 348u: goto L_089157A4;
    case 349u: goto L_089157B0;
    case 350u: goto L_089157B8;
    case 351u: goto L_089157D8;
    case 352u: goto L_089157DC;
    case 353u: goto L_08915A08;
    case 354u: goto L_08915A2C;
    case 355u: goto L_08915A48;
    case 356u: goto L_08915A84;
    case 357u: goto L_08915A8C;
    case 358u: goto L_08915A94;
    case 359u: goto L_08915AA8;
    case 360u: goto L_08915AC4;
    case 361u: goto L_08915AE8;
    case 362u: goto L_08915AF8;
    case 363u: goto L_08915B00;
    case 364u: goto L_08915B10;
    case 365u: goto L_08915B20;
    case 366u: goto L_08915B30;
    case 367u: goto L_08915B38;
    case 368u: goto L_08915B40;
    case 369u: goto L_08915B48;
    case 370u: goto L_08915B50;
    case 371u: goto L_08915B58;
    case 372u: goto L_08915B60;
    case 373u: goto L_08915B6C;
    case 374u: goto L_08915B94;
    case 375u: goto L_08915B9C;
    case 376u: goto L_08915BAC;
    case 377u: goto L_08915BC0;
    case 378u: goto L_08915BCC;
    case 379u: goto L_08915BE4;
    case 380u: goto L_08915BEC;
    case 381u: goto L_08915BF8;
    case 382u: goto L_08915C00;
    case 383u: goto L_08915C08;
    case 384u: goto L_08915C14;
    case 385u: goto L_08915C3C;
    case 386u: goto L_08915C44;
    case 387u: goto L_08915C54;
    case 388u: goto L_08915C68;
    case 389u: goto L_08915C74;
    case 390u: goto L_08915C88;
    case 391u: goto L_08915C90;
    case 392u: goto L_08915C9C;
    case 393u: goto L_08915CA4;
    case 394u: goto L_08915CAC;
    case 395u: goto L_08915CB4;
    case 396u: goto L_08915CBC;
    case 397u: goto L_08915CFC;
    case 398u: goto L_08915D18;
    case 399u: goto L_08915D24;
    case 400u: goto L_08915D48;
    case 401u: goto L_08915D50;
    case 402u: goto L_08915D58;
    case 403u: goto L_08915D78;
    case 404u: goto L_08915D84;
    case 405u: goto L_08915D8C;
    case 406u: goto L_08915D98;
    case 407u: goto L_08915DB0;
    case 408u: goto L_08915DBC;
    case 409u: goto L_08915DD0;
    case 410u: goto L_08915DFC;
    case 411u: goto L_08915E10;
    case 412u: goto L_08915E74;
    case 413u: goto L_08915EB8;
    case 414u: goto L_08915EDC;
    case 415u: goto L_08915EFC;
    case 416u: goto L_08915F1C;
    case 417u: goto L_08915F30;
    case 418u: goto L_08915F40;
    case 419u: goto L_08915F48;
    case 420u: goto L_08915F50;
    case 421u: goto L_08915F60;
    case 422u: goto L_08915F70;
    case 423u: goto L_08915F80;
    case 424u: goto L_08915F90;
    case 425u: goto L_08915FA8;
    case 426u: goto L_08915FB4;
    case 427u: goto L_08915FC0;
    case 428u: goto L_08915FCC;
    case 429u: goto L_08915FE0;
    case 430u: goto L_08915FF0;
    case 431u: goto L_08916038;
    case 432u: goto L_0891607C;
    case 433u: goto L_08916088;
    case 434u: goto L_089160E4;
    case 435u: goto L_08916104;
    case 436u: goto L_0891611C;
    case 437u: goto L_08916144;
    case 438u: goto L_08916180;
    case 439u: goto L_08916194;
    case 440u: goto L_089161BC;
    case 441u: goto L_089161FC;
    case 442u: goto L_08916258;
    case 443u: goto L_08916270;
    case 444u: goto L_089162B4;
    case 445u: goto L_089162F8;
    case 446u: goto L_08916300;
    case 447u: goto L_08916344;
    case 448u: goto L_08916388;
    case 449u: goto L_08916394;
    case 450u: goto L_089163AC;
    case 451u: goto L_089163C0;
    case 452u: goto L_089163E0;
    case 453u: goto L_08916428;
    case 454u: goto L_0891648C;
    case 455u: goto L_089164D0;
    case 456u: goto L_08916510;
    case 457u: goto L_08916550;
    case 458u: goto L_08916560;
    case 459u: goto L_0891659C;
    case 460u: goto L_089165A4;
    case 461u: goto L_089165AC;
    case 462u: goto L_089165B4;
    case 463u: goto L_089165BC;
    case 464u: goto L_089165C0;
    case 465u: goto L_08916604;
    case 466u: goto L_08916614;
    case 467u: goto L_0891661C;
    case 468u: goto L_08916628;
    case 469u: goto L_08916630;
    case 470u: goto L_0891663C;
    case 471u: goto L_08916648;
    case 472u: goto L_08916654;
    case 473u: goto L_08916660;
    case 474u: goto L_08916664;
    case 475u: goto L_08916678;
    case 476u: goto L_089166C8;
    case 477u: goto L_089166DC;
    case 478u: goto L_08916770;
    case 479u: goto L_0891677C;
    case 480u: goto L_08916788;
    case 481u: goto L_08916794;
    case 482u: goto L_08916798;
    case 483u: goto L_089167AC;
    case 484u: goto L_08916800;
    case 485u: goto L_08916814;
    case 486u: goto L_08916824;
    case 487u: goto L_08916848;
    case 488u: goto L_0891684C;
    case 489u: goto L_08916874;
    case 490u: goto L_089168BC;
    case 491u: goto L_089168CC;
    case 492u: goto L_089168F0;
    case 493u: goto L_089168F4;
    case 494u: goto L_0891691C;
    case 495u: goto L_08916968;
    case 496u: goto L_089169A0;
    case 497u: goto L_089169D0;
    case 498u: goto L_08916A14;
    case 499u: goto L_08916A1C;
    case 500u: goto L_08916A24;
    case 501u: goto L_08916A3C;
    case 502u: goto L_08916A58;
    case 503u: goto L_08916A6C;
    case 504u: goto L_08916A84;
    case 505u: goto L_08916AB8;
    case 506u: goto L_08916AD8;
    case 507u: goto L_08916ADC;
    case 508u: goto L_08916B08;
    case 509u: goto L_08916B14;
    case 510u: goto L_08916B1C;
    case 511u: goto L_08916B3C;
    case 512u: goto L_08916B44;
    case 513u: goto L_08916B4C;
    case 514u: goto L_08916B54;
    case 515u: goto L_08916BA8;
    case 516u: goto L_08916C14;
    case 517u: goto L_08916C2C;
    case 518u: goto L_08916C34;
    case 519u: goto L_08916C4C;
    case 520u: goto L_08916C80;
    case 521u: goto L_08916CA0;
    case 522u: goto L_08916CA4;
    case 523u: goto L_08916CD0;
    case 524u: goto L_08916CDC;
    case 525u: goto L_08916CE4;
    case 526u: goto L_08916D04;
    case 527u: goto L_08916D0C;
    case 528u: goto L_08916D14;
    case 529u: goto L_08916D1C;
    case 530u: goto L_08916D70;
    case 531u: goto L_08916DDC;
    case 532u: goto L_08916DF4;
    case 533u: goto L_08916E18;
    case 534u: goto L_08916F0C;
    case 535u: goto L_08916F2C;
    case 536u: goto L_08916F38;
    case 537u: goto L_08916F58;
    case 538u: goto L_08916F74;
    case 539u: goto L_08916F78;
    case 540u: goto L_08916F8C;
    case 541u: goto L_08916FA0;
    case 542u: goto L_08916FA8;
    case 543u: goto L_08916FB8;
    case 544u: goto L_08916FBC;
    case 545u: goto L_08916FE4;
    case 546u: goto L_08916FEC;
    case 547u: goto L_08916FFC;
    case 548u: goto L_0891701C;
    case 549u: goto L_0891703C;
    case 550u: goto L_08917078;
    case 551u: goto L_089170A8;
    case 552u: goto L_08917100;
    case 553u: goto L_08917110;
    case 554u: goto L_08917118;
    case 555u: goto L_0891713C;
    case 556u: goto L_08917184;
    case 557u: goto L_0891718C;
    case 558u: goto L_089171B8;
    case 559u: goto L_089171D4;
    case 560u: goto L_089171E4;
    case 561u: goto L_089171F0;
    case 562u: goto L_089171F8;
    case 563u: goto L_08917200;
    case 564u: goto L_0891720C;
    case 565u: goto L_08917220;
    case 566u: goto L_08917240;
    case 567u: goto L_08917268;
    case 568u: goto L_089172B0;
    case 569u: goto L_089172C4;
    case 570u: goto L_089172D0;
    case 571u: goto L_089172E0;
    case 572u: goto L_089172F0;
    case 573u: goto L_08917304;
    case 574u: goto L_08917314;
    case 575u: goto L_08917328;
    case 576u: goto L_08917330;
    case 577u: goto L_08917340;
    case 578u: goto L_08917344;
    case 579u: goto L_08917350;
    case 580u: goto L_0891736C;
    case 581u: goto L_08917378;
    case 582u: goto L_08917388;
    case 583u: goto L_08917394;
    case 584u: goto L_089173A4;
    case 585u: goto L_089173BC;
    case 586u: goto L_089173C4;
    case 587u: goto L_089173D0;
    case 588u: goto L_089173D8;
    case 589u: goto L_089173E0;
    case 590u: goto L_089173EC;
    case 591u: goto L_089173F4;
    case 592u: goto L_089173FC;
    case 593u: goto L_08917404;
    case 594u: goto L_0891740C;
    case 595u: goto L_08917414;
    case 596u: goto L_0891741C;
    case 597u: goto L_08917428;
    case 598u: goto L_08917430;
    case 599u: goto L_08917438;
    case 600u: goto L_08917440;
    case 601u: goto L_08917448;
    case 602u: goto L_08917450;
    case 603u: goto L_08917458;
    case 604u: goto L_0891745C;
    case 605u: goto L_08917470;
    case 606u: goto L_08917480;
    case 607u: goto L_08917488;
    case 608u: goto L_08917490;
    case 609u: goto L_0891749C;
    case 610u: goto L_089174BC;
    case 611u: goto L_089174C4;
    case 612u: goto L_089174D0;
    case 613u: goto L_089174DC;
    case 614u: goto L_089174E4;
    case 615u: goto L_089174F0;
    case 616u: goto L_089174F8;
    case 617u: goto L_08917508;
    case 618u: goto L_08917510;
    case 619u: goto L_0891751C;
    case 620u: goto L_08917524;
    case 621u: goto L_0891752C;
    case 622u: goto L_08917534;
    case 623u: goto L_0891753C;
    case 624u: goto L_08917544;
    case 625u: goto L_0891754C;
    case 626u: goto L_08917554;
    case 627u: goto L_0891755C;
    case 628u: goto L_08917564;
    case 629u: goto L_0891756C;
    case 630u: goto L_08917574;
    case 631u: goto L_0891757C;
    case 632u: goto L_08917584;
    case 633u: goto L_0891758C;
    case 634u: goto L_08917598;
    case 635u: goto L_0891759C;
    case 636u: goto L_089175AC;
    case 637u: goto L_08917604;
    case 638u: goto L_08917610;
    case 639u: goto L_08917648;
    case 640u: goto L_08917650;
    case 641u: goto L_08917658;
    case 642u: goto L_08917660;
    case 643u: goto L_08917668;
    case 644u: goto L_08917670;
    case 645u: goto L_08917678;
    case 646u: goto L_089176A0;
    case 647u: goto L_089176A8;
    case 648u: goto L_089176B4;
    case 649u: goto L_089176BC;
    case 650u: goto L_089176C4;
    case 651u: goto L_089176F0;
    case 652u: goto L_08917704;
    case 653u: goto L_0891770C;
    case 654u: goto L_08917714;
    case 655u: goto L_0891773C;
    case 656u: goto L_08917748;
    case 657u: goto L_0891775C;
    case 658u: goto L_0891776C;
    case 659u: goto L_08917784;
    case 660u: goto L_08917790;
    case 661u: goto L_089177A0;
    case 662u: goto L_089177A4;
    case 663u: goto L_089177B0;
    case 664u: goto L_089177C0;
    case 665u: goto L_089177E4;
    case 666u: goto L_089177EC;
    case 667u: goto L_089177F8;
    case 668u: goto L_08917804;
    case 669u: goto L_0891780C;
    case 670u: goto L_0891781C;
    case 671u: goto L_08917830;
    case 672u: goto L_08917838;
    case 673u: goto L_08917840;
    case 674u: goto L_08917868;
    case 675u: goto L_089178E4;
    case 676u: goto L_089178F8;
    case 677u: goto L_08917900;
    case 678u: goto L_08917910;
    case 679u: goto L_08917920;
    case 680u: goto L_08917938;
    case 681u: goto L_08917940;
    case 682u: goto L_08917968;
    case 683u: goto L_08917984;
    case 684u: goto L_0891798C;
    case 685u: goto L_08917994;
    case 686u: goto L_089179A0;
    case 687u: goto L_089179B0;
    case 688u: goto L_089179C8;
    case 689u: goto L_089179D4;
    case 690u: goto L_089179E0;
    case 691u: goto L_089179E8;
    case 692u: goto L_089179EC;
    case 693u: goto L_089179F0;
    case 694u: goto L_08917A00;
    case 695u: goto L_08917A18;
    case 696u: goto L_08917A28;
    case 697u: goto L_08917A30;
    case 698u: goto L_08917A48;
    case 699u: goto L_08917A6C;
    case 700u: goto L_08917A78;
    case 701u: goto L_08917ADC;
    case 702u: goto L_08917AE8;
    case 703u: goto L_08917AF4;
    case 704u: goto L_08917AFC;
    case 705u: goto L_08917B08;
    case 706u: goto L_08917B10;
    case 707u: goto L_08917B5C;
    case 708u: goto L_08917B68;
    case 709u: goto L_08917B74;
    case 710u: goto L_08917B7C;
    case 711u: goto L_08917B80;
    case 712u: goto L_08917B88;
    case 713u: goto L_08917B98;
    case 714u: goto L_08917BA0;
    case 715u: goto L_08917BAC;
    case 716u: goto L_08917BB0;
    case 717u: goto L_08917BFC;
    case 718u: goto L_08917C08;
    case 719u: goto L_08917C10;
    case 720u: goto L_08917C1C;
    case 721u: goto L_08917C28;
    case 722u: goto L_08917C30;
    case 723u: goto L_08917C38;
    case 724u: goto L_08917C44;
    case 725u: goto L_08917C4C;
    case 726u: goto L_08917C54;
    case 727u: goto L_08917C5C;
    case 728u: goto L_08917C7C;
    case 729u: goto L_08917C90;
    case 730u: goto L_08917CC0;
    case 731u: goto L_08917CC8;
    case 732u: goto L_08917CE0;
    case 733u: goto L_08917CF4;
    case 734u: goto L_08917CFC;
    case 735u: goto L_08917D04;
    case 736u: goto L_08917D18;
    case 737u: goto L_08917D20;
    case 738u: goto L_08917D34;
    case 739u: goto L_08917D3C;
    case 740u: goto L_08917D48;
    case 741u: goto L_08917D50;
    case 742u: goto L_08917D5C;
    case 743u: goto L_08917D64;
    case 744u: goto L_08917D6C;
    case 745u: goto L_08917D74;
    case 746u: goto L_08917D7C;
    case 747u: goto L_08917D88;
    case 748u: goto L_08917D90;
    case 749u: goto L_08917D98;
    case 750u: goto L_08917DB8;
    case 751u: goto L_08917DD8;
    case 752u: goto L_08917DF8;
    case 753u: goto L_08917E0C;
    case 754u: goto L_08917E1C;
    case 755u: goto L_08917E24;
    case 756u: goto L_08917E2C;
    case 757u: goto L_08917E3C;
    case 758u: goto L_08917E50;
    case 759u: goto L_08917E80;
    case 760u: goto L_08917F0C;
    case 761u: goto L_08917F18;
    case 762u: goto L_08917F24;
    case 763u: goto L_08917F2C;
    case 764u: goto L_08917F30;
    case 765u: goto L_08917F34;
    case 766u: goto L_08917F44;
    case 767u: goto L_08917F4C;
    case 768u: goto L_08917F58;
    case 769u: goto L_08917F5C;
    case 770u: goto L_08917FA0;
    case 771u: goto L_08917FA8;
    case 772u: goto L_08917FB4;
    case 773u: goto L_08917FD8;
    case 774u: goto L_08917FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08914000:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 483u, 0x08913FFCu>(ctx, &aot_mem); return;
      }
      goto L_08914018;
    }
L_08914018:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_08914028;
L_08914028:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891407C;
      }
      goto L_08914030;
    }
L_08914030:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891407C;
      }
      goto L_08914038;
    }
L_08914038:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x08914054u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 404u, 0x08AED66Cu>(ctx, &aot_mem) && ctx.pc == 0x08914054u) goto L_08914054;
    return;
L_08914054:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2444)));
      if (branch_taken) {
          goto L_08914068;
      }
      goto L_0891405C;
    }
L_0891405C:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08914074;
      }
      goto L_08914068;
    }
L_08914068:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_08914074;
L_08914074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914028;
      }
      goto L_0891407C;
    }
L_0891407C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08914090u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17020));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08914090u) goto L_08914090;
    return;
L_08914090:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891434C;
      }
      goto L_08914098;
    }
L_08914098:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x089140A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16924));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 183u, 0x088B8FBCu>(ctx, &aot_mem) && ctx.pc == 0x089140A4u) goto L_089140A4;
    return;
L_089140A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25444)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(124));
      if (branch_taken) {
          goto L_08914154;
      }
      goto L_089140B8;
    }
L_089140B8:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089140F4;
      }
      goto L_089140C4;
    }
L_089140C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0891410C;
      }
      goto L_089140CC;
    }
L_089140CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08914124;
      }
      goto L_089140D4;
    }
L_089140D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0891413C;
      }
      goto L_089140DC;
    }
L_089140DC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089140ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16932));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x089140ECu) goto L_089140EC;
    return;
L_089140EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914154;
      }
      goto L_089140F4;
    }
L_089140F4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08914104u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16944));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08914104u) goto L_08914104;
    return;
L_08914104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914154;
      }
      goto L_0891410C;
    }
L_0891410C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891411Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16956));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0891411Cu) goto L_0891411C;
    return;
L_0891411C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914154;
      }
      goto L_08914124;
    }
L_08914124:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08914134u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16968));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08914134u) goto L_08914134;
    return;
L_08914134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914154;
      }
      goto L_0891413C;
    }
L_0891413C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891414Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16980));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0891414Cu) goto L_0891414C;
    return;
L_0891414C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914154;
      }
      goto L_08914154;
    }
L_08914154:
    ctx.gpr[31] = (0x0891415Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 755u, 0x0891B674u>(ctx, &aot_mem) && ctx.pc == 0x0891415Cu) goto L_0891415C;
    return;
L_0891415C:
    ctx.gpr[4] = (ctx.gpr[16] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08914188u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16992));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 203u, 0x088B9118u>(ctx, &aot_mem) && ctx.pc == 0x08914188u) goto L_08914188;
    return;
L_08914188:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891419Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 209u, 0x088B91ACu>(ctx, &aot_mem) && ctx.pc == 0x0891419Cu) goto L_0891419C;
    return;
L_0891419C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_089141A4;
L_089141A4:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089141B8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 206u, 0x088B9158u>(ctx, &aot_mem) && ctx.pc == 0x089141B8u) goto L_089141B8;
    return;
L_089141B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089141A4;
      }
      goto L_089141D8;
    }
L_089141D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089141ECu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 538u, 0x08AEDEDCu>(ctx, &aot_mem) && ctx.pc == 0x089141ECu) goto L_089141EC;
    return;
L_089141EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914208;
      }
      goto L_089141F4;
    }
L_089141F4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08914208u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17064));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08914208u) goto L_08914208;
    return;
L_08914208:
    ctx.gpr[23] = (2225u << 16u);
    ctx.gpr[22] = (2225u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(17004));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(17012));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(162)));
    goto L_08914228;
L_08914228:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
      if (branch_taken) {
          goto L_08914238;
      }
      goto L_08914230;
    }
L_08914230:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914310;
      }
      goto L_08914238;
    }
L_08914238:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891424Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 396u, 0x089139D0u>(ctx, &aot_mem) && ctx.pc == 0x0891424Cu) goto L_0891424C;
    return;
L_0891424C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914308;
      }
      goto L_08914258;
    }
L_08914258:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08914268u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 538u, 0x08AEDEDCu>(ctx, &aot_mem) && ctx.pc == 0x08914268u) goto L_08914268;
    return;
L_08914268:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914290;
      }
      goto L_08914270;
    }
L_08914270:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08914284u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 335u, 0x08913400u>(ctx, &aot_mem) && ctx.pc == 0x08914284u) goto L_08914284;
    return;
L_08914284:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08914308;
      }
      goto L_08914290;
    }
L_08914290:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089142A0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 538u, 0x08AEDEDCu>(ctx, &aot_mem) && ctx.pc == 0x089142A0u) goto L_089142A0;
    return;
L_089142A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089142C4;
      }
      goto L_089142A8;
    }
L_089142A8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089142BCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 369u, 0x0891370Cu>(ctx, &aot_mem) && ctx.pc == 0x089142BCu) goto L_089142BC;
    return;
L_089142BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_08914308;
      }
      goto L_089142C4;
    }
L_089142C4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914308;
      }
      goto L_089142D4;
    }
L_089142D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089142E4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 206u, 0x088B9158u>(ctx, &aot_mem) && ctx.pc == 0x089142E4u) goto L_089142E4;
    return;
L_089142E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089142D4;
      }
      goto L_08914308;
    }
L_08914308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(162)));
      if (branch_taken) {
          goto L_08914228;
      }
      goto L_08914310;
    }
L_08914310:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0891431Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 345u, 0x08913500u>(ctx, &aot_mem) && ctx.pc == 0x0891431Cu) goto L_0891431C;
    return;
L_0891431C:
    ctx.gpr[31] = (0x08914324u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 212u, 0x088B9200u>(ctx, &aot_mem) && ctx.pc == 0x08914324u) goto L_08914324;
    return;
L_08914324:
    ctx.gpr[31] = (0x0891432Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 757u, 0x0891B698u>(ctx, &aot_mem) && ctx.pc == 0x0891432Cu) goto L_0891432C;
    return;
L_0891432C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08914338u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16912));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 183u, 0x088B8FBCu>(ctx, &aot_mem) && ctx.pc == 0x08914338u) goto L_08914338;
    return;
L_08914338:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08914344u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(35));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08914344u) goto L_08914344;
    return;
L_08914344:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891434C;
L_0891434C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891437C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24652)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24648)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24680)));
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[14] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(24656), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(24676)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(24684), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(24692), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (16281u << 16u);
    ctx.gpr[8] = (16268u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.gpr[13] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[24] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24664), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24660), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(24668), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(24672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24688), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(24696), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08914444:
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
L_08914470:
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
L_08914498:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089144A0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089144DC;
      }
      goto L_089144B0;
    }
L_089144B0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
      if (branch_taken) {
          goto L_089144DC;
      }
      goto L_089144B8;
    }
L_089144B8:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089144DC;
      }
      goto L_089144C8;
    }
L_089144C8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08914514;
      }
      goto L_089144DC;
    }
L_089144DC:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_089144E4;
L_089144E4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08914504;
      }
      goto L_089144F0;
    }
L_089144F0:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08914514;
      }
      goto L_08914504;
    }
L_08914504:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089144E4;
      }
      goto L_08914514;
    }
L_08914514:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891451C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891453Cu);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 164u, 0x088A0D50u>(ctx, &aot_mem) && ctx.pc == 0x0891453Cu) goto L_0891453C;
    return;
L_0891453C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19356));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(880));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 24u);
    ctx.gpr[31] = (0x08914560u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3936));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08914560u) goto L_08914560;
    return;
L_08914560:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08914588;
      }
      goto L_08914574;
    }
L_08914574:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08914588;
L_08914588:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(836), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(66))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(336), ctx.gpr[5]);
    ctx.gpr[31] = (0x089145C8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08914724;
L_089145C8:
    ctx.gpr[6] = (16204u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(880), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(884), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(888), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (48972u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(890), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(908), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(912), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (19646u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 48160u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(914), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16255u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 55470u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(864), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(865), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(868), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(544), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(872), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(876), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 96u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089146AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089146F4;
      }
      goto L_089146C8;
    }
L_089146C8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19356));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089146E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 514u, 0x0889E8F8u>(ctx, &aot_mem) && ctx.pc == 0x089146E0u) goto L_089146E0;
    return;
L_089146E0:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089146F4;
      }
      goto L_089146EC;
    }
L_089146EC:
    ctx.gpr[31] = (0x089146F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 512u, 0x0889E8D4u>(ctx, &aot_mem) && ctx.pc == 0x089146F4u) goto L_089146F4;
    return;
L_089146F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08914708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08914718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 819u, 0x08A2FA78u>(ctx, &aot_mem) && ctx.pc == 0x08914718u) goto L_08914718;
    return;
L_08914718:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08914724:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08914738u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 537u, 0x0889EA98u>(ctx, &aot_mem) && ctx.pc == 0x08914738u) goto L_08914738;
    return;
L_08914738:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08914740;
L_08914740:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(928), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08914740;
      }
      goto L_08914754;
    }
L_08914754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08914760u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(928));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 601u, 0x08973D04u>(ctx, &aot_mem) && ctx.pc == 0x08914760u) goto L_08914760;
    return;
L_08914760:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08914770:
    ctx.gpr[5] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24792), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891477C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089147D4;
      }
      goto L_089147B0;
    }
L_089147B0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(932)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = 0u != 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(880));
      if (branch_taken) {
          goto L_089147DC;
      }
      goto L_089147CC;
    }
L_089147CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_089147F8;
      }
      goto L_089147D4;
    }
L_089147D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914940;
      }
      goto L_089147DC;
    }
L_089147DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_089147F8;
    }
    goto L_089147EC;
L_089147EC:
    ctx.gpr[31] = (0x089147F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089147F4u) goto L_089147F4;
    return;
L_089147F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_089147F8;
L_089147F8:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08914810u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08914810u) goto L_08914810;
    return;
L_08914810:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(936)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
      if (branch_taken) {
          goto L_08914834;
      }
      goto L_0891481C;
    }
L_0891481C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08914838;
      }
      goto L_0891482C;
    }
L_0891482C:
    ctx.gpr[31] = (0x08914834u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08914834u) goto L_08914834;
    return;
L_08914834:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    goto L_08914838;
L_08914838:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[31] = (0x08914850u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08914850u) goto L_08914850;
    return;
L_08914850:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x0891487Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 595u, 0x08A06EBCu>(ctx, &aot_mem) && ctx.pc == 0x0891487Cu) goto L_0891487C;
    return;
L_0891487C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914888;
      }
      goto L_08914884;
    }
L_08914884:
    ctx.gpr[21] = (0u | 1u);
    goto L_08914888;
L_08914888:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08914894u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 582u, 0x08A06DF0u>(ctx, &aot_mem) && ctx.pc == 0x08914894u) goto L_08914894;
    return;
L_08914894:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(904));
    ctx.gpr[31] = (0x089148A0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 582u, 0x08A06DF0u>(ctx, &aot_mem) && ctx.pc == 0x089148A0u) goto L_089148A0;
    return;
L_089148A0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089148B0;
      }
      goto L_089148A8;
    }
L_089148A8:
    ctx.gpr[31] = (0x089148B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 588u, 0x08A06E58u>(ctx, &aot_mem) && ctx.pc == 0x089148B0u) goto L_089148B0;
    return;
L_089148B0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(892)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(916)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089148D4u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x089148D4u) goto L_089148D4;
    return;
L_089148D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (0x089148E8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x089148E8u) goto L_089148E8;
    return;
L_089148E8:
    ctx.gpr[31] = (0x089148F0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x089148F0u) goto L_089148F0;
    return;
L_089148F0:
    ctx.gpr[31] = (0x089148F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x089148F8u) goto L_089148F8;
    return;
L_089148F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_08914920;
    }
    goto L_08914908;
L_08914908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_08914920;
    }
    goto L_08914914;
L_08914914:
    ctx.gpr[31] = (0x0891491Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0891491Cu) goto L_0891491C;
    return;
L_0891491C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_08914920;
L_08914920:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914940;
      }
      goto L_0891492C;
    }
L_0891492C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914940;
      }
      goto L_08914938;
    }
L_08914938:
    ctx.gpr[31] = (0x08914940u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08914940u) goto L_08914940;
    return;
L_08914940:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08914968:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (16320u << 16u);
      if (branch_taken) {
          goto L_089149C0;
      }
      goto L_08914974;
    }
L_08914974:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    goto L_0891497C;
L_0891497C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089149B8;
      }
      goto L_08914988;
    }
L_08914988:
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089149B8;
      }
      goto L_089149AC;
    }
L_089149AC:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[8] = (ctx.gpr[8] | 64u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_089149B8;
L_089149B8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891497C;
      }
      goto L_089149C0;
    }
L_089149C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089149C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (17948u << 16u);
      if (branch_taken) {
          goto L_08914BE8;
      }
      goto L_089149DC;
    }
L_089149DC:
    ctx.gpr[5] = (ctx.gpr[5] | 15360u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(112)));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08914ADC;
      }
      goto L_08914A10;
    }
L_08914A10:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(112)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08914ADC;
      }
      goto L_08914A2C;
    }
L_08914A2C:
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[3] = (0u | 0u);
    goto L_08914A38;
L_08914A38:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(112)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(12)));
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[13]);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08914AC0;
      }
      goto L_08914AA0;
    }
L_08914AA0:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08914AC0;
L_08914AC0:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(112)));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08914A38;
      }
      goto L_08914ADC;
    }
L_08914ADC:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914BB8;
      }
      goto L_08914AEC;
    }
L_08914AEC:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(116)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08914BB8;
      }
      goto L_08914B08;
    }
L_08914B08:
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[3] = (0u | 0u);
    goto L_08914B14;
L_08914B14:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(116)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(12)));
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[13]);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08914B9C;
      }
      goto L_08914B7C;
    }
L_08914B7C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
    ctx.gpr[7] = (0u | 1u);
    goto L_08914B9C;
L_08914B9C:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(116)));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08914B14;
      }
      goto L_08914BB8;
    }
L_08914BB8:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08914BE8;
      }
      goto L_08914BC0;
    }
L_08914BC0:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08914BE8;
      }
      goto L_08914BC8;
    }
L_08914BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[2] = (ctx.gpr[8] << 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08914BEC;
      }
      goto L_08914BE8;
    }
L_08914BE8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08914BEC;
L_08914BEC:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08914BF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08914C0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17264));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28BB8u>(ctx, &aot_mem) && ctx.pc == 0x08914C0Cu) goto L_08914C0C;
    return;
L_08914C0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914C20;
      }
      goto L_08914C14;
    }
L_08914C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08914C20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08914C20u) goto L_08914C20;
    return;
L_08914C20:
    ctx.gpr[31] = (0x08914C28u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08914C28u) goto L_08914C28;
    return;
L_08914C28:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08914C34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08914C48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17272));
    goto L_08914444;
L_08914C48:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08914C58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17264));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28BB8u>(ctx, &aot_mem) && ctx.pc == 0x08914C58u) goto L_08914C58;
    return;
L_08914C58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914C68;
      }
      goto L_08914C60;
    }
L_08914C60:
    ctx.gpr[31] = (0x08914C68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08914C68u) goto L_08914C68;
    return;
L_08914C68:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08914C74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-28895)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08914CDC;
      }
      goto L_08914CC8;
    }
L_08914CC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(854))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08914CFC;
      }
      goto L_08914CD4;
    }
L_08914CD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(852))))));
      if (branch_taken) {
          goto L_08914CE4;
      }
      goto L_08914CDC;
    }
L_08914CDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915FF0;
      }
      goto L_08914CE4;
    }
L_08914CE4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08915FF0;
      }
      goto L_08914CFC;
    }
L_08914CFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[5]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(13216));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2227u << 16u);
      if (branch_taken) {
          goto L_08914D58;
      }
      goto L_08914D34;
    }
L_08914D34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(120));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08914D78;
      }
      goto L_08914D58;
    }
L_08914D58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(136));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(152));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    goto L_08914D78;
L_08914D78:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(858))))));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08914DA4;
      }
      goto L_08914DA0;
    }
L_08914DA0:
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[24];
    goto L_08914DA4;
L_08914DA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08914DD8;
      }
      goto L_08914DCC;
    }
L_08914DCC:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08914DE4;
      }
      goto L_08914DD8;
    }
L_08914DD8:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08914DE4;
L_08914DE4:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
        goto L_08914E08;
    }
    goto L_08914DF4;
L_08914DF4:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
        goto L_08914E60;
    }
    goto L_08914E04;
L_08914E04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    goto L_08914E08;
L_08914E08:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(856), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08914E4C;
      }
      goto L_08914E40;
    }
L_08914E40:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08914E58;
      }
      goto L_08914E4C;
    }
L_08914E4C:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08914E58;
L_08914E58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08914DE4;
      }
      goto L_08914E60;
    }
L_08914E60:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
        goto L_08914E94;
    }
    goto L_08914E8C;
L_08914E8C:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    goto L_08914E94;
L_08914E94:
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x08914EF8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 186u, 0x089D5860u>(ctx, &aot_mem) && ctx.pc == 0x08914EF8u) goto L_08914EF8;
    return;
L_08914EF8:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089156EC;
      }
      goto L_08914F00;
    }
L_08914F00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7632)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089156EC;
      }
      goto L_08914F0C;
    }
L_08914F0C:
    ctx.gpr[6] = (16752u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (18371u << 16u);
    ctx.fpr[16] = ctx.fpr[22] + ctx.fpr[18];
    ctx.gpr[6] = (ctx.gpr[6] | 20467u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[6] = (17302u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08915088;
      }
      goto L_08914F40;
    }
L_08914F40:
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(24776));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    goto L_08914F54;
L_08914F54:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[18];
      if (branch_taken) {
          goto L_08914F98;
      }
      goto L_08914F60;
    }
L_08914F60:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24776)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08914F98;
      }
      goto L_08914F74;
    }
L_08914F74:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(116)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(8))))));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24776)));
    ctx.gpr[10] = (ctx.gpr[10] << 4u);
    ctx.gpr[10] = (ctx.gpr[20] + ctx.gpr[10]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-4)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[28];
    goto L_08914F98;
L_08914F98:
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08914FCC;
      }
      goto L_08914FAC;
    }
L_08914FAC:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08914FCC;
      }
      goto L_08914FBC;
    }
L_08914FBC:
    ctx.gpr[19] = (ctx.gpr[8] << 24u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 24u));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08914FCC;
L_08914FCC:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08914F54;
      }
      goto L_08914FDC;
    }
L_08914FDC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_08914FEC;
      }
      goto L_08914FE4;
    }
L_08914FE4:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    goto L_08914FEC;
L_08914FEC:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[17];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915050;
      }
      goto L_08915014;
    }
L_08915014:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_08915024;
      }
      goto L_0891501C;
    }
L_0891501C:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    goto L_08915024;
L_08915024:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915050;
      }
      goto L_08915048;
    }
L_08915048:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08915080;
      }
      goto L_08915050;
    }
L_08915050:
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915080;
      }
      goto L_0891506C;
    }
L_0891506C:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915080;
      }
      goto L_0891507C;
    }
L_0891507C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08915080;
L_08915080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089151C8;
      }
      goto L_08915088;
    }
L_08915088:
    ctx.gpr[6] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(24764));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    goto L_0891509C;
L_0891509C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[18];
      if (branch_taken) {
          goto L_089150E0;
      }
      goto L_089150A8;
    }
L_089150A8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24764)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089150E0;
      }
      goto L_089150BC;
    }
L_089150BC:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(112)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(8))))));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24764)));
    ctx.gpr[10] = (ctx.gpr[10] << 4u);
    ctx.gpr[10] = (ctx.gpr[20] + ctx.gpr[10]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-4)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[28];
    goto L_089150E0;
L_089150E0:
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915114;
      }
      goto L_089150F4;
    }
L_089150F4:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915114;
      }
      goto L_08915104;
    }
L_08915104:
    ctx.gpr[19] = (ctx.gpr[5] << 24u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 24u));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08915114;
L_08915114:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891509C;
      }
      goto L_08915124;
    }
L_08915124:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_08915134;
      }
      goto L_0891512C;
    }
L_0891512C:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    goto L_08915134;
L_08915134:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[17];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915198;
      }
      goto L_0891515C;
    }
L_0891515C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_0891516C;
      }
      goto L_08915164;
    }
L_08915164:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    goto L_0891516C;
L_0891516C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915198;
      }
      goto L_08915190;
    }
L_08915190:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089151C8;
      }
      goto L_08915198;
    }
L_08915198:
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089151C8;
      }
      goto L_089151B4;
    }
L_089151B4:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089151C8;
      }
      goto L_089151C4;
    }
L_089151C4:
    ctx.gpr[4] = (0u | 1u);
    goto L_089151C8;
L_089151C8:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_089156EC;
      }
      goto L_089151D0;
    }
L_089151D0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_089156EC;
      }
      goto L_089151D8;
    }
L_089151D8:
    ctx.gpr[5] = (16202u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 49283u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[21] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (2229u << 16u);
      if (branch_taken) {
          goto L_0891524C;
      }
      goto L_089151F4;
    }
L_089151F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_0891522C;
      }
      goto L_08915200;
    }
L_08915200:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0891520Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0891520Cu) goto L_0891520C;
    return;
L_0891520C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915224;
      }
      goto L_08915218;
    }
L_08915218:
    ctx.gpr[31] = (0x08915220u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08915220u) goto L_08915220;
    return;
L_08915220:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08915224;
L_08915224:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_0891522C;
L_0891522C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08915238u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17320));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08915238u) goto L_08915238;
    return;
L_08915238:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08915244u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x08915244u) goto L_08915244;
    return;
L_08915244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891529C;
      }
      goto L_0891524C;
    }
L_0891524C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_08915284;
      }
      goto L_08915258;
    }
L_08915258:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08915264u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08915264u) goto L_08915264;
    return;
L_08915264:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891527C;
      }
      goto L_08915270;
    }
L_08915270:
    ctx.gpr[31] = (0x08915278u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08915278u) goto L_08915278;
    return;
L_08915278:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_0891527C;
L_0891527C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_08915284;
L_08915284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08915290u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17328));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08915290u) goto L_08915290;
    return;
L_08915290:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0891529Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0891529Cu) goto L_0891529C;
    return;
L_0891529C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089152B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17336));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x089152B0u) goto L_089152B0;
    return;
L_089152B0:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089152BCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A541E4u>(ctx, &aot_mem) && ctx.pc == 0x089152BCu) goto L_089152BC;
    return;
L_089152BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915464;
      }
      goto L_089152C8;
    }
L_089152C8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089152EC;
      }
      goto L_089152D4;
    }
L_089152D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08915594;
      }
      goto L_089152DC;
    }
L_089152DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08915304;
      }
      goto L_089152E4;
    }
L_089152E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891535C;
      }
      goto L_089152EC;
    }
L_089152EC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089153B4;
      }
      goto L_089152F4;
    }
L_089152F4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891540C;
      }
      goto L_089152FC;
    }
L_089152FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915594;
      }
      goto L_08915304;
    }
L_08915304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_0891533C;
      }
      goto L_08915310;
    }
L_08915310:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0891531Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0891531Cu) goto L_0891531C;
    return;
L_0891531C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915334;
      }
      goto L_08915328;
    }
L_08915328:
    ctx.gpr[31] = (0x08915330u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08915330u) goto L_08915330;
    return;
L_08915330:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08915334;
L_08915334:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_0891533C;
L_0891533C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08915348u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17340));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08915348u) goto L_08915348;
    return;
L_08915348:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08915354u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A541E4u>(ctx, &aot_mem) && ctx.pc == 0x08915354u) goto L_08915354;
    return;
L_08915354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915594;
      }
      goto L_0891535C;
    }
L_0891535C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_08915394;
      }
      goto L_08915368;
    }
L_08915368:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08915374u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08915374u) goto L_08915374;
    return;
L_08915374:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891538C;
      }
      goto L_08915380;
    }
L_08915380:
    ctx.gpr[31] = (0x08915388u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08915388u) goto L_08915388;
    return;
L_08915388:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_0891538C;
L_0891538C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_08915394;
L_08915394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x089153A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17348));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089153A0u) goto L_089153A0;
    return;
L_089153A0:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089153ACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A541E4u>(ctx, &aot_mem) && ctx.pc == 0x089153ACu) goto L_089153AC;
    return;
L_089153AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915594;
      }
      goto L_089153B4;
    }
L_089153B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_089153EC;
      }
      goto L_089153C0;
    }
L_089153C0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089153CCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089153CCu) goto L_089153CC;
    return;
L_089153CC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089153E4;
      }
      goto L_089153D8;
    }
L_089153D8:
    ctx.gpr[31] = (0x089153E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089153E0u) goto L_089153E0;
    return;
L_089153E0:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_089153E4;
L_089153E4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_089153EC;
L_089153EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x089153F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17356));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089153F8u) goto L_089153F8;
    return;
L_089153F8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08915404u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A541E4u>(ctx, &aot_mem) && ctx.pc == 0x08915404u) goto L_08915404;
    return;
L_08915404:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915594;
      }
      goto L_0891540C;
    }
L_0891540C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_08915444;
      }
      goto L_08915418;
    }
L_08915418:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08915424u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08915424u) goto L_08915424;
    return;
L_08915424:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891543C;
      }
      goto L_08915430;
    }
L_08915430:
    ctx.gpr[31] = (0x08915438u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08915438u) goto L_08915438;
    return;
L_08915438:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_0891543C;
L_0891543C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_08915444;
L_08915444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08915450u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17364));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08915450u) goto L_08915450;
    return;
L_08915450:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0891545Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A541E4u>(ctx, &aot_mem) && ctx.pc == 0x0891545Cu) goto L_0891545C;
    return;
L_0891545C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915594;
      }
      goto L_08915464;
    }
L_08915464:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891547C;
      }
      goto L_0891546C;
    }
L_0891546C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08915594;
      }
      goto L_08915474;
    }
L_08915474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915494;
      }
      goto L_0891547C;
    }
L_0891547C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089154EC;
      }
      goto L_08915484;
    }
L_08915484:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08915544;
      }
      goto L_0891548C;
    }
L_0891548C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915594;
      }
      goto L_08915494;
    }
L_08915494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_089154CC;
      }
      goto L_089154A0;
    }
L_089154A0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089154ACu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089154ACu) goto L_089154AC;
    return;
L_089154AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089154C4;
      }
      goto L_089154B8;
    }
L_089154B8:
    ctx.gpr[31] = (0x089154C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089154C0u) goto L_089154C0;
    return;
L_089154C0:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_089154C4;
L_089154C4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_089154CC;
L_089154CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x089154D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17372));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089154D8u) goto L_089154D8;
    return;
L_089154D8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089154E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A541E4u>(ctx, &aot_mem) && ctx.pc == 0x089154E4u) goto L_089154E4;
    return;
L_089154E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915594;
      }
      goto L_089154EC;
    }
L_089154EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_08915524;
      }
      goto L_089154F8;
    }
L_089154F8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08915504u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08915504u) goto L_08915504;
    return;
L_08915504:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891551C;
      }
      goto L_08915510;
    }
L_08915510:
    ctx.gpr[31] = (0x08915518u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08915518u) goto L_08915518;
    return;
L_08915518:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_0891551C;
L_0891551C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_08915524;
L_08915524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08915530u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17380));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08915530u) goto L_08915530;
    return;
L_08915530:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0891553Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A541E4u>(ctx, &aot_mem) && ctx.pc == 0x0891553Cu) goto L_0891553C;
    return;
L_0891553C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915594;
      }
      goto L_08915544;
    }
L_08915544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_0891557C;
      }
      goto L_08915550;
    }
L_08915550:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0891555Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0891555Cu) goto L_0891555C;
    return;
L_0891555C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915574;
      }
      goto L_08915568;
    }
L_08915568:
    ctx.gpr[31] = (0x08915570u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08915570u) goto L_08915570;
    return;
L_08915570:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08915574;
L_08915574:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_0891557C;
L_0891557C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08915588u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17388));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08915588u) goto L_08915588;
    return;
L_08915588:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08915594u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A541E4u>(ctx, &aot_mem) && ctx.pc == 0x08915594u) goto L_08915594;
    return;
L_08915594:
    ctx.gpr[31] = (0x0891559Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x0891559Cu) goto L_0891559C;
    return;
L_0891559C:
    ctx.gpr[31] = (0x089155A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x089155A4u) goto L_089155A4;
    return;
L_089155A4:
    ctx.gpr[31] = (0x089155ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x089155ACu) goto L_089155AC;
    return;
L_089155AC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25444)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08915614;
      }
      goto L_089155C0;
    }
L_089155C0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[4] = (16056u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20971u);
    ctx.fpr[13] = ctx.fpr[20] / ctx.fpr[13];
    ctx.gpr[31] = (0x0891560Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0891560Cu) goto L_0891560C;
    return;
L_0891560C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891565C;
      }
      goto L_08915614;
    }
L_08915614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[4] = (16102u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = ctx.fpr[20] / ctx.fpr[13];
    ctx.gpr[31] = (0x0891565Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x0891565Cu) goto L_0891565C;
    return;
L_0891565C:
    ctx.gpr[4] = (17392u << 16u);
    ctx.gpr[31] = (0x08915668u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08915668u) goto L_08915668;
    return;
L_08915668:
    ctx.gpr[31] = (0x08915670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x08915670u) goto L_08915670;
    return;
L_08915670:
    ctx.gpr[31] = (0x08915678u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08915678u) goto L_08915678;
    return;
L_08915678:
    ctx.gpr[31] = (0x08915680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55020u>(ctx, &aot_mem) && ctx.pc == 0x08915680u) goto L_08915680;
    return;
L_08915680:
    ctx.gpr[31] = (0x08915688u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08915688u) goto L_08915688;
    return;
L_08915688:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089156A4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089156A4u) goto L_089156A4;
    return;
L_089156A4:
    ctx.gpr[31] = (0x089156ACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x089156ACu) goto L_089156AC;
    return;
L_089156AC:
    ctx.gpr[31] = (0x089156B4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x089156B4u) goto L_089156B4;
    return;
L_089156B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089156CCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089156CCu) goto L_089156CC;
    return;
L_089156CC:
    ctx.gpr[31] = (0x089156D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x089156D4u) goto L_089156D4;
    return;
L_089156D4:
    ctx.gpr[5] = (17387u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (17286u << 16u);
    ctx.gpr[31] = (0x089156ECu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 79u, 0x08A545A4u>(ctx, &aot_mem) && ctx.pc == 0x089156ECu) goto L_089156EC;
    return;
L_089156EC:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891570C;
      }
      goto L_08915708;
    }
L_08915708:
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[24];
    goto L_0891570C;
L_0891570C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(856))))));
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[6] << 16u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0891573C;
      }
      goto L_08915730;
    }
L_08915730:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08915748;
      }
      goto L_0891573C;
    }
L_0891573C:
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[20] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    goto L_08915748;
L_08915748:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915768;
      }
      goto L_08915758;
    }
L_08915758:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_089157B8;
      }
      goto L_08915768;
    }
L_08915768:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[6] << 16u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089157A4;
      }
      goto L_08915798;
    }
L_08915798:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089157B0;
      }
      goto L_089157A4;
    }
L_089157A4:
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[20] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    goto L_089157B0;
L_089157B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915748;
      }
      goto L_089157B8;
    }
L_089157B8:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089157DC;
      }
      goto L_089157D8;
    }
L_089157D8:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    goto L_089157DC;
L_089157DC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = ctx.fpr[28] - ctx.fpr[13];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[15] = ctx.fpr[22] + ctx.fpr[19];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[18];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[17];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = ctx.fpr[22] - ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(858))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (15496u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 34953u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(858))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(858))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915A2C;
      }
      goto L_08915A08;
    }
L_08915A08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 96u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(865), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(864), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08915A48;
      }
      goto L_08915A2C;
    }
L_08915A2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 112u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(865), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08915A48;
L_08915A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[5] = (18292u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 9216u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915A8C;
      }
      goto L_08915A84;
    }
L_08915A84:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(854), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08915A94;
      }
      goto L_08915A8C;
    }
L_08915A8C:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(854), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08915A94;
L_08915A94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (14545u << 16u);
      if (branch_taken) {
          goto L_08915B10;
      }
      goto L_08915AA8;
    }
L_08915AA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08915B10;
      }
      goto L_08915AC4;
    }
L_08915AC4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
        goto L_08915AE8;
    }
    goto L_08915AE8;
L_08915AE8:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915B10;
      }
      goto L_08915AF8;
    }
L_08915AF8:
    ctx.gpr[31] = (0x08915B00u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08915B00u) goto L_08915B00;
    return;
L_08915B00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08915B10u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 647u, 0x08A96C58u>(ctx, &aot_mem) && ctx.pc == 0x08915B10u) goto L_08915B10;
    return;
L_08915B10:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
      if (branch_taken) {
          goto L_08915CA4;
      }
      goto L_08915B20;
    }
L_08915B20:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(876))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08915B48;
      }
      goto L_08915B30;
    }
L_08915B30:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08915CA4;
      }
      goto L_08915B38;
    }
L_08915B38:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08915B60;
      }
      goto L_08915B40;
    }
L_08915B40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915B9C;
      }
      goto L_08915B48;
    }
L_08915B48:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08915C08;
      }
      goto L_08915B50;
    }
L_08915B50:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08915C44;
      }
      goto L_08915B58;
    }
L_08915B58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915CA4;
      }
      goto L_08915B60;
    }
L_08915B60:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(865)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915B94;
      }
      goto L_08915B6C;
    }
L_08915B6C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(876), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 26u);
    ctx.gpr[31] = (0x08915B94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08915B94u) goto L_08915B94;
    return;
L_08915B94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915CA4;
      }
      goto L_08915B9C;
    }
L_08915B9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915BEC;
      }
      goto L_08915BAC;
    }
L_08915BAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08915BCC;
      }
      goto L_08915BC0;
    }
L_08915BC0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08915BCC;
L_08915BCC:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08915BE4u);
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    goto L_0891477C;
L_08915BE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915C00;
      }
      goto L_08915BEC;
    }
L_08915BEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08915BF8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_0891477C;
L_08915BF8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(876), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08915C00;
L_08915C00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915CA4;
      }
      goto L_08915C08;
    }
L_08915C08:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(865)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08915C3C;
      }
      goto L_08915C14;
    }
L_08915C14:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(876), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 27u);
    ctx.gpr[31] = (0x08915C3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08915C3Cu) goto L_08915C3C;
    return;
L_08915C3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915CA4;
      }
      goto L_08915C44;
    }
L_08915C44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915C90;
      }
      goto L_08915C54;
    }
L_08915C54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08915C74;
      }
      goto L_08915C68;
    }
L_08915C68:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08915C74;
L_08915C74:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08915C88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891477C;
L_08915C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915CA4;
      }
      goto L_08915C90;
    }
L_08915C90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08915C9Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_0891477C;
L_08915C9C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(876), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(864), static_cast<std::uint8_t>(0u));
    goto L_08915CA4;
L_08915CA4:
    ctx.gpr[31] = (0x08915CACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08915CACu) goto L_08915CAC;
    return;
L_08915CAC:
    ctx.gpr[31] = (0x08915CB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08915CB4u) goto L_08915CB4;
    return;
L_08915CB4:
    ctx.gpr[31] = (0x08915CBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 21u, 0x08A10124u>(ctx, &aot_mem) && ctx.pc == 0x08915CBCu) goto L_08915CBC;
    return;
L_08915CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.gpr[5] = (65534u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(854))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08915D8C;
      }
      goto L_08915CFC;
    }
L_08915CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3952)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915D50;
      }
      goto L_08915D18;
    }
L_08915D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08915DB0;
      }
      goto L_08915D24;
    }
L_08915D24:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08915D48u);
    ctx.gpr[5] = (0u | 197u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08915D48u) goto L_08915D48;
    return;
L_08915D48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915DB0;
      }
      goto L_08915D50;
    }
L_08915D50:
    ctx.gpr[31] = (0x08915D58u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08915D58u) goto L_08915D58;
    return;
L_08915D58:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08915D84;
      }
      goto L_08915D78;
    }
L_08915D78:
    ctx.gpr[4] = (0u | 197u);
    ctx.gpr[31] = (0x08915D84u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08915D84u) goto L_08915D84;
    return;
L_08915D84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08915DB0;
      }
      goto L_08915D8C;
    }
L_08915D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915DB0;
      }
      goto L_08915D98;
    }
L_08915D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08915DB0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08915DB0u) goto L_08915DB0;
    return;
L_08915DB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(866)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915FF0;
      }
      goto L_08915DBC;
    }
L_08915DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08915FF0;
      }
      goto L_08915DD0;
    }
L_08915DD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (16928u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16968u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (2227u << 16u);
      if (branch_taken) {
          goto L_08915E10;
      }
      goto L_08915DFC;
    }
L_08915DFC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08915E10;
L_08915E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08915E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08915E74u) goto L_08915E74;
    return;
L_08915E74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[14];
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[20];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08915EB8;
    }
    goto L_08915EB8;
L_08915EB8:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[20];
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_08915EDC;
    }
    goto L_08915EDC;
L_08915EDC:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[19] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_08915EFC;
    }
    goto L_08915EFC;
L_08915EFC:
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[20];
    ctx.gpr[20] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
        goto L_08915F1C;
    }
    goto L_08915F1C;
L_08915F1C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08915F40;
      }
      goto L_08915F30;
    }
L_08915F30:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08915F50;
      }
      goto L_08915F40;
    }
L_08915F40:
    ctx.gpr[31] = (0x08915F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 155u, 0x088C4C18u>(ctx, &aot_mem) && ctx.pc == 0x08915F48u) goto L_08915F48;
    return;
L_08915F48:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08915F50;
L_08915F50:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[18] << 5u);
      if (branch_taken) {
          goto L_08915FF0;
      }
      goto L_08915F60;
    }
L_08915F60:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[18] = (2227u << 16u);
    goto L_08915F70;
L_08915F70:
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08915FE0;
      }
      goto L_08915F80;
    }
L_08915F80:
    ctx.gpr[30] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[30] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (ctx.gpr[4] - ctx.gpr[30]);
    goto L_08915F90;
L_08915F90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[30]);
    ctx.gpr[31] = (0x08915FA8u);
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(20));
    goto L_08914968;
L_08915FA8:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08915FB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08914968;
L_08915FB4:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08915FC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08914968;
L_08915FC0:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08915FCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08914968;
L_08915FCC:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
      if (branch_taken) {
          goto L_08915F90;
      }
      goto L_08915FE0;
    }
L_08915FE0:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08915F70;
      }
      goto L_08915FF0;
    }
L_08915FF0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08916038:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891607Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 509u, 0x0889E8ACu>(ctx, &aot_mem) && ctx.pc == 0x0891607Cu) goto L_0891607C;
    return;
L_0891607C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(866)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916388;
      }
      goto L_08916088;
    }
L_08916088:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[30]) || std::isnan(ctx.fpr[22])) && ctx.fpr[30] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08916104;
      }
      goto L_089160E4;
    }
L_089160E4:
    ctx.fpr[12] = ctx.fpr[28] / ctx.fpr[30];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891611C;
      }
      goto L_08916104;
    }
L_08916104:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    goto L_0891611C;
L_0891611C:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08916388;
      }
      goto L_08916144;
    }
L_08916144:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (17056u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16320u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(11));
      if (branch_taken) {
          goto L_08916194;
      }
      goto L_08916180;
    }
L_08916180:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08916194;
L_08916194:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089161BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08914470;
L_089161BC:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089161FCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x089161FCu) goto L_089161FC;
    return;
L_089161FC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[28];
    ctx.gpr[4] = (48998u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
      if (branch_taken) {
          goto L_08916300;
      }
      goto L_08916258;
    }
L_08916258:
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08916300;
      }
      goto L_08916270;
    }
L_08916270:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 2u);
    ctx.gpr[31] = (0x089162B4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x089162B4u) goto L_089162B4;
    return;
L_089162B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 2u);
    ctx.gpr[31] = (0x089162F8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x089162F8u) goto L_089162F8;
    return;
L_089162F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916388;
      }
      goto L_08916300;
    }
L_08916300:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08916344u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08916344u) goto L_08916344;
    return;
L_08916344:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08916388u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08916388u) goto L_08916388;
    return;
L_08916388:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(867)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089164D0;
      }
      goto L_08916394;
    }
L_08916394:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089163C0;
      }
      goto L_089163AC;
    }
L_089163AC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089163C0;
L_089163C0:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089163E0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08914470;
L_089163E0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08916428u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08916428u) goto L_08916428;
    return;
L_08916428:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17056u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x0891648Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x0891648Cu) goto L_0891648C;
    return;
L_0891648C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(13));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x089164D0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x089164D0u) goto L_089164D0;
    return;
L_089164D0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08916510:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[31]);
    ctx.gpr[31] = (0x08916550u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17396));
    goto L_08914444;
L_08916550:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089165A4;
      }
      goto L_08916560;
    }
L_08916560:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24764));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24776));
    ctx.gpr[4] = (16800u << 16u);
    ctx.gpr[30] = (0u | 1u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-497));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089165B4;
      }
      goto L_0891659C;
    }
L_0891659C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089165C0;
      }
      goto L_089165A4;
    }
L_089165A4:
    ctx.gpr[31] = (0x089165ACu);
    // nop
    goto L_08914C34;
L_089165AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916968;
      }
      goto L_089165B4;
    }
L_089165B4:
    ctx.gpr[31] = (0x089165BCu);
    ctx.gpr[4] = (0u | 0u);
    goto L_08914770;
L_089165BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089165C0;
L_089165C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[30]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[31] = (0x08916604u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08916604u) goto L_08916604;
    return;
L_08916604:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08916614u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17264));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28BB8u>(ctx, &aot_mem) && ctx.pc == 0x08916614u) goto L_08916614;
    return;
L_08916614:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916628;
      }
      goto L_0891661C;
    }
L_0891661C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08916628u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08916628u) goto L_08916628;
    return;
L_08916628:
    ctx.gpr[31] = (0x08916630u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08916630u) goto L_08916630;
    return;
L_08916630:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] | 0u);
    goto L_0891663C;
L_0891663C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08916648u);
    ctx.gpr[4] = (0u | 944u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x08916648u) goto L_08916648;
    return;
L_08916648:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08916664;
      }
      goto L_08916654;
    }
L_08916654:
    ctx.gpr[5] = (0u | 197u);
    ctx.gpr[31] = (0x08916660u);
    ctx.gpr[6] = (0u | 4u);
    goto L_0891451C;
L_08916660:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_08916664;
L_08916664:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08916678u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x08916678u) goto L_08916678;
    return;
L_08916678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(866), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(852), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(867), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(856), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(858), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089166C8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x089166C8u) goto L_089166C8;
    return;
L_089166C8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0891663C;
      }
      goto L_089166DC;
    }
L_089166DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[30]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint16_t>(ctx.gpr[30]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(94), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(102), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(103), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(115), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] | 0u);
    goto L_08916770;
L_08916770:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0891677Cu);
    ctx.gpr[4] = (0u | 944u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x0891677Cu) goto L_0891677C;
    return;
L_0891677C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08916798;
      }
      goto L_08916788;
    }
L_08916788:
    ctx.gpr[5] = (0u | 197u);
    ctx.gpr[31] = (0x08916794u);
    ctx.gpr[6] = (0u | 4u);
    goto L_0891451C;
L_08916794:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_08916798;
L_08916798:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089167ACu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x089167ACu) goto L_089167AC;
    return;
L_089167AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(866), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(852), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(867), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(856), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(858), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(868), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[31] = (0x08916800u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08916800u) goto L_08916800;
    return;
L_08916800:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08916770;
      }
      goto L_08916814;
    }
L_08916814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (0u | 0u);
    goto L_08916824;
L_08916824:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08916874;
      }
      goto L_08916848;
    }
L_08916848:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24792)));
    goto L_0891684C;
L_0891684C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24792)));
        goto L_0891684C;
    }
    goto L_08916874;
L_08916874:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(112)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08916824;
      }
      goto L_089168BC;
    }
L_089168BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (0u | 0u);
    goto L_089168CC;
L_089168CC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_0891691C;
      }
      goto L_089168F0;
    }
L_089168F0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24792)));
    goto L_089168F4;
L_089168F4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24792)));
        goto L_089168F4;
    }
    goto L_0891691C;
L_0891691C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(116)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089168CC;
      }
      goto L_08916968;
    }
L_08916968:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089169A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (17224u << 16u);
      if (branch_taken) {
          goto L_08916A1C;
      }
      goto L_089169D0;
    }
L_089169D0:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (20352u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08916A24;
      }
      goto L_08916A14;
    }
L_08916A14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916C34;
      }
      goto L_08916A1C;
    }
L_08916A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916DF4;
      }
      goto L_08916A24;
    }
L_08916A24:
    ctx.gpr[5] = (17608u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08916C34;
      }
      goto L_08916A3C;
    }
L_08916A3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17402u << 16u);
      if (branch_taken) {
          goto L_08916C34;
      }
      goto L_08916A58;
    }
L_08916A58:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08916C34;
      }
      goto L_08916A6C;
    }
L_08916A6C:
    ctx.gpr[4] = (14080u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24792)));
    goto L_08916A84;
L_08916A84:
    ctx.gpr[5] = (ctx.gpr[10] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    if (static_cast<std::int32_t>(ctx.gpr[7]) < 0) {
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
        goto L_08916AB8;
    }
    goto L_08916AB8;
L_08916AB8:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08916B08;
      }
      goto L_08916AD8;
    }
L_08916AD8:
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08916ADC;
L_08916ADC:
    ctx.gpr[8] = (ctx.gpr[6] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[8] << 4u);
    ctx.gpr[6] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08916ADC;
    }
    goto L_08916B08;
L_08916B08:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08916B3C;
      }
      goto L_08916B14;
    }
L_08916B14:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08916C14;
      }
      goto L_08916B1C;
    }
L_08916B1C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[10] << 2u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08916C14;
      }
      goto L_08916B3C;
    }
L_08916B3C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08916B54;
      }
      goto L_08916B44;
    }
L_08916B44:
    if (ctx.gpr[5] != 0u) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
        goto L_08916BA8;
    }
    goto L_08916B4C;
L_08916B4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916C14;
      }
      goto L_08916B54;
    }
L_08916B54:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[10] << 2u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08916C14;
      }
      goto L_08916BA8;
    }
L_08916BA8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[10] << 2u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[17] + ctx.fpr[15];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(112)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08916C14;
L_08916C14:
    ctx.gpr[5] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[5] << 16u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[10]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24792)));
        goto L_08916A84;
    }
    goto L_08916C2C;
L_08916C2C:
    ctx.gpr[31] = (0x08916C34u);
    // nop
    goto L_08914498;
L_08916C34:
    ctx.gpr[5] = (13952u << 16u);
    ctx.gpr[8] = (4u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24792)));
    goto L_08916C4C;
L_08916C4C:
    ctx.gpr[6] = (ctx.gpr[4] << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[8]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
        goto L_08916C80;
    }
    goto L_08916C80;
L_08916C80:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08916CD0;
      }
      goto L_08916CA0;
    }
L_08916CA0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08916CA4;
L_08916CA4:
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[10] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08916CA4;
      }
      goto L_08916CD0;
    }
L_08916CD0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08916D04;
      }
      goto L_08916CDC;
    }
L_08916CDC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08916DDC;
      }
      goto L_08916CE4;
    }
L_08916CE4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08916DDC;
      }
      goto L_08916D04;
    }
L_08916D04:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08916D1C;
      }
      goto L_08916D0C;
    }
L_08916D0C:
    if (ctx.gpr[6] != 0u) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
        goto L_08916D70;
    }
    goto L_08916D14;
L_08916D14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08916DDC;
      }
      goto L_08916D1C;
    }
L_08916D1C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08916DDC;
      }
      goto L_08916D70;
    }
L_08916D70:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[17] + ctx.fpr[15];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24792)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08916DDC;
L_08916DDC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24792)));
        goto L_08916C4C;
    }
    goto L_08916DF4;
L_08916DF4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08916E18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24708)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24704)));
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24712), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24732)));
    ctx.gpr[3] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24744)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24740)));
    ctx.gpr[24] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(24748), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24756), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2227u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(24720), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(24716), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (15744u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[14] = (2227u << 16u);
    ctx.gpr[8] = (16281u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(24724), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24728), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(24736), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[25] = (2227u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(24752), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24760), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08916F0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08916F2Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08916F2Cu) goto L_08916F2C;
    return;
L_08916F2C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08916F38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08916F58u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08916F58u) goto L_08916F58;
    return;
L_08916F58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08916F8C;
      }
      goto L_08916F74;
    }
L_08916F74:
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    goto L_08916F78;
L_08916F78:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08916F78;
      }
      goto L_08916F8C;
    }
L_08916F8C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08916FFC;
      }
      goto L_08916FA0;
    }
L_08916FA0:
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (0u | 0u);
    goto L_08916FA8;
L_08916FA8:
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[3]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08916FEC;
      }
      goto L_08916FB8;
    }
L_08916FB8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    goto L_08916FBC;
L_08916FBC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] & ctx.gpr[9]);
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
        goto L_08916FBC;
    }
    goto L_08916FE4;
L_08916FE4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08916FEC;
L_08916FEC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08916FA8;
      }
      goto L_08916FFC;
    }
L_08916FFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x0891701Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0891701Cu) goto L_0891701C;
    return;
L_0891701C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891703C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(17));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08917078u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08917078u) goto L_08917078;
    return;
L_08917078:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089170A8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x089170A8u) goto L_089170A8;
    return;
L_089170A8:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (16384u << 16u);
      if (branch_taken) {
          goto L_08917118;
      }
      goto L_08917100;
    }
L_08917100:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08917118;
      }
      goto L_08917110;
    }
L_08917110:
    ctx.gpr[31] = (0x08917118u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    goto L_08916F38;
L_08917118:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891713C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] >> 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089171B8;
      }
      goto L_08917184;
    }
L_08917184:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_0891718C;
L_0891718C:
    ctx.gpr[8] = (ctx.gpr[19] << 5u);
    ctx.gpr[9] = (ctx.gpr[19] >> 2u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[19] = (ctx.gpr[19] ^ ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_0891718C;
      }
      goto L_089171B8;
    }
L_089171B8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891720C;
      }
      goto L_089171D4;
    }
L_089171D4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08917200;
      }
      goto L_089171E4;
    }
L_089171E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089171F0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 371u, 0x08AED4A0u>(ctx, &aot_mem) && ctx.pc == 0x089171F0u) goto L_089171F0;
    return;
L_089171F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08917200;
      }
      goto L_089171F8;
    }
L_089171F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08917220;
      }
      goto L_08917200;
    }
L_08917200:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089171D4;
      }
      goto L_0891720C;
    }
L_0891720C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08917220u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_0891703C;
L_08917220:
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
L_08917240:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08917268u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08917268u) goto L_08917268;
    return;
L_08917268:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089172B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089172C4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 612u, 0x0887360Cu>(ctx, &aot_mem) && ctx.pc == 0x089172C4u) goto L_089172C4;
    return;
L_089172C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089172D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089172E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 608u, 0x088735CCu>(ctx, &aot_mem) && ctx.pc == 0x089172E0u) goto L_089172E0;
    return;
L_089172E0:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089172F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08917304u);
    ctx.gpr[4] = (0u | 2u);
    goto L_08917350;
L_08917304:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08917314:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08917328u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17456));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 404u, 0x08AED66Cu>(ctx, &aot_mem) && ctx.pc == 0x08917328u) goto L_08917328;
    return;
L_08917328:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08917340;
      }
      goto L_08917330;
    }
L_08917330:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24800), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08917344;
      }
      goto L_08917340;
    }
L_08917340:
    ctx.gpr[2] = (0u | 0u);
    goto L_08917344;
L_08917344:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08917350:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891736Cu);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 751u, 0x089C2FDCu>(ctx, &aot_mem) && ctx.pc == 0x0891736Cu) goto L_0891736C;
    return;
L_0891736C:
    ctx.gpr[5] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08917388;
      }
      goto L_08917378;
    }
L_08917378:
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1896));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_08917388;
L_08917388:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08917458;
      }
      goto L_08917394;
    }
L_08917394:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917450;
      }
      goto L_089173A4;
    }
L_089173A4:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(17472)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089173BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0891745C;
      }
      goto L_089173C4;
    }
L_089173C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089173D0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_089172F0;
L_089173D0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_089173D8;
    }
    goto L_089173D8;
L_089173D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0891745C;
      }
      goto L_089173E0;
    }
L_089173E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089173ECu);
    ctx.gpr[16] = (0u | 0u);
    goto L_08917314;
L_089173EC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_089173F4;
    }
    goto L_089173F4;
L_089173F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0891745C;
      }
      goto L_089173FC;
    }
L_089173FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891745C;
      }
      goto L_08917404;
    }
L_08917404:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0891745C;
      }
      goto L_0891740C;
    }
L_0891740C:
    ctx.gpr[31] = (0x08917414u);
    // nop
    goto L_08917470;
L_08917414:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0891745C;
      }
      goto L_0891741C;
    }
L_0891741C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08917428u);
    ctx.gpr[16] = (0u | 0u);
    goto L_0891749C;
L_08917428:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08917430;
    }
    goto L_08917430;
L_08917430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0891745C;
      }
      goto L_08917438;
    }
L_08917438:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0891745C;
      }
      goto L_08917440;
    }
L_08917440:
    ctx.gpr[31] = (0x08917448u);
    // nop
    goto L_089175AC;
L_08917448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_0891745C;
      }
      goto L_08917450;
    }
L_08917450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891745C;
      }
      goto L_08917458;
    }
L_08917458:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_0891745C;
L_0891745C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08917470:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08917480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 616u, 0x088B7C50u>(ctx, &aot_mem) && ctx.pc == 0x08917480u) goto L_08917480;
    return;
L_08917480:
    ctx.gpr[31] = (0x08917488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 617u, 0x088B7C58u>(ctx, &aot_mem) && ctx.pc == 0x08917488u) goto L_08917488;
    return;
L_08917488:
    ctx.gpr[31] = (0x08917490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 618u, 0x088B7C60u>(ctx, &aot_mem) && ctx.pc == 0x08917490u) goto L_08917490;
    return;
L_08917490:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891749C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089174BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21928));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 533u, 0x088B6F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089174BCu) goto L_089174BC;
    return;
L_089174BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917584;
      }
      goto L_089174C4;
    }
L_089174C4:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x089174D0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08917350;
L_089174D0:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x089174DCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08917350;
L_089174DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891757C;
      }
      goto L_089174E4;
    }
L_089174E4:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x089174F0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08917350;
L_089174F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917574;
      }
      goto L_089174F8;
    }
L_089174F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08917508u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 537u, 0x088B6FF0u>(ctx, &aot_mem) && ctx.pc == 0x08917508u) goto L_08917508;
    return;
L_08917508:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917564;
      }
      goto L_08917510;
    }
L_08917510:
    ctx.gpr[4] = (0u | 19u);
    ctx.gpr[31] = (0x0891751Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08917350;
L_0891751C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891754C;
      }
      goto L_08917524;
    }
L_08917524:
    ctx.gpr[31] = (0x0891752Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 566u, 0x088B78A8u>(ctx, &aot_mem) && ctx.pc == 0x0891752Cu) goto L_0891752C;
    return;
L_0891752C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891758C;
      }
      goto L_08917534;
    }
L_08917534:
    ctx.gpr[31] = (0x0891753Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 617u, 0x088B7C58u>(ctx, &aot_mem) && ctx.pc == 0x0891753Cu) goto L_0891753C;
    return;
L_0891753C:
    ctx.gpr[31] = (0x08917544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 618u, 0x088B7C60u>(ctx, &aot_mem) && ctx.pc == 0x08917544u) goto L_08917544;
    return;
L_08917544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891759C;
      }
      goto L_0891754C;
    }
L_0891754C:
    ctx.gpr[31] = (0x08917554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 617u, 0x088B7C58u>(ctx, &aot_mem) && ctx.pc == 0x08917554u) goto L_08917554;
    return;
L_08917554:
    ctx.gpr[31] = (0x0891755Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 618u, 0x088B7C60u>(ctx, &aot_mem) && ctx.pc == 0x0891755Cu) goto L_0891755C;
    return;
L_0891755C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891759C;
      }
      goto L_08917564;
    }
L_08917564:
    ctx.gpr[31] = (0x0891756Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 618u, 0x088B7C60u>(ctx, &aot_mem) && ctx.pc == 0x0891756Cu) goto L_0891756C;
    return;
L_0891756C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891759C;
      }
      goto L_08917574;
    }
L_08917574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891759C;
      }
      goto L_0891757C;
    }
L_0891757C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891759C;
      }
      goto L_08917584;
    }
L_08917584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891759C;
      }
      goto L_0891758C;
    }
L_0891758C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08917598u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08917350;
L_08917598:
    ctx.gpr[2] = (0u | 1u);
    goto L_0891759C;
L_0891759C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089175AC:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17464));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-1896), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 480u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1896));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 272u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08917604:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6796), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08917610:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-6796)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08917660;
      }
      goto L_08917648;
    }
L_08917648:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08917840;
      }
      goto L_08917650;
    }
L_08917650:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08917678;
      }
      goto L_08917658;
    }
L_08917658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917840;
      }
      goto L_08917660;
    }
L_08917660:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08917838;
      }
      goto L_08917668;
    }
L_08917668:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917840;
      }
      goto L_08917670;
    }
L_08917670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917840;
      }
      goto L_08917678;
    }
L_08917678:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6756)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6764)));
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    ctx.gpr[20] = (2229u << 16u);
      if (branch_taken) {
          goto L_08917714;
      }
      goto L_089176A0;
    }
L_089176A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08917714;
      }
      goto L_089176A8;
    }
L_089176A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089176C4;
      }
      goto L_089176B4;
    }
L_089176B4:
    ctx.gpr[31] = (0x089176BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089176BCu) goto L_089176BC;
    return;
L_089176BC:
    ctx.gpr[31] = (0x089176C4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 352u, 0x089457ACu>(ctx, &aot_mem) && ctx.pc == 0x089176C4u) goto L_089176C4;
    return;
L_089176C4:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(-6796), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(26132), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6756), ctx.gpr[6]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917704;
      }
      goto L_089176F0;
    }
L_089176F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 97u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08917704u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08917704u) goto L_08917704;
    return;
L_08917704:
    ctx.gpr[31] = (0x0891770Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 95u, 0x08918610u>(ctx, &aot_mem) && ctx.pc == 0x0891770Cu) goto L_0891770C;
    return;
L_0891770C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089177A4;
      }
      goto L_08917714;
    }
L_08917714:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[21] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-7827));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_08917748;
      }
      goto L_0891773C;
    }
L_0891773C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891775C;
      }
      goto L_08917748;
    }
L_08917748:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0891775C;
L_0891775C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0891776Cu);
    ctx.gpr[5] = (0u | 95u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0891776Cu) goto L_0891776C;
    return;
L_0891776C:
    ctx.gpr[4] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-6760)));
    ctx.gpr[19] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089177A4;
      }
      goto L_08917784;
    }
L_08917784:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089177A0;
      }
      goto L_08917790;
    }
L_08917790:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 167u);
    ctx.gpr[31] = (0x089177A0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x089177A0u) goto L_089177A0;
    return;
L_089177A0:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-6760), ctx.gpr[19]);
    goto L_089177A4;
L_089177A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08917830;
      }
      goto L_089177B0;
    }
L_089177B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6772)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08917830;
      }
      goto L_089177C0;
    }
L_089177C0:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(-6796), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(26132), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6734)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089177EC;
      }
      goto L_089177E4;
    }
L_089177E4:
    ctx.gpr[31] = (0x089177ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 182u, 0x08844F3Cu>(ctx, &aot_mem) && ctx.pc == 0x089177ECu) goto L_089177EC;
    return;
L_089177EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[31] = (0x089177F8u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6756), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089177F8u) goto L_089177F8;
    return;
L_089177F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08917804u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 204u, 0x08944DF4u>(ctx, &aot_mem) && ctx.pc == 0x08917804u) goto L_08917804;
    return;
L_08917804:
    ctx.gpr[31] = (0x0891780Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 95u, 0x08918610u>(ctx, &aot_mem) && ctx.pc == 0x0891780Cu) goto L_0891780C;
    return;
L_0891780C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917830;
      }
      goto L_0891781C;
    }
L_0891781C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08917830u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08917830u) goto L_08917830;
    return;
L_08917830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917840;
      }
      goto L_08917838;
    }
L_08917838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917840;
      }
      goto L_08917840;
    }
L_08917840:
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
L_08917868:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (0u | 60000u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[7] = (0u | 1000u);
    ctx.gpr[8] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(9432));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17616));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[8]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[31] = (0x089178E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x089178E4u) goto L_089178E4;
    return;
L_089178E4:
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-5136));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089178F8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x089178F8u) goto L_089178F8;
    return;
L_089178F8:
    ctx.gpr[31] = (0x08917900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 512u, 0x08987034u>(ctx, &aot_mem) && ctx.pc == 0x08917900u) goto L_08917900;
    return;
L_08917900:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08917910u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08917910u) goto L_08917910;
    return;
L_08917910:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891798C;
      }
      goto L_08917920;
    }
L_08917920:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08917938u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08917938u) goto L_08917938;
    return;
L_08917938:
    ctx.gpr[31] = (0x08917940u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08917940u) goto L_08917940;
    return;
L_08917940:
    ctx.gpr[9] = (17365u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (0u | 45u);
    ctx.gpr[9] = (17042u << 16u);
    ctx.gpr[5] = (0u | 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08917968u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x08917968u) goto L_08917968;
    return;
L_08917968:
    ctx.gpr[6] = (17387u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (17026u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08917984u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08917984u) goto L_08917984;
    return;
L_08917984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08917A48;
      }
      goto L_0891798C;
    }
L_0891798C:
    ctx.gpr[31] = (0x08917994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 226u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08917994u) goto L_08917994;
    return;
L_08917994:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089179A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x089179A0u) goto L_089179A0;
    return;
L_089179A0:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089179B0u);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x089179B0u) goto L_089179B0;
    return;
L_089179B0:
    ctx.gpr[4] = (17386u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = ctx.fpr[22] - ctx.fpr[20];
      if (branch_taken) {
          goto L_089179F0;
      }
      goto L_089179C8;
    }
L_089179C8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089179D4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089179D4u) goto L_089179D4;
    return;
L_089179D4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089179EC;
      }
      goto L_089179E0;
    }
L_089179E0:
    ctx.gpr[31] = (0x089179E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089179E8u) goto L_089179E8;
    return;
L_089179E8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089179EC;
L_089179EC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_089179F0;
L_089179F0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08917A00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17624));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08917A00u) goto L_08917A00;
    return;
L_08917A00:
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08917A18u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08917A18u) goto L_08917A18;
    return;
L_08917A18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x08917A28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08917A28u) goto L_08917A28;
    return;
L_08917A28:
    ctx.gpr[31] = (0x08917A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 226u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08917A30u) goto L_08917A30;
    return;
L_08917A30:
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08917A48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08917A48u) goto L_08917A48;
    return;
L_08917A48:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08917A6C:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6796)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08917A78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.gpr[22] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] & 65535u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.gpr[6] = (0u | 42u);
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[23] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08917AE8;
      }
      goto L_08917ADC;
    }
L_08917ADC:
    ctx.gpr[21] = (0u | 23u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08917B10;
      }
      goto L_08917AE8;
    }
L_08917AE8:
    ctx.gpr[4] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 39u);
      if (branch_taken) {
          goto L_08917AFC;
      }
      goto L_08917AF4;
    }
L_08917AF4:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08917B08;
      }
      goto L_08917AFC;
    }
L_08917AFC:
    ctx.gpr[21] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08917B10;
      }
      goto L_08917B08;
    }
L_08917B08:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[21]) < 37 ? 1u : 0u);
    goto L_08917B10;
L_08917B10:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6796), static_cast<std::uint16_t>(ctx.gpr[30]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6792), ctx.gpr[18]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6772), ctx.gpr[19]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6768), ctx.gpr[19]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6788), ctx.gpr[7]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6784), ctx.gpr[9]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6780), ctx.gpr[10]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6776), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-6740), ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08917B88;
      }
      goto L_08917B5C;
    }
L_08917B5C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08917B68u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08917B68u) goto L_08917B68;
    return;
L_08917B68:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917B80;
      }
      goto L_08917B74;
    }
L_08917B74:
    ctx.gpr[31] = (0x08917B7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08917B7Cu) goto L_08917B7C;
    return;
L_08917B7C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08917B80;
L_08917B80:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[16] = (2230u << 16u);
    goto L_08917B88;
L_08917B88:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08917B98u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17632));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08917B98u) goto L_08917B98;
    return;
L_08917B98:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08917BAC;
      }
      goto L_08917BA0;
    }
L_08917BA0:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-6740), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6734), static_cast<std::uint8_t>(ctx.gpr[30]));
      if (branch_taken) {
          goto L_08917BB0;
      }
      goto L_08917BAC;
    }
L_08917BAC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6734), static_cast<std::uint8_t>(0u));
    goto L_08917BB0;
L_08917BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-6736), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6735), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6764), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6756), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6760), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08917E2C;
      }
      goto L_08917BFC;
    }
L_08917BFC:
    ctx.gpr[4] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08917C1C;
      }
      goto L_08917C08;
    }
L_08917C08:
    ctx.gpr[31] = (0x08917C10u);
    ctx.gpr[4] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08917C10u) goto L_08917C10;
    return;
L_08917C10:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08917C54;
      }
      goto L_08917C1C;
    }
L_08917C1C:
    ctx.gpr[4] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 40u);
      if (branch_taken) {
          goto L_08917C30;
      }
      goto L_08917C28;
    }
L_08917C28:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08917C44;
      }
      goto L_08917C30;
    }
L_08917C30:
    ctx.gpr[31] = (0x08917C38u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08917C38u) goto L_08917C38;
    return;
L_08917C38:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08917C54;
      }
      goto L_08917C44;
    }
L_08917C44:
    ctx.gpr[31] = (0x08917C4Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08917C4Cu) goto L_08917C4C;
    return;
L_08917C4C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    goto L_08917C54;
L_08917C54:
    ctx.gpr[31] = (0x08917C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08917C5Cu) goto L_08917C5C;
    return;
L_08917C5C:
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08917C7Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6752), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08917C7Cu) goto L_08917C7C;
    return;
L_08917C7C:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x08917C90u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6748), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08917C90u) goto L_08917C90;
    return;
L_08917C90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6744), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6752)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917CFC;
      }
      goto L_08917CC0;
    }
L_08917CC0:
    ctx.gpr[31] = (0x08917CC8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08917CC8u) goto L_08917CC8;
    return;
L_08917CC8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08917CF4;
      }
      goto L_08917CE0;
    }
L_08917CE0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08917CF4;
L_08917CF4:
    ctx.gpr[31] = (0x08917CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 235u, 0x08A7D460u>(ctx, &aot_mem) && ctx.pc == 0x08917CFCu) goto L_08917CFC;
    return;
L_08917CFC:
    ctx.gpr[31] = (0x08917D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08917D04u) goto L_08917D04;
    return;
L_08917D04:
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6752)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08917D18u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 450u, 0x088D6278u>(ctx, &aot_mem) && ctx.pc == 0x08917D18u) goto L_08917D18;
    return;
L_08917D18:
    ctx.gpr[31] = (0x08917D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08917D20u) goto L_08917D20;
    return;
L_08917D20:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 30000u);
    ctx.gpr[31] = (0x08917D34u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08917D34u) goto L_08917D34;
    return;
L_08917D34:
    ctx.gpr[31] = (0x08917D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08917D3Cu) goto L_08917D3C;
    return;
L_08917D3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08917D48u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x08917D48u) goto L_08917D48;
    return;
L_08917D48:
    ctx.gpr[31] = (0x08917D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08917D50u) goto L_08917D50;
    return;
L_08917D50:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08917D5Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 10u, 0x089440A0u>(ctx, &aot_mem) && ctx.pc == 0x08917D5Cu) goto L_08917D5C;
    return;
L_08917D5C:
    ctx.gpr[31] = (0x08917D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08917D64u) goto L_08917D64;
    return;
L_08917D64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917E2C;
      }
      goto L_08917D6C;
    }
L_08917D6C:
    ctx.gpr[31] = (0x08917D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08917D74u) goto L_08917D74;
    return;
L_08917D74:
    ctx.gpr[31] = (0x08917D7Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08917D7Cu) goto L_08917D7C;
    return;
L_08917D7C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[31] = (0x08917D88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 585u, 0x0899F1DCu>(ctx, &aot_mem) && ctx.pc == 0x08917D88u) goto L_08917D88;
    return;
L_08917D88:
    ctx.gpr[31] = (0x08917D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08917D90u) goto L_08917D90;
    return;
L_08917D90:
    ctx.gpr[31] = (0x08917D98u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08917D98u) goto L_08917D98;
    return;
L_08917D98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08917DB8u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08917DB8u) goto L_08917DB8;
    return;
L_08917DB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08917DD8u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08917DD8u) goto L_08917DD8;
    return;
L_08917DD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08917DF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08917DF8u) goto L_08917DF8;
    return;
L_08917DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08917E0C;
    }
    goto L_08917E0C;
L_08917E0C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08917E1Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 668u, 0x0899F758u>(ctx, &aot_mem) && ctx.pc == 0x08917E1Cu) goto L_08917E1C;
    return;
L_08917E1C:
    ctx.gpr[31] = (0x08917E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08917E24u) goto L_08917E24;
    return;
L_08917E24:
    ctx.gpr[31] = (0x08917E2Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 198u, 0x08944DA0u>(ctx, &aot_mem) && ctx.pc == 0x08917E2Cu) goto L_08917E2C;
    return;
L_08917E2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917E50;
      }
      goto L_08917E3C;
    }
L_08917E3C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 94u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08917E50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08917E50u) goto L_08917E50;
    return;
L_08917E50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08917E80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-6796), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[21] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-6792), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6772), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6788), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6784), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6780), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6776), 0u);
    ctx.gpr[19] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-6740), 0u);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_08917F34;
      }
      goto L_08917F0C;
    }
L_08917F0C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08917F18u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08917F18u) goto L_08917F18;
    return;
L_08917F18:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08917F30;
      }
      goto L_08917F24;
    }
L_08917F24:
    ctx.gpr[31] = (0x08917F2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08917F2Cu) goto L_08917F2C;
    return;
L_08917F2C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08917F30;
L_08917F30:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_08917F34;
L_08917F34:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08917F44u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17632));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08917F44u) goto L_08917F44;
    return;
L_08917F44:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[2];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6792)));
      if (branch_taken) {
          goto L_08917F58;
      }
      goto L_08917F4C;
    }
L_08917F4C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-6740), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(-6734), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08917F5C;
      }
      goto L_08917F58;
    }
L_08917F58:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(-6734), static_cast<std::uint8_t>(0u));
    goto L_08917F5C;
L_08917F5C:
    ctx.gpr[4] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[30]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6736), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6735), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6764), ctx.gpr[30]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6756), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 37 ? 1u : 0u);
    ctx.gpr[6] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6760), ctx.gpr[6]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 29u, 0x08918198u>(ctx, &aot_mem); return;
      }
      goto L_08917FA0;
    }
L_08917FA0:
    ctx.gpr[31] = (0x08917FA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08917FA8u) goto L_08917FA8;
    return;
L_08917FA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08917FB4u);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08917FB4u) goto L_08917FB4;
    return;
L_08917FB4:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08917FD8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6752), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08917FD8u) goto L_08917FD8;
    return;
L_08917FD8:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x08917FECu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6748), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08917FECu) goto L_08917FEC;
    return;
L_08917FEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.pc = 0x08918000u; return;
}

void recomp_unit_0068(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0068_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_68(Runtime &runtime) {
    runtime.register_generated_unit(68u, 0x08914000u, 16384u, &recomp_unit_0068, &recomp_unit_0068_entry);
    runtime.register_function(0x08914000u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914018u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914028u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914030u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914038u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914054u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891405Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914068u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914074u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891407Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914090u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914098u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089140F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914104u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891410Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891411Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914124u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914134u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891413Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891414Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914154u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891415Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914188u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891419Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089141F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914208u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914228u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914230u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914238u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891424Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914258u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914268u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914270u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914284u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914290u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089142E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914308u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914310u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891431Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914324u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891432Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914338u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914344u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891434Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891437Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914444u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914470u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914498u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089144A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089144B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089144B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089144C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089144DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089144E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089144F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914504u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914514u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891451Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891453Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914560u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914574u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914588u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089145C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089146ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089146C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089146E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089146ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089146F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914708u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914718u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914724u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914738u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914740u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914754u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914760u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914770u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891477Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089147F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914810u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891481Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891482Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914834u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914838u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914850u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891487Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914884u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914888u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914894u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089148F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914908u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914914u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891491Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914920u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891492Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914938u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914940u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914968u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914974u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891497Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914988u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089149DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914A38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914AA0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914AC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914ADCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914AECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B7Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914B9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914BB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914BC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914BC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914BE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914BECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914BF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C0Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C60u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C68u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914C74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CD4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914CFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914D78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DA0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DD8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914DF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E40u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E60u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E8Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914E94u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914EF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F0Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F40u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F60u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914F98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FBCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08914FECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915014u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891501Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915024u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915048u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915050u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891506Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891507Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915080u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915088u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891509Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089150F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915104u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915114u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915124u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891512Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915134u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891515Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915164u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891516Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915190u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915198u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089151F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915200u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891520Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915218u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915220u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915224u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891522Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915238u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915244u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891524Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915258u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915264u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915270u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915278u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891527Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915284u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915290u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891529Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089152FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915304u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915310u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891531Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915328u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915330u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915334u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891533Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915348u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915354u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891535Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915368u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915374u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915380u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915388u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891538Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915394u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089153F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915404u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891540Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915418u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915424u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915430u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915438u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891543Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915444u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915450u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891545Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915464u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891546Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915474u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891547Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915484u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891548Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915494u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089154F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915504u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915510u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915518u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891551Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915524u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915530u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891553Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915544u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915550u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891555Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915568u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915570u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915574u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891557Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915588u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915594u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891559Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089155C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891560Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915614u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891565Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915668u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915670u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915678u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915680u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915688u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089156ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915708u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891570Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915730u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891573Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915748u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915758u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915768u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915798u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089157DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A84u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A8Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915A94u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915AA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915AC4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915AE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915AF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B40u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B60u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B94u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915B9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915BF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C68u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915C9Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CB4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CBCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915CFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D18u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D24u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D84u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D8Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915D98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915DB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915DBCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915DD0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915DFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915E74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915EB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915EDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915EFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F40u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F60u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915F90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FB4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FCCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FE0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08915FF0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916038u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891607Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916088u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089160E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916104u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891611Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916144u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916180u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916194u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089161BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089161FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916258u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916270u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089162B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089162F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916300u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916344u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916388u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916394u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089163E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916428u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891648Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089164D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916510u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916550u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916560u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891659Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089165A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089165ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089165B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089165BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089165C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916604u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916614u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891661Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916628u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916630u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891663Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916648u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916654u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916660u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916664u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916678u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089166DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916770u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891677Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916788u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916794u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916798u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089167ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916800u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916814u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916824u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916848u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891684Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916874u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168CCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089168F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891691Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916968u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089169D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A24u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916A84u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916AB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916AD8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916ADCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916B54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916BA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916C80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CA0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CA4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CD0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916CE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D0Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D14u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916D70u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916DDCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916DF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916E18u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F0Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916F8Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FA0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FBCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FE4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08916FFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891701Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891703Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917078u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089170A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917100u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917110u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917118u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891713Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917184u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891718Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171B8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089171F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917200u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891720Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917220u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917240u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917268u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089172F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917304u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917314u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917328u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917330u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917340u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917344u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917350u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891736Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917378u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917388u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917394u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173D8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173F4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089173FCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917404u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891740Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917414u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891741Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917428u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917430u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917438u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917440u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917448u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917450u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917458u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891745Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917470u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917480u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917488u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917490u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891749Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174D0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174DCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089174F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917508u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917510u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891751Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917524u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891752Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917534u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891753Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917544u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891754Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917554u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891755Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917564u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891756Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917574u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891757Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917584u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891758Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917598u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891759Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089175ACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917604u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917610u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917648u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917650u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917658u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917660u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917668u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917670u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917678u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176A8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176B4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176BCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176C4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089176F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917704u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891770Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917714u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891773Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917748u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891775Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891776Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917784u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917790u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177A4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177C0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089177F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917804u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891780Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891781Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917830u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917838u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917840u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917868u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178E4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089178F8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917900u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917910u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917920u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917938u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917940u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917968u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917984u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x0891798Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917994u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179A0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179B0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179C8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179D4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179E0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179E8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179ECu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x089179F0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A00u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A18u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917A78u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917ADCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917AE8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917AF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917AFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B5Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B68u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B7Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917B98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BA0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BACu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BB0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917BFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C08u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C10u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C28u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C38u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C54u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C5Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C7Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917C90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CC0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CC8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CE0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CF4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917CFCu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D04u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D18u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D20u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D48u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D5Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D64u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D6Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D74u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D7Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D88u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D90u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917D98u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DB8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DD8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917DF8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E0Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E1Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E24u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E3Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E50u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917E80u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F0Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F18u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F24u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F2Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F30u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F34u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F44u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F4Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F58u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917F5Cu, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FA0u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FA8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FB4u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FD8u, &recomp_unit_0068, "recomp_unit_0068");
    runtime.register_function(0x08917FECu, &recomp_unit_0068, "recomp_unit_0068");
}
} // namespace psprecomp
